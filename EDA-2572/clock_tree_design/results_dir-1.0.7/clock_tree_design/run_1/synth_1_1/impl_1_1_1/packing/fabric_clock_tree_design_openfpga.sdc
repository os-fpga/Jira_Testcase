create_clock -period 2.5 $iopadmap$clk1 
set_input_delay 0 -clock $iopadmap$clk1 [get_ports {*}] 
set_output_delay 0 -clock $iopadmap$clk1 [get_ports {*}] 
create_clock -period 2.5 $iopadmap$clk2 
set_input_delay 0 -clock $iopadmap$clk2 [get_ports {*}] 
set_output_delay 0 -clock $iopadmap$clk2 [get_ports {*}] 
create_clock -period 2.5 $iopadmap$clk3 
set_input_delay 0 -clock $iopadmap$clk3 [get_ports {*}] 
set_output_delay 0 -clock $iopadmap$clk3 [get_ports {*}] 
create_clock -period 2.5 $iopadmap$clk4 
set_input_delay 0 -clock $iopadmap$clk4 [get_ports {*}] 
set_output_delay 0 -clock $iopadmap$clk4 [get_ports {*}] 
create_clock -period 2.5 $iopadmap$clk5 
set_input_delay 0 -clock $iopadmap$clk5 [get_ports {*}] 
set_output_delay 0 -clock $iopadmap$clk5 [get_ports {*}] 
create_clock -period 2.5 $iopadmap$clk6 
set_input_delay 0 -clock $iopadmap$clk6 [get_ports {*}] 
set_output_delay 0 -clock $iopadmap$clk6 [get_ports {*}] 
set_clock_groups -exclusive -group $iopadmap$clk1 -group $iopadmap$clk2 -group $iopadmap$clk3 -group $iopadmap$clk4 -group $iopadmap$clk5 -group $iopadmap$clk6 
