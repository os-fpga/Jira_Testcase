create_design DSP19X2_primitive_inst
target_device 1GVTC
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/DSP19X2_primitive_inst.v
set_top_module DSP19X2_primitive_inst
analyze
synthesize delay