create_design accum_20lsb_input_to_mulltiplier
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/accum_20lsb_input_to_mulltiplier.v
set_top_module accum_20lsb_input_to_mulltiplier
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
