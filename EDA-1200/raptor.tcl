create_design mult
target_device GEMINI
 
add_include_path ./
add_library_path ./
add_library_ext .v .sv
add_design_file ./mult.v
set_top_module mult
analyze
synthesize

