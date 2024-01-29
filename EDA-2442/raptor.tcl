create_design dual_port_rom
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/dual_port_rom.v
set_top_module dual_port_rom
analyze
synth_options -new_tdp36k 
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
