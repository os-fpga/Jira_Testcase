read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/08_27_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CGA/repo/2024-08-27-22-44-49_T11882R123/Validation/RTL_testcases/verilog_random_designs/design67_15_45_top/results_dir/.././rtl ../../../../.././rtl/large_mux.v
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CGA/repo/2024-08-27-22-44-49_T11882R123/Validation/RTL_testcases/verilog_random_designs/design67_15_45_top/results_dir/.././rtl  /nfs_scratch/scratch/CGA/repo/2024-08-27-22-44-49_T11882R123/Validation/RTL_testcases/verilog_random_designs/design67_15_45_top/results_dir/.././rtl/design67_15_45_top.v 

analyze -top design67_15_45_top
