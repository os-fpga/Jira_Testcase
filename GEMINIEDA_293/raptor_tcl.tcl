create_design MDCT
target_device GEMINI
add_include_path ./rtl
add_design_file ./rtl/MDCT_PKG.vhd
add_design_file ./rtl/DBUFCTL.VHD
add_design_file ./rtl/DCT1D.vhd
add_design_file ./rtl/DCT2D.VHD
add_design_file ./rtl/MDCT.VHD
add_design_file ./rtl/RAM.VHD
add_design_file ./rtl/ROME.VHD
add_design_file ./rtl/ROMO.VHD
set_top_module MDCT
synthesize delay
packing
global_placement
place
route
sta
power
bitstream
