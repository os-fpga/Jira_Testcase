create_design design412_1_30_top_neg
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/design412_1_30_top_neg.v
set_top_module design412_1_30_top_neg
add_constraint_file ./clk_constraint.sdc
synthesize 
packing
place
route
sta
power
bitstream
