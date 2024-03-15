read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/03_05_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2597/design107_5_8_top/./rtl ../../../.././rtl/register.v
read_verilog -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2597/design107_5_8_top/./rtl ../../../.././rtl/memory_cntrl.v
read_verilog  -I../../../.././rtl -I../../../../ -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2597/design107_5_8_top/./rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/EDA-2597/design107_5_8_top/./rtl/design107_5_8_top.v 

analyze -top design107_5_8_top
