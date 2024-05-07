create_design axil_ethernet_default
target_device GEMINI_COMPACT_104x68
configure_ip axil_ethernet_v1_0 -mod_name axil_ethernet_default -version=v1_0 -out_file ./axil_ethernet_default/run_1/IPs/axil_ethernet_default
ipgenerate
add_include_path ./axil_ethernet_default/run_1/IPs/rapidsilicon/ip/axil_ethernet/v1_0/axil_ethernet_default/src/
add_library_ext .v .sv
add_library_path ./axil_ethernet_default/run_1/IPs/rapidsilicon/ip/axil_ethernet/v1_0/axil_ethernet_default/src/
add_design_file ./axil_ethernet_default/run_1/IPs/rapidsilicon/ip/axil_ethernet/v1_0/axil_ethernet_default/src/axil_ethernet_default\_v1_0.v
set_top_module axil_ethernet_default
analyze
simulate_ip axil_ethernet_default
synth_options -new_tdp36k 
synthesize delay
pin_loc_assign_method free
packing
place
route
sta
power
bitstream 
