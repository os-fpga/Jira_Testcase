create_clock -period 2.5 p.clk 
set_input_delay 0.1 -clock p.clk [get_ports {*}] 
set_output_delay 0.1 -clock p.clk [get_ports {*}] 
