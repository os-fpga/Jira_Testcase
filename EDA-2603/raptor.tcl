create_design and2
target_device GEMINI_COMPACT_10x8
add_include_path ./rtl
add_design_file ./rtl/and2.v
set_top_module and2
add_constraint_file ./clk_constraint.sdc
add_constraint_file ./pin_mapping.pin
synthesize 
packing
place
route
sta
power
bitstream
