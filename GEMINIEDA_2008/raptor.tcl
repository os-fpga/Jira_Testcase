create_design dec3x8_concurrent
target_device GEMINI_COMPACT_104x68
add_design_file -VHDL_2000 rtl/dec3x8_concurrent.vhd
set_top_module dec3x8_concurrent
add_simulation_file -VHDL_2000 tb/dec3x8_concurrent_test.vhd
set_top_testbench dec3x8_concurrent_test
analyze
pnr_netlist_lang vhdl
synthesize delay
simulation_options "ghdl" "simulation" "--stop-time=1000ns"
simulate "gate" "ghdl" post_synth_sim.vcd
