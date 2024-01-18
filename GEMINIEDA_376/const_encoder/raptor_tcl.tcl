create_design const_encoder
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_design_file ./rtl/const_encoder.v
set_top_module const_encoder
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
