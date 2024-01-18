create_design ALU_HCSA
target_device GEMINI
add_include_path ./rtl
add_design_file ./rtl/alu_opencore.vhd
add_design_file ./rtl/types.vhd
set_top_module ALU_HCSA
synthesize delay
packing
global_placement
place
route
sta
power
bitstream
