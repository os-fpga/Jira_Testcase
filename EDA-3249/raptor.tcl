create_design I_DELAY_primitive_inst
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/I_DELAY_primitive_inst.v
set_top_module I_DELAY_primitive_inst
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
