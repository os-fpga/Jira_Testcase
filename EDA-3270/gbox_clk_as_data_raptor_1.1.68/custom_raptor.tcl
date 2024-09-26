create_design gbox_clk_as_data
target_device GEMINI_COMPACT_22x4

set_macro RIGEL_22x4= 
add_design_file ./gbox_clk_as_data.v
set_top_module gbox_clk_as_data
add_constraint_file gbox_clk_as_data.pin
analyze
synthesize
packing
place
route
sta
power
bitstream write_xml

