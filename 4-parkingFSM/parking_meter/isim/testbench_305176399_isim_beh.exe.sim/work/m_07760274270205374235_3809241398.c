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
static const char *ng0 = "/home/ise/Desktop/Lab4/src/testbench_305176399.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static int sp_global_reset(char *t1, char *t2)
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
    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 3160);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3320);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3480);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3640);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(33, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3800);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(33, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3960);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4120);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4280);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 100000000000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(37, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4280);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000000000000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    goto LAB4;

}

static void Always_28_0(char *t0)
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

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 5000);
    xsi_process_wait(t2, 5000000000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 4120);
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
    t24 = (t0 + 4120);
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

static void Initial_43_1(char *t0)
{
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
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 5440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5248);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 5344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB9:    if (t13 != 0)
        goto LAB10;

LAB5:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB6:    t14 = (t0 + 5344);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 5248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5248);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB8:;
LAB10:    t5 = (t0 + 5440U);
    *((char **)t5) = &&LAB7;
    goto LAB1;

LAB11:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3160);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5248);
    xsi_process_wait(t2, 65000000000000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5248);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB15:    t5 = (t0 + 5344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB17:    if (t13 != 0)
        goto LAB18;

LAB13:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB14:    t14 = (t0 + 5344);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 5248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 5248);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB16:;
LAB18:    t5 = (t0 + 5440U);
    *((char **)t5) = &&LAB15;
    goto LAB1;

LAB19:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3320);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 5248);
    xsi_process_wait(t2, 120000000000000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5248);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB23:    t5 = (t0 + 5344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB25:    if (t13 != 0)
        goto LAB26;

LAB21:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB22:    t14 = (t0 + 5344);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 5248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5248);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB24:;
LAB26:    t5 = (t0 + 5440U);
    *((char **)t5) = &&LAB23;
    goto LAB1;

LAB27:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3480);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 5248);
    xsi_process_wait(t2, 120000000000000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5248);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB31:    t5 = (t0 + 5344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB33:    if (t13 != 0)
        goto LAB34;

LAB29:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB30:    t14 = (t0 + 5344);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 5248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5248);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB32:;
LAB34:    t5 = (t0 + 5440U);
    *((char **)t5) = &&LAB31;
    goto LAB1;

LAB35:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3640);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 5248);
    xsi_process_wait(t2, 130000000000000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB36:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5248);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB39:    t5 = (t0 + 5344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB41:    if (t13 != 0)
        goto LAB42;

LAB37:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB38:    t14 = (t0 + 5344);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 5248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5248);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB40:;
LAB42:    t5 = (t0 + 5440U);
    *((char **)t5) = &&LAB39;
    goto LAB1;

LAB43:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3640);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5248);
    xsi_process_wait(t2, 3990000000000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB44:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 5248);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB45:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3800);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 5248);
    xsi_process_wait(t2, 3990000000000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB46:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 5248);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB47:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3960);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 5248);
    xsi_process_wait(t2, 3990000000000LL);
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB48:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 5248);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB51:    t5 = (t0 + 5344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB53:    if (t13 != 0)
        goto LAB54;

LAB49:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB50:    t14 = (t0 + 5344);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 5248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5248);
    xsi_process_wait(t2, 1000000000000LL);
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB52:;
LAB54:    t5 = (t0 + 5440U);
    *((char **)t5) = &&LAB51;
    goto LAB1;

LAB55:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3640);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 5248);
    xsi_process_wait(t2, 1000000000000LL);
    *((char **)t1) = &&LAB56;
    goto LAB1;

LAB56:    xsi_set_current_line(81, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_07760274270205374235_3809241398_init()
{
	static char *pe[] = {(void *)Always_28_0,(void *)Initial_43_1};
	static char *se[] = {(void *)sp_global_reset};
	xsi_register_didat("work_m_07760274270205374235_3809241398", "isim/testbench_305176399_isim_beh.exe.sim/work/m_07760274270205374235_3809241398.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
