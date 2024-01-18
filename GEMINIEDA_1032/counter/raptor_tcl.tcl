create_design counter
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/counter.vhd
set_top_module counter
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
