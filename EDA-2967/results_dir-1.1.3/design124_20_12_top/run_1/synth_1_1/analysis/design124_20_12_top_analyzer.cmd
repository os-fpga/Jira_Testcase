read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/06_09_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/1111/Validation/RTL_testcases/verilog_random_designs/design124_20_12_top/results_dir/.././rtl ../../../../.././rtl/memory_cntrl.v
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/1111/Validation/RTL_testcases/verilog_random_designs/design124_20_12_top/results_dir/.././rtl ../../../../.././rtl/register.v
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/1111/Validation/RTL_testcases/verilog_random_designs/design124_20_12_top/results_dir/.././rtl ../../../../.././rtl/full_adder_top.v
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/1111/Validation/RTL_testcases/verilog_random_designs/design124_20_12_top/results_dir/.././rtl ../../../../.././rtl/encoder.v
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/1111/Validation/RTL_testcases/verilog_random_designs/design124_20_12_top/results_dir/.././rtl ../../../../.././rtl/large_mux.v
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/1111/Validation/RTL_testcases/verilog_random_designs/design124_20_12_top/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/1111/Validation/RTL_testcases/verilog_random_designs/design124_20_12_top/results_dir/.././rtl/design124_20_12_top.v 

analyze -top design124_20_12_top
