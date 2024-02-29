file delete -force addr0
file delete -force addr1
file mkdir addr0
file mkdir addr1
file copy -force memory0.mem addr0/memory.mem
file copy -force top.v addr0/top.v
file copy -force memory1.mem addr1/memory.mem
file copy -force top.v addr1/top.v
cd addr0
create_design top
target_device GEMINI_COMPACT_10x8
add_design_file ./top.v
set_top_module top
analyze
synthesize
close_design
cd ../addr1
create_design top
target_device GEMINI_COMPACT_10x8
add_design_file ./top.v
set_top_module top
analyze
synthesize
close_design
