read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/08_07_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../.././rtl/ -I../../../../.. -I/nfs_scratch/scratch/CompilerValidation/abdul_hameed/wbif_68k/results_dir/.././rtl  /nfs_scratch/scratch/CompilerValidation/abdul_hameed/wbif_68k/results_dir/.././rtl/dragonball_wbmaster_top.v 

analyze -top dragonball_wbmaster_top
