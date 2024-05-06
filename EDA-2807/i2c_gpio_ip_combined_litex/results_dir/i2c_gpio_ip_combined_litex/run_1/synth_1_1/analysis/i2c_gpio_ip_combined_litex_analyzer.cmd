read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/04_30_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/i2c_gpio_ip_combined_litex/results_dir/.././rtl  /nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/i2c_gpio_ip_combined_litex/results_dir/.././rtl/picorv32.v 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/i2c_gpio_ip_combined_litex/results_dir/.././rtl  /nfs_scratch/scratch/CGA/repo/2024-04-30-11-45-48_T10763R122/Validation/RTL_testcases/RTL_Benchmarks_Gap_Analysis/i2c_gpio_ip_combined_litex/results_dir/.././rtl/sim.v 

analyze -top sim
