/* --- Generated the 20/11/2018 at 8:57 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s coresystem project.ept --- */

#ifndef PROJECT_TYPES_H
#define PROJECT_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "coresystem_controller.h"
typedef enum {
  Project__St_14_On,
  Project__St_14_Off
} Project__st_14;

Project__st_14 Project__st_14_of_string(char* s);

char* string_of_Project__st_14(Project__st_14 x, char* buf);

typedef enum {
  Project__St_13_On,
  Project__St_13_Off
} Project__st_13;

Project__st_13 Project__st_13_of_string(char* s);

char* string_of_Project__st_13(Project__st_13 x, char* buf);

typedef enum {
  Project__St_12_On,
  Project__St_12_Off
} Project__st_12;

Project__st_12 Project__st_12_of_string(char* s);

char* string_of_Project__st_12(Project__st_12 x, char* buf);

typedef enum {
  Project__St_11_On,
  Project__St_11_Off
} Project__st_11;

Project__st_11 Project__st_11_of_string(char* s);

char* string_of_Project__st_11(Project__st_11 x, char* buf);

typedef enum {
  Project__St_10_Stop,
  Project__St_10_Moving
} Project__st_10;

Project__st_10 Project__st_10_of_string(char* s);

char* string_of_Project__st_10(Project__st_10 x, char* buf);

typedef enum {
  Project__St_9_Foward,
  Project__St_9_Back
} Project__st_9;

Project__st_9 Project__st_9_of_string(char* s);

char* string_of_Project__st_9(Project__st_9 x, char* buf);

typedef enum {
  Project__St_8_Stop,
  Project__St_8_Fill
} Project__st_8;

Project__st_8 Project__st_8_of_string(char* s);

char* string_of_Project__st_8(Project__st_8 x, char* buf);

typedef enum {
  Project__St_7_Stop,
  Project__St_7_Action
} Project__st_7;

Project__st_7 Project__st_7_of_string(char* s);

char* string_of_Project__st_7(Project__st_7 x, char* buf);

typedef enum {
  Project__St_6_P4,
  Project__St_6_Out
} Project__st_6;

Project__st_6 Project__st_6_of_string(char* s);

char* string_of_Project__st_6(Project__st_6 x, char* buf);

typedef enum {
  Project__St_5_P4,
  Project__St_5_Out
} Project__st_5;

Project__st_5 Project__st_5_of_string(char* s);

char* string_of_Project__st_5(Project__st_5 x, char* buf);

typedef enum {
  Project__St_4_Stop,
  Project__St_4_Action
} Project__st_4;

Project__st_4 Project__st_4_of_string(char* s);

char* string_of_Project__st_4(Project__st_4 x, char* buf);

typedef enum {
  Project__St_3_Stop,
  Project__St_3_Fill
} Project__st_3;

Project__st_3 Project__st_3_of_string(char* s);

char* string_of_Project__st_3(Project__st_3 x, char* buf);

typedef enum {
  Project__St_2_Foward,
  Project__St_2_Back
} Project__st_2;

Project__st_2 Project__st_2_of_string(char* s);

char* string_of_Project__st_2(Project__st_2 x, char* buf);

typedef enum {
  Project__St_1_Stop,
  Project__St_1_Moving
} Project__st_1;

Project__st_1 Project__st_1_of_string(char* s);

char* string_of_Project__st_1(Project__st_1 x, char* buf);

typedef enum {
  Project__St_On,
  Project__St_Off
} Project__st;

Project__st Project__st_of_string(char* s);

char* string_of_Project__st(Project__st x, char* buf);

#endif // PROJECT_TYPES_H
