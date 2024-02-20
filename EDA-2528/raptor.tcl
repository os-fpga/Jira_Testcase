create_design video_stream_scalar_EDA-2184
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl
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
