read_verilog -sv /nfs_eda_sw/softwares/Raptor/instl_dir/04_01_2024_09_15_02/share/raptor/sim_models/rapidsilicon/genesis3/FPGA_PRIMITIVES_MODELS/blackbox_models/cell_sim_blackbox.v
verilog_defines 
read_verilog  -I../../../../ -I/nfs_home/iparapid/mijaz/Raptor_Projects/synth_test/run_1/IPs/rapidsilicon/ip/on_chip_memory/v1_0/on_chip_memory/synth/./rtl  /nfs_home/iparapid/mijaz/Raptor_Projects/synth_test/run_1/IPs/rapidsilicon/ip/on_chip_memory/v1_0/on_chip_memory/synth/./rtl/on_chip_memory_v1_0.v 

analyze -top on_chip_memory
