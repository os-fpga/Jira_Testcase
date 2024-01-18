create_design mux_8_1
target_device GEMINI_COMPACT_10x8
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/mux_8_1.v
set_top_module mux_8_1
add_constraint_file ./clk_constraint.sdc
pnr_options --post_synth_netlist_unconn_inputs gnd
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
