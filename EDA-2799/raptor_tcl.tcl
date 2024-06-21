create_design spim_top
target_device GEMINI_COMPACT_104x68
add_include_path ./rtl/
add_library_path ./rtl/
add_library_ext .v .sv
add_design_file -SV_2012 ./rtl/spim/spi.svh
add_design_file -SV_2012 ./rtl/spim/clk_gate_beh.sv
add_design_file -SV_2012 ./rtl/spim/pulse_sync.sv
add_design_file -SV_2012 ./rtl/spim/spim_intf.sv
add_design_file -SV_2012 ./rtl/spim/spim_reg.sv
add_design_file -SV_2012 ./rtl/spim/spim_reg_top.sv
add_design_file -SV_2012 ./rtl/spim/spim_top.sv
add_design_file -SV_2012 ./rtl/spim/spimavb.sv
add_design_file -SV_2012 ./rtl/spim/levelsync.sv
add_design_file -SV_2012 ./rtl/spim/asyncfifo.sv
add_design_file -SV_2012 ./rtl/spim/syncfifo.sv
add_design_file -SV_2012 ./rtl/spim/syncfifo_mem1r1w.sv
add_design_file -SV_2012 ./rtl/spim/syncfifo_ram.sv
add_design_file -SV_2012 ./rtl/spim/syncfifo_reg.sv
add_design_file -SV_2012 ./rtl/spim/rst_regen_low.sv
set_top_module spim_top
add_constraint_file ./raptor_sdc.sdc
analyze
synthesize delay
pin_loc_assign_method free
packing
place
route
sta
power
bitstream 
