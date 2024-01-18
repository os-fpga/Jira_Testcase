create_design cic_i_02_24
target_device GEMINI_COMPACT_82x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/cic_package.sv
add_design_file ./rtl/comb.sv
add_design_file ./rtl/downsampler.sv
add_design_file ./rtl/integrator.sv
add_design_file ./rtl/cic_i.sv
set_top_module cic_i
set_device_size castor62x44_heterogeneous
analyze
synthesize 
packing
global_placement
place
route
sta
power
bitstream
