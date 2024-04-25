create_design murax
target_device 1GVTC
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/Murax.v
add_design_file ./rtl/murax_symbiflow.v
set_top_module murax_symbiflow
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
