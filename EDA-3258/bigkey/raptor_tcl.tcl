create_design bigkey
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/bigkey.v
set_top_module bigkey
add_constraint_file ./raptor_sdc.sdc
analyze
synth_options -effort high
synthesize delay
pin_loc_assign_method free
packing
place
route
sta
power
bitstream 
