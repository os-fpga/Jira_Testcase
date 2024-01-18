create_design bytewrite_tdp_ram_wf
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/bytewrite_tdp_ram_wf.v
set_top_module bytewrite_tdp_ram_wf
analyze
synthesize delay
