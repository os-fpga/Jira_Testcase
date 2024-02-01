read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/02_01_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/Memory_Designs/rams_reg_io_sp_dc_16384x8/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/Memory_Designs/rams_reg_io_sp_dc_16384x8/./rtl/rams_reg_io_sp_dc_16384x8.v 

analyze -top rams_reg_io_sp_dc_16384x8
