read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/03_26_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/ram_true_dp_dc_32768x4/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/ram_true_dp_dc_32768x4/./rtl/ram_true_dp_dc_32768x4.v 

analyze -top ram_true_dp_dc_32768x4
