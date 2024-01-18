create_design asym_ram_tdp_read_first_dc
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_design_file ./rtl/asym_ram_tdp_read_first_dc.v
set_top_module asym_ram_tdp_read_first_dc
ipgenerate
synthesize delay
pnr_options --gen_post_synthesis_netlist on
packing
global_placement
place
route
sta
power
bitstream
