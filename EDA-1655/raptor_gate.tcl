# Gate level netlist input
create_design llatch_gate -type gate-level

target_device GEMINI_COMPACT_10x8

read_netlist design_gate.v
packing
place
route
sta
bitstream

