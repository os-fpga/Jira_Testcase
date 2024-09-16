read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/09_16_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Memory_Designs/ram_true_dp_dc_16384x8/EDA-3230/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/12SEPT/Validation/RTL_testcases/Memory_Designs/ram_true_dp_dc_16384x8/EDA-3230/./rtl/ram_true_dp_dc_16384x8.v 

analyze -top ram_true_dp_dc_16384x8
