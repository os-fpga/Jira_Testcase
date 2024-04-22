create_design axi_lite_a32_d32
target_device 1GVTC
add_include_path ./rtl
add_library_path ./rtl
add_library_ext .v .sv
add_design_file ./rtl/axi_lite_a32_d32_master_concat.sv
add_design_file ./rtl/axi_lite_a32_d32_master_name.sv
add_design_file ./rtl/axi_lite_a32_d32_slave_concat.sv
add_design_file ./rtl/axi_lite_a32_d32_slave_name.sv
add_design_file ./rtl/axi_lite_a32_d32_slave_top.sv
add_design_file ./rtl/level_delay.sv
add_design_file ./rtl/ll_auto_sync.sv
add_design_file ./rtl/ll_receive.sv
add_design_file ./rtl/ll_rx_ctrl.sv
add_design_file ./rtl/ll_rx_push.sv
add_design_file ./rtl/ll_transmit.sv
add_design_file ./rtl/ll_tx_cred.sv
add_design_file ./rtl/ll_tx_ctrl.sv
add_design_file ./rtl/syncfifo_mem1r1w.sv
add_design_file ./rtl/syncfifo_ram.sv
add_design_file ./rtl/syncfifo_reg.sv
add_design_file ./rtl/axi_lite_a32_d32_master_top.sv
set_top_module axi_lite_a32_d32_master_top
add_constraint_file ./raptor_sdc.sdc
analyze
synth_options -effort high
synthesize delay
packing
place
route
sta
power
bitstream 
