create_design DSP19X2
target_device GEMINI_COMPACT_104x68
add_library_ext .v .sv
add_design_file ./dsp19x2_raptor.v
analyze
synthesize delay
