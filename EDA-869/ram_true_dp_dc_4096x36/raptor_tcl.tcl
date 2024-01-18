create_design ram_true_dp_dc_4096x36
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/ram_true_dp_dc_4096x36.v
set_top_module ram_true_dp_dc_4096x36
synthesize delay
