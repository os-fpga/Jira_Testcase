create_design axi_ram
target_device GEMINI_COMPACT_82x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/axi_ram.v
set_top_module axi_ram
analyze
synthesize
