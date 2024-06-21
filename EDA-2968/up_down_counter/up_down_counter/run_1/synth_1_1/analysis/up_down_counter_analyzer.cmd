read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/06_19_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../ -I/nfs_project/castor/DV/Azfar/Rigel/DV/subsystem_level/fabric_verif_env/src/fabric_designs/benchmarks/clb/up_down_counter  /nfs_project/castor/DV/Azfar/Rigel/DV/subsystem_level/fabric_verif_env/src/fabric_designs/benchmarks/clb/up_down_counter/up_down_counter.v 

analyze -top up_down_counter
