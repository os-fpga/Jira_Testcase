create_design and2
target_device GEMINI_COMPACT_62x44
add_design_file ./rtl/and2.v
set_top_module and2
analyze
synthesize
packing
place
route
sta
power
bitstream write_xml pb_pin_fixup

