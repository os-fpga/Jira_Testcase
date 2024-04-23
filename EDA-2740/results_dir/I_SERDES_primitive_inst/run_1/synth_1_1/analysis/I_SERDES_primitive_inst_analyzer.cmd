read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/04_23_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/24apr/Jira_Testcase/EDA-2740/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/24apr/Jira_Testcase/EDA-2740/results_dir/.././rtl/I_SERDES_primitive_inst.v 

analyze -top I_SERDES_primitive_inst
