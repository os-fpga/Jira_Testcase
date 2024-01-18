create_design async_counter
target_device GEMINI_COMPACT_104x68
add_design_file -VHDL_2019 ./rtl/top.vhd
set_top_module top
add_simulation_file -VHDL_2019 tb/async_counter_tb.vhd
set_top_testbench tb_top
analyze
simulation_options "ghdl" "simulation" "--stop-time=1000ns"
simulate "rtl" "ghdl" rtl_sim.vcd
pnr_netlist_lang vhdl
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
