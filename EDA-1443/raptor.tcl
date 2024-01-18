create_design ram_inst_tdp_split_rst_BE_36
target_device GEMINI_COMPACT_82x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/ram_inst_tdp_split_rst_BE_36.v
set_top_module ram_inst_tdp_split_rst_BE_36
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
