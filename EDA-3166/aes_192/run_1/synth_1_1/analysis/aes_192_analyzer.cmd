read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/08_29_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/20Aug/Validation/RTL_testcases/Benchmarking_QoR_testcases/aes_192/EDA-3166/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/20Aug/Validation/RTL_testcases/Benchmarking_QoR_testcases/aes_192/EDA-3166/./rtl/table.v 
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/20Aug/Validation/RTL_testcases/Benchmarking_QoR_testcases/aes_192/EDA-3166/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/20Aug/Validation/RTL_testcases/Benchmarking_QoR_testcases/aes_192/EDA-3166/./rtl/round.v 
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/20Aug/Validation/RTL_testcases/Benchmarking_QoR_testcases/aes_192/EDA-3166/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/20Aug/Validation/RTL_testcases/Benchmarking_QoR_testcases/aes_192/EDA-3166/./rtl/aes_192.v 

analyze -top aes_192
