create_design design1_5_5_top
target_device GEMINI_COMPACT_104x68
add_design_file ./rtl/design1_5_5_top.v
set_top_module design1_5_5_top
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
