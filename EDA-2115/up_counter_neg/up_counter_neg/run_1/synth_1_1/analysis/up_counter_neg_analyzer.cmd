read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/09_29_2023_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../ -I/nfs_project/castor/DV/Azfar/Rigel/DV/subsystem_level/fabric_verif_env/src/fabric_designs/benchmarks/clb/up_counter_neg  /nfs_project/castor/DV/Azfar/Rigel/DV/subsystem_level/fabric_verif_env/src/fabric_designs/benchmarks/clb/up_counter_neg/up_counter_neg.v 

analyze -top up_counter_neg
