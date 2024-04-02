create_design and2
target_device GEMINI_COMPACT_10x8
add_design_file -V_2001 ./rtl/and2.v
set_top_module and2
analyze
synthesize delay
packing
place
route
sta
power
bitstream