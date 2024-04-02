create_design FullAdder32
target_device GEMINI_COMPACT_10x8
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/FullAdder32.v
set_top_module FullAdder32
add_constraint_file ./clk_constraint.sdc
synthesize 
packing
place
route
sta
power
bitstream
