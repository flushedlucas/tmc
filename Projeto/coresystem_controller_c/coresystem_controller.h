/* --- Generated the 7/1/2019 at 8:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c coresystem_controller.ept --- */

#ifndef CORESYSTEM_CONTROLLER_H
#define CORESYSTEM_CONTROLLER_H

#include "coresystem_controller_types.h"
typedef struct Coresystem_controller__coresystem_controller_coresystem_c2_robot_out {
  int coresystem_c2_robot;
} Coresystem_controller__coresystem_controller_coresystem_c2_robot_out;

void Coresystem_controller__coresystem_controller_coresystem_c2_robot_step(
int coresystem_p1_input, int coresystem_p2_input, int coresystem_p3_input,
int coresystem_p4_input, int coresystem_buffer, int coresystem_b_full,
int coresystem_capper_buffer, int coresystem_b_capped,
int coresystem_out_buffer, int coresystem_ck_1, int coresystem_pnr_8,
int coresystem_ck_8_1, int coresystem_pnr_7, int coresystem_ck_10_1,
int coresystem_pnr_6, int coresystem_ck_12_1, int coresystem_pnr_5,
int coresystem_ck_14_1, int coresystem_pnr_4, int coresystem_ck_16_1,
int coresystem_pnr_3, int coresystem_ck_18_1, int coresystem_pnr_2,
int coresystem_ck_20_1, int coresystem_pnr_1, int coresystem_ck_22_1,
int coresystem_pnr, int p_coresystem_c2_robot, int p_coresystem_c1_robot,
int p_coresystem_c2_capper, int p_coresystem_c1_capper,
int p_coresystem_c2_pneumatic, int p_coresystem_c1_pneumatic,
int p_coresystem_c2_matting, int p_coresystem_c1_matting,
int p_coresystem_c2_bomb, int p_coresystem_c1_bomb, int coresystem_c1_robot,
int coresystem_c2_capper, int coresystem_c1_capper,
int coresystem_c2_pneumatic, int coresystem_c1_pneumatic,
int coresystem_c2_matting, int coresystem_c1_matting, int coresystem_c2_bomb,
int coresystem_c1_bomb,
Coresystem_controller__coresystem_controller_coresystem_c2_robot_out* _out);

typedef struct Coresystem_controller__coresystem_controller_coresystem_c1_robot_out {
  int coresystem_c1_robot;
} Coresystem_controller__coresystem_controller_coresystem_c1_robot_out;

void Coresystem_controller__coresystem_controller_coresystem_c1_robot_step(
int coresystem_p1_input, int coresystem_p2_input, int coresystem_p3_input,
int coresystem_p4_input, int coresystem_buffer, int coresystem_b_full,
int coresystem_capper_buffer, int coresystem_b_capped,
int coresystem_out_buffer, int coresystem_ck_1, int coresystem_pnr_8,
int coresystem_ck_8_1, int coresystem_pnr_7, int coresystem_ck_10_1,
int coresystem_pnr_6, int coresystem_ck_12_1, int coresystem_pnr_5,
int coresystem_ck_14_1, int coresystem_pnr_4, int coresystem_ck_16_1,
int coresystem_pnr_3, int coresystem_ck_18_1, int coresystem_pnr_2,
int coresystem_ck_20_1, int coresystem_pnr_1, int coresystem_ck_22_1,
int coresystem_pnr, int p_coresystem_c2_robot, int p_coresystem_c1_robot,
int p_coresystem_c2_capper, int p_coresystem_c1_capper,
int p_coresystem_c2_pneumatic, int p_coresystem_c1_pneumatic,
int p_coresystem_c2_matting, int p_coresystem_c1_matting,
int p_coresystem_c2_bomb, int p_coresystem_c1_bomb, int coresystem_c2_capper,
int coresystem_c1_capper, int coresystem_c2_pneumatic,
int coresystem_c1_pneumatic, int coresystem_c2_matting,
int coresystem_c1_matting, int coresystem_c2_bomb, int coresystem_c1_bomb,
Coresystem_controller__coresystem_controller_coresystem_c1_robot_out* _out);

typedef struct Coresystem_controller__coresystem_controller_coresystem_c2_capper_out {
  int coresystem_c2_capper;
} Coresystem_controller__coresystem_controller_coresystem_c2_capper_out;

void Coresystem_controller__coresystem_controller_coresystem_c2_capper_step(
int coresystem_p1_input, int coresystem_p2_input, int coresystem_p3_input,
int coresystem_p4_input, int coresystem_buffer, int coresystem_b_full,
int coresystem_capper_buffer, int coresystem_b_capped,
int coresystem_out_buffer, int coresystem_ck_1, int coresystem_pnr_8,
int coresystem_ck_8_1, int coresystem_pnr_7, int coresystem_ck_10_1,
int coresystem_pnr_6, int coresystem_ck_12_1, int coresystem_pnr_5,
int coresystem_ck_14_1, int coresystem_pnr_4, int coresystem_ck_16_1,
int coresystem_pnr_3, int coresystem_ck_18_1, int coresystem_pnr_2,
int coresystem_ck_20_1, int coresystem_pnr_1, int coresystem_ck_22_1,
int coresystem_pnr, int p_coresystem_c2_robot, int p_coresystem_c1_robot,
int p_coresystem_c2_capper, int p_coresystem_c1_capper,
int p_coresystem_c2_pneumatic, int p_coresystem_c1_pneumatic,
int p_coresystem_c2_matting, int p_coresystem_c1_matting,
int p_coresystem_c2_bomb, int p_coresystem_c1_bomb, int coresystem_c1_capper,
int coresystem_c2_pneumatic, int coresystem_c1_pneumatic,
int coresystem_c2_matting, int coresystem_c1_matting, int coresystem_c2_bomb,
int coresystem_c1_bomb,
Coresystem_controller__coresystem_controller_coresystem_c2_capper_out* _out);

typedef struct Coresystem_controller__coresystem_controller_coresystem_c1_capper_out {
  int coresystem_c1_capper;
} Coresystem_controller__coresystem_controller_coresystem_c1_capper_out;

void Coresystem_controller__coresystem_controller_coresystem_c1_capper_step(
int coresystem_p1_input, int coresystem_p2_input, int coresystem_p3_input,
int coresystem_p4_input, int coresystem_buffer, int coresystem_b_full,
int coresystem_capper_buffer, int coresystem_b_capped,
int coresystem_out_buffer, int coresystem_ck_1, int coresystem_pnr_8,
int coresystem_ck_8_1, int coresystem_pnr_7, int coresystem_ck_10_1,
int coresystem_pnr_6, int coresystem_ck_12_1, int coresystem_pnr_5,
int coresystem_ck_14_1, int coresystem_pnr_4, int coresystem_ck_16_1,
int coresystem_pnr_3, int coresystem_ck_18_1, int coresystem_pnr_2,
int coresystem_ck_20_1, int coresystem_pnr_1, int coresystem_ck_22_1,
int coresystem_pnr, int p_coresystem_c2_robot, int p_coresystem_c1_robot,
int p_coresystem_c2_capper, int p_coresystem_c1_capper,
int p_coresystem_c2_pneumatic, int p_coresystem_c1_pneumatic,
int p_coresystem_c2_matting, int p_coresystem_c1_matting,
int p_coresystem_c2_bomb, int p_coresystem_c1_bomb,
int coresystem_c2_pneumatic, int coresystem_c1_pneumatic,
int coresystem_c2_matting, int coresystem_c1_matting, int coresystem_c2_bomb,
int coresystem_c1_bomb,
Coresystem_controller__coresystem_controller_coresystem_c1_capper_out* _out);

typedef struct Coresystem_controller__coresystem_controller_coresystem_c2_pneumatic_out {
  int coresystem_c2_pneumatic;
} Coresystem_controller__coresystem_controller_coresystem_c2_pneumatic_out;

void Coresystem_controller__coresystem_controller_coresystem_c2_pneumatic_step(
int coresystem_p1_input, int coresystem_p2_input, int coresystem_p3_input,
int coresystem_p4_input, int coresystem_buffer, int coresystem_b_full,
int coresystem_capper_buffer, int coresystem_b_capped,
int coresystem_out_buffer, int coresystem_ck_1, int coresystem_pnr_8,
int coresystem_ck_8_1, int coresystem_pnr_7, int coresystem_ck_10_1,
int coresystem_pnr_6, int coresystem_ck_12_1, int coresystem_pnr_5,
int coresystem_ck_14_1, int coresystem_pnr_4, int coresystem_ck_16_1,
int coresystem_pnr_3, int coresystem_ck_18_1, int coresystem_pnr_2,
int coresystem_ck_20_1, int coresystem_pnr_1, int coresystem_ck_22_1,
int coresystem_pnr, int p_coresystem_c2_robot, int p_coresystem_c1_robot,
int p_coresystem_c2_capper, int p_coresystem_c1_capper,
int p_coresystem_c2_pneumatic, int p_coresystem_c1_pneumatic,
int p_coresystem_c2_matting, int p_coresystem_c1_matting,
int p_coresystem_c2_bomb, int p_coresystem_c1_bomb,
int coresystem_c1_pneumatic, int coresystem_c2_matting,
int coresystem_c1_matting, int coresystem_c2_bomb, int coresystem_c1_bomb,
Coresystem_controller__coresystem_controller_coresystem_c2_pneumatic_out* _out);

typedef struct Coresystem_controller__coresystem_controller_coresystem_c1_pneumatic_out {
  int coresystem_c1_pneumatic;
} Coresystem_controller__coresystem_controller_coresystem_c1_pneumatic_out;

void Coresystem_controller__coresystem_controller_coresystem_c1_pneumatic_step(
int coresystem_p1_input, int coresystem_p2_input, int coresystem_p3_input,
int coresystem_p4_input, int coresystem_buffer, int coresystem_b_full,
int coresystem_capper_buffer, int coresystem_b_capped,
int coresystem_out_buffer, int coresystem_ck_1, int coresystem_pnr_8,
int coresystem_ck_8_1, int coresystem_pnr_7, int coresystem_ck_10_1,
int coresystem_pnr_6, int coresystem_ck_12_1, int coresystem_pnr_5,
int coresystem_ck_14_1, int coresystem_pnr_4, int coresystem_ck_16_1,
int coresystem_pnr_3, int coresystem_ck_18_1, int coresystem_pnr_2,
int coresystem_ck_20_1, int coresystem_pnr_1, int coresystem_ck_22_1,
int coresystem_pnr, int p_coresystem_c2_robot, int p_coresystem_c1_robot,
int p_coresystem_c2_capper, int p_coresystem_c1_capper,
int p_coresystem_c2_pneumatic, int p_coresystem_c1_pneumatic,
int p_coresystem_c2_matting, int p_coresystem_c1_matting,
int p_coresystem_c2_bomb, int p_coresystem_c1_bomb,
int coresystem_c2_matting, int coresystem_c1_matting, int coresystem_c2_bomb,
int coresystem_c1_bomb,
Coresystem_controller__coresystem_controller_coresystem_c1_pneumatic_out* _out);

typedef struct Coresystem_controller__coresystem_controller_coresystem_c2_matting_out {
  int coresystem_c2_matting;
} Coresystem_controller__coresystem_controller_coresystem_c2_matting_out;

void Coresystem_controller__coresystem_controller_coresystem_c2_matting_step(
int coresystem_p1_input, int coresystem_p2_input, int coresystem_p3_input,
int coresystem_p4_input, int coresystem_buffer, int coresystem_b_full,
int coresystem_capper_buffer, int coresystem_b_capped,
int coresystem_out_buffer, int coresystem_ck_1, int coresystem_pnr_8,
int coresystem_ck_8_1, int coresystem_pnr_7, int coresystem_ck_10_1,
int coresystem_pnr_6, int coresystem_ck_12_1, int coresystem_pnr_5,
int coresystem_ck_14_1, int coresystem_pnr_4, int coresystem_ck_16_1,
int coresystem_pnr_3, int coresystem_ck_18_1, int coresystem_pnr_2,
int coresystem_ck_20_1, int coresystem_pnr_1, int coresystem_ck_22_1,
int coresystem_pnr, int p_coresystem_c2_robot, int p_coresystem_c1_robot,
int p_coresystem_c2_capper, int p_coresystem_c1_capper,
int p_coresystem_c2_pneumatic, int p_coresystem_c1_pneumatic,
int p_coresystem_c2_matting, int p_coresystem_c1_matting,
int p_coresystem_c2_bomb, int p_coresystem_c1_bomb,
int coresystem_c1_matting, int coresystem_c2_bomb, int coresystem_c1_bomb,
Coresystem_controller__coresystem_controller_coresystem_c2_matting_out* _out);

typedef struct Coresystem_controller__coresystem_controller_coresystem_c1_matting_out {
  int coresystem_c1_matting;
} Coresystem_controller__coresystem_controller_coresystem_c1_matting_out;

void Coresystem_controller__coresystem_controller_coresystem_c1_matting_step(
int coresystem_p1_input, int coresystem_p2_input, int coresystem_p3_input,
int coresystem_p4_input, int coresystem_buffer, int coresystem_b_full,
int coresystem_capper_buffer, int coresystem_b_capped,
int coresystem_out_buffer, int coresystem_ck_1, int coresystem_pnr_8,
int coresystem_ck_8_1, int coresystem_pnr_7, int coresystem_ck_10_1,
int coresystem_pnr_6, int coresystem_ck_12_1, int coresystem_pnr_5,
int coresystem_ck_14_1, int coresystem_pnr_4, int coresystem_ck_16_1,
int coresystem_pnr_3, int coresystem_ck_18_1, int coresystem_pnr_2,
int coresystem_ck_20_1, int coresystem_pnr_1, int coresystem_ck_22_1,
int coresystem_pnr, int p_coresystem_c2_robot, int p_coresystem_c1_robot,
int p_coresystem_c2_capper, int p_coresystem_c1_capper,
int p_coresystem_c2_pneumatic, int p_coresystem_c1_pneumatic,
int p_coresystem_c2_matting, int p_coresystem_c1_matting,
int p_coresystem_c2_bomb, int p_coresystem_c1_bomb, int coresystem_c2_bomb,
int coresystem_c1_bomb,
Coresystem_controller__coresystem_controller_coresystem_c1_matting_out* _out);

typedef struct Coresystem_controller__coresystem_controller_coresystem_c2_bomb_out {
  int coresystem_c2_bomb;
} Coresystem_controller__coresystem_controller_coresystem_c2_bomb_out;

void Coresystem_controller__coresystem_controller_coresystem_c2_bomb_step(
int coresystem_p1_input, int coresystem_p2_input, int coresystem_p3_input,
int coresystem_p4_input, int coresystem_buffer, int coresystem_b_full,
int coresystem_capper_buffer, int coresystem_b_capped,
int coresystem_out_buffer, int coresystem_ck_1, int coresystem_pnr_8,
int coresystem_ck_8_1, int coresystem_pnr_7, int coresystem_ck_10_1,
int coresystem_pnr_6, int coresystem_ck_12_1, int coresystem_pnr_5,
int coresystem_ck_14_1, int coresystem_pnr_4, int coresystem_ck_16_1,
int coresystem_pnr_3, int coresystem_ck_18_1, int coresystem_pnr_2,
int coresystem_ck_20_1, int coresystem_pnr_1, int coresystem_ck_22_1,
int coresystem_pnr, int p_coresystem_c2_robot, int p_coresystem_c1_robot,
int p_coresystem_c2_capper, int p_coresystem_c1_capper,
int p_coresystem_c2_pneumatic, int p_coresystem_c1_pneumatic,
int p_coresystem_c2_matting, int p_coresystem_c1_matting,
int p_coresystem_c2_bomb, int p_coresystem_c1_bomb, int coresystem_c1_bomb,
Coresystem_controller__coresystem_controller_coresystem_c2_bomb_out* _out);

typedef struct Coresystem_controller__coresystem_controller_coresystem_c1_bomb_out {
  int coresystem_c1_bomb;
} Coresystem_controller__coresystem_controller_coresystem_c1_bomb_out;

void Coresystem_controller__coresystem_controller_coresystem_c1_bomb_step(
int coresystem_p1_input, int coresystem_p2_input, int coresystem_p3_input,
int coresystem_p4_input, int coresystem_buffer, int coresystem_b_full,
int coresystem_capper_buffer, int coresystem_b_capped,
int coresystem_out_buffer, int coresystem_ck_1, int coresystem_pnr_8,
int coresystem_ck_8_1, int coresystem_pnr_7, int coresystem_ck_10_1,
int coresystem_pnr_6, int coresystem_ck_12_1, int coresystem_pnr_5,
int coresystem_ck_14_1, int coresystem_pnr_4, int coresystem_ck_16_1,
int coresystem_pnr_3, int coresystem_ck_18_1, int coresystem_pnr_2,
int coresystem_ck_20_1, int coresystem_pnr_1, int coresystem_ck_22_1,
int coresystem_pnr, int p_coresystem_c2_robot, int p_coresystem_c1_robot,
int p_coresystem_c2_capper, int p_coresystem_c1_capper,
int p_coresystem_c2_pneumatic, int p_coresystem_c1_pneumatic,
int p_coresystem_c2_matting, int p_coresystem_c1_matting,
int p_coresystem_c2_bomb, int p_coresystem_c1_bomb,
Coresystem_controller__coresystem_controller_coresystem_c1_bomb_out* _out);

typedef struct Coresystem_controller__coresystem_controller_out {
  int coresystem_c2_robot;
  int coresystem_c1_robot;
  int coresystem_c2_capper;
  int coresystem_c1_capper;
  int coresystem_c2_pneumatic;
  int coresystem_c1_pneumatic;
  int coresystem_c2_matting;
  int coresystem_c1_matting;
  int coresystem_c2_bomb;
  int coresystem_c1_bomb;
} Coresystem_controller__coresystem_controller_out;

void Coresystem_controller__coresystem_controller_step(int coresystem_p1_input,
                                                       int coresystem_p2_input,
                                                       int coresystem_p3_input,
                                                       int coresystem_p4_input,
                                                       int coresystem_buffer,
                                                       int coresystem_b_full,
                                                       int coresystem_capper_buffer,
                                                       int coresystem_b_capped,
                                                       int coresystem_out_buffer,
                                                       int coresystem_ck_1,
                                                       int coresystem_pnr_8,
                                                       int coresystem_ck_8_1,
                                                       int coresystem_pnr_7,
                                                       int coresystem_ck_10_1,
                                                       int coresystem_pnr_6,
                                                       int coresystem_ck_12_1,
                                                       int coresystem_pnr_5,
                                                       int coresystem_ck_14_1,
                                                       int coresystem_pnr_4,
                                                       int coresystem_ck_16_1,
                                                       int coresystem_pnr_3,
                                                       int coresystem_ck_18_1,
                                                       int coresystem_pnr_2,
                                                       int coresystem_ck_20_1,
                                                       int coresystem_pnr_1,
                                                       int coresystem_ck_22_1,
                                                       int coresystem_pnr,
                                                       int p_coresystem_c2_robot,
                                                       int p_coresystem_c1_robot,
                                                       int p_coresystem_c2_capper,
                                                       int p_coresystem_c1_capper,
                                                       int p_coresystem_c2_pneumatic,
                                                       int p_coresystem_c1_pneumatic,
                                                       int p_coresystem_c2_matting,
                                                       int p_coresystem_c1_matting,
                                                       int p_coresystem_c2_bomb,
                                                       int p_coresystem_c1_bomb,
                                                       Coresystem_controller__coresystem_controller_out* _out);

#endif // CORESYSTEM_CONTROLLER_H
