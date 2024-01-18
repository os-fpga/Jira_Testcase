create_design and2
target_device GEMINI_COMPACT_10x8
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/and2.v
set_top_module and2
set_device_size castor10x8_heterogeneous
pnr_options --post_synth_netlist_unconn_inputs vcc
synthesize delay
packing
global_placement
place
route
sta
power
bitstream
