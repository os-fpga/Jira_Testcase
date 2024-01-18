read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/10_22_2023_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/DSP_Designs/complex_multiplier/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/DSP_Designs/complex_multiplier/results_dir/.././rtl/complex_multiplier.v 

analyze -top complex_multiplier
