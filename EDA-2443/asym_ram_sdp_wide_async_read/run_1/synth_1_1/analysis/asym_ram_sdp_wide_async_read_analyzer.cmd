read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/01_26_2024_18_30_44/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/Validation/RTL_testcases/Memory_Designs/asym_ram_sdp_wide_async_read_notdpflag/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/zaheer_ahmad/Validation/RTL_testcases/Memory_Designs/asym_ram_sdp_wide_async_read_notdpflag/results_dir/.././rtl/asym_ram_sdp_wide_async_read.v 

analyze -top asym_ram_sdp_wide_async_read
