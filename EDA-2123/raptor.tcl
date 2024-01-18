create_design zbt_top
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/zbt_top.vhd
set_top_module zbt_top
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
