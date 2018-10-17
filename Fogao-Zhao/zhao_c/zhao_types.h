/* --- Generated the 16/10/2018 at 22:20 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s oven zhao.ept --- */

#ifndef ZHAO_TYPES_H
#define ZHAO_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Zhao__St_1_Standby,
  Zhao__St_1_Reheat,
  Zhao__St_1_Off,
  Zhao__St_1_Maintain,
  Zhao__St_1_Heat
} Zhao__st_1;

Zhao__st_1 Zhao__st_1_of_string(char* s);

char* string_of_Zhao__st_1(Zhao__st_1 x, char* buf);

typedef enum {
  Zhao__St_Standby,
  Zhao__St_Reheat,
  Zhao__St_Off,
  Zhao__St_Maintain,
  Zhao__St_Heat
} Zhao__st;

Zhao__st Zhao__st_of_string(char* s);

char* string_of_Zhao__st(Zhao__st x, char* buf);

#endif // ZHAO_TYPES_H
