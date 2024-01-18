create_design accumulator_gemini_compact
target_device GEMINI_COMPACT_82x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/accumulator_gemini_compact.v
set_top_module accumulator_gemini_compact
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
