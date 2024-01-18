create_design design136_40_35_top
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/design136_40_35_top.v
set_top_module design136_40_35_top
add_constraint_file ./clk_constraint.sdc
synthesize 
