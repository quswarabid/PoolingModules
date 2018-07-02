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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Quswar Abid/Documents/Xilinx/MaxPool/maxpoolmodule.v";
static int ng1[] = {0, 0};



static void Initial_33_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(33, ng0);

LAB2:    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Always_39_1(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4144);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB7;

LAB6:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB9;

LAB8:    *((unsigned int *)t7) = 1;

LAB9:    t10 = (t7 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB16;

LAB15:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB18;

LAB17:    *((unsigned int *)t7) = 1;

LAB18:    t8 = (t7 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB20;

LAB21:
LAB22:
LAB13:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB25;

LAB24:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB27;

LAB26:    *((unsigned int *)t7) = 1;

LAB27:    t8 = (t7 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB34;

LAB33:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB34;

LAB37:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB36;

LAB35:    *((unsigned int *)t7) = 1;

LAB36:    t8 = (t7 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB38;

LAB39:
LAB40:
LAB31:    goto LAB2;

LAB7:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(42, ng0);

LAB14:    xsi_set_current_line(43, ng0);
    t16 = (t0 + 1208U);
    t17 = *((char **)t16);
    t16 = (t0 + 2248);
    xsi_vlogvar_assign_value(t16, t17, 0, 0, 32);
    goto LAB13;

LAB16:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(46, ng0);

LAB23:    xsi_set_current_line(47, ng0);
    t9 = (t0 + 1368U);
    t10 = *((char **)t9);
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 32);
    goto LAB22;

LAB25:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB27;

LAB29:    xsi_set_current_line(50, ng0);

LAB32:    xsi_set_current_line(51, ng0);
    t9 = (t0 + 1528U);
    t10 = *((char **)t9);
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 32);
    goto LAB31;

LAB34:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB36;

LAB38:    xsi_set_current_line(54, ng0);

LAB41:    xsi_set_current_line(55, ng0);
    t9 = (t0 + 1688U);
    t10 = *((char **)t9);
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 32);
    goto LAB40;

}

static void Always_59_2(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4160);
    *((int *)t2) = 1;
    t3 = (t0 + 3856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2408);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB7;

LAB6:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t9))
        goto LAB9;

LAB8:    *((unsigned int *)t10) = 1;

LAB9:    t14 = (t10 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t10);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB16;

LAB15:    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB18;

LAB17:    *((unsigned int *)t10) = 1;

LAB18:    t12 = (t10 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (~(t15));
    t17 = *((unsigned int *)t10);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB2;

LAB7:    t13 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(82, ng0);

LAB14:    xsi_set_current_line(83, ng0);
    t20 = (t0 + 2248);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 32, 0LL);
    goto LAB13;

LAB16:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(86, ng0);

LAB23:    xsi_set_current_line(87, ng0);
    t13 = (t0 + 2408);
    t14 = (t13 + 56U);
    t20 = *((char **)t14);
    t21 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 32, 0LL);
    goto LAB22;

}


extern void work_m_00000000003619187243_1951240559_init()
{
	static char *pe[] = {(void *)Initial_33_0,(void *)Always_39_1,(void *)Always_59_2};
	xsi_register_didat("work_m_00000000003619187243_1951240559", "isim/maxpoolmoduletest_isim_beh.exe.sim/work/m_00000000003619187243_1951240559.didat");
	xsi_register_executes(pe);
}
