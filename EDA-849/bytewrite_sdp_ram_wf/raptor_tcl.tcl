create_design bytewrite_sdp_ram_wf
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/bytewrite_sdp_ram_wf.v
set_top_module bytewrite_sdp_ram_wf
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
