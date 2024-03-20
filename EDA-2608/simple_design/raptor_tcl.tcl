create_design simple_design
target_device GEMINI_COMPACT_104x68
add_design_file ./simple_design.v
set_top_module simple_design
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
