read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/12_07_2023_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/RS_PRIMITIVES/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/Memory_Designs/tdp_256x10/EDA-2326/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/Memory_Designs/tdp_256x10/EDA-2326/./rtl/tdp_256x10.v 

analyze -top tdp_256x10
