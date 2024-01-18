create_design all_synth_options_dsp_mul_signed_reg_with_accum
target_device GEMINI
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/all_synth_options_dsp_mul_signed_reg_with_accum.v
set_top_module all_synth_options_dsp_mul_signed_reg_with_accum
synth_options -effort high -fsm_encoding binary -carry all -fast
set_limits bram 0
set_limits dsp 0
synthesize delay
packing
global_placement
place
route
sta
power
bitstream 
