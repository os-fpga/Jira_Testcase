create_design tdp_512x10
target_device 1GVTC
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/tdp_512x10.v
set_top_module tdp_512x10
analyze
set_limits bram 0
synth_options -new_tdp36k 
synthesize delay
pin_loc_assign_method free
packing
global_placement
place
route
sta
power
bitstream 
