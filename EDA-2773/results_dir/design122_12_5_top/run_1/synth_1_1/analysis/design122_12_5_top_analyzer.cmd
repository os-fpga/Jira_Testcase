read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/05_02_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/28apr/Validation/RTL_testcases/verilog_random_designs/design122_12_5_top/results_dir/.././rtl ../../../../.././rtl/full_adder_top.v
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/28apr/Validation/RTL_testcases/verilog_random_designs/design122_12_5_top/results_dir/.././rtl ../../../../.././rtl/large_mux.v
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/28apr/Validation/RTL_testcases/verilog_random_designs/design122_12_5_top/results_dir/.././rtl ../../../../.././rtl/register.v
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/28apr/Validation/RTL_testcases/verilog_random_designs/design122_12_5_top/results_dir/.././rtl ../../../../.././rtl/memory_cntrl.v
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/28apr/Validation/RTL_testcases/verilog_random_designs/design122_12_5_top/results_dir/.././rtl ../../../../.././rtl/encoder.v
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/28apr/Validation/RTL_testcases/verilog_random_designs/design122_12_5_top/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/28apr/Validation/RTL_testcases/verilog_random_designs/design122_12_5_top/results_dir/.././rtl/design122_12_5_top.v 

analyze -top design122_12_5_top
