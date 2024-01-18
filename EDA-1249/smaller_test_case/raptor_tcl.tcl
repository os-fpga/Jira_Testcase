create_design add__a_to_output
target_device GEMINI_COMPACT_82x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/add__a_to_output.v
set_top_module add__a_to_output
synthesize delay
packing
global_placement
place
route
