create_design ocm_sp_18x4096
target_device GEMINI
add_include_path ../src
add_library_path ../src
add_library_ext .v .sv
add_design_file ../src/ocm_sp_18x4096.v
set_top_module ocm_sp_18x4096
synthesize