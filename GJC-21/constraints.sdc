set_top_module o_ddr_o_delay_o_buf_clk_buf

create_clock -period 10 clk_i_buf

set_input_delay 3 -clock clk_i_buf [get_ports {data_i_buf}]
set_input_delay 2 -clock clk_i_buf [get_ports {reset_n_buf}]
set_input_delay 2 -clock clk_i_buf [get_ports {enable_buf}]
set_output_delay 3 -clock clk_i_buf [get_ports {data_o}]
