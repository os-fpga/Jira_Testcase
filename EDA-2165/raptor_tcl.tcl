create_design complex_multiplier
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/complex_multiplier.v
set_top_module complex_multiplier
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
