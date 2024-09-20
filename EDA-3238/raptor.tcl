create_design fifo_generator_default
target_device 1VG28
configure_ip fifo_generator_v1_0 -mod_name fifo_generator_default -Pdata_width=36 -Pdepth=1024 -out_file ./fifo_generator_default/run_1/IPs/fifo_generator_default
ipgenerate
add_include_path ./fifo_generator_default/run_1/IPs/rapidsilicon/ip/fifo_generator/v1_0/fifo_generator_default/src/
add_library_ext .v .sv
add_library_path ./fifo_generator_default/run_1/IPs/rapidsilicon/ip/fifo_generator/v1_0/fifo_generator_default/src/
add_design_file ./fifo_generator_default/run_1/IPs/rapidsilicon/ip/fifo_generator/v1_0/fifo_generator_default/src/fifo_generator_default\_v1_0.v
set_top_module fifo_generator_default
analyze
synth_options -new_tdp36k 
synthesize delay
setup_lec_sim
simulation_options compilation icarus gate
simulate gate icarus
pin_loc_assign_method free
packing
place
route
simulation_options compilation icarus pnr
simulate pnr icarus
sta
power
bitstream 

