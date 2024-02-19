create_design add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive.v
add_simulation_file ./sim/co_sim_tb/co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive.v
set_top_testbench co_sim_add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive
set_top_module add_shifted_a_to_mult_output_coeff1_input_registered_new_primitive
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
