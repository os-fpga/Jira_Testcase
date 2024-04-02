read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/03_26_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/25march/EDA-/mac_32/results_dir/.././rtl/mac_32.v 

analyze -top mac_32
