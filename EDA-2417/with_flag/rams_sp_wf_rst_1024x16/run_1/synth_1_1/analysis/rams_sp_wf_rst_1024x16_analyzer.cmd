read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/01_25_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/Memory_Designs/rams_sp_wf_rst_1024x16/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/Validation/RTL_testcases/Memory_Designs/rams_sp_wf_rst_1024x16/./rtl/rams_sp_wf_rst_1024x16.v 

analyze -top rams_sp_wf_rst_1024x16
