create_design adder
target_device GEMINI_COMPACT_104x68
#add_include_path ./src
#add_library_path ./src
add_library_ext .v
add_design_file ./src/adder_top.v
add_design_file ./src/adder.v
set_top_module adder_top
analyze
synthesize delay
#packing
#global_placement
#place
#route
#bitstream 
