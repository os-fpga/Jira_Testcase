create_design rs_dsp_mult_test
target_device 1GE100-ES1
add_design_file rs_dsp_mult_test.v
add_constraint_file rs_dsp_mult_test.sdc
ipgenerate
analyze
synth
packing
place
route
sta 

