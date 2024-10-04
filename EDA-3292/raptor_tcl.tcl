create_design ahb_slave_example_simulation
target_device 1VG28
add_include_path ./rtl
add_design_file ./rtl/bscell.sv
add_design_file ./rtl/ff_sync.sv
add_design_file ./rtl/jtag_axi_wrap.sv
add_design_file ./rtl/jtag_to_axi_top.sv
add_design_file ./rtl/jtag_to_axi_wrapper.sv
add_design_file ./rtl/jtagreg.sv
add_design_file ./rtl/tap_top.sv
add_design_file ./rtl/ahb2axi4.sv
add_design_file ./rtl/ahb2axi4_wrapper.v
add_design_file ./rtl/beh_lib.sv
add_design_file ./rtl/ahb_slave_example_simulation.v
set_top_module ahb_slave_example_simulation
add_constraint_file clk_constraint.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
