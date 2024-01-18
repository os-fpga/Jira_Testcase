read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/11_17_2023_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/RS_PRIMITIVES/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/iverilog_tests/accum_output_registered_iverilog/EDA-2269/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/iverilog_tests/accum_output_registered_iverilog/EDA-2269/./rtl/accum_output_registered_iverilog.v 

analyze -top accum_output_registered_iverilog
