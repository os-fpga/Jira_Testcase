read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/07_18_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CGA/repo/2024-07-18-20-46-51_T11509R123/Validation/RTL_testcases/verilog_random_designs/design76_21_50_top/results_dir/.././rtl ../../../../.././rtl/memory_cntrl.v
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CGA/repo/2024-07-18-20-46-51_T11509R123/Validation/RTL_testcases/verilog_random_designs/design76_21_50_top/results_dir/.././rtl  /nfs_scratch/scratch/CGA/repo/2024-07-18-20-46-51_T11509R123/Validation/RTL_testcases/verilog_random_designs/design76_21_50_top/results_dir/.././rtl/design76_21_50_top.v 

analyze -top design76_21_50_top
