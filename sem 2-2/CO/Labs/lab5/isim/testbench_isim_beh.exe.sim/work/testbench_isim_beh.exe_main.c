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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003347437571_0724918388_init();
    work_m_00000000000786203269_1949178628_init();
    work_m_00000000002013452923_2073120511_init();


    xsi_register_tops("work_m_00000000000786203269_1949178628");
    xsi_register_tops("work_m_00000000002013452923_2073120511");


    return xsi_run_simulation(argc, argv);

}