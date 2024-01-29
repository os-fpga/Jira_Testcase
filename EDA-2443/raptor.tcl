create_design asym_ram_sdp_wide_async_read
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/asym_ram_sdp_wide_async_read.v
set_top_module asym_ram_sdp_wide_async_read
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
