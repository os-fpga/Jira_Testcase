read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/07_25_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/23july/EDA-3088/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/23july/EDA-3088/./rtl/GJC4_updated.v 

analyze -top GJC4_updated
