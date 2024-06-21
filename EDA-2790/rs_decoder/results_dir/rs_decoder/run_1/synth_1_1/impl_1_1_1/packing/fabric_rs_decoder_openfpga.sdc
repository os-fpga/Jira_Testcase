create_clock -period 2.5 BM_lamda_unit.clk 
set_input_delay 0.1 -clock BM_lamda_unit.clk [get_ports {*}] 
set_output_delay 0.1 -clock BM_lamda_unit.clk [get_ports {*}] 
