create_design zbt_top
target_device GEMINI
add_include_path ./rtl
add_design_file ./rtl/zbt_top.vhd
set_top_module zbt_top
synthesize delay
packing
global_placement
place
route
sta
power
bitstream
