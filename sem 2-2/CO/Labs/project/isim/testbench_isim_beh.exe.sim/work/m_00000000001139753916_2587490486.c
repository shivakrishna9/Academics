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

/* This file is designed for use with ISim build 0x7dea747 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Documents/Academics/prosahil/sahil.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static const char *ng5 = "";
static const char *ng6 = " lower aluou = %b souc1 = %b souc2 = %b";
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {6U, 0U};



static void Always_537_0(char *t0)
{
    char t8[8];
    char t32[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t9;
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
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(537, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(538, ng0);

LAB5:    xsi_set_current_line(540, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(541, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(542, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(545, ng0);

LAB22:    xsi_set_current_line(547, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 16, t5, 16, t7, 16);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 16);
    goto LAB21;

LAB9:    xsi_set_current_line(554, ng0);

LAB23:    xsi_set_current_line(555, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 16, t5, 16, t7, 16);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 16);
    xsi_set_current_line(556, ng0);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB25;

LAB24:    if (t20 != 0)
        goto LAB26;

LAB27:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(562, ng0);

LAB32:    xsi_set_current_line(563, ng0);
    t2 = xsi_vlog_time(t32, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 0, ng5, 2, t0, (char)118, t32, 64);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = (t0 + 1208U);
    t10 = *((char **)t9);
    t9 = (t0 + 1368U);
    t23 = *((char **)t9);
    xsi_vlogfile_write(1, 0, 0, ng6, 4, t0, (char)118, t7, 16, (char)118, t10, 16, (char)118, t23, 16);
    xsi_set_current_line(564, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB30:    goto LAB21;

LAB11:    xsi_set_current_line(569, ng0);

LAB33:    xsi_set_current_line(570, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_divide(t8, 16, t5, 16, t7, 16);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 16);
    xsi_set_current_line(571, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_mod(t8, 16, t4, 16, t5, 16);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 16);
    goto LAB21;

LAB13:    xsi_set_current_line(574, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t7 = *((char **)t4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t8) = t13;
    t4 = (t5 + 4);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t9);
    t16 = (t14 | t15);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t10);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB34;

LAB35:
LAB36:    t30 = (t0 + 1768);
    xsi_vlogvar_assign_value(t30, t8, 0, 0, 16);
    goto LAB21;

LAB15:    xsi_set_current_line(577, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_lshift(t8, 16, t5, 16, t7, 16);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 16);
    goto LAB21;

LAB17:    xsi_set_current_line(579, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t8, 16, t5, 16, t7, 16);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 16);
    goto LAB21;

LAB19:    xsi_set_current_line(581, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_rshift(t8, 16, t5, 16, t7, 16);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 16);
    goto LAB21;

LAB25:    *((unsigned int *)t8) = 1;
    goto LAB27;

LAB26:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(557, ng0);

LAB31:    xsi_set_current_line(559, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 2088);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB30;

LAB34:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t8) = (t19 | t20);
    t23 = (t5 + 4);
    t24 = (t7 + 4);
    t21 = *((unsigned int *)t23);
    t22 = (~(t21));
    t25 = *((unsigned int *)t5);
    t33 = (t25 & t22);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t34 = (t28 & t27);
    t29 = (~(t33));
    t35 = (~(t34));
    t36 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t36 & t29);
    t37 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t37 & t35);
    goto LAB36;

}


extern void work_m_00000000001139753916_2587490486_init()
{
	static char *pe[] = {(void *)Always_537_0};
	xsi_register_didat("work_m_00000000001139753916_2587490486", "isim/testbench_isim_beh.exe.sim/work/m_00000000001139753916_2587490486.didat");
	xsi_register_executes(pe);
}
