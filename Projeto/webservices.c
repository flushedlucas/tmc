

#include <sys/types.h>
#ifndef _WIN32
#include <sys/select.h>
#include <sys/socket.h>
#else
#include <winsock2.h>
#endif
#include <string.h>
#include <microhttpd.h>
#include <stdio.h>
#include <stdlib.h>
#include "_main.h"

#define PORT 8082
#define n 57

Project__coresystem_mem mem;
int glob_cnt=0;


struct item
{
    const char *key;
    const char *value;
};


struct item dict[n];

int save_items (void *cls, enum MHD_ValueKind kind, 
                   const char *key, const char *value)
{
  dict[glob_cnt].key = key; 
  dict[glob_cnt].value = value;
  glob_cnt += 1;
  return MHD_YES;
}

static int
answer_to_connection (void *cls, struct MHD_Connection *connection,
                      const char *url, const char *method,
                      const char *version, const char *upload_data,
                      size_t *upload_data_size, void **con_cls)
{
  char *json = malloc( 10000 );
  struct MHD_Response *response;
  int ret;
  MHD_get_connection_values(connection, MHD_GET_ARGUMENT_KIND, &save_items, NULL);
  printf("Counter:%d", glob_cnt);
  
  glob_cnt = 0; int step_c;int step_max;int p1_input;int p2_input;int p3_input;int p4_input;int buffer;int b_full;int capper_buffer;int b_capped;int out_buffer;Project__coresystem_out _res;
  int i;
  for(i= 0; i < n; i++){
if (strcmp(dict[i].key, "p1_input") == 0){ p1_input= atoi(dict[i].value);} else if (strcmp(dict[i].key, "p2_input") == 0){ p2_input= atoi(dict[i].value);} else if (strcmp(dict[i].key, "p3_input") == 0){ p3_input= atoi(dict[i].value);} else if (strcmp(dict[i].key, "p4_input") == 0){ p4_input= atoi(dict[i].value);} else if (strcmp(dict[i].key, "buffer") == 0){ buffer= atoi(dict[i].value);} else if (strcmp(dict[i].key, "b_full") == 0){ b_full= atoi(dict[i].value);} else if (strcmp(dict[i].key, "capper_buffer") == 0){ capper_buffer= atoi(dict[i].value);} else if (strcmp(dict[i].key, "b_capped") == 0){ b_capped= atoi(dict[i].value);} else if (strcmp(dict[i].key, "out_buffer") == 0){ out_buffer= atoi(dict[i].value);} else 
    {
      printf("Not implemented %s", dict[i].key);
    }
  }
  
  for(i= 0; i < n; i++)
  {
    printf("%s, %s",dict[i].key, dict[i].value);
  }  Project__coresystem_step(p1_input,p2_input,p3_input,p4_input,buffer,b_full,capper_buffer,b_capped,out_buffer,
  &_res, &mem);

  char aux[1];
  strcat(json, "{");strcat(json, ", 'p1':");sprintf(aux, "%d", _res.p1);strcat(json, aux);strcat(json, ", ' p2':");sprintf(aux, "%d", _res. p2);strcat(json, aux);strcat(json, ", ' p3':");sprintf(aux, "%d", _res. p3);strcat(json, aux);strcat(json, ", ' p4':");sprintf(aux, "%d", _res. p4);strcat(json, aux);strcat(json, ", ' a_matting':");sprintf(aux, "%d", _res. a_matting);strcat(json, aux);strcat(json, ", ' a_pneumatic':");sprintf(aux, "%d", _res. a_pneumatic);strcat(json, aux);strcat(json, ", ' a_bomb':");sprintf(aux, "%d", _res. a_bomb);strcat(json, aux);strcat(json, ", ' a_capper':");sprintf(aux, "%d", _res. a_capper);strcat(json, aux);strcat(json, ", ' a_robot':");sprintf(aux, "%d", _res. a_robot);strcat(json, aux);strcat(json, "}");
  response =
  MHD_create_response_from_buffer (strlen (json), (void *) json, 
             MHD_RESPMEM_PERSISTENT);
  ret = MHD_queue_response (connection, MHD_HTTP_OK, response);
  MHD_destroy_response (response);

  return ret;
}

int main(int argc, char** argv) {
  
  struct MHD_Daemon *daemon;
  Project__coresystem_reset(&mem);
  int i;
  for(i= 0; i < n; i++)
  {
    dict[i].key = "";
    dict[i].value = "";
  }

  daemon = MHD_start_daemon (MHD_USE_SELECT_INTERNALLY, PORT, NULL, NULL,
                             &answer_to_connection, NULL, MHD_OPTION_END);
  if (NULL == daemon)
    return 1;

  (void) getchar ();

  MHD_stop_daemon (daemon);
  return 0;
} 