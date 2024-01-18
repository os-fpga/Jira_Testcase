create_design ram_simple_dp_sync_reg_read_1024x64
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/ram_simple_dp_sync_reg_read_1024x64.v
set_top_module ram_simple_dp_sync_reg_read_1024x64
synthesize delay
