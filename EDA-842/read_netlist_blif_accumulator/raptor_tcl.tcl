create_design read_netlist_blif_accumulator -type gate-level
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
read_netlist ./rtl/read_netlist_blif_accumulator\_post\_synth.blif
set_top_module read_netlist_blif_accumulator
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
