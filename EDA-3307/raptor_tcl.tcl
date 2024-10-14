create_design GJC47
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/GJC47.v
set_top_module GJC47
analyze
synthesize delay
setup_lec_sim
simulate icarus gate
pin_loc_assign_method free
packing
place
route
simulation_options compilation icarus pnr
simulate pnr icarus
sta
power
bitstream