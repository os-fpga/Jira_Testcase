create_design param_up_counter
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_design_file ./rtl/param_up_counter.v
set_top_module param_up_counter
synthesize delay
packing
global_placement
place
route
sta
power
bitstream
