create_design murax_symbiflow_02_24
target_device 1GE100
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/murax_symbiflow.v
set_top_module murax_symbiflow
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
