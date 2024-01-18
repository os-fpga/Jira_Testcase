create_design ram_pipeline_block
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/ram_pipeline_block.v
set_top_module ram_pipeline_block
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
