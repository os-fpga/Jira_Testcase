create_design top
target_device __DEVICE__
add_design_file top.v
##__ADD__CONSTRAINT_FILE__## add_constraint_file __CONSTRAINTS_FILE__

analyze
synthesize
packing
place
route
sta
bitstream
