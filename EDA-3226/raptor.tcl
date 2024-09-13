create_design design197_15_15_top
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/design197_15_15_top.v
set_top_module design197_15_15_top
analyze
synthesize delay
setup_lec_sim
simulation_options compilation icarus gate
simulate gate icarus
packing
place
route
simulation_options compilation icarus pnr
simulate pnr icarus
sta
power
bitstream 
