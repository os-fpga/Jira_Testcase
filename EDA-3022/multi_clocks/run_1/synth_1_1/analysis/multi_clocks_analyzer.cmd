read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/07_02_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/ArchBench/Testcases/multi_clocks/./rtl  /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/ArchBench/Testcases/multi_clocks/./rtl/multi_clocks.v 

analyze -top multi_clocks
