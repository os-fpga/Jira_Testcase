create_design sync_fifo_fwft_infer
target_device 1GVTC
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/sha256core/sync_fifo_fwft_infer/sdpram_infer_read_first.vhd
add_design_file ./rtl/sha256core/sync_fifo_fwft_infer/sync_fifo_fwft_infer.vhd
set_top_module sync_fifo_fwft_infer
add_constraint_file ./raptor_sdc.sdc
analyze
synth_options -effort high
synthesize delay
packing
place
route
sta
power
bitstream 
