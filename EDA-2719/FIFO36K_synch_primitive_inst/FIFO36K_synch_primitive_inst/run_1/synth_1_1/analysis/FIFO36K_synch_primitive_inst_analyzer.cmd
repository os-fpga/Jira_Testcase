read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/04_17_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2719/FIFO36K_synch_primitive_inst/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/Jira_Testcase/EDA-2719/FIFO36K_synch_primitive_inst/./rtl/FIFO36K_synch_primitive_inst.v 

analyze -top FIFO36K_synch_primitive_inst
