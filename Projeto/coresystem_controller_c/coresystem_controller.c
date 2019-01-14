/* --- Generated the 7/1/2019 at 8:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c coresystem_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "coresystem_controller.h"

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
  int p_coresystem_c2_bomb, int p_coresystem_c1_bomb,
  int coresystem_c1_robot, int coresystem_c2_capper,
  int coresystem_c1_capper, int coresystem_c2_pneumatic,
  int coresystem_c1_pneumatic, int coresystem_c2_matting,
  int coresystem_c1_matting, int coresystem_c2_bomb, int coresystem_c1_bomb,
  Coresystem_controller__coresystem_controller_coresystem_c2_robot_out* _out) {
  
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  sub_23 = false;
  if (coresystem_p1_input) {
    sub_22 = false;
    sub_24 = sub_23;
  } else {
    sub_22 = sub_23;
    sub_24 = false;
  };
  if (coresystem_ck_1) {
    sub_21 = sub_24;
  } else {
    sub_21 = sub_22;
  };
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (coresystem_ck_1) {
    sub_27 = sub_22;
  } else {
    sub_27 = sub_24;
  };
  sub_26 = sub_27;
  sub_25 = sub_26;
  if (coresystem_c2_pneumatic) {
    sub_18 = sub_19;
  } else {
    sub_18 = sub_25;
  };
  if (coresystem_buffer) {
    v_31 = sub_27;
  } else {
    v_31 = sub_21;
  };
  if (coresystem_c1_pneumatic) {
    sub_28 = v_31;
  } else {
    sub_28 = sub_20;
  };
  if (coresystem_ck_18_1) {
    v_32 = sub_28;
  } else {
    v_32 = sub_18;
  };
  sub_32 = sub_23;
  sub_31 = sub_32;
  if (coresystem_c2_pneumatic) {
    sub_30 = sub_31;
  } else {
    sub_30 = sub_25;
  };
  if (coresystem_buffer) {
    v_30 = sub_27;
  } else {
    v_30 = sub_32;
  };
  if (coresystem_c1_pneumatic) {
    sub_33 = v_30;
  } else {
    sub_33 = sub_31;
  };
  if (coresystem_ck_18_1) {
    sub_29 = sub_33;
  } else {
    sub_29 = sub_30;
  };
  if (coresystem_c1_matting) {
    sub_17 = v_32;
  } else {
    sub_17 = sub_29;
  };
  sub_16 = sub_17;
  sub_34 = sub_29;
  if (coresystem_c2_pneumatic) {
    sub_36 = sub_19;
  } else {
    sub_36 = false;
  };
  if (coresystem_buffer) {
    v_29 = false;
  } else {
    v_29 = sub_21;
  };
  if (coresystem_c1_pneumatic) {
    sub_37 = v_29;
  } else {
    sub_37 = sub_20;
  };
  if (coresystem_ck_18_1) {
    sub_35 = sub_37;
  } else {
    sub_35 = sub_36;
  };
  if (coresystem_c2_matting) {
    v_33 = sub_34;
  } else {
    v_33 = sub_35;
  };
  if (coresystem_ck_16_1) {
    sub_15 = v_33;
  } else {
    sub_15 = sub_16;
  };
  if (coresystem_capper_buffer) {
    v_34 = false;
  } else {
    v_34 = sub_15;
  };
  sub_38 = sub_15;
  if (coresystem_c2_capper) {
    v_35 = sub_38;
  } else {
    v_35 = false;
  };
  if (coresystem_c1_capper) {
    sub_14 = v_34;
  } else {
    sub_14 = sub_38;
  };
  sub_13 = sub_14;
  if (coresystem_ck_20_1) {
    sub_12 = v_35;
  } else {
    sub_12 = sub_13;
  };
  sub_11 = sub_12;
  sub_43 = sub_34;
  if (coresystem_capper_buffer) {
    v_27 = false;
  } else {
    v_27 = sub_43;
  };
  sub_44 = sub_43;
  if (coresystem_c1_capper) {
    sub_42 = v_27;
  } else {
    sub_42 = sub_44;
  };
  sub_41 = sub_42;
  sub_45 = sub_44;
  if (coresystem_c2_capper) {
    v_28 = sub_45;
  } else {
    v_28 = false;
  };
  if (coresystem_ck_20_1) {
    sub_40 = v_28;
  } else {
    sub_40 = sub_41;
  };
  sub_39 = sub_40;
  if (coresystem_p4_input) {
    v_36 = sub_39;
    sub_10 = sub_11;
  } else {
    v_36 = sub_11;
    sub_10 = sub_39;
  };
  if (coresystem_ck_12_1) {
    sub_9 = v_36;
  } else {
    sub_9 = sub_10;
  };
  if (coresystem_b_capped) {
    sub_47 = sub_40;
  } else {
    sub_47 = sub_45;
  };
  sub_46 = sub_47;
  if (coresystem_p3_input) {
    v_37 = sub_46;
    sub_8 = sub_9;
  } else {
    v_37 = sub_9;
    sub_8 = sub_46;
  };
  if (coresystem_ck_10_1) {
    sub_7 = v_37;
  } else {
    sub_7 = sub_8;
  };
  sub_63 = true;
  if (coresystem_p1_input) {
    sub_62 = false;
    sub_64 = sub_63;
  } else {
    sub_62 = sub_63;
    sub_64 = false;
  };
  if (coresystem_ck_1) {
    sub_61 = sub_64;
  } else {
    sub_61 = sub_62;
  };
  sub_60 = sub_61;
  sub_59 = sub_60;
  if (coresystem_ck_1) {
    sub_67 = sub_62;
  } else {
    sub_67 = sub_64;
  };
  sub_66 = sub_67;
  sub_65 = sub_66;
  if (coresystem_c2_pneumatic) {
    sub_58 = sub_59;
  } else {
    sub_58 = sub_65;
  };
  if (coresystem_buffer) {
    v_21 = sub_67;
  } else {
    v_21 = sub_61;
  };
  if (coresystem_c1_pneumatic) {
    sub_68 = v_21;
  } else {
    sub_68 = sub_60;
  };
  if (coresystem_ck_18_1) {
    v_22 = sub_68;
  } else {
    v_22 = sub_58;
  };
  sub_72 = sub_63;
  sub_71 = sub_72;
  if (coresystem_c2_pneumatic) {
    sub_70 = sub_71;
  } else {
    sub_70 = sub_65;
  };
  if (coresystem_buffer) {
    v_20 = sub_67;
  } else {
    v_20 = sub_72;
  };
  if (coresystem_c1_pneumatic) {
    sub_73 = v_20;
  } else {
    sub_73 = sub_71;
  };
  if (coresystem_ck_18_1) {
    sub_69 = sub_73;
  } else {
    sub_69 = sub_70;
  };
  if (coresystem_c1_matting) {
    sub_57 = v_22;
  } else {
    sub_57 = sub_69;
  };
  sub_56 = sub_57;
  sub_74 = sub_69;
  if (coresystem_c2_pneumatic) {
    sub_76 = sub_59;
  } else {
    sub_76 = false;
  };
  if (coresystem_buffer) {
    v_19 = false;
  } else {
    v_19 = sub_61;
  };
  if (coresystem_c1_pneumatic) {
    sub_77 = v_19;
  } else {
    sub_77 = sub_60;
  };
  if (coresystem_ck_18_1) {
    sub_75 = sub_77;
  } else {
    sub_75 = sub_76;
  };
  if (coresystem_c2_matting) {
    v_23 = sub_74;
  } else {
    v_23 = sub_75;
  };
  if (coresystem_ck_16_1) {
    sub_55 = v_23;
  } else {
    sub_55 = sub_56;
  };
  if (coresystem_capper_buffer) {
    v_24 = false;
  } else {
    v_24 = sub_55;
  };
  sub_78 = sub_55;
  if (coresystem_c2_capper) {
    v_25 = sub_78;
  } else {
    v_25 = false;
  };
  if (coresystem_c1_capper) {
    sub_54 = v_24;
  } else {
    sub_54 = sub_78;
  };
  sub_53 = sub_54;
  if (coresystem_ck_20_1) {
    sub_52 = v_25;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  if (coresystem_p4_input) {
    v_26 = sub_39;
    sub_50 = sub_51;
  } else {
    v_26 = sub_51;
    sub_50 = sub_39;
  };
  if (coresystem_ck_12_1) {
    sub_49 = v_26;
  } else {
    sub_49 = sub_50;
  };
  sub_85 = sub_74;
  if (coresystem_capper_buffer) {
    v_16 = false;
  } else {
    v_16 = sub_85;
  };
  sub_86 = sub_85;
  if (coresystem_c1_capper) {
    sub_84 = v_16;
  } else {
    sub_84 = sub_86;
  };
  sub_83 = sub_84;
  sub_87 = sub_86;
  if (coresystem_c2_capper) {
    v_17 = sub_87;
  } else {
    v_17 = false;
  };
  if (coresystem_ck_20_1) {
    sub_82 = v_17;
  } else {
    sub_82 = sub_83;
  };
  if (coresystem_b_capped) {
    sub_81 = sub_82;
  } else {
    sub_81 = sub_87;
  };
  if (coresystem_p4_input) {
    v_18 = sub_47;
    sub_80 = sub_81;
  } else {
    v_18 = sub_81;
    sub_80 = sub_47;
  };
  if (coresystem_ck_12_1) {
    sub_79 = v_18;
  } else {
    sub_79 = sub_80;
  };
  if (coresystem_p3_input) {
    v_38 = sub_79;
    sub_48 = sub_49;
  } else {
    v_38 = sub_49;
    sub_48 = sub_79;
  };
  if (coresystem_ck_10_1) {
    v_39 = v_38;
  } else {
    v_39 = sub_48;
  };
  if (coresystem_ck_22_1) {
    sub_6 = v_39;
  } else {
    sub_6 = sub_7;
  };
  if (coresystem_p2_input) {
    v_40 = false;
    sub_5 = sub_6;
  } else {
    v_40 = sub_6;
    sub_5 = false;
  };
  if (coresystem_ck_8_1) {
    v_41 = v_40;
  } else {
    v_41 = sub_5;
  };
  sub_93 = sub_39;
  if (coresystem_p3_input) {
    v_12 = sub_46;
    sub_92 = sub_93;
  } else {
    v_12 = sub_93;
    sub_92 = sub_46;
  };
  if (coresystem_ck_10_1) {
    sub_91 = v_12;
  } else {
    sub_91 = sub_92;
  };
  sub_97 = sub_82;
  if (coresystem_p4_input) {
    v_11 = sub_39;
    sub_96 = sub_97;
  } else {
    v_11 = sub_97;
    sub_96 = sub_39;
  };
  if (coresystem_ck_12_1) {
    sub_95 = v_11;
  } else {
    sub_95 = sub_96;
  };
  if (coresystem_p3_input) {
    v_13 = sub_79;
    sub_94 = sub_95;
  } else {
    v_13 = sub_95;
    sub_94 = sub_79;
  };
  if (coresystem_ck_10_1) {
    v_14 = v_13;
  } else {
    v_14 = sub_94;
  };
  if (coresystem_ck_22_1) {
    sub_90 = v_14;
  } else {
    sub_90 = sub_91;
  };
  if (coresystem_p2_input) {
    v_15 = sub_90;
    sub_89 = sub_6;
  } else {
    v_15 = sub_6;
    sub_89 = sub_90;
  };
  if (coresystem_ck_8_1) {
    sub_88 = v_15;
  } else {
    sub_88 = sub_89;
  };
  if (coresystem_c1_bomb) {
    v_42 = v_41;
  } else {
    v_42 = sub_88;
  };
  sub_98 = sub_88;
  if (coresystem_b_full) {
    sub_4 = v_42;
  } else {
    sub_4 = sub_98;
  };
  sub_3 = sub_4;
  if (coresystem_p2_input) {
    v_10 = sub_90;
    sub_100 = false;
  } else {
    v_10 = false;
    sub_100 = sub_90;
  };
  if (coresystem_ck_8_1) {
    sub_99 = v_10;
  } else {
    sub_99 = sub_100;
  };
  if (coresystem_b_full) {
    v_43 = false;
  } else {
    v_43 = sub_99;
  };
  if (coresystem_c2_bomb) {
    v_44 = sub_98;
  } else {
    v_44 = v_43;
  };
  if (coresystem_ck_14_1) {
    sub_2 = v_44;
  } else {
    sub_2 = sub_3;
  };
  sub_1 = sub_2;
  if (coresystem_p4_input) {
    v_3 = sub_97;
    sub_108 = sub_51;
  } else {
    v_3 = sub_51;
    sub_108 = sub_97;
  };
  if (coresystem_ck_12_1) {
    sub_107 = v_3;
  } else {
    sub_107 = sub_108;
  };
  sub_109 = sub_81;
  if (coresystem_p3_input) {
    v_4 = sub_109;
    sub_106 = sub_107;
  } else {
    v_4 = sub_107;
    sub_106 = sub_109;
  };
  if (coresystem_ck_10_1) {
    sub_105 = v_4;
  } else {
    sub_105 = sub_106;
  };
  if (coresystem_p2_input) {
    v_5 = false;
    sub_104 = sub_105;
  } else {
    v_5 = sub_105;
    sub_104 = false;
  };
  if (coresystem_ck_8_1) {
    v_6 = v_5;
  } else {
    v_6 = sub_104;
  };
  sub_114 = sub_97;
  if (coresystem_p3_input) {
    v_1 = sub_109;
    sub_113 = sub_114;
  } else {
    v_1 = sub_114;
    sub_113 = sub_109;
  };
  if (coresystem_ck_10_1) {
    sub_112 = v_1;
  } else {
    sub_112 = sub_113;
  };
  if (coresystem_p2_input) {
    v_2 = sub_112;
    sub_111 = sub_105;
  } else {
    v_2 = sub_105;
    sub_111 = sub_112;
  };
  if (coresystem_ck_8_1) {
    sub_110 = v_2;
  } else {
    sub_110 = sub_111;
  };
  if (coresystem_c1_bomb) {
    v_7 = v_6;
  } else {
    v_7 = sub_110;
  };
  sub_115 = sub_110;
  if (coresystem_b_full) {
    sub_103 = v_7;
  } else {
    sub_103 = sub_115;
  };
  sub_102 = sub_103;
  if (coresystem_p2_input) {
    v = sub_112;
    sub_117 = false;
  } else {
    v = false;
    sub_117 = sub_112;
  };
  if (coresystem_ck_8_1) {
    sub_116 = v;
  } else {
    sub_116 = sub_117;
  };
  if (coresystem_b_full) {
    v_8 = false;
  } else {
    v_8 = sub_116;
  };
  if (coresystem_c2_bomb) {
    v_9 = sub_115;
  } else {
    v_9 = v_8;
  };
  if (coresystem_ck_14_1) {
    sub_101 = v_9;
  } else {
    sub_101 = sub_102;
  };
  if (p_coresystem_c2_robot) {
    sub_0 = sub_101;
  } else {
    sub_0 = sub_1;
  };
  _out->coresystem_c2_robot = sub_0;;
}

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
  int p_coresystem_c2_bomb, int p_coresystem_c1_bomb,
  int coresystem_c2_capper, int coresystem_c1_capper,
  int coresystem_c2_pneumatic, int coresystem_c1_pneumatic,
  int coresystem_c2_matting, int coresystem_c1_matting,
  int coresystem_c2_bomb, int coresystem_c1_bomb,
  Coresystem_controller__coresystem_controller_coresystem_c1_robot_out* _out) {
  
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  sub_21 = false;
  if (coresystem_p1_input) {
    sub_20 = false;
    sub_22 = sub_21;
  } else {
    sub_20 = sub_21;
    sub_22 = false;
  };
  if (coresystem_ck_1) {
    sub_19 = sub_22;
  } else {
    sub_19 = sub_20;
  };
  sub_18 = sub_19;
  sub_17 = sub_18;
  if (coresystem_ck_1) {
    sub_25 = sub_20;
  } else {
    sub_25 = sub_22;
  };
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (coresystem_c2_pneumatic) {
    sub_16 = sub_17;
  } else {
    sub_16 = sub_23;
  };
  if (coresystem_buffer) {
    v_68 = sub_25;
  } else {
    v_68 = sub_19;
  };
  if (coresystem_c1_pneumatic) {
    sub_26 = v_68;
  } else {
    sub_26 = sub_18;
  };
  if (coresystem_ck_18_1) {
    v_69 = sub_26;
  } else {
    v_69 = sub_16;
  };
  sub_30 = sub_21;
  sub_29 = sub_30;
  if (coresystem_c2_pneumatic) {
    sub_28 = sub_29;
  } else {
    sub_28 = sub_23;
  };
  if (coresystem_buffer) {
    v_67 = sub_25;
  } else {
    v_67 = sub_30;
  };
  if (coresystem_c1_pneumatic) {
    sub_31 = v_67;
  } else {
    sub_31 = sub_29;
  };
  if (coresystem_ck_18_1) {
    sub_27 = sub_31;
  } else {
    sub_27 = sub_28;
  };
  if (coresystem_c1_matting) {
    sub_15 = v_69;
  } else {
    sub_15 = sub_27;
  };
  sub_14 = sub_15;
  sub_32 = sub_27;
  if (coresystem_c2_pneumatic) {
    sub_34 = sub_17;
  } else {
    sub_34 = false;
  };
  if (coresystem_buffer) {
    v_66 = false;
  } else {
    v_66 = sub_19;
  };
  if (coresystem_c1_pneumatic) {
    sub_35 = v_66;
  } else {
    sub_35 = sub_18;
  };
  if (coresystem_ck_18_1) {
    sub_33 = sub_35;
  } else {
    sub_33 = sub_34;
  };
  if (coresystem_c2_matting) {
    v_70 = sub_32;
  } else {
    v_70 = sub_33;
  };
  if (coresystem_ck_16_1) {
    sub_13 = v_70;
  } else {
    sub_13 = sub_14;
  };
  if (coresystem_capper_buffer) {
    v_71 = false;
  } else {
    v_71 = sub_13;
  };
  sub_36 = sub_13;
  if (coresystem_c2_capper) {
    v_72 = sub_36;
  } else {
    v_72 = false;
  };
  if (coresystem_c1_capper) {
    sub_12 = v_71;
  } else {
    sub_12 = sub_36;
  };
  sub_11 = sub_12;
  if (coresystem_ck_20_1) {
    sub_10 = v_72;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_41 = sub_32;
  if (coresystem_capper_buffer) {
    v_64 = false;
  } else {
    v_64 = sub_41;
  };
  sub_42 = sub_41;
  if (coresystem_c1_capper) {
    sub_40 = v_64;
  } else {
    sub_40 = sub_42;
  };
  sub_39 = sub_40;
  sub_43 = sub_42;
  if (coresystem_c2_capper) {
    v_65 = sub_43;
  } else {
    v_65 = false;
  };
  if (coresystem_ck_20_1) {
    sub_38 = v_65;
  } else {
    sub_38 = sub_39;
  };
  sub_37 = sub_38;
  if (coresystem_p4_input) {
    v_73 = sub_37;
    sub_8 = sub_9;
  } else {
    v_73 = sub_9;
    sub_8 = sub_37;
  };
  if (coresystem_ck_12_1) {
    sub_7 = v_73;
  } else {
    sub_7 = sub_8;
  };
  if (coresystem_b_capped) {
    sub_45 = sub_38;
  } else {
    sub_45 = sub_43;
  };
  sub_44 = sub_45;
  if (coresystem_p3_input) {
    v_74 = sub_44;
    sub_6 = sub_7;
  } else {
    v_74 = sub_7;
    sub_6 = sub_44;
  };
  if (coresystem_ck_10_1) {
    sub_5 = v_74;
  } else {
    sub_5 = sub_6;
  };
  if (coresystem_p2_input) {
    v_75 = false;
    sub_4 = sub_5;
  } else {
    v_75 = sub_5;
    sub_4 = false;
  };
  if (coresystem_ck_8_1) {
    v_76 = v_75;
  } else {
    v_76 = sub_4;
  };
  sub_50 = sub_37;
  if (coresystem_p3_input) {
    v_62 = sub_44;
    sub_49 = sub_50;
  } else {
    v_62 = sub_50;
    sub_49 = sub_44;
  };
  if (coresystem_ck_10_1) {
    sub_48 = v_62;
  } else {
    sub_48 = sub_49;
  };
  if (coresystem_p2_input) {
    v_63 = sub_48;
    sub_47 = sub_5;
  } else {
    v_63 = sub_5;
    sub_47 = sub_48;
  };
  if (coresystem_ck_8_1) {
    sub_46 = v_63;
  } else {
    sub_46 = sub_47;
  };
  if (coresystem_c1_bomb) {
    v_77 = v_76;
  } else {
    v_77 = sub_46;
  };
  sub_51 = sub_46;
  if (coresystem_b_full) {
    sub_3 = v_77;
  } else {
    sub_3 = sub_51;
  };
  sub_2 = sub_3;
  if (coresystem_p2_input) {
    v_61 = sub_48;
    sub_53 = false;
  } else {
    v_61 = false;
    sub_53 = sub_48;
  };
  if (coresystem_ck_8_1) {
    sub_52 = v_61;
  } else {
    sub_52 = sub_53;
  };
  if (coresystem_b_full) {
    v_78 = false;
  } else {
    v_78 = sub_52;
  };
  if (coresystem_c2_bomb) {
    v_79 = sub_51;
  } else {
    v_79 = v_78;
  };
  if (coresystem_ck_14_1) {
    sub_1 = v_79;
  } else {
    sub_1 = sub_2;
  };
  sub_73 = true;
  if (coresystem_p1_input) {
    sub_72 = false;
    sub_74 = sub_73;
  } else {
    sub_72 = sub_73;
    sub_74 = false;
  };
  if (coresystem_ck_1) {
    sub_71 = sub_74;
  } else {
    sub_71 = sub_72;
  };
  sub_70 = sub_71;
  sub_69 = sub_70;
  if (coresystem_ck_1) {
    sub_77 = sub_72;
  } else {
    sub_77 = sub_74;
  };
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (coresystem_c2_pneumatic) {
    sub_68 = sub_69;
  } else {
    sub_68 = sub_75;
  };
  if (coresystem_buffer) {
    v_51 = sub_77;
  } else {
    v_51 = sub_71;
  };
  if (coresystem_c1_pneumatic) {
    sub_78 = v_51;
  } else {
    sub_78 = sub_70;
  };
  if (coresystem_ck_18_1) {
    v_52 = sub_78;
  } else {
    v_52 = sub_68;
  };
  sub_82 = sub_73;
  sub_81 = sub_82;
  if (coresystem_c2_pneumatic) {
    sub_80 = sub_81;
  } else {
    sub_80 = sub_75;
  };
  if (coresystem_buffer) {
    v_50 = sub_77;
  } else {
    v_50 = sub_82;
  };
  if (coresystem_c1_pneumatic) {
    sub_83 = v_50;
  } else {
    sub_83 = sub_81;
  };
  if (coresystem_ck_18_1) {
    sub_79 = sub_83;
  } else {
    sub_79 = sub_80;
  };
  if (coresystem_c1_matting) {
    sub_67 = v_52;
  } else {
    sub_67 = sub_79;
  };
  sub_66 = sub_67;
  sub_84 = sub_79;
  if (coresystem_c2_pneumatic) {
    sub_86 = sub_69;
  } else {
    sub_86 = false;
  };
  if (coresystem_buffer) {
    v_49 = false;
  } else {
    v_49 = sub_71;
  };
  if (coresystem_c1_pneumatic) {
    sub_87 = v_49;
  } else {
    sub_87 = sub_70;
  };
  if (coresystem_ck_18_1) {
    sub_85 = sub_87;
  } else {
    sub_85 = sub_86;
  };
  if (coresystem_c2_matting) {
    v_53 = sub_84;
  } else {
    v_53 = sub_85;
  };
  if (coresystem_ck_16_1) {
    sub_65 = v_53;
  } else {
    sub_65 = sub_66;
  };
  if (coresystem_capper_buffer) {
    v_54 = false;
  } else {
    v_54 = sub_65;
  };
  sub_88 = sub_65;
  if (coresystem_c2_capper) {
    v_55 = sub_88;
  } else {
    v_55 = false;
  };
  if (coresystem_c1_capper) {
    sub_64 = v_54;
  } else {
    sub_64 = sub_88;
  };
  sub_63 = sub_64;
  if (coresystem_ck_20_1) {
    sub_62 = v_55;
  } else {
    sub_62 = sub_63;
  };
  sub_61 = sub_62;
  sub_93 = sub_84;
  if (coresystem_capper_buffer) {
    v_47 = false;
  } else {
    v_47 = sub_93;
  };
  sub_94 = sub_93;
  if (coresystem_c1_capper) {
    sub_92 = v_47;
  } else {
    sub_92 = sub_94;
  };
  sub_91 = sub_92;
  sub_95 = sub_94;
  if (coresystem_c2_capper) {
    v_48 = sub_95;
  } else {
    v_48 = false;
  };
  if (coresystem_ck_20_1) {
    sub_90 = v_48;
  } else {
    sub_90 = sub_91;
  };
  sub_89 = sub_90;
  if (coresystem_p4_input) {
    v_56 = sub_89;
    sub_60 = sub_61;
  } else {
    v_56 = sub_61;
    sub_60 = sub_89;
  };
  if (coresystem_ck_12_1) {
    sub_59 = v_56;
  } else {
    sub_59 = sub_60;
  };
  if (coresystem_b_capped) {
    sub_97 = sub_90;
  } else {
    sub_97 = sub_95;
  };
  sub_96 = sub_97;
  if (coresystem_p3_input) {
    v_57 = sub_96;
    sub_58 = sub_59;
  } else {
    v_57 = sub_59;
    sub_58 = sub_96;
  };
  if (coresystem_ck_10_1) {
    sub_57 = v_57;
  } else {
    sub_57 = sub_58;
  };
  if (coresystem_p2_input) {
    v_58 = false;
    sub_56 = sub_57;
  } else {
    v_58 = sub_57;
    sub_56 = false;
  };
  if (coresystem_ck_8_1) {
    v_59 = v_58;
  } else {
    v_59 = sub_56;
  };
  sub_102 = sub_89;
  if (coresystem_p3_input) {
    v_45 = sub_96;
    sub_101 = sub_102;
  } else {
    v_45 = sub_102;
    sub_101 = sub_96;
  };
  if (coresystem_ck_10_1) {
    sub_100 = v_45;
  } else {
    sub_100 = sub_101;
  };
  if (coresystem_p2_input) {
    v_46 = sub_100;
    sub_99 = sub_57;
  } else {
    v_46 = sub_57;
    sub_99 = sub_100;
  };
  if (coresystem_ck_8_1) {
    sub_98 = v_46;
  } else {
    sub_98 = sub_99;
  };
  if (coresystem_c1_bomb) {
    v_60 = v_59;
  } else {
    v_60 = sub_98;
  };
  sub_103 = sub_98;
  if (coresystem_b_full) {
    sub_55 = v_60;
  } else {
    sub_55 = sub_103;
  };
  sub_54 = sub_55;
  if (coresystem_p2_input) {
    v = sub_100;
    sub_105 = false;
  } else {
    v = false;
    sub_105 = sub_100;
  };
  if (coresystem_ck_8_1) {
    sub_104 = v;
  } else {
    sub_104 = sub_105;
  };
  if (coresystem_b_full) {
    v_80 = false;
  } else {
    v_80 = sub_104;
  };
  if (coresystem_c2_bomb) {
    v_81 = sub_103;
  } else {
    v_81 = v_80;
  };
  if (coresystem_ck_14_1) {
    v_82 = v_81;
  } else {
    v_82 = sub_54;
  };
  if (p_coresystem_c1_robot) {
    sub_0 = v_82;
  } else {
    sub_0 = sub_1;
  };
  _out->coresystem_c1_robot = sub_0;;
}

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
  int p_coresystem_c2_bomb, int p_coresystem_c1_bomb,
  int coresystem_c1_capper, int coresystem_c2_pneumatic,
  int coresystem_c1_pneumatic, int coresystem_c2_matting,
  int coresystem_c1_matting, int coresystem_c2_bomb, int coresystem_c1_bomb,
  Coresystem_controller__coresystem_controller_coresystem_c2_capper_out* _out) {
  
  int v_116;
  int v_115;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  sub_20 = false;
  if (coresystem_p1_input) {
    sub_19 = false;
    sub_21 = sub_20;
  } else {
    sub_19 = sub_20;
    sub_21 = false;
  };
  if (coresystem_ck_1) {
    sub_18 = sub_21;
  } else {
    sub_18 = sub_19;
  };
  sub_17 = sub_18;
  sub_16 = sub_17;
  if (coresystem_ck_1) {
    sub_24 = sub_19;
  } else {
    sub_24 = sub_21;
  };
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (coresystem_c2_pneumatic) {
    sub_15 = sub_16;
  } else {
    sub_15 = sub_22;
  };
  if (coresystem_buffer) {
    v_103 = sub_24;
  } else {
    v_103 = sub_18;
  };
  if (coresystem_c1_pneumatic) {
    sub_25 = v_103;
  } else {
    sub_25 = sub_17;
  };
  if (coresystem_ck_18_1) {
    v_104 = sub_25;
  } else {
    v_104 = sub_15;
  };
  sub_29 = sub_20;
  sub_28 = sub_29;
  if (coresystem_c2_pneumatic) {
    sub_27 = sub_28;
  } else {
    sub_27 = sub_22;
  };
  if (coresystem_buffer) {
    v_102 = sub_24;
  } else {
    v_102 = sub_29;
  };
  if (coresystem_c1_pneumatic) {
    sub_30 = v_102;
  } else {
    sub_30 = sub_28;
  };
  if (coresystem_ck_18_1) {
    sub_26 = sub_30;
  } else {
    sub_26 = sub_27;
  };
  if (coresystem_c1_matting) {
    sub_14 = v_104;
  } else {
    sub_14 = sub_26;
  };
  sub_13 = sub_14;
  sub_31 = sub_26;
  if (coresystem_c2_pneumatic) {
    sub_33 = sub_16;
  } else {
    sub_33 = false;
  };
  if (coresystem_buffer) {
    v_101 = false;
  } else {
    v_101 = sub_18;
  };
  if (coresystem_c1_pneumatic) {
    sub_34 = v_101;
  } else {
    sub_34 = sub_17;
  };
  if (coresystem_ck_18_1) {
    sub_32 = sub_34;
  } else {
    sub_32 = sub_33;
  };
  if (coresystem_c2_matting) {
    v_105 = sub_31;
  } else {
    v_105 = sub_32;
  };
  if (coresystem_ck_16_1) {
    sub_12 = v_105;
  } else {
    sub_12 = sub_13;
  };
  if (coresystem_capper_buffer) {
    v_106 = false;
  } else {
    v_106 = sub_12;
  };
  if (coresystem_c1_capper) {
    sub_11 = v_106;
  } else {
    sub_11 = sub_12;
  };
  sub_45 = true;
  if (coresystem_p1_input) {
    sub_44 = false;
    sub_46 = sub_45;
  } else {
    sub_44 = sub_45;
    sub_46 = false;
  };
  if (coresystem_ck_1) {
    sub_43 = sub_46;
  } else {
    sub_43 = sub_44;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (coresystem_ck_1) {
    sub_49 = sub_44;
  } else {
    sub_49 = sub_46;
  };
  sub_48 = sub_49;
  sub_47 = sub_48;
  if (coresystem_c2_pneumatic) {
    sub_40 = sub_41;
  } else {
    sub_40 = sub_47;
  };
  if (coresystem_buffer) {
    v_98 = sub_49;
  } else {
    v_98 = sub_43;
  };
  if (coresystem_c1_pneumatic) {
    sub_50 = v_98;
  } else {
    sub_50 = sub_42;
  };
  if (coresystem_ck_18_1) {
    v_99 = sub_50;
  } else {
    v_99 = sub_40;
  };
  sub_54 = sub_45;
  sub_53 = sub_54;
  if (coresystem_c2_pneumatic) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_47;
  };
  if (coresystem_buffer) {
    v_97 = sub_49;
  } else {
    v_97 = sub_54;
  };
  if (coresystem_c1_pneumatic) {
    sub_55 = v_97;
  } else {
    sub_55 = sub_53;
  };
  if (coresystem_ck_18_1) {
    sub_51 = sub_55;
  } else {
    sub_51 = sub_52;
  };
  if (coresystem_c1_matting) {
    sub_39 = v_99;
  } else {
    sub_39 = sub_51;
  };
  sub_38 = sub_39;
  sub_56 = sub_51;
  if (coresystem_c2_pneumatic) {
    sub_58 = sub_41;
  } else {
    sub_58 = false;
  };
  if (coresystem_buffer) {
    v_96 = false;
  } else {
    v_96 = sub_43;
  };
  if (coresystem_c1_pneumatic) {
    sub_59 = v_96;
  } else {
    sub_59 = sub_42;
  };
  if (coresystem_ck_18_1) {
    sub_57 = sub_59;
  } else {
    sub_57 = sub_58;
  };
  if (coresystem_c2_matting) {
    v_100 = sub_56;
  } else {
    v_100 = sub_57;
  };
  if (coresystem_ck_16_1) {
    sub_37 = v_100;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (coresystem_ck_20_1) {
    sub_10 = sub_35;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_63 = sub_31;
  if (coresystem_capper_buffer) {
    v_95 = false;
  } else {
    v_95 = sub_63;
  };
  sub_64 = sub_63;
  if (coresystem_c1_capper) {
    sub_62 = v_95;
  } else {
    sub_62 = sub_64;
  };
  sub_67 = sub_56;
  sub_66 = sub_67;
  sub_65 = sub_66;
  if (coresystem_ck_20_1) {
    sub_61 = sub_65;
  } else {
    sub_61 = sub_62;
  };
  sub_60 = sub_61;
  if (coresystem_p4_input) {
    v_107 = sub_60;
    sub_8 = sub_9;
  } else {
    v_107 = sub_9;
    sub_8 = sub_60;
  };
  if (coresystem_ck_12_1) {
    sub_7 = v_107;
  } else {
    sub_7 = sub_8;
  };
  if (coresystem_b_capped) {
    sub_69 = sub_61;
  } else {
    sub_69 = sub_64;
  };
  sub_68 = sub_69;
  if (coresystem_p3_input) {
    v_108 = sub_68;
    sub_6 = sub_7;
  } else {
    v_108 = sub_7;
    sub_6 = sub_68;
  };
  if (coresystem_ck_10_1) {
    sub_5 = v_108;
  } else {
    sub_5 = sub_6;
  };
  if (coresystem_p2_input) {
    v_109 = false;
    sub_4 = sub_5;
  } else {
    v_109 = sub_5;
    sub_4 = false;
  };
  if (coresystem_ck_8_1) {
    v_110 = v_109;
  } else {
    v_110 = sub_4;
  };
  sub_74 = sub_60;
  if (coresystem_p3_input) {
    v_93 = sub_68;
    sub_73 = sub_74;
  } else {
    v_93 = sub_74;
    sub_73 = sub_68;
  };
  if (coresystem_ck_10_1) {
    sub_72 = v_93;
  } else {
    sub_72 = sub_73;
  };
  if (coresystem_p2_input) {
    v_94 = sub_72;
    sub_71 = sub_5;
  } else {
    v_94 = sub_5;
    sub_71 = sub_72;
  };
  if (coresystem_ck_8_1) {
    sub_70 = v_94;
  } else {
    sub_70 = sub_71;
  };
  if (coresystem_c1_bomb) {
    v_111 = v_110;
  } else {
    v_111 = sub_70;
  };
  sub_75 = sub_70;
  if (coresystem_b_full) {
    sub_3 = v_111;
  } else {
    sub_3 = sub_75;
  };
  sub_2 = sub_3;
  if (coresystem_p2_input) {
    v_92 = sub_72;
    sub_77 = false;
  } else {
    v_92 = false;
    sub_77 = sub_72;
  };
  if (coresystem_ck_8_1) {
    sub_76 = v_92;
  } else {
    sub_76 = sub_77;
  };
  if (coresystem_b_full) {
    v_112 = false;
  } else {
    v_112 = sub_76;
  };
  if (coresystem_c2_bomb) {
    v_113 = sub_75;
  } else {
    v_113 = v_112;
  };
  if (coresystem_ck_14_1) {
    sub_1 = v_113;
  } else {
    sub_1 = sub_2;
  };
  if (coresystem_capper_buffer) {
    v_86 = false;
  } else {
    v_86 = sub_37;
  };
  if (coresystem_c1_capper) {
    sub_87 = v_86;
  } else {
    sub_87 = sub_36;
  };
  if (coresystem_ck_20_1) {
    sub_86 = sub_35;
  } else {
    sub_86 = sub_87;
  };
  sub_85 = sub_86;
  if (coresystem_capper_buffer) {
    v_85 = false;
  } else {
    v_85 = sub_67;
  };
  if (coresystem_c1_capper) {
    sub_90 = v_85;
  } else {
    sub_90 = sub_66;
  };
  if (coresystem_ck_20_1) {
    sub_89 = sub_65;
  } else {
    sub_89 = sub_90;
  };
  sub_88 = sub_89;
  if (coresystem_p4_input) {
    v_87 = sub_88;
    sub_84 = sub_85;
  } else {
    v_87 = sub_85;
    sub_84 = sub_88;
  };
  if (coresystem_ck_12_1) {
    sub_83 = v_87;
  } else {
    sub_83 = sub_84;
  };
  if (coresystem_b_capped) {
    sub_92 = sub_89;
  } else {
    sub_92 = sub_65;
  };
  sub_91 = sub_92;
  if (coresystem_p3_input) {
    v_88 = sub_91;
    sub_82 = sub_83;
  } else {
    v_88 = sub_83;
    sub_82 = sub_91;
  };
  if (coresystem_ck_10_1) {
    sub_81 = v_88;
  } else {
    sub_81 = sub_82;
  };
  if (coresystem_p2_input) {
    v_89 = false;
    sub_80 = sub_81;
  } else {
    v_89 = sub_81;
    sub_80 = false;
  };
  if (coresystem_ck_8_1) {
    v_90 = v_89;
  } else {
    v_90 = sub_80;
  };
  sub_97 = sub_88;
  if (coresystem_p3_input) {
    v_83 = sub_91;
    sub_96 = sub_97;
  } else {
    v_83 = sub_97;
    sub_96 = sub_91;
  };
  if (coresystem_ck_10_1) {
    sub_95 = v_83;
  } else {
    sub_95 = sub_96;
  };
  if (coresystem_p2_input) {
    v_84 = sub_95;
    sub_94 = sub_81;
  } else {
    v_84 = sub_81;
    sub_94 = sub_95;
  };
  if (coresystem_ck_8_1) {
    sub_93 = v_84;
  } else {
    sub_93 = sub_94;
  };
  if (coresystem_c1_bomb) {
    v_91 = v_90;
  } else {
    v_91 = sub_93;
  };
  sub_98 = sub_93;
  if (coresystem_b_full) {
    sub_79 = v_91;
  } else {
    sub_79 = sub_98;
  };
  sub_78 = sub_79;
  if (coresystem_p2_input) {
    v = sub_95;
    sub_100 = false;
  } else {
    v = false;
    sub_100 = sub_95;
  };
  if (coresystem_ck_8_1) {
    sub_99 = v;
  } else {
    sub_99 = sub_100;
  };
  if (coresystem_b_full) {
    v_114 = false;
  } else {
    v_114 = sub_99;
  };
  if (coresystem_c2_bomb) {
    v_115 = sub_98;
  } else {
    v_115 = v_114;
  };
  if (coresystem_ck_14_1) {
    v_116 = v_115;
  } else {
    v_116 = sub_78;
  };
  if (p_coresystem_c2_capper) {
    sub_0 = v_116;
  } else {
    sub_0 = sub_1;
  };
  _out->coresystem_c2_capper = sub_0;;
}

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
  int coresystem_c2_matting, int coresystem_c1_matting,
  int coresystem_c2_bomb, int coresystem_c1_bomb,
  Coresystem_controller__coresystem_controller_coresystem_c1_capper_out* _out) {
  
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_141;
  int v_140;
  int v_139;
  int v_138;
  int v_137;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int v_132;
  int v_131;
  int v_130;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
  int v_121;
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  sub_19 = false;
  if (coresystem_p1_input) {
    sub_18 = false;
    sub_20 = sub_19;
  } else {
    sub_18 = sub_19;
    sub_20 = false;
  };
  if (coresystem_ck_1) {
    sub_17 = sub_20;
  } else {
    sub_17 = sub_18;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (coresystem_ck_1) {
    sub_23 = sub_18;
  } else {
    sub_23 = sub_20;
  };
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (coresystem_c2_pneumatic) {
    sub_14 = sub_15;
  } else {
    sub_14 = sub_21;
  };
  if (coresystem_buffer) {
    v_133 = sub_23;
  } else {
    v_133 = sub_17;
  };
  if (coresystem_c1_pneumatic) {
    sub_24 = v_133;
  } else {
    sub_24 = sub_16;
  };
  if (coresystem_ck_18_1) {
    v_134 = sub_24;
  } else {
    v_134 = sub_14;
  };
  sub_28 = sub_19;
  sub_27 = sub_28;
  if (coresystem_c2_pneumatic) {
    sub_26 = sub_27;
  } else {
    sub_26 = sub_21;
  };
  if (coresystem_buffer) {
    v_132 = sub_23;
  } else {
    v_132 = sub_28;
  };
  if (coresystem_c1_pneumatic) {
    sub_29 = v_132;
  } else {
    sub_29 = sub_27;
  };
  if (coresystem_ck_18_1) {
    sub_25 = sub_29;
  } else {
    sub_25 = sub_26;
  };
  if (coresystem_c1_matting) {
    sub_13 = v_134;
  } else {
    sub_13 = sub_25;
  };
  sub_12 = sub_13;
  sub_30 = sub_25;
  if (coresystem_c2_pneumatic) {
    sub_32 = sub_15;
  } else {
    sub_32 = false;
  };
  if (coresystem_buffer) {
    v_131 = false;
  } else {
    v_131 = sub_17;
  };
  if (coresystem_c1_pneumatic) {
    sub_33 = v_131;
  } else {
    sub_33 = sub_16;
  };
  if (coresystem_ck_18_1) {
    sub_31 = sub_33;
  } else {
    sub_31 = sub_32;
  };
  if (coresystem_c2_matting) {
    v_135 = sub_30;
  } else {
    v_135 = sub_31;
  };
  if (coresystem_ck_16_1) {
    sub_11 = v_135;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_36 = sub_30;
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (coresystem_p4_input) {
    v_136 = sub_34;
    sub_8 = sub_9;
  } else {
    v_136 = sub_9;
    sub_8 = sub_34;
  };
  if (coresystem_ck_12_1) {
    sub_7 = v_136;
  } else {
    sub_7 = sub_8;
  };
  sub_37 = sub_34;
  if (coresystem_p3_input) {
    v_137 = sub_37;
    sub_6 = sub_7;
  } else {
    v_137 = sub_7;
    sub_6 = sub_37;
  };
  if (coresystem_ck_10_1) {
    sub_5 = v_137;
  } else {
    sub_5 = sub_6;
  };
  if (coresystem_p2_input) {
    v_138 = false;
    sub_4 = sub_5;
  } else {
    v_138 = sub_5;
    sub_4 = false;
  };
  if (coresystem_ck_8_1) {
    v_139 = v_138;
  } else {
    v_139 = sub_4;
  };
  sub_40 = sub_37;
  if (coresystem_p2_input) {
    v_130 = sub_40;
    sub_39 = sub_5;
  } else {
    v_130 = sub_5;
    sub_39 = sub_40;
  };
  if (coresystem_ck_8_1) {
    sub_38 = v_130;
  } else {
    sub_38 = sub_39;
  };
  if (coresystem_c1_bomb) {
    v_140 = v_139;
  } else {
    v_140 = sub_38;
  };
  sub_41 = sub_38;
  if (coresystem_b_full) {
    sub_3 = v_140;
  } else {
    sub_3 = sub_41;
  };
  sub_2 = sub_3;
  if (coresystem_p2_input) {
    v_129 = sub_40;
    sub_43 = false;
  } else {
    v_129 = false;
    sub_43 = sub_40;
  };
  if (coresystem_ck_8_1) {
    sub_42 = v_129;
  } else {
    sub_42 = sub_43;
  };
  if (coresystem_b_full) {
    v_141 = false;
  } else {
    v_141 = sub_42;
  };
  if (coresystem_c2_bomb) {
    v_142 = sub_41;
  } else {
    v_142 = v_141;
  };
  if (coresystem_ck_14_1) {
    sub_1 = v_142;
  } else {
    sub_1 = sub_2;
  };
  sub_62 = true;
  if (coresystem_p1_input) {
    sub_61 = false;
    sub_63 = sub_62;
  } else {
    sub_61 = sub_62;
    sub_63 = false;
  };
  if (coresystem_ck_1) {
    sub_60 = sub_63;
  } else {
    sub_60 = sub_61;
  };
  sub_59 = sub_60;
  sub_58 = sub_59;
  if (coresystem_ck_1) {
    sub_66 = sub_61;
  } else {
    sub_66 = sub_63;
  };
  sub_65 = sub_66;
  sub_64 = sub_65;
  if (coresystem_c2_pneumatic) {
    sub_57 = sub_58;
  } else {
    sub_57 = sub_64;
  };
  if (coresystem_buffer) {
    v_121 = sub_66;
  } else {
    v_121 = sub_60;
  };
  if (coresystem_c1_pneumatic) {
    sub_67 = v_121;
  } else {
    sub_67 = sub_59;
  };
  if (coresystem_ck_18_1) {
    v_122 = sub_67;
  } else {
    v_122 = sub_57;
  };
  sub_71 = sub_62;
  sub_70 = sub_71;
  if (coresystem_c2_pneumatic) {
    sub_69 = sub_70;
  } else {
    sub_69 = sub_64;
  };
  if (coresystem_buffer) {
    v_120 = sub_66;
  } else {
    v_120 = sub_71;
  };
  if (coresystem_c1_pneumatic) {
    sub_72 = v_120;
  } else {
    sub_72 = sub_70;
  };
  if (coresystem_ck_18_1) {
    sub_68 = sub_72;
  } else {
    sub_68 = sub_69;
  };
  if (coresystem_c1_matting) {
    sub_56 = v_122;
  } else {
    sub_56 = sub_68;
  };
  sub_55 = sub_56;
  sub_73 = sub_68;
  if (coresystem_c2_pneumatic) {
    sub_75 = sub_58;
  } else {
    sub_75 = false;
  };
  if (coresystem_buffer) {
    v_119 = false;
  } else {
    v_119 = sub_60;
  };
  if (coresystem_c1_pneumatic) {
    sub_76 = v_119;
  } else {
    sub_76 = sub_59;
  };
  if (coresystem_ck_18_1) {
    sub_74 = sub_76;
  } else {
    sub_74 = sub_75;
  };
  if (coresystem_c2_matting) {
    v_123 = sub_73;
  } else {
    v_123 = sub_74;
  };
  if (coresystem_ck_16_1) {
    sub_54 = v_123;
  } else {
    sub_54 = sub_55;
  };
  if (coresystem_capper_buffer) {
    sub_53 = sub_11;
  } else {
    sub_53 = sub_54;
  };
  if (coresystem_ck_20_1) {
    sub_52 = sub_54;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  sub_80 = sub_73;
  if (coresystem_capper_buffer) {
    sub_79 = sub_36;
  } else {
    sub_79 = sub_80;
  };
  sub_81 = sub_80;
  if (coresystem_ck_20_1) {
    sub_78 = sub_81;
  } else {
    sub_78 = sub_79;
  };
  sub_77 = sub_78;
  if (coresystem_p4_input) {
    v_124 = sub_77;
    sub_50 = sub_51;
  } else {
    v_124 = sub_51;
    sub_50 = sub_77;
  };
  if (coresystem_ck_12_1) {
    sub_49 = v_124;
  } else {
    sub_49 = sub_50;
  };
  if (coresystem_b_capped) {
    sub_83 = sub_78;
  } else {
    sub_83 = sub_81;
  };
  sub_82 = sub_83;
  if (coresystem_p3_input) {
    v_125 = sub_82;
    sub_48 = sub_49;
  } else {
    v_125 = sub_49;
    sub_48 = sub_82;
  };
  if (coresystem_ck_10_1) {
    sub_47 = v_125;
  } else {
    sub_47 = sub_48;
  };
  if (coresystem_p2_input) {
    v_126 = false;
    sub_46 = sub_47;
  } else {
    v_126 = sub_47;
    sub_46 = false;
  };
  if (coresystem_ck_8_1) {
    v_127 = v_126;
  } else {
    v_127 = sub_46;
  };
  sub_88 = sub_77;
  if (coresystem_p3_input) {
    v_117 = sub_82;
    sub_87 = sub_88;
  } else {
    v_117 = sub_88;
    sub_87 = sub_82;
  };
  if (coresystem_ck_10_1) {
    sub_86 = v_117;
  } else {
    sub_86 = sub_87;
  };
  if (coresystem_p2_input) {
    v_118 = sub_86;
    sub_85 = sub_47;
  } else {
    v_118 = sub_47;
    sub_85 = sub_86;
  };
  if (coresystem_ck_8_1) {
    sub_84 = v_118;
  } else {
    sub_84 = sub_85;
  };
  if (coresystem_c1_bomb) {
    v_128 = v_127;
  } else {
    v_128 = sub_84;
  };
  sub_89 = sub_84;
  if (coresystem_b_full) {
    sub_45 = v_128;
  } else {
    sub_45 = sub_89;
  };
  sub_44 = sub_45;
  if (coresystem_p2_input) {
    v = sub_86;
    sub_91 = false;
  } else {
    v = false;
    sub_91 = sub_86;
  };
  if (coresystem_ck_8_1) {
    sub_90 = v;
  } else {
    sub_90 = sub_91;
  };
  if (coresystem_b_full) {
    v_143 = false;
  } else {
    v_143 = sub_90;
  };
  if (coresystem_c2_bomb) {
    v_144 = sub_89;
  } else {
    v_144 = v_143;
  };
  if (coresystem_ck_14_1) {
    v_145 = v_144;
  } else {
    v_145 = sub_44;
  };
  if (p_coresystem_c1_capper) {
    sub_0 = v_145;
  } else {
    sub_0 = sub_1;
  };
  _out->coresystem_c1_capper = sub_0;;
}

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
  Coresystem_controller__coresystem_controller_coresystem_c2_pneumatic_out* _out) {
  
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_152;
  int v_151;
  int v_150;
  int v_149;
  int v_148;
  int v_147;
  int v_146;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  sub_17 = false;
  sub_18 = true;
  if (coresystem_p1_input) {
    v_153 = sub_18;
    sub_16 = sub_17;
  } else {
    v_153 = sub_17;
    sub_16 = sub_18;
  };
  if (coresystem_ck_1) {
    sub_15 = v_153;
  } else {
    sub_15 = sub_16;
  };
  sub_14 = sub_15;
  sub_13 = sub_14;
  if (p_coresystem_c2_pneumatic) {
    sub_21 = sub_18;
  } else {
    sub_21 = sub_17;
  };
  if (coresystem_p1_input) {
    sub_20 = sub_21;
    sub_22 = false;
  } else {
    sub_20 = false;
    sub_22 = sub_21;
  };
  if (coresystem_ck_1) {
    sub_19 = sub_22;
    sub_23 = sub_20;
  } else {
    sub_19 = sub_20;
    sub_23 = sub_22;
  };
  if (coresystem_buffer) {
    v_154 = sub_19;
  } else {
    v_154 = sub_23;
  };
  sub_24 = sub_23;
  if (coresystem_c1_pneumatic) {
    v_155 = v_154;
  } else {
    v_155 = sub_24;
  };
  if (coresystem_ck_18_1) {
    v_156 = v_155;
  } else {
    v_156 = sub_13;
  };
  if (coresystem_p1_input) {
    v_150 = sub_18;
    sub_29 = sub_21;
  } else {
    v_150 = sub_21;
    sub_29 = sub_18;
  };
  if (coresystem_ck_1) {
    sub_28 = v_150;
  } else {
    sub_28 = sub_29;
  };
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_30 = sub_21;
  if (coresystem_buffer) {
    v_151 = sub_19;
  } else {
    v_151 = sub_30;
  };
  if (coresystem_c1_pneumatic) {
    v_152 = v_151;
  } else {
    v_152 = sub_30;
  };
  if (coresystem_ck_18_1) {
    sub_25 = v_152;
  } else {
    sub_25 = sub_26;
  };
  if (coresystem_c1_matting) {
    sub_12 = v_156;
  } else {
    sub_12 = sub_25;
  };
  sub_11 = sub_12;
  sub_31 = sub_25;
  if (coresystem_buffer) {
    v_148 = false;
  } else {
    v_148 = sub_23;
  };
  if (coresystem_c1_pneumatic) {
    v_149 = v_148;
  } else {
    v_149 = sub_24;
  };
  if (coresystem_p1_input) {
    v_147 = sub_18;
    sub_36 = false;
  } else {
    v_147 = false;
    sub_36 = sub_18;
  };
  if (coresystem_ck_1) {
    sub_35 = v_147;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (coresystem_ck_18_1) {
    sub_32 = v_149;
  } else {
    sub_32 = sub_33;
  };
  if (coresystem_c2_matting) {
    v_157 = sub_31;
  } else {
    v_157 = sub_32;
  };
  if (coresystem_ck_16_1) {
    sub_10 = v_157;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_39 = sub_31;
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (coresystem_p4_input) {
    v_158 = sub_37;
    sub_7 = sub_8;
  } else {
    v_158 = sub_8;
    sub_7 = sub_37;
  };
  if (coresystem_ck_12_1) {
    sub_6 = v_158;
  } else {
    sub_6 = sub_7;
  };
  sub_40 = sub_37;
  if (coresystem_p3_input) {
    v_159 = sub_40;
    sub_5 = sub_6;
  } else {
    v_159 = sub_6;
    sub_5 = sub_40;
  };
  if (coresystem_ck_10_1) {
    sub_4 = v_159;
  } else {
    sub_4 = sub_5;
  };
  if (coresystem_p2_input) {
    v_160 = false;
    sub_3 = sub_4;
  } else {
    v_160 = sub_4;
    sub_3 = false;
  };
  if (coresystem_ck_8_1) {
    v_161 = v_160;
  } else {
    v_161 = sub_3;
  };
  sub_43 = sub_40;
  if (coresystem_p2_input) {
    v_146 = sub_43;
    sub_42 = sub_4;
  } else {
    v_146 = sub_4;
    sub_42 = sub_43;
  };
  if (coresystem_ck_8_1) {
    sub_41 = v_146;
  } else {
    sub_41 = sub_42;
  };
  if (coresystem_c1_bomb) {
    v_162 = v_161;
  } else {
    v_162 = sub_41;
  };
  sub_44 = sub_41;
  if (coresystem_b_full) {
    sub_2 = v_162;
  } else {
    sub_2 = sub_44;
  };
  sub_1 = sub_2;
  if (coresystem_p2_input) {
    v = sub_43;
    sub_46 = false;
  } else {
    v = false;
    sub_46 = sub_43;
  };
  if (coresystem_ck_8_1) {
    sub_45 = v;
  } else {
    sub_45 = sub_46;
  };
  if (coresystem_b_full) {
    v_163 = false;
  } else {
    v_163 = sub_45;
  };
  if (coresystem_c2_bomb) {
    v_164 = sub_44;
  } else {
    v_164 = v_163;
  };
  if (coresystem_ck_14_1) {
    sub_0 = v_164;
  } else {
    sub_0 = sub_1;
  };
  _out->coresystem_c2_pneumatic = sub_0;;
}

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
  int coresystem_c2_matting, int coresystem_c1_matting,
  int coresystem_c2_bomb, int coresystem_c1_bomb,
  Coresystem_controller__coresystem_controller_coresystem_c1_pneumatic_out* _out) {
  
  int v_193;
  int v_192;
  int v_191;
  int v_190;
  int v_189;
  int v_188;
  int v_187;
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
  int v_177;
  int v_176;
  int v_175;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int v_167;
  int v_166;
  int v_165;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  sub_16 = false;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_19 = true;
  if (coresystem_p1_input) {
    v_180 = sub_16;
    sub_18 = sub_19;
  } else {
    v_180 = sub_19;
    sub_18 = sub_16;
  };
  if (coresystem_ck_1) {
    sub_17 = v_180;
  } else {
    sub_17 = sub_18;
  };
  if (coresystem_p1_input) {
    v_179 = sub_16;
    sub_21 = false;
  } else {
    v_179 = false;
    sub_21 = sub_16;
  };
  if (coresystem_ck_1) {
    sub_20 = v_179;
  } else {
    sub_20 = sub_21;
  };
  if (coresystem_buffer) {
    v_181 = sub_17;
  } else {
    v_181 = sub_20;
  };
  if (coresystem_ck_18_1) {
    v_182 = v_181;
  } else {
    v_182 = sub_14;
  };
  if (coresystem_c1_matting) {
    sub_13 = v_182;
  } else {
    sub_13 = sub_14;
  };
  sub_12 = sub_13;
  sub_22 = sub_14;
  sub_23 = sub_20;
  if (coresystem_c2_matting) {
    v_183 = sub_22;
  } else {
    v_183 = sub_23;
  };
  if (coresystem_ck_16_1) {
    sub_11 = v_183;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_26 = sub_22;
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (coresystem_p4_input) {
    v_184 = sub_24;
    sub_8 = sub_9;
  } else {
    v_184 = sub_9;
    sub_8 = sub_24;
  };
  if (coresystem_ck_12_1) {
    sub_7 = v_184;
  } else {
    sub_7 = sub_8;
  };
  sub_27 = sub_24;
  if (coresystem_p3_input) {
    v_185 = sub_27;
    sub_6 = sub_7;
  } else {
    v_185 = sub_7;
    sub_6 = sub_27;
  };
  if (coresystem_ck_10_1) {
    sub_5 = v_185;
  } else {
    sub_5 = sub_6;
  };
  if (coresystem_p2_input) {
    v_186 = false;
    sub_4 = sub_5;
  } else {
    v_186 = sub_5;
    sub_4 = false;
  };
  if (coresystem_ck_8_1) {
    v_187 = v_186;
  } else {
    v_187 = sub_4;
  };
  sub_30 = sub_27;
  if (coresystem_p2_input) {
    v_178 = sub_30;
    sub_29 = sub_5;
  } else {
    v_178 = sub_5;
    sub_29 = sub_30;
  };
  if (coresystem_ck_8_1) {
    sub_28 = v_178;
  } else {
    sub_28 = sub_29;
  };
  if (coresystem_c1_bomb) {
    v_188 = v_187;
  } else {
    v_188 = sub_28;
  };
  sub_31 = sub_28;
  if (coresystem_b_full) {
    sub_3 = v_188;
  } else {
    sub_3 = sub_31;
  };
  sub_2 = sub_3;
  if (coresystem_p2_input) {
    v_177 = sub_30;
    sub_33 = false;
  } else {
    v_177 = false;
    sub_33 = sub_30;
  };
  if (coresystem_ck_8_1) {
    sub_32 = v_177;
  } else {
    sub_32 = sub_33;
  };
  if (coresystem_b_full) {
    v_189 = false;
  } else {
    v_189 = sub_32;
  };
  if (coresystem_c2_bomb) {
    v_190 = sub_31;
  } else {
    v_190 = v_189;
  };
  if (coresystem_ck_14_1) {
    sub_1 = v_190;
  } else {
    sub_1 = sub_2;
  };
  sub_47 = sub_19;
  sub_46 = sub_47;
  if (coresystem_p1_input) {
    v_168 = sub_19;
    sub_49 = false;
  } else {
    v_168 = false;
    sub_49 = sub_19;
  };
  if (coresystem_ck_1) {
    sub_48 = v_168;
  } else {
    sub_48 = sub_49;
  };
  if (coresystem_buffer) {
    v_169 = sub_17;
  } else {
    v_169 = sub_48;
  };
  if (coresystem_ck_18_1) {
    v_170 = v_169;
  } else {
    v_170 = sub_46;
  };
  if (coresystem_buffer) {
    v_167 = sub_17;
  } else {
    v_167 = sub_47;
  };
  if (coresystem_ck_18_1) {
    sub_50 = v_167;
  } else {
    sub_50 = sub_46;
  };
  if (coresystem_c1_matting) {
    sub_45 = v_170;
  } else {
    sub_45 = sub_50;
  };
  sub_44 = sub_45;
  sub_51 = sub_50;
  if (coresystem_buffer) {
    v_166 = sub_20;
  } else {
    v_166 = sub_48;
  };
  sub_53 = sub_48;
  if (coresystem_ck_18_1) {
    sub_52 = v_166;
  } else {
    sub_52 = sub_53;
  };
  if (coresystem_c2_matting) {
    v_171 = sub_51;
  } else {
    v_171 = sub_52;
  };
  if (coresystem_ck_16_1) {
    sub_43 = v_171;
  } else {
    sub_43 = sub_44;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_56 = sub_51;
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (coresystem_p4_input) {
    v_172 = sub_54;
    sub_40 = sub_41;
  } else {
    v_172 = sub_41;
    sub_40 = sub_54;
  };
  if (coresystem_ck_12_1) {
    sub_39 = v_172;
  } else {
    sub_39 = sub_40;
  };
  sub_57 = sub_54;
  if (coresystem_p3_input) {
    v_173 = sub_57;
    sub_38 = sub_39;
  } else {
    v_173 = sub_39;
    sub_38 = sub_57;
  };
  if (coresystem_ck_10_1) {
    sub_37 = v_173;
  } else {
    sub_37 = sub_38;
  };
  if (coresystem_p2_input) {
    v_174 = false;
    sub_36 = sub_37;
  } else {
    v_174 = sub_37;
    sub_36 = false;
  };
  if (coresystem_ck_8_1) {
    v_175 = v_174;
  } else {
    v_175 = sub_36;
  };
  sub_60 = sub_57;
  if (coresystem_p2_input) {
    v_165 = sub_60;
    sub_59 = sub_37;
  } else {
    v_165 = sub_37;
    sub_59 = sub_60;
  };
  if (coresystem_ck_8_1) {
    sub_58 = v_165;
  } else {
    sub_58 = sub_59;
  };
  if (coresystem_c1_bomb) {
    v_176 = v_175;
  } else {
    v_176 = sub_58;
  };
  sub_61 = sub_58;
  if (coresystem_b_full) {
    sub_35 = v_176;
  } else {
    sub_35 = sub_61;
  };
  sub_34 = sub_35;
  if (coresystem_p2_input) {
    v = sub_60;
    sub_63 = false;
  } else {
    v = false;
    sub_63 = sub_60;
  };
  if (coresystem_ck_8_1) {
    sub_62 = v;
  } else {
    sub_62 = sub_63;
  };
  if (coresystem_b_full) {
    v_191 = false;
  } else {
    v_191 = sub_62;
  };
  if (coresystem_c2_bomb) {
    v_192 = sub_61;
  } else {
    v_192 = v_191;
  };
  if (coresystem_ck_14_1) {
    v_193 = v_192;
  } else {
    v_193 = sub_34;
  };
  if (p_coresystem_c1_pneumatic) {
    sub_0 = v_193;
  } else {
    sub_0 = sub_1;
  };
  _out->coresystem_c1_pneumatic = sub_0;;
}

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
  Coresystem_controller__coresystem_controller_coresystem_c2_matting_out* _out) {
  
  int v_220;
  int v_219;
  int v_218;
  int v_217;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_212;
  int v_211;
  int v_210;
  int v_209;
  int v_208;
  int v_207;
  int v_206;
  int v_205;
  int v_204;
  int v_203;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int v_195;
  int v_194;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  sub_15 = false;
  if (coresystem_p1_input) {
    v_207 = sub_15;
  } else {
    v_207 = false;
  };
  sub_14 = sub_15;
  sub_13 = sub_14;
  if (coresystem_p1_input) {
    sub_16 = false;
  } else {
    sub_16 = sub_15;
  };
  if (coresystem_ck_1) {
    v_208 = v_207;
  } else {
    v_208 = sub_16;
  };
  if (coresystem_buffer) {
    v_209 = sub_14;
  } else {
    v_209 = v_208;
  };
  if (coresystem_ck_18_1) {
    v_210 = v_209;
  } else {
    v_210 = sub_13;
  };
  if (coresystem_c1_matting) {
    sub_12 = v_210;
  } else {
    sub_12 = sub_13;
  };
  sub_20 = true;
  if (coresystem_p1_input) {
    v_206 = sub_15;
    sub_19 = sub_20;
  } else {
    v_206 = sub_20;
    sub_19 = sub_15;
  };
  if (coresystem_ck_1) {
    sub_18 = v_206;
  } else {
    sub_18 = sub_19;
  };
  sub_17 = sub_18;
  if (coresystem_ck_16_1) {
    sub_11 = sub_17;
  } else {
    sub_11 = sub_12;
  };
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_23 = sub_13;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (coresystem_p4_input) {
    v_211 = sub_21;
    sub_8 = sub_9;
  } else {
    v_211 = sub_9;
    sub_8 = sub_21;
  };
  if (coresystem_ck_12_1) {
    sub_7 = v_211;
  } else {
    sub_7 = sub_8;
  };
  sub_24 = sub_21;
  if (coresystem_p3_input) {
    v_212 = sub_24;
    sub_6 = sub_7;
  } else {
    v_212 = sub_7;
    sub_6 = sub_24;
  };
  if (coresystem_ck_10_1) {
    sub_5 = v_212;
  } else {
    sub_5 = sub_6;
  };
  if (coresystem_p2_input) {
    v_213 = false;
    sub_4 = sub_5;
  } else {
    v_213 = sub_5;
    sub_4 = false;
  };
  if (coresystem_ck_8_1) {
    v_214 = v_213;
  } else {
    v_214 = sub_4;
  };
  sub_27 = sub_24;
  if (coresystem_p2_input) {
    v_205 = sub_27;
    sub_26 = sub_5;
  } else {
    v_205 = sub_5;
    sub_26 = sub_27;
  };
  if (coresystem_ck_8_1) {
    sub_25 = v_205;
  } else {
    sub_25 = sub_26;
  };
  if (coresystem_c1_bomb) {
    v_215 = v_214;
  } else {
    v_215 = sub_25;
  };
  sub_28 = sub_25;
  if (coresystem_b_full) {
    sub_3 = v_215;
  } else {
    sub_3 = sub_28;
  };
  sub_2 = sub_3;
  if (coresystem_p2_input) {
    v_204 = sub_27;
    sub_30 = false;
  } else {
    v_204 = false;
    sub_30 = sub_27;
  };
  if (coresystem_ck_8_1) {
    sub_29 = v_204;
  } else {
    sub_29 = sub_30;
  };
  if (coresystem_b_full) {
    v_216 = false;
  } else {
    v_216 = sub_29;
  };
  if (coresystem_c2_bomb) {
    v_217 = sub_28;
  } else {
    v_217 = v_216;
  };
  if (coresystem_ck_14_1) {
    sub_1 = v_217;
  } else {
    sub_1 = sub_2;
  };
  if (coresystem_p1_input) {
    v_195 = sub_20;
  } else {
    v_195 = false;
  };
  sub_43 = sub_20;
  sub_42 = sub_43;
  if (coresystem_p1_input) {
    sub_44 = false;
  } else {
    sub_44 = sub_20;
  };
  if (coresystem_ck_1) {
    v_196 = v_195;
  } else {
    v_196 = sub_44;
  };
  if (coresystem_buffer) {
    v_197 = sub_43;
  } else {
    v_197 = v_196;
  };
  if (coresystem_ck_18_1) {
    v_198 = v_197;
  } else {
    v_198 = sub_42;
  };
  if (coresystem_c1_matting) {
    sub_41 = v_198;
  } else {
    sub_41 = sub_42;
  };
  sub_45 = sub_42;
  if (coresystem_ck_16_1) {
    sub_40 = sub_45;
  } else {
    sub_40 = sub_41;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_47 = sub_45;
  sub_46 = sub_47;
  if (coresystem_p4_input) {
    v_199 = sub_46;
    sub_37 = sub_38;
  } else {
    v_199 = sub_38;
    sub_37 = sub_46;
  };
  if (coresystem_ck_12_1) {
    sub_36 = v_199;
  } else {
    sub_36 = sub_37;
  };
  sub_48 = sub_46;
  if (coresystem_p3_input) {
    v_200 = sub_48;
    sub_35 = sub_36;
  } else {
    v_200 = sub_36;
    sub_35 = sub_48;
  };
  if (coresystem_ck_10_1) {
    sub_34 = v_200;
  } else {
    sub_34 = sub_35;
  };
  if (coresystem_p2_input) {
    v_201 = false;
    sub_33 = sub_34;
  } else {
    v_201 = sub_34;
    sub_33 = false;
  };
  if (coresystem_ck_8_1) {
    v_202 = v_201;
  } else {
    v_202 = sub_33;
  };
  sub_51 = sub_48;
  if (coresystem_p2_input) {
    v_194 = sub_51;
    sub_50 = sub_34;
  } else {
    v_194 = sub_34;
    sub_50 = sub_51;
  };
  if (coresystem_ck_8_1) {
    sub_49 = v_194;
  } else {
    sub_49 = sub_50;
  };
  if (coresystem_c1_bomb) {
    v_203 = v_202;
  } else {
    v_203 = sub_49;
  };
  sub_52 = sub_49;
  if (coresystem_b_full) {
    sub_32 = v_203;
  } else {
    sub_32 = sub_52;
  };
  sub_31 = sub_32;
  if (coresystem_p2_input) {
    v = sub_51;
    sub_54 = false;
  } else {
    v = false;
    sub_54 = sub_51;
  };
  if (coresystem_ck_8_1) {
    sub_53 = v;
  } else {
    sub_53 = sub_54;
  };
  if (coresystem_b_full) {
    v_218 = false;
  } else {
    v_218 = sub_53;
  };
  if (coresystem_c2_bomb) {
    v_219 = sub_52;
  } else {
    v_219 = v_218;
  };
  if (coresystem_ck_14_1) {
    v_220 = v_219;
  } else {
    v_220 = sub_31;
  };
  if (p_coresystem_c2_matting) {
    sub_0 = v_220;
  } else {
    sub_0 = sub_1;
  };
  _out->coresystem_c2_matting = sub_0;;
}

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
  Coresystem_controller__coresystem_controller_coresystem_c1_matting_out* _out) {
  
  int v_231;
  int v_230;
  int v_229;
  int v_228;
  int v_227;
  int v_226;
  int v_225;
  int v_224;
  int v_223;
  int v_222;
  int v_221;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  sub_15 = p_coresystem_c1_matting;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_17 = false;
  if (coresystem_p1_input) {
    v_222 = sub_14;
    sub_16 = sub_17;
  } else {
    v_222 = sub_17;
    sub_16 = sub_14;
  };
  if (coresystem_ck_1) {
    v_223 = v_222;
  } else {
    v_223 = sub_16;
  };
  if (coresystem_buffer) {
    v_224 = sub_13;
  } else {
    v_224 = v_223;
  };
  if (coresystem_ck_18_1) {
    sub_11 = v_224;
  } else {
    sub_11 = sub_12;
  };
  if (coresystem_ck_16_1) {
    sub_10 = sub_12;
  } else {
    sub_10 = sub_11;
  };
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_19 = sub_12;
  sub_18 = sub_19;
  if (coresystem_p4_input) {
    v_225 = sub_18;
    sub_7 = sub_8;
  } else {
    v_225 = sub_8;
    sub_7 = sub_18;
  };
  if (coresystem_ck_12_1) {
    sub_6 = v_225;
  } else {
    sub_6 = sub_7;
  };
  sub_20 = sub_18;
  if (coresystem_p3_input) {
    v_226 = sub_20;
    sub_5 = sub_6;
  } else {
    v_226 = sub_6;
    sub_5 = sub_20;
  };
  if (coresystem_ck_10_1) {
    sub_4 = v_226;
  } else {
    sub_4 = sub_5;
  };
  if (coresystem_p2_input) {
    v_227 = false;
    sub_3 = sub_4;
  } else {
    v_227 = sub_4;
    sub_3 = false;
  };
  if (coresystem_ck_8_1) {
    v_228 = v_227;
  } else {
    v_228 = sub_3;
  };
  sub_23 = sub_20;
  if (coresystem_p2_input) {
    v_221 = sub_23;
    sub_22 = sub_4;
  } else {
    v_221 = sub_4;
    sub_22 = sub_23;
  };
  if (coresystem_ck_8_1) {
    sub_21 = v_221;
  } else {
    sub_21 = sub_22;
  };
  if (coresystem_c1_bomb) {
    v_229 = v_228;
  } else {
    v_229 = sub_21;
  };
  sub_24 = sub_21;
  if (coresystem_b_full) {
    sub_2 = v_229;
  } else {
    sub_2 = sub_24;
  };
  sub_1 = sub_2;
  if (coresystem_p2_input) {
    v = sub_23;
    sub_26 = false;
  } else {
    v = false;
    sub_26 = sub_23;
  };
  if (coresystem_ck_8_1) {
    sub_25 = v;
  } else {
    sub_25 = sub_26;
  };
  if (coresystem_b_full) {
    v_230 = false;
  } else {
    v_230 = sub_25;
  };
  if (coresystem_c2_bomb) {
    v_231 = sub_24;
  } else {
    v_231 = v_230;
  };
  if (coresystem_ck_14_1) {
    sub_0 = v_231;
  } else {
    sub_0 = sub_1;
  };
  _out->coresystem_c1_matting = sub_0;;
}

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
  Coresystem_controller__coresystem_controller_coresystem_c2_bomb_out* _out) {
  
  int v_235;
  int v_234;
  int v_233;
  int v_232;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  sub_10 = p_coresystem_c2_bomb;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  if (coresystem_p2_input) {
    v_232 = false;
    sub_2 = sub_3;
  } else {
    v_232 = sub_3;
    sub_2 = false;
  };
  if (coresystem_ck_8_1) {
    v_233 = v_232;
  } else {
    v_233 = sub_2;
  };
  sub_11 = sub_3;
  if (coresystem_c1_bomb) {
    v_234 = v_233;
  } else {
    v_234 = sub_11;
  };
  if (coresystem_b_full) {
    sub_1 = v_234;
  } else {
    sub_1 = sub_11;
  };
  sub_19 = true;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  if (coresystem_p2_input) {
    v = sub_3;
    sub_21 = sub_13;
  } else {
    v = sub_13;
    sub_21 = sub_3;
  };
  if (coresystem_ck_8_1) {
    sub_20 = v;
  } else {
    sub_20 = sub_21;
  };
  if (coresystem_b_full) {
    v_235 = sub_12;
  } else {
    v_235 = sub_20;
  };
  if (coresystem_ck_14_1) {
    sub_0 = v_235;
  } else {
    sub_0 = sub_1;
  };
  _out->coresystem_c2_bomb = sub_0;;
}

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
  Coresystem_controller__coresystem_controller_coresystem_c1_bomb_out* _out) {
  
  int v_236;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  sub_10 = p_coresystem_c1_bomb;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_17 = false;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  if (coresystem_p2_input) {
    v = sub_11;
    sub_2 = sub_3;
  } else {
    v = sub_3;
    sub_2 = sub_11;
  };
  if (coresystem_ck_8_1) {
    v_236 = v;
  } else {
    v_236 = sub_2;
  };
  sub_18 = sub_3;
  if (coresystem_b_full) {
    sub_1 = v_236;
  } else {
    sub_1 = sub_18;
  };
  if (coresystem_ck_14_1) {
    sub_0 = sub_18;
  } else {
    sub_0 = sub_1;
  };
  _out->coresystem_c1_bomb = sub_0;;
}

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
                                                       Coresystem_controller__coresystem_controller_out* _out) {
  Coresystem_controller__coresystem_controller_coresystem_c1_robot_out Coresystem_controller__coresystem_controller_coresystem_c1_robot_out_st;
  Coresystem_controller__coresystem_controller_coresystem_c1_pneumatic_out Coresystem_controller__coresystem_controller_coresystem_c1_pneumatic_out_st;
  Coresystem_controller__coresystem_controller_coresystem_c2_bomb_out Coresystem_controller__coresystem_controller_coresystem_c2_bomb_out_st;
  Coresystem_controller__coresystem_controller_coresystem_c2_matting_out Coresystem_controller__coresystem_controller_coresystem_c2_matting_out_st;
  Coresystem_controller__coresystem_controller_coresystem_c1_capper_out Coresystem_controller__coresystem_controller_coresystem_c1_capper_out_st;
  Coresystem_controller__coresystem_controller_coresystem_c2_capper_out Coresystem_controller__coresystem_controller_coresystem_c2_capper_out_st;
  Coresystem_controller__coresystem_controller_coresystem_c1_bomb_out Coresystem_controller__coresystem_controller_coresystem_c1_bomb_out_st;
  Coresystem_controller__coresystem_controller_coresystem_c1_matting_out Coresystem_controller__coresystem_controller_coresystem_c1_matting_out_st;
  Coresystem_controller__coresystem_controller_coresystem_c2_robot_out Coresystem_controller__coresystem_controller_coresystem_c2_robot_out_st;
  Coresystem_controller__coresystem_controller_coresystem_c2_pneumatic_out Coresystem_controller__coresystem_controller_coresystem_c2_pneumatic_out_st;
  Coresystem_controller__coresystem_controller_coresystem_c1_bomb_step(
  coresystem_p1_input, coresystem_p2_input, coresystem_p3_input,
  coresystem_p4_input, coresystem_buffer, coresystem_b_full,
  coresystem_capper_buffer, coresystem_b_capped, coresystem_out_buffer,
  coresystem_ck_1, coresystem_pnr_8, coresystem_ck_8_1, coresystem_pnr_7,
  coresystem_ck_10_1, coresystem_pnr_6, coresystem_ck_12_1, coresystem_pnr_5,
  coresystem_ck_14_1, coresystem_pnr_4, coresystem_ck_16_1, coresystem_pnr_3,
  coresystem_ck_18_1, coresystem_pnr_2, coresystem_ck_20_1, coresystem_pnr_1,
  coresystem_ck_22_1, coresystem_pnr, p_coresystem_c2_robot,
  p_coresystem_c1_robot, p_coresystem_c2_capper, p_coresystem_c1_capper,
  p_coresystem_c2_pneumatic, p_coresystem_c1_pneumatic,
  p_coresystem_c2_matting, p_coresystem_c1_matting, p_coresystem_c2_bomb,
  p_coresystem_c1_bomb,
  &Coresystem_controller__coresystem_controller_coresystem_c1_bomb_out_st);
  _out->coresystem_c1_bomb = Coresystem_controller__coresystem_controller_coresystem_c1_bomb_out_st.coresystem_c1_bomb;
  Coresystem_controller__coresystem_controller_coresystem_c2_bomb_step(
  coresystem_p1_input, coresystem_p2_input, coresystem_p3_input,
  coresystem_p4_input, coresystem_buffer, coresystem_b_full,
  coresystem_capper_buffer, coresystem_b_capped, coresystem_out_buffer,
  coresystem_ck_1, coresystem_pnr_8, coresystem_ck_8_1, coresystem_pnr_7,
  coresystem_ck_10_1, coresystem_pnr_6, coresystem_ck_12_1, coresystem_pnr_5,
  coresystem_ck_14_1, coresystem_pnr_4, coresystem_ck_16_1, coresystem_pnr_3,
  coresystem_ck_18_1, coresystem_pnr_2, coresystem_ck_20_1, coresystem_pnr_1,
  coresystem_ck_22_1, coresystem_pnr, p_coresystem_c2_robot,
  p_coresystem_c1_robot, p_coresystem_c2_capper, p_coresystem_c1_capper,
  p_coresystem_c2_pneumatic, p_coresystem_c1_pneumatic,
  p_coresystem_c2_matting, p_coresystem_c1_matting, p_coresystem_c2_bomb,
  p_coresystem_c1_bomb, _out->coresystem_c1_bomb,
  &Coresystem_controller__coresystem_controller_coresystem_c2_bomb_out_st);
  _out->coresystem_c2_bomb = Coresystem_controller__coresystem_controller_coresystem_c2_bomb_out_st.coresystem_c2_bomb;
  Coresystem_controller__coresystem_controller_coresystem_c1_matting_step(
  coresystem_p1_input, coresystem_p2_input, coresystem_p3_input,
  coresystem_p4_input, coresystem_buffer, coresystem_b_full,
  coresystem_capper_buffer, coresystem_b_capped, coresystem_out_buffer,
  coresystem_ck_1, coresystem_pnr_8, coresystem_ck_8_1, coresystem_pnr_7,
  coresystem_ck_10_1, coresystem_pnr_6, coresystem_ck_12_1, coresystem_pnr_5,
  coresystem_ck_14_1, coresystem_pnr_4, coresystem_ck_16_1, coresystem_pnr_3,
  coresystem_ck_18_1, coresystem_pnr_2, coresystem_ck_20_1, coresystem_pnr_1,
  coresystem_ck_22_1, coresystem_pnr, p_coresystem_c2_robot,
  p_coresystem_c1_robot, p_coresystem_c2_capper, p_coresystem_c1_capper,
  p_coresystem_c2_pneumatic, p_coresystem_c1_pneumatic,
  p_coresystem_c2_matting, p_coresystem_c1_matting, p_coresystem_c2_bomb,
  p_coresystem_c1_bomb, _out->coresystem_c2_bomb, _out->coresystem_c1_bomb,
  &Coresystem_controller__coresystem_controller_coresystem_c1_matting_out_st);
  _out->coresystem_c1_matting = Coresystem_controller__coresystem_controller_coresystem_c1_matting_out_st.coresystem_c1_matting;
  Coresystem_controller__coresystem_controller_coresystem_c2_matting_step(
  coresystem_p1_input, coresystem_p2_input, coresystem_p3_input,
  coresystem_p4_input, coresystem_buffer, coresystem_b_full,
  coresystem_capper_buffer, coresystem_b_capped, coresystem_out_buffer,
  coresystem_ck_1, coresystem_pnr_8, coresystem_ck_8_1, coresystem_pnr_7,
  coresystem_ck_10_1, coresystem_pnr_6, coresystem_ck_12_1, coresystem_pnr_5,
  coresystem_ck_14_1, coresystem_pnr_4, coresystem_ck_16_1, coresystem_pnr_3,
  coresystem_ck_18_1, coresystem_pnr_2, coresystem_ck_20_1, coresystem_pnr_1,
  coresystem_ck_22_1, coresystem_pnr, p_coresystem_c2_robot,
  p_coresystem_c1_robot, p_coresystem_c2_capper, p_coresystem_c1_capper,
  p_coresystem_c2_pneumatic, p_coresystem_c1_pneumatic,
  p_coresystem_c2_matting, p_coresystem_c1_matting, p_coresystem_c2_bomb,
  p_coresystem_c1_bomb, _out->coresystem_c1_matting,
  _out->coresystem_c2_bomb, _out->coresystem_c1_bomb,
  &Coresystem_controller__coresystem_controller_coresystem_c2_matting_out_st);
  _out->coresystem_c2_matting = Coresystem_controller__coresystem_controller_coresystem_c2_matting_out_st.coresystem_c2_matting;
  Coresystem_controller__coresystem_controller_coresystem_c1_pneumatic_step(
  coresystem_p1_input, coresystem_p2_input, coresystem_p3_input,
  coresystem_p4_input, coresystem_buffer, coresystem_b_full,
  coresystem_capper_buffer, coresystem_b_capped, coresystem_out_buffer,
  coresystem_ck_1, coresystem_pnr_8, coresystem_ck_8_1, coresystem_pnr_7,
  coresystem_ck_10_1, coresystem_pnr_6, coresystem_ck_12_1, coresystem_pnr_5,
  coresystem_ck_14_1, coresystem_pnr_4, coresystem_ck_16_1, coresystem_pnr_3,
  coresystem_ck_18_1, coresystem_pnr_2, coresystem_ck_20_1, coresystem_pnr_1,
  coresystem_ck_22_1, coresystem_pnr, p_coresystem_c2_robot,
  p_coresystem_c1_robot, p_coresystem_c2_capper, p_coresystem_c1_capper,
  p_coresystem_c2_pneumatic, p_coresystem_c1_pneumatic,
  p_coresystem_c2_matting, p_coresystem_c1_matting, p_coresystem_c2_bomb,
  p_coresystem_c1_bomb, _out->coresystem_c2_matting,
  _out->coresystem_c1_matting, _out->coresystem_c2_bomb,
  _out->coresystem_c1_bomb,
  &Coresystem_controller__coresystem_controller_coresystem_c1_pneumatic_out_st);
  _out->coresystem_c1_pneumatic = Coresystem_controller__coresystem_controller_coresystem_c1_pneumatic_out_st.coresystem_c1_pneumatic;
  Coresystem_controller__coresystem_controller_coresystem_c2_pneumatic_step(
  coresystem_p1_input, coresystem_p2_input, coresystem_p3_input,
  coresystem_p4_input, coresystem_buffer, coresystem_b_full,
  coresystem_capper_buffer, coresystem_b_capped, coresystem_out_buffer,
  coresystem_ck_1, coresystem_pnr_8, coresystem_ck_8_1, coresystem_pnr_7,
  coresystem_ck_10_1, coresystem_pnr_6, coresystem_ck_12_1, coresystem_pnr_5,
  coresystem_ck_14_1, coresystem_pnr_4, coresystem_ck_16_1, coresystem_pnr_3,
  coresystem_ck_18_1, coresystem_pnr_2, coresystem_ck_20_1, coresystem_pnr_1,
  coresystem_ck_22_1, coresystem_pnr, p_coresystem_c2_robot,
  p_coresystem_c1_robot, p_coresystem_c2_capper, p_coresystem_c1_capper,
  p_coresystem_c2_pneumatic, p_coresystem_c1_pneumatic,
  p_coresystem_c2_matting, p_coresystem_c1_matting, p_coresystem_c2_bomb,
  p_coresystem_c1_bomb, _out->coresystem_c1_pneumatic,
  _out->coresystem_c2_matting, _out->coresystem_c1_matting,
  _out->coresystem_c2_bomb, _out->coresystem_c1_bomb,
  &Coresystem_controller__coresystem_controller_coresystem_c2_pneumatic_out_st);
  _out->coresystem_c2_pneumatic = Coresystem_controller__coresystem_controller_coresystem_c2_pneumatic_out_st.coresystem_c2_pneumatic;
  Coresystem_controller__coresystem_controller_coresystem_c1_capper_step(
  coresystem_p1_input, coresystem_p2_input, coresystem_p3_input,
  coresystem_p4_input, coresystem_buffer, coresystem_b_full,
  coresystem_capper_buffer, coresystem_b_capped, coresystem_out_buffer,
  coresystem_ck_1, coresystem_pnr_8, coresystem_ck_8_1, coresystem_pnr_7,
  coresystem_ck_10_1, coresystem_pnr_6, coresystem_ck_12_1, coresystem_pnr_5,
  coresystem_ck_14_1, coresystem_pnr_4, coresystem_ck_16_1, coresystem_pnr_3,
  coresystem_ck_18_1, coresystem_pnr_2, coresystem_ck_20_1, coresystem_pnr_1,
  coresystem_ck_22_1, coresystem_pnr, p_coresystem_c2_robot,
  p_coresystem_c1_robot, p_coresystem_c2_capper, p_coresystem_c1_capper,
  p_coresystem_c2_pneumatic, p_coresystem_c1_pneumatic,
  p_coresystem_c2_matting, p_coresystem_c1_matting, p_coresystem_c2_bomb,
  p_coresystem_c1_bomb, _out->coresystem_c2_pneumatic,
  _out->coresystem_c1_pneumatic, _out->coresystem_c2_matting,
  _out->coresystem_c1_matting, _out->coresystem_c2_bomb,
  _out->coresystem_c1_bomb,
  &Coresystem_controller__coresystem_controller_coresystem_c1_capper_out_st);
  _out->coresystem_c1_capper = Coresystem_controller__coresystem_controller_coresystem_c1_capper_out_st.coresystem_c1_capper;
  Coresystem_controller__coresystem_controller_coresystem_c2_capper_step(
  coresystem_p1_input, coresystem_p2_input, coresystem_p3_input,
  coresystem_p4_input, coresystem_buffer, coresystem_b_full,
  coresystem_capper_buffer, coresystem_b_capped, coresystem_out_buffer,
  coresystem_ck_1, coresystem_pnr_8, coresystem_ck_8_1, coresystem_pnr_7,
  coresystem_ck_10_1, coresystem_pnr_6, coresystem_ck_12_1, coresystem_pnr_5,
  coresystem_ck_14_1, coresystem_pnr_4, coresystem_ck_16_1, coresystem_pnr_3,
  coresystem_ck_18_1, coresystem_pnr_2, coresystem_ck_20_1, coresystem_pnr_1,
  coresystem_ck_22_1, coresystem_pnr, p_coresystem_c2_robot,
  p_coresystem_c1_robot, p_coresystem_c2_capper, p_coresystem_c1_capper,
  p_coresystem_c2_pneumatic, p_coresystem_c1_pneumatic,
  p_coresystem_c2_matting, p_coresystem_c1_matting, p_coresystem_c2_bomb,
  p_coresystem_c1_bomb, _out->coresystem_c1_capper,
  _out->coresystem_c2_pneumatic, _out->coresystem_c1_pneumatic,
  _out->coresystem_c2_matting, _out->coresystem_c1_matting,
  _out->coresystem_c2_bomb, _out->coresystem_c1_bomb,
  &Coresystem_controller__coresystem_controller_coresystem_c2_capper_out_st);
  _out->coresystem_c2_capper = Coresystem_controller__coresystem_controller_coresystem_c2_capper_out_st.coresystem_c2_capper;
  Coresystem_controller__coresystem_controller_coresystem_c1_robot_step(
  coresystem_p1_input, coresystem_p2_input, coresystem_p3_input,
  coresystem_p4_input, coresystem_buffer, coresystem_b_full,
  coresystem_capper_buffer, coresystem_b_capped, coresystem_out_buffer,
  coresystem_ck_1, coresystem_pnr_8, coresystem_ck_8_1, coresystem_pnr_7,
  coresystem_ck_10_1, coresystem_pnr_6, coresystem_ck_12_1, coresystem_pnr_5,
  coresystem_ck_14_1, coresystem_pnr_4, coresystem_ck_16_1, coresystem_pnr_3,
  coresystem_ck_18_1, coresystem_pnr_2, coresystem_ck_20_1, coresystem_pnr_1,
  coresystem_ck_22_1, coresystem_pnr, p_coresystem_c2_robot,
  p_coresystem_c1_robot, p_coresystem_c2_capper, p_coresystem_c1_capper,
  p_coresystem_c2_pneumatic, p_coresystem_c1_pneumatic,
  p_coresystem_c2_matting, p_coresystem_c1_matting, p_coresystem_c2_bomb,
  p_coresystem_c1_bomb, _out->coresystem_c2_capper,
  _out->coresystem_c1_capper, _out->coresystem_c2_pneumatic,
  _out->coresystem_c1_pneumatic, _out->coresystem_c2_matting,
  _out->coresystem_c1_matting, _out->coresystem_c2_bomb,
  _out->coresystem_c1_bomb,
  &Coresystem_controller__coresystem_controller_coresystem_c1_robot_out_st);
  _out->coresystem_c1_robot = Coresystem_controller__coresystem_controller_coresystem_c1_robot_out_st.coresystem_c1_robot;
  Coresystem_controller__coresystem_controller_coresystem_c2_robot_step(
  coresystem_p1_input, coresystem_p2_input, coresystem_p3_input,
  coresystem_p4_input, coresystem_buffer, coresystem_b_full,
  coresystem_capper_buffer, coresystem_b_capped, coresystem_out_buffer,
  coresystem_ck_1, coresystem_pnr_8, coresystem_ck_8_1, coresystem_pnr_7,
  coresystem_ck_10_1, coresystem_pnr_6, coresystem_ck_12_1, coresystem_pnr_5,
  coresystem_ck_14_1, coresystem_pnr_4, coresystem_ck_16_1, coresystem_pnr_3,
  coresystem_ck_18_1, coresystem_pnr_2, coresystem_ck_20_1, coresystem_pnr_1,
  coresystem_ck_22_1, coresystem_pnr, p_coresystem_c2_robot,
  p_coresystem_c1_robot, p_coresystem_c2_capper, p_coresystem_c1_capper,
  p_coresystem_c2_pneumatic, p_coresystem_c1_pneumatic,
  p_coresystem_c2_matting, p_coresystem_c1_matting, p_coresystem_c2_bomb,
  p_coresystem_c1_bomb, _out->coresystem_c1_robot,
  _out->coresystem_c2_capper, _out->coresystem_c1_capper,
  _out->coresystem_c2_pneumatic, _out->coresystem_c1_pneumatic,
  _out->coresystem_c2_matting, _out->coresystem_c1_matting,
  _out->coresystem_c2_bomb, _out->coresystem_c1_bomb,
  &Coresystem_controller__coresystem_controller_coresystem_c2_robot_out_st);
  _out->coresystem_c2_robot = Coresystem_controller__coresystem_controller_coresystem_c2_robot_out_st.coresystem_c2_robot;
}

