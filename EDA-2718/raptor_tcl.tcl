create_design i_ddr_primitive_inst
target_device 1GVTC
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/i_ddr_primitive_inst.v
set_top_module i_ddr_primitive_inst
add_constraint_file ./constraint.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
