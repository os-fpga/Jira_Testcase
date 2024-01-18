read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/12_11_2023_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/RS_PRIMITIVES/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-1670/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-1670/./rtl/ram_simple_dp_dc_512x32.v 

analyze -top ram_simple_dp_dc_512x32
