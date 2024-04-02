create_design ocm_sdp_20x32768
target_device GEMINI_COMPACT_104x68
configure_ip on_chip_memory_v1_0 -mod_name ocm_sdp_20x32768 -Pmemory_type=Simple_Dual_Port -Pdata_width=20 -Pwrite_depth=32768 -Pcommon_clk=1 -Pbram=1 -out_file ./ocm_sdp_20x32768/run_1/IPs/ocm_sdp_20x32768
ipgenerate
add_include_path ./ocm_sdp_20x32768/run_1/IPs/rapidsilicon/ip/on_chip_memory/v1_0/ocm_sdp_20x32768/src/
add_library_ext .v .sv
add_library_path ./ocm_sdp_20x32768/run_1/IPs/rapidsilicon/ip/on_chip_memory/v1_0/ocm_sdp_20x32768/src/
add_design_file ./ocm_sdp_20x32768/run_1/IPs/rapidsilicon/ip/on_chip_memory/v1_0/ocm_sdp_20x32768/src/ocm_sdp_20x32768\_v1_0.v
set_top_module ocm_sdp_20x32768
analyze
synth_options -new_tdp36k 
synthesize delay
pin_loc_assign_method free
packing
place
route
sta
power
bitstream 
