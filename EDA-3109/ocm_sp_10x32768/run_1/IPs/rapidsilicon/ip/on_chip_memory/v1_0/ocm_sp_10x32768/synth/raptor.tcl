create_design ocm_sp_10x32768
target_device GEMINI
add_include_path ../src
add_library_path ../src
add_library_ext .v .sv
add_design_file ../src/ocm_sp_10x32768_v1_0.v
set_top_module ocm_sp_10x32768
synthesize