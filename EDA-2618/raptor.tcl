create_design mdct
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_design_file ./rtl/MDCT_PKG.vhd
add_design_file ./rtl/DCT1D.vhd
add_design_file ./rtl/DCT2D.VHD
add_design_file ./rtl/ROMO.VHD
add_design_file ./rtl/ROME.VHD
add_design_file ./rtl/RAM.VHD
add_design_file ./rtl/DBUFCTL.VHD
add_design_file ./rtl/MDCT.VHD
set_top_module MDCT
analyze
synthesize 
packing
place
route
sta
power
bitstream
