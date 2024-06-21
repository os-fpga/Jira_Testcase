create_design 10_100m_ethernet-fifo_convertor
target_device 1VG28
add_include_path ./rtl
add_design_file ./rtl/CRC_Module.v
add_design_file ./rtl/EthernetModule.v
add_design_file ./rtl/InitModule.v
add_design_file ./rtl/RxModule.v
add_design_file ./rtl/TxModule.v
add_design_file ./rtl/common.v
add_design_file ./rtl/test_feedback.v
add_design_file ./rtl/tri_state.v
set_top_module test_feedback
add_constraint_file ./raptor_sdc.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
