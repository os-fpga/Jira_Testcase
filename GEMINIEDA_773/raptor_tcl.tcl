create_design mult_8bit
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_design_file ./rtl/mult_8bit.v
set_top_module mult_8bit
synthesize delay
packing
global_placement
place
route
sta
power
bitstream
