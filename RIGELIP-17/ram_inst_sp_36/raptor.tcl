create_design ram_inst_sp_36
architecture gemini_vpr.xml gemini_openfpga.xml
target_device GEMINI_COMPACT_10x8
add_design_file ./ram_inst_sp_36.v
set_top_module ram_inst_sp_36
analyze
synthesize
packing
place
route
sta
power
bitstream write_xml

