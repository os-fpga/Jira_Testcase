create_design stereovision2
target_device GEMINI_COMPACT_104x68
add_design_file ./rtl/stereovision2.v
set_top_module stereovision2
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
