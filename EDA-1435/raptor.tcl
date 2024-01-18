create_design asym_ram_tdp_write_first_dc
target_device GEMINI_COMPACT_82x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/asym_ram_tdp_write_first_dc.v
set_top_module asym_ram_tdp_write_first_dc
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
