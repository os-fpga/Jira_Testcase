create_design sp_ram
target_device GEMINI_COMPACT_10x8
add_include_path ./rtl
add_design_file ./rtl/sp_ram.v
set_top_module sp_ram
add_constraint_file ./clk_constraint.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream
