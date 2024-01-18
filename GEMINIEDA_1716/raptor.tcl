create_design design3_5_5_top
target_device GEMINI_COMPACT_10x8
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/design3_5_5_top.v
set_top_module design3_5_5_top
add_constraint_file ./clk_constraint.sdc
synthesize 
packing
global_placement
place
route
sta
power
bitstream
