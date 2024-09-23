create_design SBox
target_device 1VG28
add_design_file ./rtl/SBox.v
set_top_module SBox
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
