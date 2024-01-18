create_design add_1bit
target_device 1GVTC
add_design_file ./rtl/add_1bit.v
set_top_module add_1bit
synthesize delay
packing
place
route
sta
power
bitstream
