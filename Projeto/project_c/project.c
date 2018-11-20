/* --- Generated the 20/11/2018 at 8:57 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s coresystem project.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "project.h"

void Project__sign_reset(Project__sign_mem* self) {
  self->pnr = false;
  self->ck_1_2 = true;
}

void Project__sign_step(int input, Project__sign_out* _out,
                        Project__sign_mem* self) {
  
  int nr_St_On;
  int ns_St_On_1;
  int output_St_On;
  int nr_St_Off;
  int ns_St_Off_1;
  int output_St_Off;
  int ck_1_1;
  int r_St_On;
  int s_St_On_1;
  int r_St_Off;
  int s_St_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1_2) {
    if (input) {
      r_St_Off = true;
      s_St_Off_1 = false;
    } else {
      r_St_Off = self->pnr;
      s_St_Off_1 = true;
    };
    r = r_St_Off;
    s_1 = s_St_Off_1;
  } else {
    if (input) {
      r_St_On = true;
    } else {
      r_St_On = self->pnr;
    };
    r = r_St_On;
    if (input) {
      s_St_On_1 = true;
    } else {
      s_St_On_1 = false;
    };
    s_1 = s_St_On_1;
  };
  ck_1_1 = s_1;
  if (ck_1_1) {
    output_St_Off = false;
    nr_St_Off = false;
    ns_St_Off_1 = true;
    _out->output = output_St_Off;
    nr = nr_St_Off;
    ns_1 = ns_St_Off_1;
  } else {
    output_St_On = true;
    _out->output = output_St_On;
    nr_St_On = false;
    nr = nr_St_On;
    ns_St_On_1 = false;
    ns_1 = ns_St_On_1;
  };
  self->pnr = nr;
  self->ck_1_2 = ns_1;;
}

void Project__matting_reset(Project__matting_mem* self) {
  self->pnr = false;
  self->ck_1 = false;
}

void Project__matting_step(int start, int finish, int c_matting,
                           Project__matting_out* _out,
                           Project__matting_mem* self) {
  
  int nr_St_1_Moving;
  int ns_St_1_Moving_1;
  int active_St_1_Moving;
  int nr_St_1_Stop;
  int ns_St_1_Stop_1;
  int active_St_1_Stop;
  int ck_2_1;
  int v;
  int r_St_1_Moving;
  int s_St_1_Moving_1;
  int r_St_1_Stop;
  int s_St_1_Stop_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (finish) {
      r_St_1_Moving = true;
    } else {
      r_St_1_Moving = self->pnr;
    };
    r = r_St_1_Moving;
    if (finish) {
      s_St_1_Moving_1 = false;
    } else {
      s_St_1_Moving_1 = true;
    };
    s_1 = s_St_1_Moving_1;
  } else {
    v = (start&&c_matting);
    if (v) {
      r_St_1_Stop = true;
      s_St_1_Stop_1 = true;
    } else {
      r_St_1_Stop = self->pnr;
      s_St_1_Stop_1 = false;
    };
    r = r_St_1_Stop;
    s_1 = s_St_1_Stop_1;
  };
  ck_2_1 = s_1;
  if (ck_2_1) {
    active_St_1_Moving = true;
    _out->active = active_St_1_Moving;
    nr_St_1_Moving = false;
    nr = nr_St_1_Moving;
    ns_St_1_Moving_1 = true;
    ns_1 = ns_St_1_Moving_1;
  } else {
    active_St_1_Stop = false;
    nr_St_1_Stop = false;
    ns_St_1_Stop_1 = false;
    _out->active = active_St_1_Stop;
    nr = nr_St_1_Stop;
    ns_1 = ns_St_1_Stop_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Project__pneumatic_reset(Project__pneumatic_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Project__pneumatic_step(int buffer, int c1_pneumatic, int c2_pneumatic,
                             Project__pneumatic_out* _out,
                             Project__pneumatic_mem* self) {
  
  int nr_St_2_Foward;
  int ns_St_2_Foward_1;
  int active_St_2_Foward;
  int nr_St_2_Back;
  int ns_St_2_Back_1;
  int active_St_2_Back;
  int ck_3_1;
  int v;
  int r_St_2_Foward;
  int s_St_2_Foward_1;
  int r_St_2_Back;
  int s_St_2_Back_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v = (buffer&&c1_pneumatic);
    if (v) {
      r_St_2_Back = true;
      s_St_2_Back_1 = false;
    } else {
      r_St_2_Back = self->pnr;
      s_St_2_Back_1 = true;
    };
    r = r_St_2_Back;
    s_1 = s_St_2_Back_1;
  } else {
    if (c2_pneumatic) {
      r_St_2_Foward = true;
    } else {
      r_St_2_Foward = self->pnr;
    };
    r = r_St_2_Foward;
    if (c2_pneumatic) {
      s_St_2_Foward_1 = true;
    } else {
      s_St_2_Foward_1 = false;
    };
    s_1 = s_St_2_Foward_1;
  };
  ck_3_1 = s_1;
  if (ck_3_1) {
    active_St_2_Back = false;
    nr_St_2_Back = false;
    ns_St_2_Back_1 = true;
    _out->active = active_St_2_Back;
    nr = nr_St_2_Back;
    ns_1 = ns_St_2_Back_1;
  } else {
    active_St_2_Foward = true;
    _out->active = active_St_2_Foward;
    nr_St_2_Foward = false;
    nr = nr_St_2_Foward;
    ns_St_2_Foward_1 = false;
    ns_1 = ns_St_2_Foward_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Project__bomb_reset(Project__bomb_mem* self) {
  self->pnr = false;
  self->ck_1 = false;
}

void Project__bomb_step(int p2, int b_full, int c_bomb,
                        Project__bomb_out* _out, Project__bomb_mem* self) {
  
  int nr_St_3_Fill;
  int ns_St_3_Fill_1;
  int active_St_3_Fill;
  int nr_St_3_Stop;
  int ns_St_3_Stop_1;
  int active_St_3_Stop;
  int ck_4_1;
  int v_2;
  int v_1;
  int v;
  int r_St_3_Fill;
  int s_St_3_Fill_1;
  int r_St_3_Stop;
  int s_St_3_Stop_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (b_full) {
      r_St_3_Fill = true;
    } else {
      r_St_3_Fill = self->pnr;
    };
    r = r_St_3_Fill;
    if (b_full) {
      s_St_3_Fill_1 = false;
    } else {
      s_St_3_Fill_1 = true;
    };
    s_1 = s_St_3_Fill_1;
  } else {
    v = !(b_full);
    v_1 = (p2&&v);
    v_2 = (v_1&&c_bomb);
    if (v_2) {
      r_St_3_Stop = true;
      s_St_3_Stop_1 = true;
    } else {
      r_St_3_Stop = self->pnr;
      s_St_3_Stop_1 = false;
    };
    r = r_St_3_Stop;
    s_1 = s_St_3_Stop_1;
  };
  ck_4_1 = s_1;
  if (ck_4_1) {
    active_St_3_Fill = true;
    _out->active = active_St_3_Fill;
    nr_St_3_Fill = false;
    nr = nr_St_3_Fill;
    ns_St_3_Fill_1 = true;
    ns_1 = ns_St_3_Fill_1;
  } else {
    active_St_3_Stop = false;
    nr_St_3_Stop = false;
    ns_St_3_Stop_1 = false;
    _out->active = active_St_3_Stop;
    nr = nr_St_3_Stop;
    ns_1 = ns_St_3_Stop_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Project__capper_reset(Project__capper_mem* self) {
  self->pnr = false;
  self->ck_1 = false;
}

void Project__capper_step(int buffer, int p3, int b_capped, int c_capper,
                          Project__capper_out* _out,
                          Project__capper_mem* self) {
  
  int nr_St_4_Action;
  int ns_St_4_Action_1;
  int active_St_4_Action;
  int nr_St_4_Stop;
  int ns_St_4_Stop_1;
  int active_St_4_Stop;
  int ck_5_1;
  int v_5;
  int v_4;
  int v_3;
  int v;
  int r_St_4_Action;
  int s_St_4_Action_1;
  int r_St_4_Stop;
  int s_St_4_Stop_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (b_capped) {
      r_St_4_Action = true;
    } else {
      r_St_4_Action = self->pnr;
    };
    r = r_St_4_Action;
    if (b_capped) {
      s_St_4_Action_1 = false;
    } else {
      s_St_4_Action_1 = true;
    };
    s_1 = s_St_4_Action_1;
  } else {
    v_3 = !(b_capped);
    v = (buffer&&p3);
    v_4 = (v&&v_3);
    v_5 = (v_4&&c_capper);
    if (v_5) {
      r_St_4_Stop = true;
      s_St_4_Stop_1 = true;
    } else {
      r_St_4_Stop = self->pnr;
      s_St_4_Stop_1 = false;
    };
    r = r_St_4_Stop;
    s_1 = s_St_4_Stop_1;
  };
  ck_5_1 = s_1;
  if (ck_5_1) {
    active_St_4_Action = true;
    _out->active = active_St_4_Action;
    nr_St_4_Action = false;
    nr = nr_St_4_Action;
    ns_St_4_Action_1 = true;
    ns_1 = ns_St_4_Action_1;
  } else {
    active_St_4_Stop = false;
    nr_St_4_Stop = false;
    ns_St_4_Stop_1 = false;
    _out->active = active_St_4_Stop;
    nr = nr_St_4_Stop;
    ns_1 = ns_St_4_Stop_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Project__robot_reset(Project__robot_mem* self) {
  self->pnr = false;
  self->ck_1 = false;
}

void Project__robot_step(int p4, int out_buffer, int c_robot,
                         Project__robot_out* _out, Project__robot_mem* self) {
  
  int nr_St_5_Out;
  int ns_St_5_Out_1;
  int active_St_5_Out;
  int nr_St_5_P4;
  int ns_St_5_P4_1;
  int active_St_5_P4;
  int ck_6_1;
  int v;
  int r_St_5_Out;
  int s_St_5_Out_1;
  int r_St_5_P4;
  int s_St_5_P4_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (out_buffer) {
      r_St_5_Out = true;
    } else {
      r_St_5_Out = self->pnr;
    };
    r = r_St_5_Out;
    if (out_buffer) {
      s_St_5_Out_1 = false;
    } else {
      s_St_5_Out_1 = true;
    };
    s_1 = s_St_5_Out_1;
  } else {
    v = (p4&&c_robot);
    if (v) {
      r_St_5_P4 = true;
      s_St_5_P4_1 = true;
    } else {
      r_St_5_P4 = self->pnr;
      s_St_5_P4_1 = false;
    };
    r = r_St_5_P4;
    s_1 = s_St_5_P4_1;
  };
  ck_6_1 = s_1;
  if (ck_6_1) {
    active_St_5_Out = true;
    _out->active = active_St_5_Out;
    nr_St_5_Out = false;
    nr = nr_St_5_Out;
    ns_St_5_Out_1 = true;
    ns_1 = ns_St_5_Out_1;
  } else {
    active_St_5_P4 = false;
    nr_St_5_P4 = false;
    ns_St_5_P4_1 = false;
    _out->active = active_St_5_P4;
    nr = nr_St_5_P4;
    ns_1 = ns_St_5_P4_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Project__coresystem_reset(Project__coresystem_mem* self) {
  self->pnr = false;
  self->ck_22_1 = false;
  self->pnr_1 = false;
  self->ck_20_1 = false;
  self->pnr_2 = false;
  self->ck_18_1 = false;
  self->pnr_3 = false;
  self->ck_16_1 = true;
  self->pnr_4 = false;
  self->ck_14_1 = false;
  self->pnr_5 = false;
  self->ck_12_1 = true;
  self->pnr_6 = false;
  self->ck_10_1 = true;
  self->pnr_7 = false;
  self->ck_8_1 = true;
  self->pnr_8 = false;
  self->ck_1 = true;
}

void Project__coresystem_step(int p1_input, int p2_input, int p3_input,
                              int p4_input, int buffer, int b_full,
                              int capper_buffer, int b_capped,
                              int out_buffer, int start, int finish,
                              Project__coresystem_out* _out,
                              Project__coresystem_mem* self) {
  Coresystem_controller__coresystem_controller_out Coresystem_controller__coresystem_controller_out_st;
  
  int nr_St_6_Out;
  int ns_St_6_Out_1;
  int active_4_St_6_Out;
  int nr_St_6_P4;
  int ns_St_6_P4_1;
  int active_4_St_6_P4;
  int ck_23_1;
  int v_39;
  int r_St_6_Out;
  int s_St_6_Out_1;
  int r_St_6_P4;
  int s_St_6_P4_1;
  int nr_1_St_7_Action;
  int ns_1_St_7_Action_1;
  int active_3_St_7_Action;
  int nr_1_St_7_Stop;
  int ns_1_St_7_Stop_1;
  int active_3_St_7_Stop;
  int ck_21_1;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int r_1_St_7_Action;
  int s_1_St_7_Action_1;
  int r_1_St_7_Stop;
  int s_1_St_7_Stop_1;
  int nr_2_St_8_Fill;
  int ns_2_St_8_Fill_1;
  int active_2_St_8_Fill;
  int nr_2_St_8_Stop;
  int ns_2_St_8_Stop_1;
  int active_2_St_8_Stop;
  int ck_19_1;
  int v_34;
  int v_33;
  int v_32;
  int r_2_St_8_Fill;
  int s_2_St_8_Fill_1;
  int r_2_St_8_Stop;
  int s_2_St_8_Stop_1;
  int nr_3_St_9_Foward;
  int ns_3_St_9_Foward_1;
  int active_1_St_9_Foward;
  int nr_3_St_9_Back;
  int ns_3_St_9_Back_1;
  int active_1_St_9_Back;
  int ck_17_1;
  int v_31;
  int r_3_St_9_Foward;
  int s_3_St_9_Foward_1;
  int r_3_St_9_Back;
  int s_3_St_9_Back_1;
  int nr_4_St_10_Moving;
  int ns_4_St_10_Moving_1;
  int active_St_10_Moving;
  int nr_4_St_10_Stop;
  int ns_4_St_10_Stop_1;
  int active_St_10_Stop;
  int ck_15_1;
  int v_30;
  int r_4_St_10_Moving;
  int s_4_St_10_Moving_1;
  int r_4_St_10_Stop;
  int s_4_St_10_Stop_1;
  int nr_5_St_11_On;
  int ns_5_St_11_On_1;
  int output_3_St_11_On;
  int nr_5_St_11_Off;
  int ns_5_St_11_Off_1;
  int output_3_St_11_Off;
  int ck_13_1;
  int r_5_St_11_On;
  int s_5_St_11_On_1;
  int r_5_St_11_Off;
  int s_5_St_11_Off_1;
  int nr_6_St_12_On;
  int ns_6_St_12_On_1;
  int output_2_St_12_On;
  int nr_6_St_12_Off;
  int ns_6_St_12_Off_1;
  int output_2_St_12_Off;
  int ck_11_1;
  int r_6_St_12_On;
  int s_6_St_12_On_1;
  int r_6_St_12_Off;
  int s_6_St_12_Off_1;
  int nr_7_St_13_On;
  int ns_7_St_13_On_1;
  int output_1_St_13_On;
  int nr_7_St_13_Off;
  int ns_7_St_13_Off_1;
  int output_1_St_13_Off;
  int ck_9_1;
  int r_7_St_13_On;
  int s_7_St_13_On_1;
  int r_7_St_13_Off;
  int s_7_St_13_Off_1;
  int nr_8_St_14_On;
  int ns_8_St_14_On_1;
  int output_St_14_On;
  int nr_8_St_14_Off;
  int ns_8_St_14_Off_1;
  int output_St_14_Off;
  int ck_7_1;
  int r_8_St_14_On;
  int s_8_St_14_On_1;
  int r_8_St_14_Off;
  int s_8_St_14_Off_1;
  int s_8_1;
  int ns_8_1;
  int r_8;
  int nr_8;
  int s_7_1;
  int ns_7_1;
  int r_7;
  int nr_7;
  int s_6_1;
  int ns_6_1;
  int r_6;
  int nr_6;
  int s_5_1;
  int ns_5_1;
  int r_5;
  int nr_5;
  int s_4_1;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_3_1;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_2_1;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_1_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_1_2;
  int ns_1_2;
  int r;
  int nr;
  int p4_1;
  int out_buffer_1;
  int c_robot_1;
  int active_4;
  int buffer_2;
  int p3_1;
  int b_capped_1;
  int c_capper_1;
  int active_3;
  int p2_1;
  int b_full_1;
  int c_bomb_1;
  int active_2;
  int buffer_1;
  int c1_pneumatic_1;
  int c2_pneumatic_1;
  int active_1;
  int start_1;
  int finish_1;
  int c_matting_1;
  int active;
  int input_3;
  int output_3;
  int input_2;
  int output_2;
  int input_1;
  int output_1;
  int input;
  int output;
  int rule6;
  int rule5;
  int rule4;
  int rule3;
  int rule2;
  int rule1;
  int v;
  int v_6;
  int v_7;
  int v_8;
  int v_9;
  int v_10;
  int v_11;
  int v_12;
  int v_13;
  int v_14;
  int v_15;
  int v_16;
  int v_17;
  int v_18;
  int v_19;
  int v_20;
  int v_21;
  int v_22;
  int v_23;
  int v_24;
  int v_25;
  int v_26;
  int v_27;
  int v_28;
  int v_29;
  int c_matting;
  int c_robot;
  int c_capper;
  int c_bomb;
  int c2_pneumatic;
  int c1_pneumatic;
  v_9 = !(b_capped);
  v_11 = !(b_full);
  out_buffer_1 = out_buffer;
  buffer_2 = capper_buffer;
  b_capped_1 = b_capped;
  b_full_1 = b_full;
  buffer_1 = buffer;
  start_1 = start;
  finish_1 = finish;
  input_3 = p4_input;
  input_2 = p3_input;
  input_1 = p2_input;
  input = p1_input;
  Coresystem_controller__coresystem_controller_step(p1_input, p2_input,
                                                    p3_input, p4_input,
                                                    buffer, b_full,
                                                    capper_buffer, b_capped,
                                                    out_buffer, start,
                                                    finish, self->ck_1,
                                                    self->pnr_8,
                                                    self->ck_8_1,
                                                    self->pnr_7,
                                                    self->ck_10_1,
                                                    self->pnr_6,
                                                    self->ck_12_1,
                                                    self->pnr_5,
                                                    self->ck_14_1,
                                                    self->pnr_4,
                                                    self->ck_16_1,
                                                    self->pnr_3,
                                                    self->ck_18_1,
                                                    self->pnr_2,
                                                    self->ck_20_1,
                                                    self->pnr_1,
                                                    self->ck_22_1, self->pnr,
                                                    true, true, true, true,
                                                    true, true,
                                                    &Coresystem_controller__coresystem_controller_out_st);
  c_matting = Coresystem_controller__coresystem_controller_out_st.coresystem_c_matting;
  c_robot = Coresystem_controller__coresystem_controller_out_st.coresystem_c_robot;
  c_capper = Coresystem_controller__coresystem_controller_out_st.coresystem_c_capper;
  c_bomb = Coresystem_controller__coresystem_controller_out_st.coresystem_c_bomb;
  c2_pneumatic = Coresystem_controller__coresystem_controller_out_st.coresystem_c2_pneumatic;
  c1_pneumatic = Coresystem_controller__coresystem_controller_out_st.coresystem_c1_pneumatic;
  c_robot_1 = c_robot;
  c_capper_1 = c_capper;
  c_bomb_1 = c_bomb;
  c1_pneumatic_1 = c1_pneumatic;
  c2_pneumatic_1 = c2_pneumatic;
  c_matting_1 = c_matting;
  if (self->ck_22_1) {
    if (out_buffer_1) {
      r_St_6_Out = true;
      s_St_6_Out_1 = false;
    } else {
      r_St_6_Out = self->pnr;
      s_St_6_Out_1 = true;
    };
  };
  if (self->ck_20_1) {
    if (b_capped_1) {
      r_1_St_7_Action = true;
      s_1_St_7_Action_1 = false;
    } else {
      r_1_St_7_Action = self->pnr_1;
      s_1_St_7_Action_1 = true;
    };
  } else {
    v_36 = !(b_capped_1);
  };
  if (self->ck_18_1) {
    if (b_full_1) {
      r_2_St_8_Fill = true;
      s_2_St_8_Fill_1 = false;
    } else {
      r_2_St_8_Fill = self->pnr_2;
      s_2_St_8_Fill_1 = true;
    };
  } else {
    v_32 = !(b_full_1);
  };
  if (self->ck_16_1) {
    v_31 = (buffer_1&&c1_pneumatic_1);
    if (v_31) {
      r_3_St_9_Back = true;
      s_3_St_9_Back_1 = false;
    } else {
      r_3_St_9_Back = self->pnr_3;
      s_3_St_9_Back_1 = true;
    };
    r_3 = r_3_St_9_Back;
    s_3_1 = s_3_St_9_Back_1;
  } else {
    if (c2_pneumatic_1) {
      r_3_St_9_Foward = true;
    } else {
      r_3_St_9_Foward = self->pnr_3;
    };
    r_3 = r_3_St_9_Foward;
    if (c2_pneumatic_1) {
      s_3_St_9_Foward_1 = true;
    } else {
      s_3_St_9_Foward_1 = false;
    };
    s_3_1 = s_3_St_9_Foward_1;
  };
  ck_17_1 = s_3_1;
  if (ck_17_1) {
    active_1_St_9_Back = false;
    nr_3_St_9_Back = false;
    ns_3_St_9_Back_1 = true;
    active_1 = active_1_St_9_Back;
    nr_3 = nr_3_St_9_Back;
    ns_3_1 = ns_3_St_9_Back_1;
  } else {
    active_1_St_9_Foward = true;
    active_1 = active_1_St_9_Foward;
    nr_3_St_9_Foward = false;
    nr_3 = nr_3_St_9_Foward;
    ns_3_St_9_Foward_1 = false;
    ns_3_1 = ns_3_St_9_Foward_1;
  };
  _out->a_pneumatic = active_1;
  if (self->ck_14_1) {
    if (finish_1) {
      r_4_St_10_Moving = true;
    } else {
      r_4_St_10_Moving = self->pnr_4;
    };
    r_4 = r_4_St_10_Moving;
    if (finish_1) {
      s_4_St_10_Moving_1 = false;
    } else {
      s_4_St_10_Moving_1 = true;
    };
    s_4_1 = s_4_St_10_Moving_1;
  } else {
    v_30 = (start_1&&c_matting_1);
    if (v_30) {
      r_4_St_10_Stop = true;
      s_4_St_10_Stop_1 = true;
    } else {
      r_4_St_10_Stop = self->pnr_4;
      s_4_St_10_Stop_1 = false;
    };
    r_4 = r_4_St_10_Stop;
    s_4_1 = s_4_St_10_Stop_1;
  };
  ck_15_1 = s_4_1;
  if (ck_15_1) {
    active_St_10_Moving = true;
    active = active_St_10_Moving;
    nr_4_St_10_Moving = false;
    nr_4 = nr_4_St_10_Moving;
    ns_4_St_10_Moving_1 = true;
    ns_4_1 = ns_4_St_10_Moving_1;
  } else {
    active_St_10_Stop = false;
    nr_4_St_10_Stop = false;
    ns_4_St_10_Stop_1 = false;
    active = active_St_10_Stop;
    nr_4 = nr_4_St_10_Stop;
    ns_4_1 = ns_4_St_10_Stop_1;
  };
  _out->a_matting = active;
  v = !(_out->a_matting);
  if (self->ck_12_1) {
    if (input_3) {
      r_5_St_11_Off = true;
      s_5_St_11_Off_1 = false;
    } else {
      r_5_St_11_Off = self->pnr_5;
      s_5_St_11_Off_1 = true;
    };
    r_5 = r_5_St_11_Off;
    s_5_1 = s_5_St_11_Off_1;
  } else {
    if (input_3) {
      r_5_St_11_On = true;
    } else {
      r_5_St_11_On = self->pnr_5;
    };
    r_5 = r_5_St_11_On;
    if (input_3) {
      s_5_St_11_On_1 = true;
    } else {
      s_5_St_11_On_1 = false;
    };
    s_5_1 = s_5_St_11_On_1;
  };
  ck_13_1 = s_5_1;
  if (ck_13_1) {
    output_3_St_11_Off = false;
    nr_5_St_11_Off = false;
    ns_5_St_11_Off_1 = true;
    output_3 = output_3_St_11_Off;
    nr_5 = nr_5_St_11_Off;
    ns_5_1 = ns_5_St_11_Off_1;
  } else {
    output_3_St_11_On = true;
    output_3 = output_3_St_11_On;
    nr_5_St_11_On = false;
    nr_5 = nr_5_St_11_On;
    ns_5_St_11_On_1 = false;
    ns_5_1 = ns_5_St_11_On_1;
  };
  _out->p4 = output_3;
  p4_1 = _out->p4;
  if (self->ck_22_1) {
    r = r_St_6_Out;
    s_1_2 = s_St_6_Out_1;
  } else {
    v_39 = (p4_1&&c_robot_1);
    if (v_39) {
      r_St_6_P4 = true;
    } else {
      r_St_6_P4 = self->pnr;
    };
    r = r_St_6_P4;
    if (v_39) {
      s_St_6_P4_1 = true;
    } else {
      s_St_6_P4_1 = false;
    };
    s_1_2 = s_St_6_P4_1;
  };
  ck_23_1 = s_1_2;
  if (ck_23_1) {
    active_4_St_6_Out = true;
    active_4 = active_4_St_6_Out;
    nr_St_6_Out = false;
    nr = nr_St_6_Out;
    ns_St_6_Out_1 = true;
    ns_1_2 = ns_St_6_Out_1;
  } else {
    active_4_St_6_P4 = false;
    nr_St_6_P4 = false;
    ns_St_6_P4_1 = false;
    active_4 = active_4_St_6_P4;
    nr = nr_St_6_P4;
    ns_1_2 = ns_St_6_P4_1;
  };
  _out->a_robot = active_4;
  v_16 = (_out->a_robot&&_out->p4);
  if (self->ck_10_1) {
    if (input_2) {
      r_6_St_12_Off = true;
      s_6_St_12_Off_1 = false;
    } else {
      r_6_St_12_Off = self->pnr_6;
      s_6_St_12_Off_1 = true;
    };
    r_6 = r_6_St_12_Off;
    s_6_1 = s_6_St_12_Off_1;
  } else {
    if (input_2) {
      r_6_St_12_On = true;
    } else {
      r_6_St_12_On = self->pnr_6;
    };
    r_6 = r_6_St_12_On;
    if (input_2) {
      s_6_St_12_On_1 = true;
    } else {
      s_6_St_12_On_1 = false;
    };
    s_6_1 = s_6_St_12_On_1;
  };
  ck_11_1 = s_6_1;
  if (ck_11_1) {
    output_2_St_12_Off = false;
    nr_6_St_12_Off = false;
    ns_6_St_12_Off_1 = true;
    output_2 = output_2_St_12_Off;
    nr_6 = nr_6_St_12_Off;
    ns_6_1 = ns_6_St_12_Off_1;
  } else {
    output_2_St_12_On = true;
    output_2 = output_2_St_12_On;
    nr_6_St_12_On = false;
    nr_6 = nr_6_St_12_On;
    ns_6_St_12_On_1 = false;
    ns_6_1 = ns_6_St_12_On_1;
  };
  _out->p3 = output_2;
  p3_1 = _out->p3;
  if (self->ck_20_1) {
    r_1 = r_1_St_7_Action;
    s_1_1 = s_1_St_7_Action_1;
  } else {
    v_35 = (buffer_2&&p3_1);
    v_37 = (v_35&&v_36);
    v_38 = (v_37&&c_capper_1);
    if (v_38) {
      r_1_St_7_Stop = true;
    } else {
      r_1_St_7_Stop = self->pnr_1;
    };
    r_1 = r_1_St_7_Stop;
    if (v_38) {
      s_1_St_7_Stop_1 = true;
    } else {
      s_1_St_7_Stop_1 = false;
    };
    s_1_1 = s_1_St_7_Stop_1;
  };
  ck_21_1 = s_1_1;
  if (ck_21_1) {
    active_3_St_7_Action = true;
    active_3 = active_3_St_7_Action;
    nr_1_St_7_Action = false;
    nr_1 = nr_1_St_7_Action;
    ns_1_St_7_Action_1 = true;
    ns_1_1 = ns_1_St_7_Action_1;
  } else {
    active_3_St_7_Stop = false;
    nr_1_St_7_Stop = false;
    ns_1_St_7_Stop_1 = false;
    active_3 = active_3_St_7_Stop;
    nr_1 = nr_1_St_7_Stop;
    ns_1_1 = ns_1_St_7_Stop_1;
  };
  _out->a_capper = active_3;
  v_10 = (_out->a_capper&&v_9);
  v_14 = (_out->a_capper&&_out->p3);
  if (self->ck_8_1) {
    if (input_1) {
      r_7_St_13_Off = true;
      s_7_St_13_Off_1 = false;
    } else {
      r_7_St_13_Off = self->pnr_7;
      s_7_St_13_Off_1 = true;
    };
    r_7 = r_7_St_13_Off;
    s_7_1 = s_7_St_13_Off_1;
  } else {
    if (input_1) {
      r_7_St_13_On = true;
    } else {
      r_7_St_13_On = self->pnr_7;
    };
    r_7 = r_7_St_13_On;
    if (input_1) {
      s_7_St_13_On_1 = true;
    } else {
      s_7_St_13_On_1 = false;
    };
    s_7_1 = s_7_St_13_On_1;
  };
  ck_9_1 = s_7_1;
  if (ck_9_1) {
    output_1_St_13_Off = false;
    nr_7_St_13_Off = false;
    ns_7_St_13_Off_1 = true;
    output_1 = output_1_St_13_Off;
    nr_7 = nr_7_St_13_Off;
    ns_7_1 = ns_7_St_13_Off_1;
  } else {
    output_1_St_13_On = true;
    output_1 = output_1_St_13_On;
    nr_7_St_13_On = false;
    nr_7 = nr_7_St_13_On;
    ns_7_St_13_On_1 = false;
    ns_7_1 = ns_7_St_13_On_1;
  };
  _out->p2 = output_1;
  p2_1 = _out->p2;
  if (self->ck_18_1) {
    r_2 = r_2_St_8_Fill;
    s_2_1 = s_2_St_8_Fill_1;
  } else {
    v_33 = (p2_1&&v_32);
    v_34 = (v_33&&c_bomb_1);
    if (v_34) {
      r_2_St_8_Stop = true;
    } else {
      r_2_St_8_Stop = self->pnr_2;
    };
    r_2 = r_2_St_8_Stop;
    if (v_34) {
      s_2_St_8_Stop_1 = true;
    } else {
      s_2_St_8_Stop_1 = false;
    };
    s_2_1 = s_2_St_8_Stop_1;
  };
  ck_19_1 = s_2_1;
  if (ck_19_1) {
    active_2_St_8_Fill = true;
    active_2 = active_2_St_8_Fill;
    nr_2_St_8_Fill = false;
    nr_2 = nr_2_St_8_Fill;
    ns_2_St_8_Fill_1 = true;
    ns_2_1 = ns_2_St_8_Fill_1;
  } else {
    active_2_St_8_Stop = false;
    nr_2_St_8_Stop = false;
    ns_2_St_8_Stop_1 = false;
    active_2 = active_2_St_8_Stop;
    nr_2 = nr_2_St_8_Stop;
    ns_2_1 = ns_2_St_8_Stop_1;
  };
  _out->a_bomb = active_2;
  v_12 = (_out->a_bomb&&v_11);
  rule5 = (v_10&&v_12);
  v_13 = (_out->a_bomb&&_out->p2);
  v_15 = (v_13&&v_14);
  rule4 = (v_15&&v_16);
  v_21 = (_out->a_pneumatic||_out->a_bomb);
  v_22 = (v_21||_out->a_capper);
  v_23 = (v_22||_out->a_robot);
  v_24 = !(v_23);
  rule1 = (_out->a_matting&&v_24);
  if (self->ck_1) {
    if (input) {
      r_8_St_14_Off = true;
      s_8_St_14_Off_1 = false;
    } else {
      r_8_St_14_Off = self->pnr_8;
      s_8_St_14_Off_1 = true;
    };
    r_8 = r_8_St_14_Off;
    s_8_1 = s_8_St_14_Off_1;
  } else {
    if (input) {
      r_8_St_14_On = true;
    } else {
      r_8_St_14_On = self->pnr_8;
    };
    r_8 = r_8_St_14_On;
    if (input) {
      s_8_St_14_On_1 = true;
    } else {
      s_8_St_14_On_1 = false;
    };
    s_8_1 = s_8_St_14_On_1;
  };
  ck_7_1 = s_8_1;
  if (ck_7_1) {
    output_St_14_Off = false;
    nr_8_St_14_Off = false;
    ns_8_St_14_Off_1 = true;
    output = output_St_14_Off;
    nr_8 = nr_8_St_14_Off;
    ns_8_1 = ns_8_St_14_Off_1;
  } else {
    output_St_14_On = true;
    output = output_St_14_On;
    nr_8_St_14_On = false;
    nr_8 = nr_8_St_14_On;
    ns_8_St_14_On_1 = false;
    ns_8_1 = ns_8_St_14_On_1;
  };
  _out->p1 = output;
  v_6 = (_out->p1||_out->p2);
  v_7 = (v_6||_out->p3);
  v_8 = (v_7||_out->p4);
  rule6 = (v&&v_8);
  v_17 = (_out->p1||_out->p2);
  v_18 = (v_17||_out->p3);
  v_19 = (v_18||_out->p4);
  rule3 = (_out->a_matting&&v_19);
  v_20 = !(_out->p1);
  rule2 = (_out->a_pneumatic&&v_20);
  v_25 = (rule1&&rule2);
  v_26 = (v_25&&rule3);
  v_27 = (v_26&&rule4);
  v_28 = (v_27&&rule5);
  v_29 = (v_28&&rule6);
  self->pnr = nr;
  self->ck_22_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_20_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_18_1 = ns_2_1;
  self->pnr_3 = nr_3;
  self->ck_16_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_14_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->ck_12_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->ck_10_1 = ns_6_1;
  self->pnr_7 = nr_7;
  self->ck_8_1 = ns_7_1;
  self->pnr_8 = nr_8;
  self->ck_1 = ns_8_1;;
}

