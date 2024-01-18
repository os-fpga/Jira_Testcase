create_clock -period 2.5 CLK
set_input_delay 1 -clock CLK [get_ports {*}]
set_output_delay 1 -clock CLK [get_ports {*}]

