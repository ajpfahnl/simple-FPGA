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
static unsigned int ng2[] = {8191U, 0U};



static void Always_4_0(char *t0)
{
    char t6[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(4, ng0);
    t2 = (t0 + 2840);
    *((int *)t2) = 1;
    t3 = (t0 + 2552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(4, ng0);

LAB5:    xsi_set_current_line(5, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 12);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 12);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 1448);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);
    xsi_set_current_line(6, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1608);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 13);
    xsi_set_current_line(7, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(7, ng0);

LAB9:    xsi_set_current_line(8, ng0);
    t7 = (t0 + 1608);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    memset(t6, 0, 8);
    t16 = (t6 + 4);
    t17 = (t15 + 4);
    t13 = *((unsigned int *)t15);
    t18 = (~(t13));
    *((unsigned int *)t6) = t18;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB11;

LAB10:    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 8191U);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 8191U);
    t25 = ((char*)((ng1)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 13, t6, 13, t25, 13);
    t27 = (t0 + 1608);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 13);
    xsi_set_current_line(12, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 12);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 12);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t14);
    t19 = (~(t18));
    t20 = *((unsigned int *)t6);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB12;

LAB13:
LAB14:    goto LAB8;

LAB11:    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t17);
    *((unsigned int *)t6) = (t19 | t20);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t21 | t22);
    goto LAB10;

LAB12:    xsi_set_current_line(13, ng0);
    t15 = (t0 + 1608);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t25 = ((char*)((ng2)));
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t25);
    t28 = (t23 | t24);
    *((unsigned int *)t26) = t28;
    t27 = (t17 + 4);
    t29 = (t25 + 4);
    t30 = (t26 + 4);
    t31 = *((unsigned int *)t27);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB15;

LAB16:
LAB17:    t52 = (t0 + 1608);
    xsi_vlogvar_assign_value(t52, t26, 0, 0, 13);
    goto LAB14;

LAB15:    t36 = *((unsigned int *)t26);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t26) = (t36 | t37);
    t38 = (t17 + 4);
    t39 = (t25 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (~(t40));
    t42 = *((unsigned int *)t17);
    t43 = (t42 & t41);
    t44 = *((unsigned int *)t39);
    t45 = (~(t44));
    t46 = *((unsigned int *)t25);
    t47 = (t46 & t45);
    t48 = (~(t43));
    t49 = (~(t47));
    t50 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t50 & t48);
    t51 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t51 & t49);
    goto LAB17;

}


extern void work_m_02153798333147977423_3240784588_init()
{
	static char *pe[] = {(void *)Always_4_0};
	xsi_register_didat("work_m_02153798333147977423_3240784588", "isim/testbench_305176399_isim_beh.exe.sim/work/m_02153798333147977423_3240784588.didat");
	xsi_register_executes(pe);
}
