create_clock -period 2.5 clk_a  
create_clock -period 2.5 clk_b  
create_clock -period 2.5 clk_c  
set_input_delay 1 -clock clk_a [get_ports {*}]  
set_output_delay 1 -clock clk_a [get_ports {*}]  
set_clock_groups -asynchronous -group clk_a clk_b  
