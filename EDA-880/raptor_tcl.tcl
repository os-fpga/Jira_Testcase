create_design tdp_256x8
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/tdp_256x8.v
set_top_module tdp_256x8
synthesize delay
