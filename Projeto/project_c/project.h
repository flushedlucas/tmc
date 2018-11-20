/* --- Generated the 20/11/2018 at 8:57 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s coresystem project.ept --- */

#ifndef PROJECT_H
#define PROJECT_H

#include "project_types.h"
#include "coresystem_controller.h"
typedef struct Project__sign_mem {
  int ck_1_2;
  int pnr;
} Project__sign_mem;

typedef struct Project__sign_out {
  int output;
} Project__sign_out;

void Project__sign_reset(Project__sign_mem* self);

void Project__sign_step(int input, Project__sign_out* _out,
                        Project__sign_mem* self);

typedef struct Project__matting_mem {
  int ck_1;
  int pnr;
} Project__matting_mem;

typedef struct Project__matting_out {
  int active;
} Project__matting_out;

void Project__matting_reset(Project__matting_mem* self);

void Project__matting_step(int start, int finish, int c_matting,
                           Project__matting_out* _out,
                           Project__matting_mem* self);

typedef struct Project__pneumatic_mem {
  int ck_1;
  int pnr;
} Project__pneumatic_mem;

typedef struct Project__pneumatic_out {
  int active;
} Project__pneumatic_out;

void Project__pneumatic_reset(Project__pneumatic_mem* self);

void Project__pneumatic_step(int buffer, int c1_pneumatic, int c2_pneumatic,
                             Project__pneumatic_out* _out,
                             Project__pneumatic_mem* self);

typedef struct Project__bomb_mem {
  int ck_1;
  int pnr;
} Project__bomb_mem;

typedef struct Project__bomb_out {
  int active;
} Project__bomb_out;

void Project__bomb_reset(Project__bomb_mem* self);

void Project__bomb_step(int p2, int b_full, int c_bomb,
                        Project__bomb_out* _out, Project__bomb_mem* self);

typedef struct Project__capper_mem {
  int ck_1;
  int pnr;
} Project__capper_mem;

typedef struct Project__capper_out {
  int active;
} Project__capper_out;

void Project__capper_reset(Project__capper_mem* self);

void Project__capper_step(int buffer, int p3, int b_capped, int c_capper,
                          Project__capper_out* _out,
                          Project__capper_mem* self);

typedef struct Project__robot_mem {
  int ck_1;
  int pnr;
} Project__robot_mem;

typedef struct Project__robot_out {
  int active;
} Project__robot_out;

void Project__robot_reset(Project__robot_mem* self);

void Project__robot_step(int p4, int out_buffer, int c_robot,
                         Project__robot_out* _out, Project__robot_mem* self);

typedef struct Project__coresystem_mem {
  int ck_22_1;
  int ck_20_1;
  int ck_18_1;
  int ck_16_1;
  int ck_14_1;
  int ck_12_1;
  int ck_10_1;
  int ck_8_1;
  int ck_1;
  int pnr_8;
  int pnr_7;
  int pnr_6;
  int pnr_5;
  int pnr_4;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
} Project__coresystem_mem;

typedef struct Project__coresystem_out {
  int p1;
  int p2;
  int p3;
  int p4;
  int a_matting;
  int a_pneumatic;
  int a_bomb;
  int a_capper;
  int a_robot;
} Project__coresystem_out;

void Project__coresystem_reset(Project__coresystem_mem* self);

void Project__coresystem_step(int p1_input, int p2_input, int p3_input,
                              int p4_input, int buffer, int b_full,
                              int capper_buffer, int b_capped,
                              int out_buffer, int start, int finish,
                              Project__coresystem_out* _out,
                              Project__coresystem_mem* self);

#endif // PROJECT_H
