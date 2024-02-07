read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/01_25_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../ -I/nfs_project/castor/DV/anas/rigel/new_clones/rigel_dec1/DV/subsystem_level/fabric_verif_env/src/fabric_designs/benchmarks/bram/dpram_36x1024/.  /nfs_project/castor/DV/anas/rigel/new_clones/rigel_dec1/DV/subsystem_level/fabric_verif_env/src/fabric_designs/benchmarks/bram/dpram_36x1024/./dpram_36x1024.v 

analyze -top dpram_36x1024
