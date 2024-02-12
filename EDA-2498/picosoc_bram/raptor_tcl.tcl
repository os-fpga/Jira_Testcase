create_design picosoc_symbiflow
target_device 1GVTC
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/simpleuart.v
add_design_file ./rtl/progmem.v
add_design_file ./rtl/picosoc_noflash.v
add_design_file ./rtl/picorv32.v
add_design_file ./rtl/picosoc_symbiflow.v
set_top_module picosoc_symbiflow
pin_loc_assign_method free
add_constraint_file constraints.sdc
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
