create_design accum_20lsb_input_to_mulltiplier
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/accum_20lsb_input_to_mulltiplier.v
set_top_module accum_20lsb_input_to_mulltiplier
synthesize delay
set_device_size castor82x68_heterogeneous
packing
global_placement
place
route
sta
power
bitstream 
