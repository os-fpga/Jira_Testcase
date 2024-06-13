#############
#
# Fabric clock assignment
#
#############
# set_clock_pin -device_clock {clk[0]} -design_clock {wire1}
set_clock_pin   -device_clock {clk[0]} -design_clock {wire1}

#############
#
# Each pin mode and location assignment
#
#############
# Pin      clock_input      :: I_BUF |-> CLK_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {clock_input}    __NOT_PROVIDED__

# Pin      clock_output     :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {clock_output}   __NOT_PROVIDED__

