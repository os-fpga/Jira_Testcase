create_clock -period 2.5 $iopadmap$clk_o 
set_input_delay 0 -clock $iopadmap$clk_o [get_ports {*}] 
set_output_delay 0 -clock $iopadmap$clk_o [get_ports {*}] 
