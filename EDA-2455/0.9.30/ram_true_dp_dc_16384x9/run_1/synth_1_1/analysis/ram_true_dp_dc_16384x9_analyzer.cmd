read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/02_01_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/Memory_Designs/ram_true_dp_dc_16384x9/EDA-2455/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/Memory_Designs/ram_true_dp_dc_16384x9/EDA-2455/./rtl/ram_true_dp_dc_16384x9.v 

analyze -top ram_true_dp_dc_16384x9
