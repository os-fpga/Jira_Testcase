create_design ocm_sdp_110x8192
target_device GEMINI_COMPACT_104x68
configure_ip on_chip_memory_v1_0 -mod_name ocm_sdp_110x8192 -Pmemory_type=Simple_Dual_Port -Pdata_width=110 -Pwrite_depth=8192 -Pcommon_clk=1 -Pbram=1 -out_file ./ocm_sdp_110x8192
ipgenerate
add_include_path ./rapidsilicon/ip/on_chip_memory/v1_0/ocm_sdp_110x8192/src/
add_library_ext .v .sv
add_library_path rapidsilicon/ip/on_chip_memory/v1_0/ocm_sdp_110x8192/src/
add_design_file ./rapidsilicon/ip/on_chip_memory/v1_0/ocm_sdp_110x8192/src/ocm_sdp_110x8192_v1_0.v
set_top_module ocm_sdp_110x8192
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
