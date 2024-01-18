create_design AES_DECRYPT
target_device GEMINI_COMPACT_82x68
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/InvAddRoundKey.sv
add_design_file ./rtl/InvMixCol_slice.sv
add_design_file ./rtl/InvMixColumns.sv
add_design_file ./rtl/InvSbox.sv
add_design_file ./rtl/InvShiftRows.sv
add_design_file ./rtl/InvSubBytes.sv
add_design_file ./rtl/KeyExpand128.sv
add_design_file ./rtl/KeyExpand192.sv
add_design_file ./rtl/KeyExpand256.sv
add_design_file ./rtl/KschBuffer.sv
add_design_file ./rtl/RotWord.sv
add_design_file ./rtl/Sbox.sv
add_design_file ./rtl/SubWord.sv
add_design_file ./rtl/aes_decrypt128.sv
add_design_file ./rtl/aes_decrypt192.sv
add_design_file ./rtl/aes_decrypt256.SV
add_design_file ./rtl/aes_decrypt256.sv
add_design_file ./rtl/decrypt.sv
add_design_file ./rtl/generic_muxfx.v
add_design_file ./rtl/gfmul.sv
add_design_file ./rtl/wrapper.v
set_top_module wrapper
set_device_size castor10x8_heterogeneous
add_constraint_file ./constrs_1/aes_decrypt.sdc
pnr_options --post_synth_netlist_unconn_inputs vcc
synthesize delay
packing
global_placement
place
route
sta
power
bitstream
