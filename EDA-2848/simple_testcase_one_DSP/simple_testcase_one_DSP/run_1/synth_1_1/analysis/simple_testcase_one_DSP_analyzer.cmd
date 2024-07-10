read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/07_10_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/8thJuly/Jira_Testcase/EDA-2848/simple_testcase_one_DSP/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/8thJuly/Jira_Testcase/EDA-2848/simple_testcase_one_DSP/./rtl/simple_testcase_one_DSP.v 

analyze -top simple_testcase_one_DSP
