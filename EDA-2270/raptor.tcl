create_design unsigned_multiply
target_device GEMINI_COMPACT_10x8
add_design_file ./rtl/unsigned_multiply.v
set_top_module unsigned_multiply
add_constraint_file ./clk_constraint.sdc
synthesize 
packing
global_placement
place
route
sta
power
bitstream
