create_design tristate
target_device 1VG28
add_design_file tristate.v
add_constraint_file tristate.sdc
ipgenerate
analyze
synth
packing
place
route
sta

