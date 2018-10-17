/* --- Generated the 16/10/2018 at 22:20 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s oven zhao.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "zhao_types.h"

Zhao__st_1 Zhao__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Standby")==0)) {
    return Zhao__St_1_Standby;
  };
  if ((strcmp(s, "St_1_Reheat")==0)) {
    return Zhao__St_1_Reheat;
  };
  if ((strcmp(s, "St_1_Off")==0)) {
    return Zhao__St_1_Off;
  };
  if ((strcmp(s, "St_1_Maintain")==0)) {
    return Zhao__St_1_Maintain;
  };
  if ((strcmp(s, "St_1_Heat")==0)) {
    return Zhao__St_1_Heat;
  };
}

char* string_of_Zhao__st_1(Zhao__st_1 x, char* buf) {
  switch (x) {
    case Zhao__St_1_Standby:
      strcpy(buf, "St_1_Standby");
      break;
    case Zhao__St_1_Reheat:
      strcpy(buf, "St_1_Reheat");
      break;
    case Zhao__St_1_Off:
      strcpy(buf, "St_1_Off");
      break;
    case Zhao__St_1_Maintain:
      strcpy(buf, "St_1_Maintain");
      break;
    case Zhao__St_1_Heat:
      strcpy(buf, "St_1_Heat");
      break;
    default:
      break;
  };
  return buf;
}

Zhao__st Zhao__st_of_string(char* s) {
  if ((strcmp(s, "St_Standby")==0)) {
    return Zhao__St_Standby;
  };
  if ((strcmp(s, "St_Reheat")==0)) {
    return Zhao__St_Reheat;
  };
  if ((strcmp(s, "St_Off")==0)) {
    return Zhao__St_Off;
  };
  if ((strcmp(s, "St_Maintain")==0)) {
    return Zhao__St_Maintain;
  };
  if ((strcmp(s, "St_Heat")==0)) {
    return Zhao__St_Heat;
  };
}

char* string_of_Zhao__st(Zhao__st x, char* buf) {
  switch (x) {
    case Zhao__St_Standby:
      strcpy(buf, "St_Standby");
      break;
    case Zhao__St_Reheat:
      strcpy(buf, "St_Reheat");
      break;
    case Zhao__St_Off:
      strcpy(buf, "St_Off");
      break;
    case Zhao__St_Maintain:
      strcpy(buf, "St_Maintain");
      break;
    case Zhao__St_Heat:
      strcpy(buf, "St_Heat");
      break;
    default:
      break;
  };
  return buf;
}

