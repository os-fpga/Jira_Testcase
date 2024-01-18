create_design dsp_mul_unsigned_reg
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_design_file ./rtl/dsp_mul_unsigned_reg.v
set_top_module dsp_mul_unsigned_reg
ipgenerate
synthesize area
packing
global_placement
place
route
sta
power
bitstream
