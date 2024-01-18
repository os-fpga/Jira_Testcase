create_clock -period 10 -name clk {clk1 clk2 clk3 clk4}

set_input_delay 1 -clock clk [get_ports {*}]
set_output_delay 1 -clock clk [get_ports {*}]
