create_design FAST_with_NMS
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/y_shifter.vhd
add_design_file ./rtl/fast_main_top.vhd
add_design_file ./rtl/contig_processor.vhd
add_design_file ./rtl/NMS.vhd
add_design_file ./rtl/main_part.vhd
add_design_file ./rtl/NMS_top.vhd
add_design_file ./rtl/corner_score.vhd
add_design_file ./rtl/yx_shifter.vhd
add_design_file ./rtl/FAST_with_NMS.vhd
add_design_file ./rtl/input_fifo.vhd
add_design_file ./rtl/NMS_FIFO.vhd
add_design_file ./rtl/x_shifter.vhd
add_design_file ./rtl/FAST_with_NMS.vhd
set_top_module FAST_with_NMS
analyze
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
