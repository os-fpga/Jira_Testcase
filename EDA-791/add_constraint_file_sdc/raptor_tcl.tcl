create_design add_constraint_file_sdc
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/add_constraint_file_sdc.v
set_top_module add_constraint_file_sdc
add_constraint_file ./rtl/counter_sdc.sdc
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
