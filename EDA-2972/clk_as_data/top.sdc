create_clock -period 2.5 clk0
create_clock -period 2.5 clk1

set_input_delay 0.1 -clock clk0 [get_ports {*}]
set_input_delay 0.1 -clock clk1 [get_ports {*}]

set_output_delay 0.1 -clock clk0 [get_ports {*}]
set_output_delay 0.1 -clock clk1 [get_ports {*}]
