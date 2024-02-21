create_design spis
target_device GEMINI_COMPACT_104x68
add_design_file ./rtl/asyncfifo.sv
add_design_file ./rtl/levelsync.sv
add_design_file ./rtl/pulse_sync.sv
add_design_file ./rtl/rst_regen_low.sv
add_design_file ./rtl/spi.svh
add_design_file ./rtl/spi.vh
add_design_file ./rtl/spis_intf.sv
add_design_file ./rtl/spis_miso_buf.sv
add_design_file ./rtl/spis_reg.sv
add_design_file ./rtl/spis_reg_top.sv
add_design_file ./rtl/spis_top.sv
add_design_file ./rtl/spisavb.sv
add_design_file ./rtl/syncfifo.sv
add_design_file ./rtl/syncfifo_mem1r1w.sv
add_design_file ./rtl/syncfifo_ram.sv
add_design_file ./rtl/syncfifo_reg.sv
set_top_module spis_top
add_constraint_file ./raptor_sdc.sdc
analyze
synthesize delay
packing
place
route
sta
power
bitstream 
