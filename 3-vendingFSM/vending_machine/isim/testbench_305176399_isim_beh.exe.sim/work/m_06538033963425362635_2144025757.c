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
static const char *ng0 = "/home/ise/Desktop/Lab3/src/vending_machine.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {3U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {7U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static int ng9[] = {0, 0};
static int ng10[] = {1, 0};
static unsigned int ng11[] = {19U, 0U};
static unsigned int ng12[] = {10U, 0U};
static int ng13[] = {10, 0};
static unsigned int ng14[] = {9U, 0U};



static int sp_find_cost(char *t1, char *t2)
{
    char t7[8];
    char t33[8];
    char t37[8];
    char t53[8];
    char t57[8];
    char t65[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
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
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;

LAB0:    t0 = 1;
    xsi_set_current_line(219, ng0);

LAB2:    xsi_set_current_line(220, ng0);
    t3 = (t1 + 7312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB6;

LAB3:    if (t19 != 0)
        goto LAB5;

LAB4:    *((unsigned int *)t7) = 1;

LAB6:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(228, ng0);

LAB65:    xsi_set_current_line(229, ng0);
    t3 = (t1 + 7472);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB67;

LAB66:    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB67;

LAB70:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB69;

LAB68:    *((unsigned int *)t7) = 1;

LAB69:    memset(t33, 0, 8);
    t23 = (t7 + 4);
    t10 = *((unsigned int *)t23);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t23) != 0)
        goto LAB73;

LAB74:    t30 = (t33 + 4);
    t15 = *((unsigned int *)t33);
    t16 = *((unsigned int *)t30);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB75;

LAB76:    memcpy(t57, t33, 8);

LAB77:    t56 = (t57 + 4);
    t76 = *((unsigned int *)t56);
    t77 = (~(t76));
    t78 = *((unsigned int *)t57);
    t81 = (t78 & t77);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(231, ng0);
    t3 = (t1 + 7472);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng6)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB94;

LAB93:    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB94;

LAB97:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB96;

LAB95:    *((unsigned int *)t7) = 1;

LAB96:    memset(t33, 0, 8);
    t23 = (t7 + 4);
    t10 = *((unsigned int *)t23);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t23) != 0)
        goto LAB100;

LAB101:    t30 = (t33 + 4);
    t15 = *((unsigned int *)t33);
    t16 = *((unsigned int *)t30);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB102;

LAB103:    memcpy(t57, t33, 8);

LAB104:    t56 = (t57 + 4);
    t76 = *((unsigned int *)t56);
    t77 = (~(t76));
    t78 = *((unsigned int *)t57);
    t81 = (t78 & t77);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB117;

LAB118:    xsi_set_current_line(233, ng0);
    t3 = (t1 + 7472);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng8)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB121;

LAB120:    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB121;

LAB124:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB123;

LAB122:    *((unsigned int *)t7) = 1;

LAB123:    memset(t33, 0, 8);
    t23 = (t7 + 4);
    t10 = *((unsigned int *)t23);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t23) != 0)
        goto LAB127;

LAB128:    t30 = (t33 + 4);
    t15 = *((unsigned int *)t33);
    t16 = *((unsigned int *)t30);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB129;

LAB130:    memcpy(t57, t33, 8);

LAB131:    t56 = (t57 + 4);
    t76 = *((unsigned int *)t56);
    t77 = (~(t76));
    t78 = *((unsigned int *)t57);
    t81 = (t78 & t77);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB144;

LAB145:    xsi_set_current_line(236, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t1 + 7632);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);

LAB146:
LAB119:
LAB92:
LAB9:    t0 = 0;

LAB1:    return t0;
LAB5:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB6;

LAB7:    xsi_set_current_line(220, ng0);

LAB10:    xsi_set_current_line(221, ng0);
    t29 = (t1 + 7472);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng1)));
    memset(t33, 0, 8);
    t34 = (t31 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB12;

LAB11:    t35 = (t32 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t31) < *((unsigned int *)t32))
        goto LAB14;

LAB13:    *((unsigned int *)t33) = 1;

LAB14:    memset(t37, 0, 8);
    t38 = (t33 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t33);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t38) != 0)
        goto LAB18;

LAB19:    t45 = (t37 + 4);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t45);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB20;

LAB21:    memcpy(t65, t37, 8);

LAB22:    t97 = (t65 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t65);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(223, ng0);
    t3 = (t1 + 7472);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng4)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB39;

LAB38:    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB39;

LAB42:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB41;

LAB40:    *((unsigned int *)t7) = 1;

LAB41:    memset(t33, 0, 8);
    t23 = (t7 + 4);
    t10 = *((unsigned int *)t23);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t23) != 0)
        goto LAB45;

LAB46:    t30 = (t33 + 4);
    t15 = *((unsigned int *)t33);
    t16 = *((unsigned int *)t30);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB47;

LAB48:    memcpy(t57, t33, 8);

LAB49:    t56 = (t57 + 4);
    t76 = *((unsigned int *)t56);
    t77 = (~(t76));
    t78 = *((unsigned int *)t57);
    t81 = (t78 & t77);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(226, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 7632);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);

LAB64:
LAB37:    goto LAB9;

LAB12:    t36 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB14;

LAB16:    *((unsigned int *)t37) = 1;
    goto LAB19;

LAB18:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB19;

LAB20:    t49 = (t1 + 7472);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng2)));
    memset(t53, 0, 8);
    t54 = (t51 + 4);
    if (*((unsigned int *)t54) != 0)
        goto LAB24;

LAB23:    t55 = (t52 + 4);
    if (*((unsigned int *)t55) != 0)
        goto LAB24;

LAB27:    if (*((unsigned int *)t51) > *((unsigned int *)t52))
        goto LAB26;

LAB25:    *((unsigned int *)t53) = 1;

LAB26:    memset(t57, 0, 8);
    t58 = (t53 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t53);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t58) != 0)
        goto LAB30;

LAB31:    t66 = *((unsigned int *)t37);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t69 = (t37 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB22;

LAB24:    t56 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB26;

LAB28:    *((unsigned int *)t57) = 1;
    goto LAB31;

LAB30:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB31;

LAB32:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t37 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t37);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    t89 = (t82 & t84);
    t90 = (t86 & t88);
    t91 = (~(t89));
    t92 = (~(t90));
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t91);
    t94 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB34;

LAB35:    xsi_set_current_line(222, ng0);
    t103 = ((char*)((ng3)));
    t104 = (t1 + 7632);
    xsi_vlogvar_assign_value(t104, t103, 0, 0, 3);
    goto LAB37;

LAB39:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB41;

LAB43:    *((unsigned int *)t33) = 1;
    goto LAB46;

LAB45:    t29 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB46;

LAB47:    t31 = (t1 + 7472);
    t32 = (t31 + 56U);
    t34 = *((char **)t32);
    t35 = ((char*)((ng5)));
    memset(t37, 0, 8);
    t36 = (t34 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB51;

LAB50:    t38 = (t35 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB51;

LAB54:    if (*((unsigned int *)t34) > *((unsigned int *)t35))
        goto LAB53;

LAB52:    *((unsigned int *)t37) = 1;

LAB53:    memset(t53, 0, 8);
    t45 = (t37 + 4);
    t18 = *((unsigned int *)t45);
    t19 = (~(t18));
    t20 = *((unsigned int *)t37);
    t21 = (t20 & t19);
    t24 = (t21 & 1U);
    if (t24 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t45) != 0)
        goto LAB57;

LAB58:    t25 = *((unsigned int *)t33);
    t26 = *((unsigned int *)t53);
    t27 = (t25 & t26);
    *((unsigned int *)t57) = t27;
    t50 = (t33 + 4);
    t51 = (t53 + 4);
    t52 = (t57 + 4);
    t28 = *((unsigned int *)t50);
    t39 = *((unsigned int *)t51);
    t40 = (t28 | t39);
    *((unsigned int *)t52) = t40;
    t41 = *((unsigned int *)t52);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB49;

LAB51:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB53;

LAB55:    *((unsigned int *)t53) = 1;
    goto LAB58;

LAB57:    t49 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB58;

LAB59:    t43 = *((unsigned int *)t57);
    t46 = *((unsigned int *)t52);
    *((unsigned int *)t57) = (t43 | t46);
    t54 = (t33 + 4);
    t55 = (t53 + 4);
    t47 = *((unsigned int *)t33);
    t48 = (~(t47));
    t59 = *((unsigned int *)t54);
    t60 = (~(t59));
    t61 = *((unsigned int *)t53);
    t62 = (~(t61));
    t63 = *((unsigned int *)t55);
    t66 = (~(t63));
    t89 = (t48 & t60);
    t90 = (t62 & t66);
    t67 = (~(t89));
    t68 = (~(t90));
    t72 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t72 & t67);
    t73 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t73 & t68);
    t74 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t74 & t67);
    t75 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t75 & t68);
    goto LAB61;

LAB62:    xsi_set_current_line(224, ng0);
    t58 = ((char*)((ng6)));
    t64 = (t1 + 7632);
    xsi_vlogvar_assign_value(t64, t58, 0, 0, 3);
    goto LAB64;

LAB67:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB69;

LAB71:    *((unsigned int *)t33) = 1;
    goto LAB74;

LAB73:    t29 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB74;

LAB75:    t31 = (t1 + 7472);
    t32 = (t31 + 56U);
    t34 = *((char **)t32);
    t35 = ((char*)((ng3)));
    memset(t37, 0, 8);
    t36 = (t34 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB79;

LAB78:    t38 = (t35 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB79;

LAB82:    if (*((unsigned int *)t34) > *((unsigned int *)t35))
        goto LAB81;

LAB80:    *((unsigned int *)t37) = 1;

LAB81:    memset(t53, 0, 8);
    t45 = (t37 + 4);
    t18 = *((unsigned int *)t45);
    t19 = (~(t18));
    t20 = *((unsigned int *)t37);
    t21 = (t20 & t19);
    t24 = (t21 & 1U);
    if (t24 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t45) != 0)
        goto LAB85;

LAB86:    t25 = *((unsigned int *)t33);
    t26 = *((unsigned int *)t53);
    t27 = (t25 & t26);
    *((unsigned int *)t57) = t27;
    t50 = (t33 + 4);
    t51 = (t53 + 4);
    t52 = (t57 + 4);
    t28 = *((unsigned int *)t50);
    t39 = *((unsigned int *)t51);
    t40 = (t28 | t39);
    *((unsigned int *)t52) = t40;
    t41 = *((unsigned int *)t52);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB87;

LAB88:
LAB89:    goto LAB77;

LAB79:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB81;

LAB83:    *((unsigned int *)t53) = 1;
    goto LAB86;

LAB85:    t49 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB86;

LAB87:    t43 = *((unsigned int *)t57);
    t46 = *((unsigned int *)t52);
    *((unsigned int *)t57) = (t43 | t46);
    t54 = (t33 + 4);
    t55 = (t53 + 4);
    t47 = *((unsigned int *)t33);
    t48 = (~(t47));
    t59 = *((unsigned int *)t54);
    t60 = (~(t59));
    t61 = *((unsigned int *)t53);
    t62 = (~(t61));
    t63 = *((unsigned int *)t55);
    t66 = (~(t63));
    t89 = (t48 & t60);
    t90 = (t62 & t66);
    t67 = (~(t89));
    t68 = (~(t90));
    t72 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t72 & t67);
    t73 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t73 & t68);
    t74 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t74 & t67);
    t75 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t75 & t68);
    goto LAB89;

LAB90:    xsi_set_current_line(230, ng0);
    t58 = ((char*)((ng2)));
    t64 = (t1 + 7632);
    xsi_vlogvar_assign_value(t64, t58, 0, 0, 3);
    goto LAB92;

LAB94:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB96;

LAB98:    *((unsigned int *)t33) = 1;
    goto LAB101;

LAB100:    t29 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB101;

LAB102:    t31 = (t1 + 7472);
    t32 = (t31 + 56U);
    t34 = *((char **)t32);
    t35 = ((char*)((ng7)));
    memset(t37, 0, 8);
    t36 = (t34 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB106;

LAB105:    t38 = (t35 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB106;

LAB109:    if (*((unsigned int *)t34) > *((unsigned int *)t35))
        goto LAB108;

LAB107:    *((unsigned int *)t37) = 1;

LAB108:    memset(t53, 0, 8);
    t45 = (t37 + 4);
    t18 = *((unsigned int *)t45);
    t19 = (~(t18));
    t20 = *((unsigned int *)t37);
    t21 = (t20 & t19);
    t24 = (t21 & 1U);
    if (t24 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t45) != 0)
        goto LAB112;

LAB113:    t25 = *((unsigned int *)t33);
    t26 = *((unsigned int *)t53);
    t27 = (t25 & t26);
    *((unsigned int *)t57) = t27;
    t50 = (t33 + 4);
    t51 = (t53 + 4);
    t52 = (t57 + 4);
    t28 = *((unsigned int *)t50);
    t39 = *((unsigned int *)t51);
    t40 = (t28 | t39);
    *((unsigned int *)t52) = t40;
    t41 = *((unsigned int *)t52);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB114;

LAB115:
LAB116:    goto LAB104;

LAB106:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB108;

LAB110:    *((unsigned int *)t53) = 1;
    goto LAB113;

LAB112:    t49 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB113;

LAB114:    t43 = *((unsigned int *)t57);
    t46 = *((unsigned int *)t52);
    *((unsigned int *)t57) = (t43 | t46);
    t54 = (t33 + 4);
    t55 = (t53 + 4);
    t47 = *((unsigned int *)t33);
    t48 = (~(t47));
    t59 = *((unsigned int *)t54);
    t60 = (~(t59));
    t61 = *((unsigned int *)t53);
    t62 = (~(t61));
    t63 = *((unsigned int *)t55);
    t66 = (~(t63));
    t89 = (t48 & t60);
    t90 = (t62 & t66);
    t67 = (~(t89));
    t68 = (~(t90));
    t72 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t72 & t67);
    t73 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t73 & t68);
    t74 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t74 & t67);
    t75 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t75 & t68);
    goto LAB116;

LAB117:    xsi_set_current_line(232, ng0);
    t58 = ((char*)((ng4)));
    t64 = (t1 + 7632);
    xsi_vlogvar_assign_value(t64, t58, 0, 0, 3);
    goto LAB119;

LAB121:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB123;

LAB125:    *((unsigned int *)t33) = 1;
    goto LAB128;

LAB127:    t29 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB128;

LAB129:    t31 = (t1 + 7472);
    t32 = (t31 + 56U);
    t34 = *((char **)t32);
    t35 = ((char*)((ng5)));
    memset(t37, 0, 8);
    t36 = (t34 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB133;

LAB132:    t38 = (t35 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB133;

LAB136:    if (*((unsigned int *)t34) > *((unsigned int *)t35))
        goto LAB135;

LAB134:    *((unsigned int *)t37) = 1;

LAB135:    memset(t53, 0, 8);
    t45 = (t37 + 4);
    t18 = *((unsigned int *)t45);
    t19 = (~(t18));
    t20 = *((unsigned int *)t37);
    t21 = (t20 & t19);
    t24 = (t21 & 1U);
    if (t24 != 0)
        goto LAB137;

LAB138:    if (*((unsigned int *)t45) != 0)
        goto LAB139;

LAB140:    t25 = *((unsigned int *)t33);
    t26 = *((unsigned int *)t53);
    t27 = (t25 & t26);
    *((unsigned int *)t57) = t27;
    t50 = (t33 + 4);
    t51 = (t53 + 4);
    t52 = (t57 + 4);
    t28 = *((unsigned int *)t50);
    t39 = *((unsigned int *)t51);
    t40 = (t28 | t39);
    *((unsigned int *)t52) = t40;
    t41 = *((unsigned int *)t52);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB141;

LAB142:
LAB143:    goto LAB131;

LAB133:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB135;

LAB137:    *((unsigned int *)t53) = 1;
    goto LAB140;

LAB139:    t49 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB140;

LAB141:    t43 = *((unsigned int *)t57);
    t46 = *((unsigned int *)t52);
    *((unsigned int *)t57) = (t43 | t46);
    t54 = (t33 + 4);
    t55 = (t53 + 4);
    t47 = *((unsigned int *)t33);
    t48 = (~(t47));
    t59 = *((unsigned int *)t54);
    t60 = (~(t59));
    t61 = *((unsigned int *)t53);
    t62 = (~(t61));
    t63 = *((unsigned int *)t55);
    t66 = (~(t63));
    t89 = (t48 & t60);
    t90 = (t62 & t66);
    t67 = (~(t89));
    t68 = (~(t90));
    t72 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t72 & t67);
    t73 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t73 & t68);
    t74 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t74 & t67);
    t75 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t75 & t68);
    goto LAB143;

LAB144:    xsi_set_current_line(234, ng0);
    t58 = ((char*)((ng7)));
    t64 = (t1 + 7632);
    xsi_vlogvar_assign_value(t64, t58, 0, 0, 3);
    goto LAB146;

}

static void Always_45_0(char *t0)
{
    char t13[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 8544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 9608);
    *((int *)t2) = 1;
    t3 = (t0 + 8576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 2592U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(50, ng0);

LAB10:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 4592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 3, t5, 32);
    t11 = (t0 + 4592);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 3);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4752);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t4 + 4);
    t15 = (t12 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t14);
    t10 = *((unsigned int *)t15);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t14);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB12;

LAB11:    if (t20 != 0)
        goto LAB13;

LAB14:    t24 = (t13 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB22;

LAB19:    if (t20 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    t15 = (t13 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB23;

LAB24:
LAB25:
LAB17:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4752);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(46, ng0);

LAB9:    xsi_set_current_line(47, ng0);
    t11 = ((char*)((ng8)));
    t12 = (t0 + 4752);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB12:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB13:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(52, ng0);

LAB18:    xsi_set_current_line(53, ng0);
    t30 = ((char*)((ng9)));
    t31 = (t0 + 4592);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 3);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB17;

LAB21:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(55, ng0);

LAB26:    xsi_set_current_line(56, ng0);
    t23 = ((char*)((ng10)));
    t24 = (t0 + 6352);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 1);
    goto LAB25;

}

static void Always_63_1(char *t0)
{
    char t18[8];
    char t24[8];
    char t28[8];
    char t36[8];
    char t75[8];
    char t85[8];
    char t93[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;

LAB0:    t1 = (t0 + 8792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 9624);
    *((int *)t2) = 1;
    t3 = (t0 + 8824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 4752);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(121, ng0);

LAB148:    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(65, ng0);

LAB24:    xsi_set_current_line(66, ng0);
    t9 = (t0 + 2592U);
    t10 = *((char **)t9);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB27:    goto LAB23;

LAB9:    xsi_set_current_line(71, ng0);

LAB28:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 2752U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2912U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB35:
LAB31:    goto LAB23;

LAB11:    xsi_set_current_line(80, ng0);

LAB36:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 4912);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2752U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t2) == 0)
        goto LAB37;

LAB39:    t4 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t4) = 1;

LAB40:    t5 = (t18 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t18);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB41;

LAB42:
LAB43:    goto LAB23;

LAB13:    xsi_set_current_line(85, ng0);

LAB44:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 6032);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3232U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB52;

LAB50:    if (*((unsigned int *)t2) == 0)
        goto LAB49;

LAB51:    t4 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t4) = 1;

LAB52:    memset(t24, 0, 8);
    t5 = (t18 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t18);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t5) != 0)
        goto LAB55;

LAB56:    t9 = (t24 + 4);
    t25 = *((unsigned int *)t24);
    t26 = *((unsigned int *)t9);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB57;

LAB58:    memcpy(t36, t24, 8);

LAB59:    t67 = (t36 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t36);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB69:
LAB47:    goto LAB23;

LAB15:    xsi_set_current_line(94, ng0);

LAB70:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 6192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3232U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB78;

LAB76:    if (*((unsigned int *)t2) == 0)
        goto LAB75;

LAB77:    t4 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t4) = 1;

LAB78:    memset(t24, 0, 8);
    t5 = (t18 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t18);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t5) != 0)
        goto LAB81;

LAB82:    t9 = (t24 + 4);
    t25 = *((unsigned int *)t24);
    t26 = *((unsigned int *)t9);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB83;

LAB84:    memcpy(t36, t24, 8);

LAB85:    t67 = (t36 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t36);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB95:
LAB73:    goto LAB23;

LAB17:    xsi_set_current_line(103, ng0);

LAB96:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 4112);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t18, 0, 8);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t7) != 0)
        goto LAB99;

LAB100:    t10 = (t18 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = *((unsigned int *)t10);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB101;

LAB102:    memcpy(t93, t18, 8);

LAB103:    t121 = (t93 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t93);
    t125 = (t124 & t123);
    t126 = (t125 != 0);
    if (t126 > 0)
        goto LAB129;

LAB130:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3392U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB132;

LAB133:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB134:
LAB131:    goto LAB23;

LAB19:    xsi_set_current_line(111, ng0);

LAB136:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 3552U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB137;

LAB138:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 5552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB141;

LAB142:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 6352);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB145;

LAB146:    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB147:
LAB143:
LAB139:    goto LAB23;

LAB25:    xsi_set_current_line(67, ng0);
    t16 = (t0 + 2592U);
    t17 = *((char **)t16);
    memcpy(t18, t17, 8);
    t16 = (t0 + 4912);
    xsi_vlogvar_assign_value(t16, t18, 0, 0, 4);
    goto LAB27;

LAB29:    xsi_set_current_line(72, ng0);

LAB32:    xsi_set_current_line(73, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 4912);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB31;

LAB33:    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 4912);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB35;

LAB37:    *((unsigned int *)t18) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(83, ng0);
    t7 = ((char*)((ng1)));
    t9 = (t0 + 4912);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 4);
    goto LAB43;

LAB45:    xsi_set_current_line(86, ng0);

LAB48:    xsi_set_current_line(87, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 4912);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    goto LAB47;

LAB49:    *((unsigned int *)t18) = 1;
    goto LAB52;

LAB53:    *((unsigned int *)t24) = 1;
    goto LAB56;

LAB55:    t7 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB56;

LAB57:    t10 = (t0 + 6352);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memset(t28, 0, 8);
    t29 = (t17 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t17);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t29) != 0)
        goto LAB62;

LAB63:    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t40 = (t24 + 4);
    t41 = (t28 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB59;

LAB60:    *((unsigned int *)t28) = 1;
    goto LAB63;

LAB62:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB63;

LAB64:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t24 + 4);
    t51 = (t28 + 4);
    t52 = *((unsigned int *)t24);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t8 = (t53 & t55);
    t60 = (t57 & t59);
    t61 = (~(t8));
    t62 = (~(t60));
    t63 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t63 & t61);
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t65 & t61);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    goto LAB66;

LAB67:    xsi_set_current_line(90, ng0);
    t73 = ((char*)((ng1)));
    t74 = (t0 + 4912);
    xsi_vlogvar_assign_value(t74, t73, 0, 0, 4);
    goto LAB69;

LAB71:    xsi_set_current_line(95, ng0);

LAB74:    xsi_set_current_line(96, ng0);
    t9 = ((char*)((ng4)));
    t10 = (t0 + 4912);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    goto LAB73;

LAB75:    *((unsigned int *)t18) = 1;
    goto LAB78;

LAB79:    *((unsigned int *)t24) = 1;
    goto LAB82;

LAB81:    t7 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB82;

LAB83:    t10 = (t0 + 6352);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memset(t28, 0, 8);
    t29 = (t17 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t17);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t29) != 0)
        goto LAB88;

LAB89:    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t40 = (t24 + 4);
    t41 = (t28 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB90;

LAB91:
LAB92:    goto LAB85;

LAB86:    *((unsigned int *)t28) = 1;
    goto LAB89;

LAB88:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB89;

LAB90:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t24 + 4);
    t51 = (t28 + 4);
    t52 = *((unsigned int *)t24);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t8 = (t53 & t55);
    t60 = (t57 & t59);
    t61 = (~(t8));
    t62 = (~(t60));
    t63 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t63 & t61);
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t65 & t61);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    goto LAB92;

LAB93:    xsi_set_current_line(99, ng0);
    t73 = ((char*)((ng1)));
    t74 = (t0 + 4912);
    xsi_vlogvar_assign_value(t74, t73, 0, 0, 4);
    goto LAB95;

LAB97:    *((unsigned int *)t18) = 1;
    goto LAB100;

LAB99:    t9 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB100;

LAB101:    t16 = (t0 + 3392U);
    t17 = *((char **)t16);
    memset(t24, 0, 8);
    t16 = (t17 + 4);
    t23 = *((unsigned int *)t16);
    t25 = (~(t23));
    t26 = *((unsigned int *)t17);
    t27 = (t26 & t25);
    t30 = (t27 & 1U);
    if (t30 != 0)
        goto LAB107;

LAB105:    if (*((unsigned int *)t16) == 0)
        goto LAB104;

LAB106:    t29 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t29) = 1;

LAB107:    memset(t28, 0, 8);
    t35 = (t24 + 4);
    t31 = *((unsigned int *)t35);
    t32 = (~(t31));
    t33 = *((unsigned int *)t24);
    t34 = (t33 & t32);
    t37 = (t34 & 1U);
    if (t37 != 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t35) != 0)
        goto LAB110;

LAB111:    t41 = (t28 + 4);
    t38 = *((unsigned int *)t28);
    t39 = *((unsigned int *)t41);
    t43 = (t38 || t39);
    if (t43 > 0)
        goto LAB112;

LAB113:    memcpy(t75, t28, 8);

LAB114:    memset(t85, 0, 8);
    t86 = (t75 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t75);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t86) != 0)
        goto LAB124;

LAB125:    t94 = *((unsigned int *)t18);
    t95 = *((unsigned int *)t85);
    t96 = (t94 | t95);
    *((unsigned int *)t93) = t96;
    t97 = (t18 + 4);
    t98 = (t85 + 4);
    t99 = (t93 + 4);
    t100 = *((unsigned int *)t97);
    t101 = *((unsigned int *)t98);
    t102 = (t100 | t101);
    *((unsigned int *)t99) = t102;
    t103 = *((unsigned int *)t99);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB126;

LAB127:
LAB128:    goto LAB103;

LAB104:    *((unsigned int *)t24) = 1;
    goto LAB107;

LAB108:    *((unsigned int *)t28) = 1;
    goto LAB111;

LAB110:    t40 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB111;

LAB112:    t42 = (t0 + 6352);
    t50 = (t42 + 56U);
    t51 = *((char **)t50);
    memset(t36, 0, 8);
    t67 = (t51 + 4);
    t44 = *((unsigned int *)t67);
    t45 = (~(t44));
    t46 = *((unsigned int *)t51);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t67) != 0)
        goto LAB117;

LAB118:    t49 = *((unsigned int *)t28);
    t52 = *((unsigned int *)t36);
    t53 = (t49 & t52);
    *((unsigned int *)t75) = t53;
    t74 = (t28 + 4);
    t76 = (t36 + 4);
    t77 = (t75 + 4);
    t54 = *((unsigned int *)t74);
    t55 = *((unsigned int *)t76);
    t56 = (t54 | t55);
    *((unsigned int *)t77) = t56;
    t57 = *((unsigned int *)t77);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB119;

LAB120:
LAB121:    goto LAB114;

LAB115:    *((unsigned int *)t36) = 1;
    goto LAB118;

LAB117:    t73 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB118;

LAB119:    t59 = *((unsigned int *)t75);
    t61 = *((unsigned int *)t77);
    *((unsigned int *)t75) = (t59 | t61);
    t78 = (t28 + 4);
    t79 = (t36 + 4);
    t62 = *((unsigned int *)t28);
    t63 = (~(t62));
    t64 = *((unsigned int *)t78);
    t65 = (~(t64));
    t66 = *((unsigned int *)t36);
    t68 = (~(t66));
    t69 = *((unsigned int *)t79);
    t70 = (~(t69));
    t60 = (t63 & t65);
    t80 = (t68 & t70);
    t71 = (~(t60));
    t72 = (~(t80));
    t81 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t81 & t71);
    t82 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t82 & t72);
    t83 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t83 & t71);
    t84 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t84 & t72);
    goto LAB121;

LAB122:    *((unsigned int *)t85) = 1;
    goto LAB125;

LAB124:    t92 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB125;

LAB126:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t99);
    *((unsigned int *)t93) = (t105 | t106);
    t107 = (t18 + 4);
    t108 = (t85 + 4);
    t109 = *((unsigned int *)t107);
    t110 = (~(t109));
    t111 = *((unsigned int *)t18);
    t112 = (t111 & t110);
    t113 = *((unsigned int *)t108);
    t114 = (~(t113));
    t115 = *((unsigned int *)t85);
    t116 = (t115 & t114);
    t117 = (~(t112));
    t118 = (~(t116));
    t119 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t119 & t117);
    t120 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t120 & t118);
    goto LAB128;

LAB129:    xsi_set_current_line(105, ng0);
    t127 = ((char*)((ng1)));
    t128 = (t0 + 4912);
    xsi_vlogvar_assign_value(t128, t127, 0, 0, 4);
    goto LAB131;

LAB132:    xsi_set_current_line(106, ng0);

LAB135:    xsi_set_current_line(107, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 4912);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB134;

LAB137:    xsi_set_current_line(112, ng0);

LAB140:    xsi_set_current_line(113, ng0);
    t5 = ((char*)((ng7)));
    t7 = (t0 + 4912);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB139;

LAB141:    xsi_set_current_line(114, ng0);

LAB144:    xsi_set_current_line(115, ng0);
    t7 = ((char*)((ng1)));
    t9 = (t0 + 4912);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 4);
    goto LAB143;

LAB145:    xsi_set_current_line(117, ng0);
    t7 = ((char*)((ng1)));
    t9 = (t0 + 4912);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 4);
    goto LAB147;

}

static void Always_128_2(char *t0)
{
    char t7[8];
    char t16[8];
    char t31[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;

LAB0:    t1 = (t0 + 9040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 9640);
    *((int *)t2) = 1;
    t3 = (t0 + 9072);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(128, ng0);

LAB5:    xsi_set_current_line(129, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 3952);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 5712);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t8) != 0)
        goto LAB116;

LAB117:    t15 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t15);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB118;

LAB119:    memcpy(t39, t7, 8);

LAB120:    t54 = (t39 + 4);
    t85 = *((unsigned int *)t54);
    t86 = (~(t85));
    t87 = *((unsigned int *)t39);
    t88 = (t87 & t86);
    t89 = (t88 != 0);
    if (t89 > 0)
        goto LAB132;

LAB133:
LAB134:    goto LAB2;

LAB7:    xsi_set_current_line(134, ng0);

LAB16:    xsi_set_current_line(135, ng0);
    t8 = (t0 + 3232U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t8 = (t9 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t8) == 0)
        goto LAB17;

LAB19:    t15 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t15) = 1;

LAB20:    memset(t16, 0, 8);
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t17) != 0)
        goto LAB23;

LAB24:    t24 = (t16 + 4);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t24);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB25;

LAB26:    memcpy(t39, t16, 8);

LAB27:    t71 = (t39 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB15;

LAB9:    xsi_set_current_line(138, ng0);

LAB38:    xsi_set_current_line(139, ng0);
    t3 = (t0 + 3232U);
    t5 = *((char **)t3);
    memset(t7, 0, 8);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB42;

LAB40:    if (*((unsigned int *)t3) == 0)
        goto LAB39;

LAB41:    t8 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t8) = 1;

LAB42:    memset(t16, 0, 8);
    t9 = (t7 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t9) != 0)
        goto LAB45;

LAB46:    t17 = (t16 + 4);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB47;

LAB48:    memcpy(t39, t16, 8);

LAB49:    t53 = (t39 + 4);
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB57;

LAB58:
LAB59:    goto LAB15;

LAB11:    xsi_set_current_line(142, ng0);

LAB60:    xsi_set_current_line(143, ng0);
    t3 = (t0 + 5872);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 3392U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB67;

LAB65:    if (*((unsigned int *)t2) == 0)
        goto LAB64;

LAB66:    t5 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t5) = 1;

LAB67:    memset(t16, 0, 8);
    t8 = (t7 + 4);
    t18 = *((unsigned int *)t8);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t8) != 0)
        goto LAB70;

LAB71:    t15 = (t16 + 4);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t15);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB72;

LAB73:    memcpy(t39, t16, 8);

LAB74:    t45 = (t39 + 4);
    t72 = *((unsigned int *)t45);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(147, ng0);

LAB85:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 5232);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 5392);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    t17 = (t0 + 8848);
    t23 = (t0 + 1800);
    t24 = xsi_create_subprogram_invocation(t17, 0, t0, t23, 0, 0);
    t28 = (t0 + 7312);
    xsi_vlogvar_assign_value(t28, t5, 0, 0, 4);
    t29 = (t0 + 7472);
    xsi_vlogvar_assign_value(t29, t15, 0, 0, 4);

LAB86:    t30 = (t0 + 8944);
    t32 = *((char **)t30);
    t38 = (t32 + 80U);
    t43 = *((char **)t38);
    t44 = (t43 + 272U);
    t45 = *((char **)t44);
    t53 = (t45 + 0U);
    t54 = *((char **)t53);
    t6 = ((int  (*)(char *, char *))t54)(t0, t32);
    if (t6 != 0)
        goto LAB88;

LAB87:    t32 = (t0 + 8944);
    t71 = *((char **)t32);
    t32 = (t0 + 7632);
    t77 = (t32 + 56U);
    t78 = *((char **)t77);
    memcpy(t7, t78, 8);
    t79 = (t0 + 1800);
    t80 = (t0 + 8848);
    t81 = 0;
    xsi_delete_subprogram_invocation(t79, t71, t0, t80, t81);
    t82 = (t0 + 4272);
    xsi_vlogvar_assign_value(t82, t7, 0, 0, 3);

LAB84:
LAB63:    goto LAB15;

LAB13:    xsi_set_current_line(151, ng0);

LAB89:    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 3952);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 3552U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB93;

LAB91:    if (*((unsigned int *)t2) == 0)
        goto LAB90;

LAB92:    t5 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t5) = 1;

LAB93:    memset(t16, 0, 8);
    t8 = (t7 + 4);
    t18 = *((unsigned int *)t8);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t8) != 0)
        goto LAB96;

LAB97:    t15 = (t16 + 4);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t15);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB98;

LAB99:    memcpy(t39, t16, 8);

LAB100:    t45 = (t39 + 4);
    t72 = *((unsigned int *)t45);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB108;

LAB109:
LAB110:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 5232);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 5392);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    t17 = (t0 + 8848);
    t23 = (t0 + 1800);
    t24 = xsi_create_subprogram_invocation(t17, 0, t0, t23, 0, 0);
    t28 = (t0 + 7312);
    xsi_vlogvar_assign_value(t28, t5, 0, 0, 4);
    t29 = (t0 + 7472);
    xsi_vlogvar_assign_value(t29, t15, 0, 0, 4);

LAB111:    t30 = (t0 + 8944);
    t32 = *((char **)t30);
    t38 = (t32 + 80U);
    t43 = *((char **)t38);
    t44 = (t43 + 272U);
    t45 = *((char **)t44);
    t53 = (t45 + 0U);
    t54 = *((char **)t53);
    t6 = ((int  (*)(char *, char *))t54)(t0, t32);
    if (t6 != 0)
        goto LAB113;

LAB112:    t32 = (t0 + 8944);
    t71 = *((char **)t32);
    t32 = (t0 + 7632);
    t77 = (t32 + 56U);
    t78 = *((char **)t77);
    memcpy(t7, t78, 8);
    t79 = (t0 + 1800);
    t80 = (t0 + 8848);
    t81 = 0;
    xsi_delete_subprogram_invocation(t79, t71, t0, t80, t81);
    t82 = (t0 + 4272);
    xsi_vlogvar_assign_value(t82, t7, 0, 0, 3);
    goto LAB15;

LAB17:    *((unsigned int *)t7) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t16) = 1;
    goto LAB24;

LAB23:    t23 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB24;

LAB25:    t28 = (t0 + 6352);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t31, 0, 8);
    t32 = (t30 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t30);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t32) != 0)
        goto LAB30;

LAB31:    t40 = *((unsigned int *)t16);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t43 = (t16 + 4);
    t44 = (t31 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB27;

LAB28:    *((unsigned int *)t31) = 1;
    goto LAB31;

LAB30:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB31;

LAB32:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t16 + 4);
    t54 = (t31 + 4);
    t55 = *((unsigned int *)t16);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB34;

LAB35:    xsi_set_current_line(136, ng0);
    t77 = ((char*)((ng3)));
    t78 = (t0 + 4112);
    xsi_vlogvar_assign_value(t78, t77, 0, 0, 1);
    goto LAB37;

LAB39:    *((unsigned int *)t7) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t16) = 1;
    goto LAB46;

LAB45:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB46;

LAB47:    t23 = (t0 + 6352);
    t24 = (t23 + 56U);
    t28 = *((char **)t24);
    memset(t31, 0, 8);
    t29 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t28);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t29) != 0)
        goto LAB52;

LAB53:    t40 = *((unsigned int *)t16);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t32 = (t16 + 4);
    t38 = (t31 + 4);
    t43 = (t39 + 4);
    t46 = *((unsigned int *)t32);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t43);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB49;

LAB50:    *((unsigned int *)t31) = 1;
    goto LAB53;

LAB52:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB53;

LAB54:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t43);
    *((unsigned int *)t39) = (t51 | t52);
    t44 = (t16 + 4);
    t45 = (t31 + 4);
    t55 = *((unsigned int *)t16);
    t56 = (~(t55));
    t57 = *((unsigned int *)t44);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t45);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t67 & t65);
    t68 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB56;

LAB57:    xsi_set_current_line(140, ng0);
    t54 = ((char*)((ng3)));
    t71 = (t0 + 4112);
    xsi_vlogvar_assign_value(t71, t54, 0, 0, 1);
    goto LAB59;

LAB61:    xsi_set_current_line(144, ng0);
    t15 = ((char*)((ng3)));
    t17 = (t0 + 4112);
    xsi_vlogvar_assign_value(t17, t15, 0, 0, 1);
    goto LAB63;

LAB64:    *((unsigned int *)t7) = 1;
    goto LAB67;

LAB68:    *((unsigned int *)t16) = 1;
    goto LAB71;

LAB70:    t9 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB71;

LAB72:    t17 = (t0 + 6352);
    t23 = (t17 + 56U);
    t24 = *((char **)t23);
    memset(t31, 0, 8);
    t28 = (t24 + 4);
    t33 = *((unsigned int *)t28);
    t34 = (~(t33));
    t35 = *((unsigned int *)t24);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t28) != 0)
        goto LAB77;

LAB78:    t40 = *((unsigned int *)t16);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t30 = (t16 + 4);
    t32 = (t31 + 4);
    t38 = (t39 + 4);
    t46 = *((unsigned int *)t30);
    t47 = *((unsigned int *)t32);
    t48 = (t46 | t47);
    *((unsigned int *)t38) = t48;
    t49 = *((unsigned int *)t38);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB79;

LAB80:
LAB81:    goto LAB74;

LAB75:    *((unsigned int *)t31) = 1;
    goto LAB78;

LAB77:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB78;

LAB79:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t38);
    *((unsigned int *)t39) = (t51 | t52);
    t43 = (t16 + 4);
    t44 = (t31 + 4);
    t55 = *((unsigned int *)t16);
    t56 = (~(t55));
    t57 = *((unsigned int *)t43);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t44);
    t62 = (~(t61));
    t6 = (t56 & t58);
    t63 = (t60 & t62);
    t65 = (~(t6));
    t66 = (~(t63));
    t67 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB81;

LAB82:    xsi_set_current_line(146, ng0);
    t53 = ((char*)((ng3)));
    t54 = (t0 + 4432);
    xsi_vlogvar_assign_value(t54, t53, 0, 0, 1);
    goto LAB84;

LAB88:    t30 = (t0 + 9040U);
    *((char **)t30) = &&LAB86;
    goto LAB1;

LAB90:    *((unsigned int *)t7) = 1;
    goto LAB93;

LAB94:    *((unsigned int *)t16) = 1;
    goto LAB97;

LAB96:    t9 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB97;

LAB98:    t17 = (t0 + 6352);
    t23 = (t17 + 56U);
    t24 = *((char **)t23);
    memset(t31, 0, 8);
    t28 = (t24 + 4);
    t33 = *((unsigned int *)t28);
    t34 = (~(t33));
    t35 = *((unsigned int *)t24);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t28) != 0)
        goto LAB103;

LAB104:    t40 = *((unsigned int *)t16);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t30 = (t16 + 4);
    t32 = (t31 + 4);
    t38 = (t39 + 4);
    t46 = *((unsigned int *)t30);
    t47 = *((unsigned int *)t32);
    t48 = (t46 | t47);
    *((unsigned int *)t38) = t48;
    t49 = *((unsigned int *)t38);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB105;

LAB106:
LAB107:    goto LAB100;

LAB101:    *((unsigned int *)t31) = 1;
    goto LAB104;

LAB103:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB104;

LAB105:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t38);
    *((unsigned int *)t39) = (t51 | t52);
    t43 = (t16 + 4);
    t44 = (t31 + 4);
    t55 = *((unsigned int *)t16);
    t56 = (~(t55));
    t57 = *((unsigned int *)t43);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t44);
    t62 = (~(t61));
    t6 = (t56 & t58);
    t63 = (t60 & t62);
    t65 = (~(t6));
    t66 = (~(t63));
    t67 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB107;

LAB108:    xsi_set_current_line(154, ng0);
    t53 = ((char*)((ng9)));
    t54 = (t0 + 3952);
    xsi_vlogvar_assign_value(t54, t53, 0, 0, 1);
    goto LAB110;

LAB113:    t30 = (t0 + 9040U);
    *((char **)t30) = &&LAB111;
    goto LAB1;

LAB114:    *((unsigned int *)t7) = 1;
    goto LAB117;

LAB116:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB117;

LAB118:    t17 = (t0 + 3552U);
    t23 = *((char **)t17);
    t17 = ((char*)((ng9)));
    memset(t16, 0, 8);
    t24 = (t23 + 4);
    t28 = (t17 + 4);
    t21 = *((unsigned int *)t23);
    t22 = *((unsigned int *)t17);
    t25 = (t21 ^ t22);
    t26 = *((unsigned int *)t24);
    t27 = *((unsigned int *)t28);
    t33 = (t26 ^ t27);
    t34 = (t25 | t33);
    t35 = *((unsigned int *)t24);
    t36 = *((unsigned int *)t28);
    t37 = (t35 | t36);
    t40 = (~(t37));
    t41 = (t34 & t40);
    if (t41 != 0)
        goto LAB124;

LAB121:    if (t37 != 0)
        goto LAB123;

LAB122:    *((unsigned int *)t16) = 1;

LAB124:    memset(t31, 0, 8);
    t30 = (t16 + 4);
    t42 = *((unsigned int *)t30);
    t46 = (~(t42));
    t47 = *((unsigned int *)t16);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t30) != 0)
        goto LAB127;

LAB128:    t50 = *((unsigned int *)t7);
    t51 = *((unsigned int *)t31);
    t52 = (t50 & t51);
    *((unsigned int *)t39) = t52;
    t38 = (t7 + 4);
    t43 = (t31 + 4);
    t44 = (t39 + 4);
    t55 = *((unsigned int *)t38);
    t56 = *((unsigned int *)t43);
    t57 = (t55 | t56);
    *((unsigned int *)t44) = t57;
    t58 = *((unsigned int *)t44);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB129;

LAB130:
LAB131:    goto LAB120;

LAB123:    t29 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB124;

LAB125:    *((unsigned int *)t31) = 1;
    goto LAB128;

LAB127:    t32 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB128;

LAB129:    t60 = *((unsigned int *)t39);
    t61 = *((unsigned int *)t44);
    *((unsigned int *)t39) = (t60 | t61);
    t45 = (t7 + 4);
    t53 = (t31 + 4);
    t62 = *((unsigned int *)t7);
    t65 = (~(t62));
    t66 = *((unsigned int *)t45);
    t67 = (~(t66));
    t68 = *((unsigned int *)t31);
    t69 = (~(t68));
    t70 = *((unsigned int *)t53);
    t72 = (~(t70));
    t6 = (t65 & t67);
    t63 = (t69 & t72);
    t73 = (~(t6));
    t74 = (~(t63));
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t73);
    t76 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t76 & t74);
    t83 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t83 & t73);
    t84 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t84 & t74);
    goto LAB131;

LAB132:    xsi_set_current_line(159, ng0);
    t71 = ((char*)((ng3)));
    t77 = (t0 + 5552);
    xsi_vlogvar_assign_value(t77, t71, 0, 0, 1);
    goto LAB134;

}

static void Always_164_3(char *t0)
{
    char t11[8];
    char t20[8];
    char t21[8];
    char t64[8];
    char t70[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
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
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    int t111;

LAB0:    t1 = (t0 + 9288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 9656);
    *((int *)t2) = 1;
    t3 = (t0 + 9320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(164, ng0);

LAB5:    xsi_set_current_line(165, ng0);
    t4 = (t0 + 4752);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(166, ng0);

LAB20:    xsi_set_current_line(167, ng0);
    xsi_set_current_line(167, ng0);
    t9 = ((char*)((ng9)));
    t10 = (t0 + 7152);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 5);

LAB21:    t2 = (t0 + 7152);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB23;

LAB22:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB25;

LAB24:    *((unsigned int *)t11) = 1;

LAB25:    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB27;

LAB28:    goto LAB19;

LAB9:    xsi_set_current_line(171, ng0);

LAB32:    xsi_set_current_line(172, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 5552);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5712);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5872);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6032);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6192);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB19;

LAB11:    xsi_set_current_line(179, ng0);

LAB33:    xsi_set_current_line(180, ng0);
    xsi_set_current_line(180, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 7152);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);

LAB34:    t2 = (t0 + 7152);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB36;

LAB35:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB38;

LAB37:    *((unsigned int *)t11) = 1;

LAB38:    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB40;

LAB41:    goto LAB19;

LAB13:    xsi_set_current_line(184, ng0);

LAB45:    xsi_set_current_line(185, ng0);
    t3 = (t0 + 3232U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB46;

LAB47:
LAB48:    goto LAB19;

LAB15:    xsi_set_current_line(193, ng0);

LAB76:    xsi_set_current_line(194, ng0);
    t3 = (t0 + 3232U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB77;

LAB78:
LAB79:    goto LAB19;

LAB17:    xsi_set_current_line(206, ng0);

LAB98:    xsi_set_current_line(207, ng0);
    t3 = (t0 + 6832);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t11, 0, 8);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB102;

LAB100:    if (*((unsigned int *)t7) == 0)
        goto LAB99;

LAB101:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;

LAB102:    t10 = (t11 + 4);
    t32 = *((unsigned int *)t10);
    t34 = (~(t32));
    t37 = *((unsigned int *)t11);
    t38 = (t37 & t34);
    t41 = (t38 != 0);
    if (t41 > 0)
        goto LAB103;

LAB104:
LAB105:    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 3552U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t2);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t32 = (t16 ^ t17);
    t34 = (t15 | t32);
    t37 = *((unsigned int *)t4);
    t38 = *((unsigned int *)t5);
    t41 = (t37 | t38);
    t42 = (~(t41));
    t43 = (t34 & t42);
    if (t43 != 0)
        goto LAB112;

LAB109:    if (t41 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t11) = 1;

LAB112:    t9 = (t11 + 4);
    t44 = *((unsigned int *)t9);
    t45 = (~(t44));
    t46 = *((unsigned int *)t11);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB113;

LAB114:
LAB115:    goto LAB19;

LAB23:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB25;

LAB27:    xsi_set_current_line(167, ng0);

LAB29:    xsi_set_current_line(168, ng0);
    t18 = ((char*)((ng9)));
    t19 = (t0 + 5072);
    t22 = (t0 + 5072);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 5072);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 7152);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t20, t21, t24, t27, 2, 1, t30, 5, 2);
    t31 = (t20 + 4);
    t32 = *((unsigned int *)t31);
    t8 = (!(t32));
    t33 = (t21 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t8 && t35);
    if (t36 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 7152);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 5, t4, 5, t5, 5);
    t7 = (t0 + 7152);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 5);
    goto LAB21;

LAB30:    t37 = *((unsigned int *)t20);
    t38 = *((unsigned int *)t21);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t19, t18, 0, *((unsigned int *)t21), t40);
    goto LAB31;

LAB36:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB38;

LAB40:    xsi_set_current_line(180, ng0);

LAB42:    xsi_set_current_line(181, ng0);
    t18 = ((char*)((ng12)));
    t19 = (t0 + 5072);
    t22 = (t0 + 5072);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 5072);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 7152);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t20, t21, t24, t27, 2, 1, t30, 5, 2);
    t31 = (t20 + 4);
    t32 = *((unsigned int *)t31);
    t8 = (!(t32));
    t33 = (t21 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t8 && t35);
    if (t36 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 7152);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 5, t4, 5, t5, 5);
    t7 = (t0 + 7152);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 5);
    goto LAB34;

LAB43:    t37 = *((unsigned int *)t20);
    t38 = *((unsigned int *)t21);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t19, t18, 0, *((unsigned int *)t21), t40);
    goto LAB44;

LAB46:    xsi_set_current_line(185, ng0);

LAB49:    xsi_set_current_line(186, ng0);
    t5 = (t0 + 3072U);
    t7 = *((char **)t5);
    t5 = (t0 + 5232);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 4);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 5232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t9);
    t32 = (t16 ^ t17);
    t34 = (t15 | t32);
    t37 = *((unsigned int *)t7);
    t38 = *((unsigned int *)t9);
    t41 = (t37 | t38);
    t42 = (~(t41));
    t43 = (t34 & t42);
    if (t43 != 0)
        goto LAB51;

LAB50:    if (t41 != 0)
        goto LAB52;

LAB53:    memset(t20, 0, 8);
    t12 = (t11 + 4);
    t44 = *((unsigned int *)t12);
    t45 = (~(t44));
    t46 = *((unsigned int *)t11);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t12) != 0)
        goto LAB56;

LAB57:    t19 = (t20 + 4);
    t49 = *((unsigned int *)t20);
    t50 = *((unsigned int *)t19);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB58;

LAB59:    memcpy(t70, t20, 8);

LAB60:    t98 = (t70 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t70);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB72;

LAB73:
LAB74:    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6032);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB48;

LAB51:    *((unsigned int *)t11) = 1;
    goto LAB53;

LAB52:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t20) = 1;
    goto LAB57;

LAB56:    t18 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB57;

LAB58:    t22 = (t0 + 5232);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng3)));
    memset(t21, 0, 8);
    t26 = (t24 + 4);
    t27 = (t25 + 4);
    t52 = *((unsigned int *)t24);
    t53 = *((unsigned int *)t25);
    t54 = (t52 ^ t53);
    t55 = *((unsigned int *)t26);
    t56 = *((unsigned int *)t27);
    t57 = (t55 ^ t56);
    t58 = (t54 | t57);
    t59 = *((unsigned int *)t26);
    t60 = *((unsigned int *)t27);
    t61 = (t59 | t60);
    t62 = (~(t61));
    t63 = (t58 & t62);
    if (t63 != 0)
        goto LAB62;

LAB61:    if (t61 != 0)
        goto LAB63;

LAB64:    memset(t64, 0, 8);
    t29 = (t21 + 4);
    t65 = *((unsigned int *)t29);
    t66 = (~(t65));
    t67 = *((unsigned int *)t21);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t29) != 0)
        goto LAB67;

LAB68:    t71 = *((unsigned int *)t20);
    t72 = *((unsigned int *)t64);
    t73 = (t71 & t72);
    *((unsigned int *)t70) = t73;
    t31 = (t20 + 4);
    t33 = (t64 + 4);
    t74 = (t70 + 4);
    t75 = *((unsigned int *)t31);
    t76 = *((unsigned int *)t33);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB60;

LAB62:    *((unsigned int *)t21) = 1;
    goto LAB64;

LAB63:    t28 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t64) = 1;
    goto LAB68;

LAB67:    t30 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB68;

LAB69:    t80 = *((unsigned int *)t70);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t70) = (t80 | t81);
    t82 = (t20 + 4);
    t83 = (t64 + 4);
    t84 = *((unsigned int *)t20);
    t85 = (~(t84));
    t86 = *((unsigned int *)t82);
    t87 = (~(t86));
    t88 = *((unsigned int *)t64);
    t89 = (~(t88));
    t90 = *((unsigned int *)t83);
    t91 = (~(t90));
    t8 = (t85 & t87);
    t35 = (t89 & t91);
    t92 = (~(t8));
    t93 = (~(t35));
    t94 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t94 & t92);
    t95 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t95 & t93);
    t96 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t96 & t92);
    t97 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t97 & t93);
    goto LAB71;

LAB72:    xsi_set_current_line(187, ng0);

LAB75:    xsi_set_current_line(188, ng0);
    t104 = ((char*)((ng3)));
    t105 = (t0 + 5872);
    xsi_vlogvar_assign_value(t105, t104, 0, 0, 1);
    goto LAB74;

LAB77:    xsi_set_current_line(194, ng0);

LAB80:    xsi_set_current_line(195, ng0);
    t5 = (t0 + 3072U);
    t7 = *((char **)t5);
    t5 = (t0 + 5392);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 4);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 5232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_multiply(t11, 32, t4, 4, t5, 32);
    t7 = (t0 + 6992);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 9);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 5392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6992);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memset(t11, 0, 8);
    t10 = (t11 + 4);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 31U);
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & 31U);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 5, t4, 4, t11, 5);
    t18 = (t0 + 6672);
    xsi_vlogvar_assign_value(t18, t20, 0, 0, 5);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 5392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng14)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB82;

LAB81:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB82;

LAB85:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB83;

LAB84:    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5072);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = (t0 + 5072);
    t12 = (t10 + 64U);
    t18 = *((char **)t12);
    t19 = (t0 + 6672);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_get_array_select_value(t11, 32, t4, t9, t18, 2, 1, t23, 5, 2);
    t24 = ((char*)((ng9)));
    memset(t20, 0, 8);
    t25 = (t11 + 4);
    t26 = (t24 + 4);
    t13 = *((unsigned int *)t11);
    t14 = *((unsigned int *)t24);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t25);
    t17 = *((unsigned int *)t26);
    t32 = (t16 ^ t17);
    t34 = (t15 | t32);
    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t26);
    t41 = (t37 | t38);
    t42 = (~(t41));
    t43 = (t34 & t42);
    if (t43 != 0)
        goto LAB93;

LAB90:    if (t41 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t20) = 1;

LAB93:    t28 = (t20 + 4);
    t44 = *((unsigned int *)t28);
    t45 = (~(t44));
    t46 = *((unsigned int *)t20);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB94;

LAB95:
LAB96:
LAB88:    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6192);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB79;

LAB82:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB84;

LAB83:    *((unsigned int *)t11) = 1;
    goto LAB84;

LAB86:    xsi_set_current_line(198, ng0);

LAB89:    xsi_set_current_line(199, ng0);
    t18 = ((char*)((ng3)));
    t19 = (t0 + 5872);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 1);
    goto LAB88;

LAB92:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB93;

LAB94:    xsi_set_current_line(200, ng0);

LAB97:    xsi_set_current_line(201, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 5872);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    goto LAB96;

LAB99:    *((unsigned int *)t11) = 1;
    goto LAB102;

LAB103:    xsi_set_current_line(207, ng0);

LAB106:    xsi_set_current_line(208, ng0);
    t12 = (t0 + 5072);
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t22 = (t0 + 5072);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 5072);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 6672);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t20, 4, t19, t24, t27, 2, 1, t30, 5, 2);
    t31 = ((char*)((ng3)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 4, t20, 4, t31, 4);
    t33 = (t0 + 5072);
    t74 = (t0 + 5072);
    t82 = (t74 + 72U);
    t83 = *((char **)t82);
    t98 = (t0 + 5072);
    t104 = (t98 + 64U);
    t105 = *((char **)t104);
    t106 = (t0 + 6672);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    xsi_vlog_generic_convert_array_indices(t64, t70, t83, t105, 2, 1, t108, 5, 2);
    t109 = (t64 + 4);
    t42 = *((unsigned int *)t109);
    t35 = (!(t42));
    t110 = (t70 + 4);
    t43 = *((unsigned int *)t110);
    t36 = (!(t43));
    t39 = (t35 && t36);
    if (t39 == 1)
        goto LAB107;

LAB108:    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB105;

LAB107:    t44 = *((unsigned int *)t64);
    t45 = *((unsigned int *)t70);
    t40 = (t44 - t45);
    t111 = (t40 + 1);
    xsi_vlogvar_assign_value(t33, t21, 0, *((unsigned int *)t70), t111);
    goto LAB108;

LAB111:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB112;

LAB113:    xsi_set_current_line(213, ng0);
    t10 = ((char*)((ng3)));
    t12 = (t0 + 5712);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 1);
    goto LAB115;

}


extern void work_m_06538033963425362635_2144025757_init()
{
	static char *pe[] = {(void *)Always_45_0,(void *)Always_63_1,(void *)Always_128_2,(void *)Always_164_3};
	static char *se[] = {(void *)sp_find_cost};
	xsi_register_didat("work_m_06538033963425362635_2144025757", "isim/testbench_305176399_isim_beh.exe.sim/work/m_06538033963425362635_2144025757.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
