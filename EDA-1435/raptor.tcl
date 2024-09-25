create_design asym_ram_tdp_write_first_dc
target_device GEMINI_COMPACT_10x8
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/asym_ram_tdp_write_first_dc.v
set_top_module asym_ram_tdp_write_first_dc

# The surelog parser converts blocking to non-blocking,
# Enabling RAM inference
parser_type surelog

analyze

synthesize delay

setup_lec_sim

simulate icarus gate 

packing
place
route

simulate icarus pnr

sta
power
bitstream 
