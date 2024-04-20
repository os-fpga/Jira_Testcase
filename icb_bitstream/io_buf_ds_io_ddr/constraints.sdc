# Clock
create_clock -period 5 -name clk

# pin locations
set_property mode Mode_BP_SDR_A_RX HP_1_CC_10_5P
set_pin_loc clk HP_1_CC_10_5P

set_property mode Mode_BP_SDR_A_RX HP_1_2_1P
set_pin_loc reset HP_1_2_1P

set_property mode Mode_BP_SDR_B_RX HP_1_3_1N
set_pin_loc enable HP_1_3_1N

set_property mode MODE_RATE_3_A_RX HP_1_4_2P
set_pin_loc din_p HP_1_4_2P

set_property mode MODE_RATE_3_B_RX HP_1_5_2N
set_pin_loc din_n HP_1_5_2N

set_property mode MODE_RATE_3_A_TX HP_1_6_3P
set_pin_loc dout_p HP_1_6_3P

set_property mode MODE_RATE_3_B_TX HP_1_7_3N
set_pin_loc dout_n HP_1_7_3N
