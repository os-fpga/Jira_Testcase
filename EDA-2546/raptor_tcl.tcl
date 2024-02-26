create_design axil_interconnect_wrapper
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/axil_interconnect_wrapper_v1_0.v
set_top_module axil_interconnect_wrapper
analyze
synthesize delay
