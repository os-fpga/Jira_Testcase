create_design test_clock_rtl
target_device 1VG28
add_design_file test_clock_rtl.v
add_constraint_file test_clock_rtl.sdc
ipgenerate
analyze
synth
packing
place
route
sta 

