create_design design131_10_8_top
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_design_file ./rtl/design131_10_8_top.v
set_top_module design131_10_8_top
synthesize delay
pnr_options --gen_post_synthesis_netlist on
packing
global_placement
place
route
sta
power
bitstream
