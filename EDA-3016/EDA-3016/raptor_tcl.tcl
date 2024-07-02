create_design TDP_RAM18KX2_primitive_inst
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/TDP_RAM18KX2_primitive_inst.v
set_top_module TDP_RAM18KX2_primitive_inst
add_constraint_file ./constraint.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
