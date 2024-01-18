create_design tdp_256x10
target_device 1GVTC
add_design_file ./rtl/tdp_256x10.v
set_top_module tdp_256x10
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
