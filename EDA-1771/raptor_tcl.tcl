create_design CARRY_CHAIN
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/CARRY_CHAIN.v
set_top_module CARRY_CHAIN
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
