create_design axil_interconnect_wrapper
target_device GEMINI
configure_ip axil_crossbar_v1_0 -mod_name=axil_crossbar_v1_0 -Pm_count=8 -Ps_count=8 -Pdata_width=32 -Paddr_width=32 -out_file ./axil_crossbar_8x8.v
ipgenerate
add_include_path ../src
add_library_path ../src
add_library_ext .v .sv
add_design_file ../src/axil_interconnect_wrapper.v
set_top_module axil_interconnect_wrapper
synthesize
packing
global_placement
place
route
sta
power
bitstream
