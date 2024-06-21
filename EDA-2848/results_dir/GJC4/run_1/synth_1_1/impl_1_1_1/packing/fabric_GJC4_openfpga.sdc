create_clock -period 5 -name vclk 
set_input_delay 1 -clock vclk [get_ports {*}] 
set_output_delay 1 -clock vclk [get_ports {*}] 
