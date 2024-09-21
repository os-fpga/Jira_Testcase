create_design syn2
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/syn2.v
set_top_module syn2
pin_loc_assign_method free
add_constraint_file constraints.sdc
analyze
synthesize delay
setup_lec_sim
simulation_options compilation verilator gate
simulate gate verilator
packing
place
route
simulation_options compilation verilator pnr
simulate pnr verilator
sta
power
bitstream 
