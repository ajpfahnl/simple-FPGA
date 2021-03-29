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
    work_m_15847739171545064899_0703904626_init();
    work_m_09280292509058407771_1124997443_init();
    work_m_15675791207664621620_2285104337_init();
    work_m_00463379534898420142_1952215345_init();
    work_m_10286451478603001363_1057204358_init();
    work_m_09551840514731792886_2483771808_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_09551840514731792886_2483771808");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
