read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl/ -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/i2c/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/i2c/results_dir/.././rtl/i2c.v 

analyze -top i2c
