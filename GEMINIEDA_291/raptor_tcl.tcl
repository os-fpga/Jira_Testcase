create_design dac_dsm3_top
target_device GEMINI
add_include_path ./rtl
add_design_file ./rtl/dac_dsm3.vhd
add_design_file ./rtl/dac_dsm3_top.vhd
set_top_module dac_dsm3_top
synthesize delay
packing
place
route
sta
power
bitstream
