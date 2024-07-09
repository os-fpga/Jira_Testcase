create_design test
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/test.v
set_top_module test
add_constraint_file constraints.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
