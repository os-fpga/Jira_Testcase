create_design mac_32_arst
target_device GEMINI_10x8
 
add_include_path ./
add_library_path ./
add_library_ext .v .sv
add_design_file ./mac_32_arst.v
set_top_module mac_32_arst
analyze
synthesize

