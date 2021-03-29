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
    work_m_02153798333147977423_3240784588_init();
    work_m_14522649983120768104_1955463833_init();
    work_m_00060908789751306024_1147552130_init();
    work_m_09710596752086208259_0644182429_init();
    work_m_03337601418376997780_3809241398_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_03337601418376997780_3809241398");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
