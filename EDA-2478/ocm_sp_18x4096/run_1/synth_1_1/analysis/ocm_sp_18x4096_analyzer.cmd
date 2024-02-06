read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/02_06_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././rapidsilicon/ip/on_chip_memory/v1_0/ocm_sp_18x4096/src/ -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/IP_Catalog_Designs/ocm_sp_18x4096/EDA-2478/./rapidsilicon/ip/on_chip_memory/v1_0/ocm_sp_18x4096/src  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/IP_Catalog_Designs/ocm_sp_18x4096/EDA-2478/./rapidsilicon/ip/on_chip_memory/v1_0/ocm_sp_18x4096/src/ocm_sp_18x4096_v1_0.v 

analyze -top ocm_sp_18x4096
