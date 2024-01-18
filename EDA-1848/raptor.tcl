create_design dsp38_test
target_device 1GE100-ES1
add_design_file dsp_lib.v
add_design_file dsp38_test.v
add_constraint_file dsp38_test.sdc
ipgenerate
analyze
synth
packing
place
route
sta 

