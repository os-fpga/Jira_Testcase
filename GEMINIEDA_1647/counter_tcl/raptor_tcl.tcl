create_design counter_vhdl
target_device GEMINI_COMPACT_10x8
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file -VHDL_1993 ./rtl/UP_COUNTER.vhd
set_top_module UP_COUNTER
add_constraint_file ./constraints.sdc
add_simulation_file -VHDL_1993 ./rtl/testbench.vhd
set_top_testbench tb_counters
analyze
simulation_options ghdl simulation --stop-time=1000ns
simulate rtl ghdl syn_tb_rtl.fst
synthesize delay
simulate gate ghdl syn_tb_gate.fst
packing
global_placement
place
route
sta
power
bitstream 
