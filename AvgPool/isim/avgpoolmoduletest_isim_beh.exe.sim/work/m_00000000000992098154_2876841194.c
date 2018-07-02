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
static const char *ng0 = "C:/Users/Quswar Abid/Documents/Xilinx/AvgPool/avgpoolmodule.v";
static int ng1[] = {0, 0};
static int ng2[] = {4, 0};



static void Initial_30_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Cont_34_1(char *t0)
{
    char t5[8];
    char t7[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 1528U);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t5, 32, t6, 32);
    t2 = (t0 + 1688U);
    t8 = *((char **)t2);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t7, 32, t8, 32);
    t2 = (t0 + 4080);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t14 = (t0 + 3984);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Always_36_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4000);
    *((int *)t2) = 1;
    t3 = (t0 + 3696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_divide(t6, 32, t5, 32, t4, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB2;

}


extern void work_m_00000000000992098154_2876841194_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Cont_34_1,(void *)Always_36_2};
	xsi_register_didat("work_m_00000000000992098154_2876841194", "isim/avgpoolmoduletest_isim_beh.exe.sim/work/m_00000000000992098154_2876841194.didat");
	xsi_register_executes(pe);
}
