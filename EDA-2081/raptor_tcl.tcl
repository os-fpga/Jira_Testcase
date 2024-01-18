create_design mkDelayWorker32B
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/mkDelayWorker32B.v
set_top_module mkDelayWorker32B
analyze
synthesize delay
pin_loc_assign_method free
packing
global_placement
place
route
sta
power
bitstream 
