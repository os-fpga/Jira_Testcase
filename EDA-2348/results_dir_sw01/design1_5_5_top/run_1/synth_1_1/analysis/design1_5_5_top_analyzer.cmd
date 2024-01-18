read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/12_12_2023_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/RS_PRIMITIVES/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2348/design1_5_5_top/results_dir/.././rtl ../../../../.././rtl/invertion.v
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2348/design1_5_5_top/results_dir/.././rtl ../../../../.././rtl/large_mux.v
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2348/design1_5_5_top/results_dir/.././rtl ../../../../.././rtl/encoder.v
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2348/design1_5_5_top/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2348/design1_5_5_top/results_dir/.././rtl/design1_5_5_top.v 

analyze -top design1_5_5_top
