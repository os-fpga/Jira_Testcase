create_design axil_crossbar_wrapper
target_device GEMINI
add_include_path ../src
add_library_path ../src
add_library_ext .v .sv
add_design_file ../src/axil_crossbar_wrapper.v
set_top_module axil_crossbar_wrapper
synthesize area
pin_loc_assign_method free
packing
place
route
sta
bitstream
