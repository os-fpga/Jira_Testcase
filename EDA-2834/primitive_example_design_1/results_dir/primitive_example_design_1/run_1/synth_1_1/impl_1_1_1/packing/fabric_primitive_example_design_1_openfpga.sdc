create_clock -period 5 ff_inst1.clk 
set_input_delay 1 -clock ff_inst1.clk [get_ports {*}] 
set_output_delay 1 -clock ff_inst1.clk [get_ports {*}] 
