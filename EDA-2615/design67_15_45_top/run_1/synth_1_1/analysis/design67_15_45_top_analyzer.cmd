read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/03_20_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/jira/./rtl ../../../.././rtl/large_mux.v
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/jira/./rtl  /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/jira/./rtl/design67_15_45_top.v 

analyze -top design67_15_45_top
