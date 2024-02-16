create_design accum_20lsb_input_to_mulltiplier_dsp19x2
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/accum_20lsb_input_to_mulltiplier_dsp19x2.v
add_simulation_file ./sim/co_sim_tb/co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2.v
set_top_testbench co_sim_accum_20lsb_input_to_mulltiplier_dsp19x2
set_top_module accum_20lsb_input_to_mulltiplier_dsp19x2
analyze
synthesize delay
simulation_options compilation verilator gate --timing --build --main --exe
simulate gate verilator
packing
global_placement
place
route
simulation_options compilation verilator -DPNR=1 pnr --timing --build --main --exe
simulate pnr verilator
sta
power
bitstream 
