create_design eio_top2
target_device 1VG28
configure_ip axil_eio_v1_0 -mod_name axil_eio_default -out_file ./axil_eio_default/run_1/IPs/axil_eio_default

ipgenerate
add_include_path ./axil_eio_default/run_1/IPs/rapidsilicon/ip/axil_eio/v1_0/axil_eio_default/src/
add_library_ext .v .sv
add_library_path ./axil_eio_default/run_1/IPs/rapidsilicon/ip/axil_eio/v1_0/axil_eio_default/src/
add_design_file ./axil_eio_default/run_1/IPs/rapidsilicon/ip/axil_eio/v1_0/axil_eio_default/src/axil_eio_default_v1_0.v
set_top_module axil_eio_default

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
