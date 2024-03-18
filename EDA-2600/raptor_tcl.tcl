create_design duplicates_iobuf
target_device GEMINI_COMPACT_104x68
add_include_path ./
add_library_path ./
add_library_ext .v .sv
add_design_file ./duplicates_iobuf.v
set_top_module duplicates_iobuf
analyze
synthesize delay