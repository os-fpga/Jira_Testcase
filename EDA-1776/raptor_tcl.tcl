create_design bytewrite_sp_ram_wf_block
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/bytewrite_sp_ram_wf_block.v
set_top_module bytewrite_sp_ram_wf_block
analyze
synthesize delay
