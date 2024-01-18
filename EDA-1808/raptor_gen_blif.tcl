create_design read_netlist_blif_accumulator
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/read_netlist_blif_accumulator.v
set_top_module read_netlist_blif_accumulator
synthesize delay
