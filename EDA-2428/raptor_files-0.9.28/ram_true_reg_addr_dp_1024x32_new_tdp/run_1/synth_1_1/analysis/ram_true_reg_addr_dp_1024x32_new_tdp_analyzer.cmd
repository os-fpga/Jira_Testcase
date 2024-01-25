read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/01_25_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/ram_true_reg_addr_dp_1024x32_new_tdp/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/ram_true_reg_addr_dp_1024x32_new_tdp/./rtl/ram_true_reg_addr_dp_1024x32_new_tdp.v 

analyze -top ram_true_reg_addr_dp_1024x32_new_tdp
