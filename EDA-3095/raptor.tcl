create_design test
target_device 1VG28
add_design_file test.v
add_constraint_file constraint.pin
analyze
synthesize delay
