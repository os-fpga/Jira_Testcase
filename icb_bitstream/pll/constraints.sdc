# Clock
create_clock -period 5 -name pll_clk

# pin locations
set_property mode Mode_BP_SDR_A_RX HP_1_CC_10_5P
set_pin_loc clk HP_1_CC_10_5P

set_property mode Mode_BP_SDR_A_RX HP_1_0_0P
set_pin_loc din HP_1_0_0P

set_property mode Mode_BP_SDR_B_TX HP_1_1_0N
set_pin_loc dout HP_1_1_0N
