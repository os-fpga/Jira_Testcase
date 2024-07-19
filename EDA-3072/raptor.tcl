create_design video_stream_scalar_EDA-2184
target_device 1VG28
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/scaler.v
add_design_file ./rtl/scaler_sr_top.v
set_top_module streamScaler_sr_top
add_constraint_file constraints.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
