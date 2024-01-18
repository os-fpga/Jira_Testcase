create_design rams_sp_wf_rst_en_1024x16
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/rams_sp_wf_rst_en_1024x16.v
set_top_module rams_sp_wf_rst_en_1024x16
synthesize delay
