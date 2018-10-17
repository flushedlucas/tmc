/* --- Generated the 16/10/2018 at 22:20 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s oven zhao.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Zhao__oven_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int finish1;
  int start1;
  int cold1;
  int temp_ok1;
  int c1;
  Zhao__oven_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Zhao__oven_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("finish1 ? ");
    scanf("%d", &finish1);;
    
    printf("start1 ? ");
    scanf("%d", &start1);;
    
    printf("cold1 ? ");
    scanf("%d", &cold1);;
    
    printf("temp_ok1 ? ");
    scanf("%d", &temp_ok1);;
    
    printf("c1 ? ");
    scanf("%d", &c1);;
    Zhao__oven_step(finish1, start1, cold1, temp_ok1, c1, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.name1);
    printf("=> ");
    printf("%d ", _res.power1);
    puts("");
    fflush(stdout);
  };
  return 0;
}

