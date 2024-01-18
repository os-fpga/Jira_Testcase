create_design signed_right_shift_a_input
target_device GEMINI_COMPACT_82x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/signed_right_shift_a_input.v
set_top_module signed_right_shift_a_input
analyze
synthesize delay
