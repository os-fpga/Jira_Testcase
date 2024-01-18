read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/10_07_2023_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/iverilog_tests/filt_mac_iverilog/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/Compiler_Validation/RTL_testcases/iverilog_tests/filt_mac_iverilog/./rtl/filt_mac_iverilog.v 

analyze -top filt_mac_iverilog
