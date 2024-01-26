read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/01_25_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/Memory_Designs/bytewrite_tdp_ram_nc/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/Memory_Designs/bytewrite_tdp_ram_nc/results_dir/.././rtl/bytewrite_tdp_ram_nc.v 

analyze -top bytewrite_tdp_ram_nc
