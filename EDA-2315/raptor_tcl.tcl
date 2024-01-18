create_design fir_filter
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl/
add_library_path ./rtl/
add_library_ext .v .sv
set_top_module fir_filter
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 