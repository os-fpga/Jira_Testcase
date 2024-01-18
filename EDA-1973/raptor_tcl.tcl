create_design design1_5_5_top_iverilog
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/design1_5_5_top_iverilog.v
add_simulation_file ./sim/co_sim_tb/co_sim_design1_5_5_top_iverilog.v
set_top_testbench co_sim_design1_5_5_top_iverilog
set_top_module design1_5_5_top_iverilog
analyze
simulation_options compilation icarus rtl
simulate rtl icarus
synthesize delay
simulation_options compilation icarus gate
simulate gate icarus
