#############
#
# Fabric clock assignment
#
#############
# set_clock_pin -device_clock {clk[0]} -design_clock {$auto$clkbufmap.cc:317:execute$1058}
set_clock_pin   -device_clock {clk[0]} -design_clock {$auto$clkbufmap.cc:317:execute$1058}

# set_clock_pin -device_clock {clk[1]} -design_clock {$auto$clkbufmap.cc:317:execute$1061}
set_clock_pin   -device_clock {clk[1]} -design_clock {$auto$clkbufmap.cc:317:execute$1061}

#############
#
# Each pin mode and location assignment
#
#############
# Pin      clk0             :: I_BUF |-> CLK_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {clk0}           __NOT_PROVIDED__

# Pin      clk1             :: I_BUF |-> CLK_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {clk1}           __NOT_PROVIDED__

# Pin      out0[0]          :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {out0[0]}        __NOT_PROVIDED__

# Pin      out0[1]          :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {out0[1]}        __NOT_PROVIDED__

# Pin      out0[2]          :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {out0[2]}        __NOT_PROVIDED__

# Pin      out0[3]          :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {out0[3]}        __NOT_PROVIDED__

# Pin      out0[4]          :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {out0[4]}        __NOT_PROVIDED__

# Pin      out1[0]          :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {out1[0]}        __NOT_PROVIDED__

# Pin      out1[1]          :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {out1[1]}        __NOT_PROVIDED__

# Pin      out1[2]          :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {out1[2]}        __NOT_PROVIDED__

# Pin      out1[3]          :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {out1[3]}        __NOT_PROVIDED__

# Pin      out1[4]          :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {out1[4]}        __NOT_PROVIDED__

# Pin      reset            :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {reset}          __NOT_PROVIDED__

