create_design top
target_device 1VG28
#target_device GEMINI_COMPACT_10x8
add_design_file ./ddr_sdram_ctrl.v
set_top_module ddr_sdram_ctrl
#add_constraint_file top.sdc
analyze
synthesize
packing
place
route
sta
power
#bitstream write_xml
assembler