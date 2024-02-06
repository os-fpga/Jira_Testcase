read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/02_06_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2477/simple_testcase/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2477/simple_testcase/./rtl/simple_testcase_with_neg_constant.v 

analyze -top simple_testcase_with_neg_constant
