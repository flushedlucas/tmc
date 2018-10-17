/* --- Generated the 16/10/2018 at 22:20 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s oven zhao.ept --- */

#ifndef ZHAO_H
#define ZHAO_H

#include "zhao_types.h"
typedef struct Zhao__ovendef_mem {
  int v_55;
  int v_54;
  int v_53;
  int pnr;
} Zhao__ovendef_mem;

typedef struct Zhao__ovendef_out {
  int name;
  int power;
} Zhao__ovendef_out;

void Zhao__ovendef_reset(Zhao__ovendef_mem* self);

void Zhao__ovendef_step(int finish, int start, int cold, int temp_ok, int c,
                        Zhao__ovendef_out* _out, Zhao__ovendef_mem* self);

typedef struct Zhao__oven_mem {
  int v_108;
  int v_107;
  int v_106;
  int pnr;
} Zhao__oven_mem;

typedef struct Zhao__oven_out {
  int name1;
  int power1;
} Zhao__oven_out;

void Zhao__oven_reset(Zhao__oven_mem* self);

void Zhao__oven_step(int finish1, int start1, int cold1, int temp_ok1,
                     int c1, Zhao__oven_out* _out, Zhao__oven_mem* self);

#endif // ZHAO_H
