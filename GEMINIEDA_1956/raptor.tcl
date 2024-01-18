create_design ram_inst_tdp_no_split_36_out_reg
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/ram_inst_tdp_no_split_36_out_reg.v
set_top_module ram_inst_tdp_no_split_36_out_reg
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
