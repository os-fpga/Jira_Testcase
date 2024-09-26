read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/09_18_2024_09_15_01/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines -DRIGEL_22x4= 
read_verilog  -I../../../../ -I/nfs_project/castor/DV/Azfar/Rigel/DV/subsystem_level/fabric_verif_env/src/fabric_designs/gbox/gbox_clk_as_data/.  /nfs_project/castor/DV/Azfar/Rigel/DV/subsystem_level/fabric_verif_env/src/fabric_designs/gbox/gbox_clk_as_data/./gbox_clk_as_data.v 

analyze -top gbox_clk_as_data
