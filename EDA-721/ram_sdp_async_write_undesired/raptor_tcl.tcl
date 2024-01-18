create_design ram_sdp_async_write_undesired
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/ram_sdp_async_write_undesired.v
set_top_module ram_sdp_async_write_undesired
synthesize delay
