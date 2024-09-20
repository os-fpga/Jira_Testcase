create_design ocla_probe1024_mem_depth_32
target_device 1VG28
add_library_ext .v .sv
add_library_path ./rtl
add_design_file ./rtl/ocla_probe1024_mem_depth_32.sv
set_top_module ocla_probe1024_mem_depth_32
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
