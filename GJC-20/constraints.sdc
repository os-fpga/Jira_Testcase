set_top_module i_buf_i_delay_i_ddr_to_sdr

create_clock -period 10 clk_i

set_output_delay 3 -clock clk_i [get_ports {data_o}]

