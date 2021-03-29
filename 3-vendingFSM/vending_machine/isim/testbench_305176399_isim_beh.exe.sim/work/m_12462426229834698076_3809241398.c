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
static const char *ng4 = "\t FAILED_TRAN";
static const char *ng5 = ">> TEST: no reload -> INVALID_SEL";
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static const char *ng8 = ">> TEST: valid run";
static int ng9[] = {2, 0};
static const char *ng10 = ">> TEST: full to empty slot";
static int ng11[] = {3, 0};
static int ng12[] = {11, 0};
static const char *ng13 = "FINISHED VALID CYCLE: %d";
static const char *ng14 = ">> TEST: invalid selection number";
static int ng15[] = {4, 0};
static const char *ng16 = ">> TEST: key press timeout";
static int ng17[] = {5, 0};
static const char *ng18 = "\t reset to IDLE: first number timeout";
static const char *ng19 = "\t reset to IDLE: second number timeout";
static const char *ng20 = ">> TEST: door timeout";
static int ng21[] = {6, 0};
static int ng22[] = {8, 0};
static const char *ng23 = ">> TEST: door open for a long time (remain in VENDING state)";
static int ng24[] = {7, 0};
static const char *ng25 = ">> TEST: Faield transaction";



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
    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 4184);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4344);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4504);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4664);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4024);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4824);
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
    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t1 + 3864);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(55, ng0);
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
    xsi_set_current_line(55, ng0);
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

LAB12:    xsi_set_current_line(55, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t1 + 3864);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB13;
    t0 = 1;
    goto LAB1;

LAB13:    xsi_set_current_line(55, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t1 + 4024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB14;
    t0 = 1;
    goto LAB1;

LAB14:    xsi_set_current_line(55, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t1 + 4024);
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

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
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

LAB6:    xsi_set_current_line(61, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t1 + 4184);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(62, ng0);
    t6 = (t1 + 5304);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t1 + 4344);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 4);
    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4504);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB8;
    t0 = 1;
    goto LAB1;

LAB8:    xsi_set_current_line(63, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t1 + 4504);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(64, ng0);
    t6 = (t1 + 5464);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t1 + 4344);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 4);
    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4504);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB10;
    t0 = 1;
    goto LAB1;

LAB10:    xsi_set_current_line(65, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t1 + 4504);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB11;
    t0 = 1;
    goto LAB1;

LAB11:    xsi_set_current_line(66, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t1 + 4664);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4184);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB12;
    t0 = 1;
    goto LAB1;

LAB12:    xsi_set_current_line(67, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t1 + 4824);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB13;
    t0 = 1;
    goto LAB1;

LAB13:    xsi_set_current_line(68, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t1 + 4824);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB14;
    t0 = 1;
    goto LAB1;

LAB14:    goto LAB4;

}

static void Always_75_0(char *t0)
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

LAB0:    t1 = (t0 + 6376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 6184);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 3704);
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
    t24 = (t0 + 3704);
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

static void Always_78_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;

LAB0:    t1 = (t0 + 6624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);

LAB4:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 6432);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 2504U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2824U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 6432);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB6:    xsi_set_current_line(80, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    goto LAB8;

LAB9:    xsi_set_current_line(82, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    goto LAB11;

LAB12:    goto LAB2;

}

static void Initial_89_2(char *t0)
{
    char t22[8];
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
    char *t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 6872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);

LAB4:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 6680);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB8:    t6 = (t0 + 6776);
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

LAB7:    t15 = (t0 + 6776);
    t16 = *((char **)t15);
    t15 = (t0 + 848);
    t17 = (t0 + 6680);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB9:;
LAB11:    t6 = (t0 + 6872U);
    *((char **)t6) = &&LAB8;
    goto LAB1;

LAB12:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3864);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(96, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 4344);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4504);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 4344);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4504);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(104, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 6680);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB22:    t5 = (t0 + 6776);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t14 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB24:    if (t14 != 0)
        goto LAB25;

LAB20:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB21:    t13 = (t0 + 6776);
    t15 = *((char **)t13);
    t13 = (t0 + 1280);
    t16 = (t0 + 6680);
    t17 = 0;
    xsi_delete_subprogram_invocation(t13, t15, t0, t16, t17);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB23:;
LAB25:    t5 = (t0 + 6872U);
    *((char **)t5) = &&LAB22;
    goto LAB1;

LAB26:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3864);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4024);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4024);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng9)));
    t4 = (t0 + 6680);
    t5 = (t0 + 1712);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5304);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5464);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB31:    t9 = (t0 + 6776);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t15 = *((char **)t13);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t14 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB33:    if (t14 != 0)
        goto LAB34;

LAB29:    t10 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t10);

LAB30:    t18 = (t0 + 6776);
    t19 = *((char **)t18);
    t18 = (t0 + 1712);
    t20 = (t0 + 6680);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB32:;
LAB34:    t9 = (t0 + 6872U);
    *((char **)t9) = &&LAB31;
    goto LAB1;

LAB35:    xsi_set_current_line(111, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 6680);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB38:    t5 = (t0 + 6776);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t14 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB40:    if (t14 != 0)
        goto LAB41;

LAB36:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB37:    t13 = (t0 + 6776);
    t15 = *((char **)t13);
    t13 = (t0 + 1280);
    t16 = (t0 + 6680);
    t17 = 0;
    xsi_delete_subprogram_invocation(t13, t15, t0, t16, t17);
    xsi_set_current_line(113, ng0);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB42:    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    memset(t22, 0, 8);
    xsi_vlog_signed_leq(t22, 32, t4, 32, t5, 32);
    t6 = (t22 + 4);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB39:;
LAB41:    t5 = (t0 + 6872U);
    *((char **)t5) = &&LAB38;
    goto LAB1;

LAB43:    xsi_set_current_line(113, ng0);

LAB45:    xsi_set_current_line(114, ng0);
    t7 = ((char*)((ng2)));
    t8 = ((char*)((ng9)));
    t9 = (t0 + 6680);
    t10 = (t0 + 1712);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 5304);
    xsi_vlogvar_assign_value(t12, t7, 0, 0, 4);
    t13 = (t0 + 5464);
    xsi_vlogvar_assign_value(t13, t8, 0, 0, 4);

LAB48:    t15 = (t0 + 6776);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t28 = *((char **)t21);
    t14 = ((int  (*)(char *, char *))t28)(t0, t16);

LAB50:    if (t14 != 0)
        goto LAB51;

LAB46:    t16 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t16);

LAB47:    t29 = (t0 + 6776);
    t30 = *((char **)t29);
    t29 = (t0 + 1712);
    t31 = (t0 + 6680);
    t32 = 0;
    xsi_delete_subprogram_invocation(t29, t30, t0, t31, t32);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)119, t4, 32);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t4, 32, t5, 32);
    t6 = (t0 + 5144);
    xsi_vlogvar_assign_value(t6, t22, 0, 0, 32);
    goto LAB42;

LAB49:;
LAB51:    t15 = (t0 + 6872U);
    *((char **)t15) = &&LAB48;
    goto LAB1;

LAB52:    xsi_set_current_line(119, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 6680);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB55:    t5 = (t0 + 6776);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t14 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB57:    if (t14 != 0)
        goto LAB58;

LAB53:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB54:    t13 = (t0 + 6776);
    t15 = *((char **)t13);
    t13 = (t0 + 1280);
    t16 = (t0 + 6680);
    t17 = 0;
    xsi_delete_subprogram_invocation(t13, t15, t0, t16, t17);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng1)));
    t4 = (t0 + 6680);
    t5 = (t0 + 1712);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5304);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5464);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB61:    t9 = (t0 + 6776);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t15 = *((char **)t13);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t14 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB63:    if (t14 != 0)
        goto LAB64;

LAB59:    t10 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t10);

LAB60:    t18 = (t0 + 6776);
    t19 = *((char **)t18);
    t18 = (t0 + 1712);
    t20 = (t0 + 6680);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB56:;
LAB58:    t5 = (t0 + 6872U);
    *((char **)t5) = &&LAB55;
    goto LAB1;

LAB62:;
LAB64:    t9 = (t0 + 6872U);
    *((char **)t9) = &&LAB61;
    goto LAB1;

LAB65:    xsi_set_current_line(123, ng0);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t0);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 6680);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB68:    t5 = (t0 + 6776);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t14 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB70:    if (t14 != 0)
        goto LAB71;

LAB66:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB67:    t13 = (t0 + 6776);
    t15 = *((char **)t13);
    t13 = (t0 + 1280);
    t16 = (t0 + 6680);
    t17 = 0;
    xsi_delete_subprogram_invocation(t13, t15, t0, t16, t17);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB72;
    goto LAB1;

LAB69:;
LAB71:    t5 = (t0 + 6872U);
    *((char **)t5) = &&LAB68;
    goto LAB1;

LAB72:    xsi_set_current_line(125, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB73;
    goto LAB1;

LAB73:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4344);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 60000LL);
    *((char **)t1) = &&LAB74;
    goto LAB1;

LAB74:    xsi_set_current_line(127, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB75:    xsi_set_current_line(128, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB76;
    goto LAB1;

LAB76:    xsi_set_current_line(129, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4504);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB77:    xsi_set_current_line(130, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4504);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB78;
    goto LAB1;

LAB78:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 4344);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 60000LL);
    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB79:    xsi_set_current_line(132, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB80:    xsi_set_current_line(134, ng0);
    xsi_vlogfile_write(1, 0, 0, ng20, 1, t0);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 6680);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB83:    t5 = (t0 + 6776);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t14 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB85:    if (t14 != 0)
        goto LAB86;

LAB81:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB82:    t13 = (t0 + 6776);
    t15 = *((char **)t13);
    t13 = (t0 + 1280);
    t16 = (t0 + 6680);
    t17 = 0;
    xsi_delete_subprogram_invocation(t13, t15, t0, t16, t17);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB84:;
LAB86:    t5 = (t0 + 6872U);
    *((char **)t5) = &&LAB83;
    goto LAB1;

LAB87:    xsi_set_current_line(136, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB88;
    goto LAB1;

LAB88:    xsi_set_current_line(137, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4344);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB89:    xsi_set_current_line(138, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4504);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB90;
    goto LAB1;

LAB90:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 4344);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB91:    xsi_set_current_line(140, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4504);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB92;
    goto LAB1;

LAB92:    xsi_set_current_line(141, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4664);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 80000LL);
    *((char **)t1) = &&LAB93;
    goto LAB1;

LAB93:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB94;
    goto LAB1;

LAB94:    xsi_set_current_line(144, ng0);
    xsi_vlogfile_write(1, 0, 0, ng23, 1, t0);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 4984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 6680);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB97:    t5 = (t0 + 6776);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t14 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB99:    if (t14 != 0)
        goto LAB100;

LAB95:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB96:    t13 = (t0 + 6776);
    t15 = *((char **)t13);
    t13 = (t0 + 1280);
    t16 = (t0 + 6680);
    t17 = 0;
    xsi_delete_subprogram_invocation(t13, t15, t0, t16, t17);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB101;
    goto LAB1;

LAB98:;
LAB100:    t5 = (t0 + 6872U);
    *((char **)t5) = &&LAB97;
    goto LAB1;

LAB101:    xsi_set_current_line(146, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB102;
    goto LAB1;

LAB102:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4344);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB103:    xsi_set_current_line(148, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4504);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB104;
    goto LAB1;

LAB104:    xsi_set_current_line(149, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 4344);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB105;
    goto LAB1;

LAB105:    xsi_set_current_line(150, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4504);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB106;
    goto LAB1;

LAB106:    xsi_set_current_line(151, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4664);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB107:    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4824);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 80000LL);
    *((char **)t1) = &&LAB108;
    goto LAB1;

LAB108:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB109;
    goto LAB1;

LAB109:    xsi_set_current_line(155, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 4984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 6680);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB112:    t5 = (t0 + 6776);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t14 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB114:    if (t14 != 0)
        goto LAB115;

LAB110:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB111:    t13 = (t0 + 6776);
    t15 = *((char **)t13);
    t13 = (t0 + 1280);
    t16 = (t0 + 6680);
    t17 = 0;
    xsi_delete_subprogram_invocation(t13, t15, t0, t16, t17);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB116;
    goto LAB1;

LAB113:;
LAB115:    t5 = (t0 + 6872U);
    *((char **)t5) = &&LAB112;
    goto LAB1;

LAB116:    xsi_set_current_line(157, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB117;
    goto LAB1;

LAB117:    xsi_set_current_line(158, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4344);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB118;
    goto LAB1;

LAB118:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4504);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB119;
    goto LAB1;

LAB119:    xsi_set_current_line(160, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 4344);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB120;
    goto LAB1;

LAB120:    xsi_set_current_line(161, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4504);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 6680);
    xsi_process_wait(t2, 80000LL);
    *((char **)t1) = &&LAB121;
    goto LAB1;

LAB121:    xsi_set_current_line(164, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_12462426229834698076_3809241398_init()
{
	static char *pe[] = {(void *)Always_75_0,(void *)Always_78_1,(void *)Initial_89_2};
	static char *se[] = {(void *)sp_reset_in,(void *)sp_reset_n_load,(void *)sp_vend_cycle};
	xsi_register_didat("work_m_12462426229834698076_3809241398", "isim/testbench_305176399_isim_beh.exe.sim/work/m_12462426229834698076_3809241398.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
