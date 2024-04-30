# Clock
create_clock -period 5 -name clk

# pin locations
set_property mode Mode_BP_SDR_A_RX HP_1_CC_10_5P
set_pin_loc clk HP_1_CC_10_5P

set_property mode Mode_BP_SDR_A_RX HP_1_0_0P
set_pin_loc din HP_1_0_0P

set_property mode Mode_BP_SDR_B_TX HP_1_1_0N
set_pin_loc dout HP_1_1_0N

set_property mode Mode_BP_SDR_A_RX HP_1_2_1P
set_pin_loc reset HP_1_2_1P

set_property mode Mode_BP_SDR_B_RX HP_1_3_1N
set_pin_loc enable HP_1_3_1N

set_property mode Mode_BP_SDR_A_RX HR_1_0_0P
set_pin_loc delay_load HR_1_0_0P

set_property mode Mode_BP_SDR_B_RX HR_1_1_0N
set_pin_loc delay_adj HR_1_1_0N

# There is issue to use HR_1_2_1P for 62x44
set_property mode Mode_BP_SDR_B_RX HR_1_3_1N
set_pin_loc delay_incdec HR_1_3_1N

set_property mode Mode_BP_SDR_A_TX HR_5_0_0P
set_pin_loc {i_delay_value[0]} HR_5_0_0P

set_property mode Mode_BP_SDR_B_TX HR_5_1_0N
set_pin_loc {i_delay_value[1]} HR_5_1_0N

set_property mode Mode_BP_SDR_A_TX HR_5_2_1P
set_pin_loc {i_delay_value[2]} HR_5_2_1P

set_property mode Mode_BP_SDR_B_TX HR_5_3_1N
set_pin_loc {i_delay_value[3]} HR_5_3_1N

set_property mode Mode_BP_SDR_A_TX HR_5_4_2P
set_pin_loc {i_delay_value[4]} HR_5_4_2P

set_property mode Mode_BP_SDR_B_TX HR_5_5_2N
set_pin_loc {i_delay_value[5]} HR_5_5_2N

set_property mode Mode_BP_SDR_A_TX HR_5_6_3P
set_pin_loc {o_delay_value[0]} HR_5_6_3P

set_property mode Mode_BP_SDR_B_TX HR_5_7_3N
set_pin_loc {o_delay_value[1]} HR_5_7_3N

set_property mode Mode_BP_SDR_A_TX HR_5_8_4P
set_pin_loc {o_delay_value[2]} HR_5_8_4P

set_property mode Mode_BP_SDR_B_TX HR_5_9_4N
set_pin_loc {o_delay_value[3]} HR_5_9_4N

set_property mode Mode_BP_SDR_A_TX HR_5_CC_10_5P
set_pin_loc {o_delay_value[4]} HR_5_CC_10_5P

set_property mode Mode_BP_SDR_B_TX HR_5_CC_11_5N
set_pin_loc {o_delay_value[5]} HR_5_CC_11_5N
