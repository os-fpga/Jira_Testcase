create_design wrapper_multi_enc_decx2x4
target_device 1VG28
add_include_path ./wrapper_rtl
add_design_file ./wrapper_rtl/decoder.sv
add_design_file ./wrapper_rtl/encoder.sv
add_design_file ./wrapper_rtl/multi_enc_decx2x4.sv
add_design_file ./wrapper_rtl/topenc_decx2.sv
add_design_file ./wrapper_rtl/wrapper_multi_enc_decx2x4.sv
set_top_module wrapper_multi_enc_decx2x4
add_constraint_file ./raptor_sdc.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
