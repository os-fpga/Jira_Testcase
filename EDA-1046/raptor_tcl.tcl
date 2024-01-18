create_design asym_ram_sdp_write_wider_dc_logic
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/asym_ram_sdp_write_wider_dc_logic.v
set_top_module asym_ram_sdp_write_wider_dc_logic
synthesize delay
