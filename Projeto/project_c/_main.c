/* --- Generated the 20/11/2018 at 8:57 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s coresystem project.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Project__coresystem_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int p1_input;
  int p2_input;
  int p3_input;
  int p4_input;
  int buffer;
  int b_full;
  int capper_buffer;
  int b_capped;
  int out_buffer;
  int start;
  int finish;
  Project__coresystem_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Project__coresystem_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("p1_input ? ");
    scanf("%d", &p1_input);;
    
    printf("p2_input ? ");
    scanf("%d", &p2_input);;
    
    printf("p3_input ? ");
    scanf("%d", &p3_input);;
    
    printf("p4_input ? ");
    scanf("%d", &p4_input);;
    
    printf("buffer ? ");
    scanf("%d", &buffer);;
    
    printf("b_full ? ");
    scanf("%d", &b_full);;
    
    printf("capper_buffer ? ");
    scanf("%d", &capper_buffer);;
    
    printf("b_capped ? ");
    scanf("%d", &b_capped);;
    
    printf("out_buffer ? ");
    scanf("%d", &out_buffer);;
    
    printf("start ? ");
    scanf("%d", &start);;
    
    printf("finish ? ");
    scanf("%d", &finish);;
    Project__coresystem_step(p1_input, p2_input, p3_input, p4_input, buffer,
                             b_full, capper_buffer, b_capped, out_buffer,
                             start, finish, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.p1);
    printf("=> ");
    printf("%d ", _res.p2);
    printf("=> ");
    printf("%d ", _res.p3);
    printf("=> ");
    printf("%d ", _res.p4);
    printf("=> ");
    printf("%d ", _res.a_matting);
    printf("=> ");
    printf("%d ", _res.a_pneumatic);
    printf("=> ");
    printf("%d ", _res.a_bomb);
    printf("=> ");
    printf("%d ", _res.a_capper);
    printf("=> ");
    printf("%d ", _res.a_robot);
    puts("");
    fflush(stdout);
  };
  return 0;
}

