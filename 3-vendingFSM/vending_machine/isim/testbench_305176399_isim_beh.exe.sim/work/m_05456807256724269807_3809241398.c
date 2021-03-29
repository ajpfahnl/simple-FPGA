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
static const char *ng0 = "/home/ise/Desktop/Lab3/src/testbench_305176399.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static const char *ng3 = "\t INVALID_SEL";
static const char *ng4 = ">> TEST: no reload";
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static const char *ng7 = ">> TEST: valid run";
static int ng8[] = {2, 0};
static const char *ng9 = ">> TEST: full to empty slot";
static int ng10[] = {3, 0};
static int ng11[] = {11, 0};
static const char *ng12 = "FINISHED VALID CYCLE: %d";
static const char *ng13 = ">> TEST: invalid selection number";
static int ng14[] = {4, 0};
static const char *ng15 = ">> TEST: code timeout";
static int ng16[] = {5, 0};
static const char *ng17 = "\t reset to IDLE: first number timeout";
static const char *ng18 = "\t reset to IDLE: second number timeout";



static int sp_reset_in(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 4024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4184);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(44, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4344);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4504);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3864);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4664);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_reset_n_load(char *t1, char *t2)
{
    int t0;
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
    char *t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t1 + 3704);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t7, &&LAB6);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t1, t10, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t10, t11);

LAB8:    t12 = (t2 + 64U);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t20 = ((int  (*)(char *, char *))t19)(t1, t13);
    if (t20 == -1)
        goto LAB9;

LAB10:    if (t20 != 0)
        goto LAB11;

LAB6:    t13 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t13);

LAB7:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t21 = (t1 + 848);
    t23 = (t2 + 56U);
    t24 = *((char **)t23);
    xsi_delete_subprogram_invocation(t21, t22, t1, t24, t2);
    xsi_set_current_line(53, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB12;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t12 = (t2 + 48U);
    *((char **)t12) = &&LAB8;
    goto LAB1;

LAB12:    xsi_set_current_line(53, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t1 + 3704);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB13;
    t0 = 1;
    goto LAB1;

LAB13:    xsi_set_current_line(53, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t1 + 3864);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB14;
    t0 = 1;
    goto LAB1;

LAB14:    xsi_set_current_line(53, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t1 + 3864);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB4;

}

static int sp_vend_cycle(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
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

LAB6:    xsi_set_current_line(59, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t1 + 4024);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(60, ng0);
    t6 = (t1 + 5144);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t1 + 4184);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4344);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB8;
    t0 = 1;
    goto LAB1;

LAB8:    xsi_set_current_line(61, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t1 + 4344);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(62, ng0);
    t6 = (t1 + 5304);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t1 + 4184);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 4);
    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4344);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB10;
    t0 = 1;
    goto LAB1;

LAB10:    xsi_set_current_line(63, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t1 + 4344);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t4 = (t1 + 2504U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(65, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB14;
    t0 = 1;
    goto LAB1;

LAB11:    xsi_set_current_line(64, ng0);
    t6 = (t1 + 1712);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t6);
    goto LAB13;

LAB14:    xsi_set_current_line(65, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t1 + 4504);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4024);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB15;
    t0 = 1;
    goto LAB1;

LAB15:    xsi_set_current_line(66, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t1 + 4664);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB16;
    t0 = 1;
    goto LAB1;

LAB16:    xsi_set_current_line(67, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t1 + 4664);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB17;
    t0 = 1;
    goto LAB1;

LAB17:    goto LAB4;

}

static void Always_74_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 6216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 6024);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 3544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 3544);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_76_1(char *t0)
{
    char t27[8];
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
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 6464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);

LAB4:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 6272);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB8:    t6 = (t0 + 6368);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB10:    if (t14 != 0)
        goto LAB11;

LAB6:    t7 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t7);

LAB7:    t15 = (t0 + 6368);
    t16 = *((char **)t15);
    t15 = (t0 + 848);
    t17 = (t0 + 6272);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB9:;
LAB11:    t6 = (t0 + 6464U);
    *((char **)t6) = &&LAB8;
    goto LAB1;

LAB12:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3704);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(83, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4344);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4344);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t19 = *((unsigned int *)t2);
    t20 = (~(t19));
    t21 = *((unsigned int *)t3);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB18:    xsi_set_current_line(89, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    goto LAB20;

LAB21:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(92, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 6272);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB25:    t5 = (t0 + 6368);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t14 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB27:    if (t14 != 0)
        goto LAB28;

LAB23:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB24:    t13 = (t0 + 6368);
    t15 = *((char **)t13);
    t13 = (t0 + 1280);
    t16 = (t0 + 6272);
    t17 = 0;
    xsi_delete_subprogram_invocation(t13, t15, t0, t16, t17);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB26:;
LAB28:    t5 = (t0 + 6464U);
    *((char **)t5) = &&LAB25;
    goto LAB1;

LAB29:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3704);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3864);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3864);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng8)));
    t4 = (t0 + 6272);
    t5 = (t0 + 1712);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5144);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5304);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB34:    t9 = (t0 + 6368);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t15 = *((char **)t13);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t14 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB36:    if (t14 != 0)
        goto LAB37;

LAB32:    t10 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t10);

LAB33:    t18 = (t0 + 6368);
    t24 = *((char **)t18);
    t18 = (t0 + 1712);
    t25 = (t0 + 6272);
    t26 = 0;
    xsi_delete_subprogram_invocation(t18, t24, t0, t25, t26);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB35:;
LAB37:    t9 = (t0 + 6464U);
    *((char **)t9) = &&LAB34;
    goto LAB1;

LAB38:    xsi_set_current_line(99, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 6272);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB41:    t5 = (t0 + 6368);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t14 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB43:    if (t14 != 0)
        goto LAB44;

LAB39:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB40:    t13 = (t0 + 6368);
    t15 = *((char **)t13);
    t13 = (t0 + 1280);
    t16 = (t0 + 6272);
    t17 = 0;
    xsi_delete_subprogram_invocation(t13, t15, t0, t16, t17);
    xsi_set_current_line(101, ng0);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB45:    t2 = (t0 + 4984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t27, 0, 8);
    xsi_vlog_signed_leq(t27, 32, t4, 32, t5, 32);
    t6 = (t27 + 4);
    t19 = *((unsigned int *)t6);
    t20 = (~(t19));
    t21 = *((unsigned int *)t27);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB42:;
LAB44:    t5 = (t0 + 6464U);
    *((char **)t5) = &&LAB41;
    goto LAB1;

LAB46:    xsi_set_current_line(101, ng0);

LAB48:    xsi_set_current_line(102, ng0);
    t7 = ((char*)((ng2)));
    t8 = ((char*)((ng8)));
    t9 = (t0 + 6272);
    t10 = (t0 + 1712);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 5144);
    xsi_vlogvar_assign_value(t12, t7, 0, 0, 4);
    t13 = (t0 + 5304);
    xsi_vlogvar_assign_value(t13, t8, 0, 0, 4);

LAB51:    t15 = (t0 + 6368);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t24 = (t18 + 272U);
    t25 = *((char **)t24);
    t26 = (t25 + 0U);
    t28 = *((char **)t26);
    t14 = ((int  (*)(char *, char *))t28)(t0, t16);

LAB53:    if (t14 != 0)
        goto LAB54;

LAB49:    t16 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t16);

LAB50:    t29 = (t0 + 6368);
    t30 = *((char **)t29);
    t29 = (t0 + 1712);
    t31 = (t0 + 6272);
    t32 = 0;
    xsi_delete_subprogram_invocation(t29, t30, t0, t31, t32);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng12, 2, t0, (char)119, t4, 32);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t27, 0, 8);
    xsi_vlog_signed_add(t27, 32, t4, 32, t5, 32);
    t6 = (t0 + 4984);
    xsi_vlogvar_assign_value(t6, t27, 0, 0, 32);
    goto LAB45;

LAB52:;
LAB54:    t15 = (t0 + 6464U);
    *((char **)t15) = &&LAB51;
    goto LAB1;

LAB55:    xsi_set_current_line(107, ng0);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 6272);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB58:    t5 = (t0 + 6368);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t14 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB60:    if (t14 != 0)
        goto LAB61;

LAB56:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB57:    t13 = (t0 + 6368);
    t15 = *((char **)t13);
    t13 = (t0 + 1280);
    t16 = (t0 + 6272);
    t17 = 0;
    xsi_delete_subprogram_invocation(t13, t15, t0, t16, t17);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng1)));
    t4 = (t0 + 6272);
    t5 = (t0 + 1712);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5144);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5304);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB64:    t9 = (t0 + 6368);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t15 = *((char **)t13);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t14 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB66:    if (t14 != 0)
        goto LAB67;

LAB62:    t10 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t10);

LAB63:    t18 = (t0 + 6368);
    t24 = *((char **)t18);
    t18 = (t0 + 1712);
    t25 = (t0 + 6272);
    t26 = 0;
    xsi_delete_subprogram_invocation(t18, t24, t0, t25, t26);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB59:;
LAB61:    t5 = (t0 + 6464U);
    *((char **)t5) = &&LAB58;
    goto LAB1;

LAB65:;
LAB67:    t9 = (t0 + 6464U);
    *((char **)t9) = &&LAB64;
    goto LAB1;

LAB68:    xsi_set_current_line(111, ng0);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t0);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 6272);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB71:    t5 = (t0 + 6368);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t14 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB73:    if (t14 != 0)
        goto LAB74;

LAB69:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB70:    t13 = (t0 + 6368);
    t15 = *((char **)t13);
    t13 = (t0 + 1280);
    t16 = (t0 + 6272);
    t17 = 0;
    xsi_delete_subprogram_invocation(t13, t15, t0, t16, t17);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB72:;
LAB74:    t5 = (t0 + 6464U);
    *((char **)t5) = &&LAB71;
    goto LAB1;

LAB75:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4024);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB76;
    goto LAB1;

LAB76:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 60000LL);
    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB77:    xsi_set_current_line(115, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB78;
    goto LAB1;

LAB78:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4024);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB79:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4344);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB80:    xsi_set_current_line(118, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4344);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB81:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 6272);
    xsi_process_wait(t2, 60000LL);
    *((char **)t1) = &&LAB82;
    goto LAB1;

LAB82:    xsi_set_current_line(120, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    xsi_set_current_line(122, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_05456807256724269807_3809241398_init()
{
	static char *pe[] = {(void *)Always_74_0,(void *)Initial_76_1};
	static char *se[] = {(void *)sp_reset_in,(void *)sp_reset_n_load,(void *)sp_vend_cycle};
	xsi_register_didat("work_m_05456807256724269807_3809241398", "isim/testbench_305176399_isim_beh.exe.sim/work/m_05456807256724269807_3809241398.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
