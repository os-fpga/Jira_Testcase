create_design GJC46_edit
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/GJC46_edit.v
set_top_module GJC46_edit
add_constraint_file constraints.sdc
analyze
synthesize delay
setup_lec_sim 20 2
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
