read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/04_26_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/24apr/Jira_Testcase/EDA-2755/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/24apr/Jira_Testcase/EDA-2755/./rtl/ram_simple_dp_sync_reg_read_2048x64.v 

analyze -top ram_simple_dp_sync_reg_read_2048x64
