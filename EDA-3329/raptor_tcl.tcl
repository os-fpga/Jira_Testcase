create_design and2
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/and2.v
set_top_module and2
add_constraint_file ./pin_mapping.pin
analyze
synthesize delay
setup_lec_sim 2 2
simulation_options compilation icarus gate
simulate gate icarus
packing
place
route
simulation_options compilation icarus pnr
simulate pnr icarus
clear_simulation_files
setup_lec_sim 10
simulate timed_pnr icarus
sta
power
bitstream 
