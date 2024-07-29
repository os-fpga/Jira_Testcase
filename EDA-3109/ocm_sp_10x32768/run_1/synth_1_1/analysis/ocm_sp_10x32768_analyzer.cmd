read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/07_27_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././ocm_sp_10x32768/run_1/IPs/rapidsilicon/ip/on_chip_memory/v1_0/ocm_sp_10x32768/src/ -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/IP_Catalog_Designs/ocm_sp_10x32768/results_dir/./ocm_sp_10x32768/run_1/IPs/rapidsilicon/ip/on_chip_memory/v1_0/ocm_sp_10x32768/src  /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/os_fpga2/Validation/RTL_testcases/IP_Catalog_Designs/ocm_sp_10x32768/results_dir/./ocm_sp_10x32768/run_1/IPs/rapidsilicon/ip/on_chip_memory/v1_0/ocm_sp_10x32768/src/ocm_sp_10x32768_v1_0.v 

analyze -top ocm_sp_10x32768
