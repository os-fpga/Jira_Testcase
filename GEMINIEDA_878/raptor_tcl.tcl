create_design single_port_ram_mem
target_device GEMINI_10x8
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/single_port_ram_mem.v
set_top_module single_port_ram_mem
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
