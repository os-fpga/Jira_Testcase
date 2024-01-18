create_design design160_3_10_top_neg
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/design160_3_10_top_neg.v
set_top_module design160_3_10_top_neg
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
