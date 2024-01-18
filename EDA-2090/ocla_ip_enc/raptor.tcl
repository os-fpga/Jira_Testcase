create_design axil_ocla_wrapper
target_device GEMINI_COMPACT_104x68
add_library_ext .v .sv
add_design_file ./axil_ocla_wrapper.sv
add_design_file ./ocla.sv
set_top_module axil_ocla_wrapper
analyze
synthesize
packing
global_placement
place
route
bitstream
