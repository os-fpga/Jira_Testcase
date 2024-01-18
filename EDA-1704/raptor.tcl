create_design flop2flop
target_device 1GE100-ES1
add_design_file flop2flop.v
set_top_module flop2flop
add_constraint_file constraints.sdc
add_constraint_file pin_mapping.pin
ipgenerate
analyze
synth
packing
place
route
sta

