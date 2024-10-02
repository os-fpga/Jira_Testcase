create_design test
target_device 1VG28
add_design_file ./rtl/test.v
set_top_module test
analyze
synthesize delay
setup_lec_sim
simulation_options compilation icarus gate
simulate gate icarus