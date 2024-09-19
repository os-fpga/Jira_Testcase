create_design cordic
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/cordic.v
set_top_module cordic
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
