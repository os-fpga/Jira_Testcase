read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/05_02_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CGA/repo/2024-05-03-00-55-59_T10875R111/Validation/RTL_testcases/Benchmarking_QoR_testcases/aes_192/results_dir/.././rtl  /nfs_scratch/scratch/CGA/repo/2024-05-03-00-55-59_T10875R111/Validation/RTL_testcases/Benchmarking_QoR_testcases/aes_192/results_dir/.././rtl/table.v 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CGA/repo/2024-05-03-00-55-59_T10875R111/Validation/RTL_testcases/Benchmarking_QoR_testcases/aes_192/results_dir/.././rtl  /nfs_scratch/scratch/CGA/repo/2024-05-03-00-55-59_T10875R111/Validation/RTL_testcases/Benchmarking_QoR_testcases/aes_192/results_dir/.././rtl/round.v 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CGA/repo/2024-05-03-00-55-59_T10875R111/Validation/RTL_testcases/Benchmarking_QoR_testcases/aes_192/results_dir/.././rtl  /nfs_scratch/scratch/CGA/repo/2024-05-03-00-55-59_T10875R111/Validation/RTL_testcases/Benchmarking_QoR_testcases/aes_192/results_dir/.././rtl/aes_192.v 

analyze -top aes_192
