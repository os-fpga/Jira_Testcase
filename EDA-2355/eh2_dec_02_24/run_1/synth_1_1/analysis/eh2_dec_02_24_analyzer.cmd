read_verilog -sv /home/alain/os-fpga/Raptor/build/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
plugin -i systemverilog
read_systemverilog -synth  -top eh2_dec -y ../../../.././rtl -I../../../.././rtl -I../../../../ -I/home/alain/os-fpga/Jira_Testcase/EDA-2355/./rtl +libext+.v+.sv -sv /home/alain/os-fpga/Jira_Testcase/EDA-2355/./rtl/eh2_def.sv \
/home/alain/os-fpga/Jira_Testcase/EDA-2355/./rtl/eh2_lib.sv \
/home/alain/os-fpga/Jira_Testcase/EDA-2355/./rtl/eh2_pkg.sv \
/home/alain/os-fpga/Jira_Testcase/EDA-2355/./rtl/beh_lib.sv \
/home/alain/os-fpga/Jira_Testcase/EDA-2355/./rtl/eh2_dec_csr.sv \
/home/alain/os-fpga/Jira_Testcase/EDA-2355/./rtl/eh2_dec_decode_ctl.sv \
/home/alain/os-fpga/Jira_Testcase/EDA-2355/./rtl/eh2_dec_gpr_ctl.sv \
/home/alain/os-fpga/Jira_Testcase/EDA-2355/./rtl/eh2_dec_ib_ctl.sv \
/home/alain/os-fpga/Jira_Testcase/EDA-2355/./rtl/eh2_dec_tlu_ctl.sv \
/home/alain/os-fpga/Jira_Testcase/EDA-2355/./rtl/eh2_dec_tlu_top.sv \
/home/alain/os-fpga/Jira_Testcase/EDA-2355/./rtl/eh2_dec_trigger.sv \
/home/alain/os-fpga/Jira_Testcase/EDA-2355/./rtl/eh2_dec.sv \

analyze -top eh2_dec
