create_design read_netlist_blif_accumulator -type gate-level
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
read_netlist ./read_netlist_blif_accumulator/run_1/synth_1_1/synthesis/read_netlist_blif_accumulator_post_synth.blif
set_top_module read_netlist_blif_accumulator
analyze
synthesize delay
pnr_netlist_lang blif
packing
global_placement
place
route
sta
power
bitstream 
