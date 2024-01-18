create_design adder_verilator
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/adder_verilator.v
add_simulation_file ./sim/co_sim_tb/tb_adder_verilator.cpp ./sim/co_sim_tb/co_sim_adder_verilator.v
set_top_testbench co_sim_adder_verilator
set_top_module adder_verilator
analyze
simulation_options compilation verilator rtl --timing
simulate rtl verilator
synthesize delay
simulation_options compilation verilator gate --timing
simulate gate verilator
packing
global_placement
place
route
simulation_options compilation verilator -DPNR=1 pnr --timing
simulate pnr verilator
sta
power
bitstream 
