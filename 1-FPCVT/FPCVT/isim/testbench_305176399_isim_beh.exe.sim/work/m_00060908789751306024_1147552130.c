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
static const char *ng0 = "/home/ise/Desktop/Lab1/src/FPCVT.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {4, 0};
static unsigned int ng4[] = {7U, 0U};
static unsigned int ng5[] = {31U, 0U};



static void Always_67_0(char *t0)
{
    char t13[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    int t22;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3160);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 5);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(71, ng0);

LAB9:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 5, t11, 5, t12, 5);
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 5);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t3 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB11;

LAB10:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t3) < *((unsigned int *)t5))
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB13:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:
LAB17:    goto LAB8;

LAB11:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(77, ng0);

LAB18:    xsi_set_current_line(78, ng0);
    t16 = (t0 + 1768);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng1)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 3, t18, 3, t19, 3);
    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 3);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_rshift(t13, 5, t4, 5, t5, 32);
    t11 = (t0 + 1928);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 5);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    t4 = (t0 + 1928);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t22 = (!(t6));
    if (t22 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t3 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB22;

LAB21:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB22;

LAB25:    if (*((unsigned int *)t3) < *((unsigned int *)t5))
        goto LAB24;

LAB23:    *((unsigned int *)t13) = 1;

LAB24:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB17;

LAB19:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB20;

LAB22:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB24;

LAB26:    xsi_set_current_line(83, ng0);

LAB29:    xsi_set_current_line(84, ng0);
    t16 = ((char*)((ng4)));
    t17 = (t0 + 1768);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 3);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB28;

}


extern void work_m_00060908789751306024_1147552130_init()
{
	static char *pe[] = {(void *)Always_67_0};
	xsi_register_didat("work_m_00060908789751306024_1147552130", "isim/testbench_305176399_isim_beh.exe.sim/work/m_00060908789751306024_1147552130.didat");
	xsi_register_executes(pe);
}
