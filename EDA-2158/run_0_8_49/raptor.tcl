create_design design136_40_35_top
target_device GEMINI_COMPACT_104x68
#add_design_file ./rtl/decoder.v
#add_design_file ./rtl/parity_generator.v
add_design_file ./rtl/design136_40_35_top.v
set_top_module design136_40_35_top
add_constraint_file ./clk_constraint.sdc
analyze
synthesize 
