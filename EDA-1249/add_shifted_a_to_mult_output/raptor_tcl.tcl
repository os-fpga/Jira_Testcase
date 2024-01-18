create_design add_shifted_a_to_mult_output
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/add_shifted_a_to_mult_output.v
set_top_module add_shifted_a_to_mult_output
synthesize delay
packing
global_placement
place
route
