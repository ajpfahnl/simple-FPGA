/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Desktop/Lab1/src/testbench_305176399.v";
static const char *ng1 = "Passed";
static int ng2[] = {1, 0};
static const char *ng3 = "Fail for D: %0b";
static const char *ng4 = "\n\tS: %0b vs %0b";
static const char *ng5 = "\n\tE: %0b vs %0b";
static const char *ng6 = "\n\tF: %0b vs %0b";
static int ng7[] = {0, 0};
static unsigned int ng8[] = {0U, 0U};
static unsigned int ng9[] = {1U, 0U};
static unsigned int ng10[] = {108U, 0U};
static unsigned int ng11[] = {2U, 0U};
static unsigned int ng12[] = {27U, 0U};
static unsigned int ng13[] = {8084U, 0U};
static unsigned int ng14[] = {109U, 0U};
static unsigned int ng15[] = {8083U, 0U};
static unsigned int ng16[] = {110U, 0U};
static unsigned int ng17[] = {28U, 0U};
static unsigned int ng18[] = {8082U, 0U};
static unsigned int ng19[] = {111U, 0U};
static unsigned int ng20[] = {8081U, 0U};
static unsigned int ng21[] = {253U, 0U};
static unsigned int ng22[] = {4U, 0U};
static unsigned int ng23[] = {16U, 0U};
static unsigned int ng24[] = {7939U, 0U};
static unsigned int ng25[] = {4064U, 0U};
static unsigned int ng26[] = {7U, 0U};
static unsigned int ng27[] = {31U, 0U};
static unsigned int ng28[] = {4095U, 0U};
static unsigned int ng29[] = {4097U, 0U};
static unsigned int ng30[] = {4096U, 0U};
static const char *ng31 = "Failures: %0d";



static int sp_assert(char *t1, char *t2)
{
    char t9[8];
    char t24[8];
    char t41[8];
    char t56[8];
    char t64[8];
    char t96[8];
    char t113[8];
    char t128[8];
    char t136[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    int t160;
    int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(18, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 10000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(19, ng0);
    t4 = (t1 + 2520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 1480U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t8);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB10;

LAB7:    if (t20 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t9) = 1;

LAB10:    memset(t24, 0, 8);
    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t25) != 0)
        goto LAB13;

LAB14:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB15;

LAB16:    memcpy(t64, t24, 8);

LAB17:    memset(t96, 0, 8);
    t97 = (t64 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t64);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t97) != 0)
        goto LAB31;

LAB32:    t104 = (t96 + 4);
    t105 = *((unsigned int *)t96);
    t106 = *((unsigned int *)t104);
    t107 = (t105 || t106);
    if (t107 > 0)
        goto LAB33;

LAB34:    memcpy(t136, t96, 8);

LAB35:    t168 = (t136 + 4);
    t169 = *((unsigned int *)t168);
    t170 = (~(t169));
    t171 = *((unsigned int *)t136);
    t172 = (t171 & t170);
    t173 = (t172 != 0);
    if (t173 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(21, ng0);

LAB50:    xsi_set_current_line(22, ng0);
    t4 = (t1 + 2360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 2360);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    xsi_set_current_line(23, ng0);
    t4 = (t1 + 2200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 0, ng3, 2, t7, (char)118, t6, 13);
    t8 = (t1 + 2520);
    t10 = (t8 + 56U);
    t23 = *((char **)t10);
    t25 = (t1 + 1480U);
    t31 = *((char **)t25);
    t25 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 0, ng4, 3, t25, (char)118, t23, 1, (char)118, t31, 1);
    t32 = (t1 + 2680);
    t36 = (t32 + 56U);
    t37 = *((char **)t36);
    t38 = (t1 + 1640U);
    t39 = *((char **)t38);
    t38 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 0, ng5, 3, t38, (char)118, t37, 3, (char)118, t39, 3);
    t40 = (t1 + 2840);
    t42 = (t40 + 56U);
    t55 = *((char **)t42);
    t57 = (t1 + 1800U);
    t63 = *((char **)t57);
    t57 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t57, (char)118, t55, 5, (char)118, t63, 5);

LAB49:    goto LAB4;

LAB9:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB10;

LAB11:    *((unsigned int *)t24) = 1;
    goto LAB14;

LAB13:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB14;

LAB15:    t36 = (t1 + 2680);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t1 + 1640U);
    t40 = *((char **)t39);
    memset(t41, 0, 8);
    t39 = (t38 + 4);
    t42 = (t40 + 4);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t40);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t39);
    t47 = *((unsigned int *)t42);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t39);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB21;

LAB18:    if (t52 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t41) = 1;

LAB21:    memset(t56, 0, 8);
    t57 = (t41 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t41);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t57) != 0)
        goto LAB24;

LAB25:    t65 = *((unsigned int *)t24);
    t66 = *((unsigned int *)t56);
    t67 = (t65 & t66);
    *((unsigned int *)t64) = t67;
    t68 = (t24 + 4);
    t69 = (t56 + 4);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB17;

LAB20:    t55 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t56) = 1;
    goto LAB25;

LAB24:    t63 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB25;

LAB26:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    t78 = (t24 + 4);
    t79 = (t56 + 4);
    t80 = *((unsigned int *)t24);
    t81 = (~(t80));
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t56);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (~(t86));
    t88 = (t81 & t83);
    t89 = (t85 & t87);
    t90 = (~(t88));
    t91 = (~(t89));
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t93 & t91);
    t94 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t94 & t90);
    t95 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t95 & t91);
    goto LAB28;

LAB29:    *((unsigned int *)t96) = 1;
    goto LAB32;

LAB31:    t103 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB32;

LAB33:    t108 = (t1 + 2840);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    t111 = (t1 + 1800U);
    t112 = *((char **)t111);
    memset(t113, 0, 8);
    t111 = (t110 + 4);
    t114 = (t112 + 4);
    t115 = *((unsigned int *)t110);
    t116 = *((unsigned int *)t112);
    t117 = (t115 ^ t116);
    t118 = *((unsigned int *)t111);
    t119 = *((unsigned int *)t114);
    t120 = (t118 ^ t119);
    t121 = (t117 | t120);
    t122 = *((unsigned int *)t111);
    t123 = *((unsigned int *)t114);
    t124 = (t122 | t123);
    t125 = (~(t124));
    t126 = (t121 & t125);
    if (t126 != 0)
        goto LAB39;

LAB36:    if (t124 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t113) = 1;

LAB39:    memset(t128, 0, 8);
    t129 = (t113 + 4);
    t130 = *((unsigned int *)t129);
    t131 = (~(t130));
    t132 = *((unsigned int *)t113);
    t133 = (t132 & t131);
    t134 = (t133 & 1U);
    if (t134 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t129) != 0)
        goto LAB42;

LAB43:    t137 = *((unsigned int *)t96);
    t138 = *((unsigned int *)t128);
    t139 = (t137 & t138);
    *((unsigned int *)t136) = t139;
    t140 = (t96 + 4);
    t141 = (t128 + 4);
    t142 = (t136 + 4);
    t143 = *((unsigned int *)t140);
    t144 = *((unsigned int *)t141);
    t145 = (t143 | t144);
    *((unsigned int *)t142) = t145;
    t146 = *((unsigned int *)t142);
    t147 = (t146 != 0);
    if (t147 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB35;

LAB38:    t127 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t128) = 1;
    goto LAB43;

LAB42:    t135 = (t128 + 4);
    *((unsigned int *)t128) = 1;
    *((unsigned int *)t135) = 1;
    goto LAB43;

LAB44:    t148 = *((unsigned int *)t136);
    t149 = *((unsigned int *)t142);
    *((unsigned int *)t136) = (t148 | t149);
    t150 = (t96 + 4);
    t151 = (t128 + 4);
    t152 = *((unsigned int *)t96);
    t153 = (~(t152));
    t154 = *((unsigned int *)t150);
    t155 = (~(t154));
    t156 = *((unsigned int *)t128);
    t157 = (~(t156));
    t158 = *((unsigned int *)t151);
    t159 = (~(t158));
    t160 = (t153 & t155);
    t161 = (t157 & t159);
    t162 = (~(t160));
    t163 = (~(t161));
    t164 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t164 & t162);
    t165 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t165 & t163);
    t166 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t166 & t162);
    t167 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t167 & t163);
    goto LAB46;

LAB47:    xsi_set_current_line(20, ng0);
    t174 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t174);
    goto LAB49;

}

static void Initial_32_0(char *t0)
{
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);

LAB4:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 13);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng8)));
    t4 = ((char*)((ng8)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 3);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 5);

LAB9:    t11 = (t0 + 3656);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB11:    if (t19 != 0)
        goto LAB12;

LAB7:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB8:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB10:;
LAB12:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB9;
    goto LAB1;

LAB13:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 13);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng8)));
    t4 = ((char*)((ng9)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 3);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 5);

LAB16:    t11 = (t0 + 3656);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB18:    if (t19 != 0)
        goto LAB19;

LAB14:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB15:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB17:;
LAB19:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB16;
    goto LAB1;

LAB20:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng2)));
    memset(t24, 0, 8);
    xsi_vlog_signed_unary_minus(t24, 32, t3, 32);
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t24, 0, 0, 13);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng8)));
    t4 = ((char*)((ng9)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 3);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 5);

LAB23:    t11 = (t0 + 3656);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB25:    if (t19 != 0)
        goto LAB26;

LAB21:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB22:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB24:;
LAB26:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB23;
    goto LAB1;

LAB27:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 13);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng11)));
    t4 = ((char*)((ng12)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 3);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 5);

LAB30:    t11 = (t0 + 3656);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB32:    if (t19 != 0)
        goto LAB33;

LAB28:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB29:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB31:;
LAB33:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB30;
    goto LAB1;

LAB34:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 13);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng11)));
    t4 = ((char*)((ng12)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 3);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 5);

LAB37:    t11 = (t0 + 3656);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB39:    if (t19 != 0)
        goto LAB40;

LAB35:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB36:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB38:;
LAB40:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB37;
    goto LAB1;

LAB41:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 13);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng11)));
    t4 = ((char*)((ng12)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 3);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 5);

LAB44:    t11 = (t0 + 3656);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB46:    if (t19 != 0)
        goto LAB47;

LAB42:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB43:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB45:;
LAB47:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB44;
    goto LAB1;

LAB48:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 13);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng11)));
    t4 = ((char*)((ng12)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 3);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 5);

LAB51:    t11 = (t0 + 3656);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB53:    if (t19 != 0)
        goto LAB54;

LAB49:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB50:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB52:;
LAB54:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB51;
    goto LAB1;

LAB55:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 13);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng11)));
    t4 = ((char*)((ng17)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 3);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 5);

LAB58:    t11 = (t0 + 3656);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB60:    if (t19 != 0)
        goto LAB61;

LAB56:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB57:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB62;
    goto LAB1;

LAB59:;
LAB61:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB58;
    goto LAB1;

LAB62:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 13);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng11)));
    t4 = ((char*)((ng17)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 3);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 5);

LAB65:    t11 = (t0 + 3656);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB67:    if (t19 != 0)
        goto LAB68;

LAB63:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB64:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB69;
    goto LAB1;

LAB66:;
LAB68:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB65;
    goto LAB1;

LAB69:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 13);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng11)));
    t4 = ((char*)((ng17)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 3);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 5);

LAB72:    t11 = (t0 + 3656);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB74:    if (t19 != 0)
        goto LAB75;

LAB70:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB71:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB76;
    goto LAB1;

LAB73:;
LAB75:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB72;
    goto LAB1;

LAB76:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 13);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng11)));
    t4 = ((char*)((ng17)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 3);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 5);

LAB79:    t11 = (t0 + 3656);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB81:    if (t19 != 0)
        goto LAB82;

LAB77:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB78:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB80:;
LAB82:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB79;
    goto LAB1;

LAB83:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 13);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng22)));
    t4 = ((char*)((ng23)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 3);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 5);

LAB86:    t11 = (t0 + 3656);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB88:    if (t19 != 0)
        goto LAB89;

LAB84:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB85:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB90;
    goto LAB1;

LAB87:;
LAB89:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB86;
    goto LAB1;

LAB90:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 13);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng22)));
    t4 = ((char*)((ng23)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 3);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 5);

LAB93:    t11 = (t0 + 3656);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB95:    if (t19 != 0)
        goto LAB96;

LAB91:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB92:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB97;
    goto LAB1;

LAB94:;
LAB96:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB93;
    goto LAB1;

LAB97:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 13);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng26)));
    t4 = ((char*)((ng27)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 3);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 5);

LAB100:    t11 = (t0 + 3656);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB102:    if (t19 != 0)
        goto LAB103;

LAB98:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB99:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB104;
    goto LAB1;

LAB101:;
LAB103:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB100;
    goto LAB1;

LAB104:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 13);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng26)));
    t4 = ((char*)((ng27)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 3);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 5);

LAB107:    t11 = (t0 + 3656);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB109:    if (t19 != 0)
        goto LAB110;

LAB105:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB106:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB108:;
LAB110:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB107;
    goto LAB1;

LAB111:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng29)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 13);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng26)));
    t4 = ((char*)((ng27)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 3);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 5);

LAB114:    t11 = (t0 + 3656);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB116:    if (t19 != 0)
        goto LAB117;

LAB112:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB113:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB118;
    goto LAB1;

LAB115:;
LAB117:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB114;
    goto LAB1;

LAB118:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng30)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 13);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng26)));
    t4 = ((char*)((ng27)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 1);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 3);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 5);

LAB121:    t11 = (t0 + 3656);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB123:    if (t19 != 0)
        goto LAB124;

LAB119:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB120:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB125;
    goto LAB1;

LAB122:;
LAB124:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB121;
    goto LAB1;

LAB125:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 2360);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng31, 2, t0, (char)118, t5, 32);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB126;
    goto LAB1;

LAB126:    xsi_set_current_line(96, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_03337601418376997780_3809241398_init()
{
	static char *pe[] = {(void *)Initial_32_0};
	static char *se[] = {(void *)sp_assert};
	xsi_register_didat("work_m_03337601418376997780_3809241398", "isim/testbench_305176399_isim_beh.exe.sim/work/m_03337601418376997780_3809241398.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
