#############
#
# Fabric clock assignment
#
#############
# set_clock_pin -device_clock {clk[0]} -design_clock {ModByteWr.Clk}
set_clock_pin   -device_clock {clk[0]} -design_clock {ModByteWr.Clk}

# set_clock_pin -device_clock {clk[1]} -design_clock {$auto$clkbufmap.cc:298:execute$6729}
set_clock_pin   -device_clock {clk[1]} -design_clock {$auto$clkbufmap.cc:298:execute$6729}

# set_clock_pin -device_clock {clk[2]} -design_clock {ModStSp.mod1.ModStop.SpLatch.Clk}
set_clock_pin   -device_clock {clk[2]} -design_clock {ModStSp.mod1.ModStop.SpLatch.Clk}

#############
#
# Each pin mode and location assignment
#
#############
# Pin      ACK                :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {ACK}              __NOT_PROVIDED__

# Pin      Ce                 :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Ce}               __NOT_PROVIDED__

# Pin      Clk                :: I_BUF |-> CLK_BUF
# set_mode MODE_BP_DIR_?_RX   __NOT_PROVIDED__
# set_io   {Clk}              __NOT_PROVIDED__

# Pin      Current_addr[0]    :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Current_addr[0]}  __NOT_PROVIDED__

# Pin      Current_addr[10]   :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Current_addr[10]} __NOT_PROVIDED__

# Pin      Current_addr[11]   :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Current_addr[11]} __NOT_PROVIDED__

# Pin      Current_addr[12]   :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Current_addr[12]} __NOT_PROVIDED__

# Pin      Current_addr[13]   :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Current_addr[13]} __NOT_PROVIDED__

# Pin      Current_addr[14]   :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Current_addr[14]} __NOT_PROVIDED__

# Pin      Current_addr[1]    :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Current_addr[1]}  __NOT_PROVIDED__

# Pin      Current_addr[2]    :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Current_addr[2]}  __NOT_PROVIDED__

# Pin      Current_addr[3]    :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Current_addr[3]}  __NOT_PROVIDED__

# Pin      Current_addr[4]    :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Current_addr[4]}  __NOT_PROVIDED__

# Pin      Current_addr[5]    :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Current_addr[5]}  __NOT_PROVIDED__

# Pin      Current_addr[6]    :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Current_addr[6]}  __NOT_PROVIDED__

# Pin      Current_addr[7]    :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Current_addr[7]}  __NOT_PROVIDED__

# Pin      Current_addr[8]    :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Current_addr[8]}  __NOT_PROVIDED__

# Pin      Current_addr[9]    :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Current_addr[9]}  __NOT_PROVIDED__

# Pin      Dout[0]            :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Dout[0]}          __NOT_PROVIDED__

# Pin      Dout[1]            :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Dout[1]}          __NOT_PROVIDED__

# Pin      Dout[2]            :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Dout[2]}          __NOT_PROVIDED__

# Pin      Dout[3]            :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Dout[3]}          __NOT_PROVIDED__

# Pin      Dout[4]            :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Dout[4]}          __NOT_PROVIDED__

# Pin      Dout[5]            :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Dout[5]}          __NOT_PROVIDED__

# Pin      Dout[6]            :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Dout[6]}          __NOT_PROVIDED__

# Pin      Dout[7]            :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Dout[7]}          __NOT_PROVIDED__

# Pin      Oe                 :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {Oe}               __NOT_PROVIDED__

# Pin      Rst                :: I_BUF
# set_mode MODE_BP_DIR_?_RX   __NOT_PROVIDED__
# set_io   {Rst}              __NOT_PROVIDED__

# Pin      SCL                :: I_BUF |-> CLK_BUF
# set_mode MODE_BP_DIR_?_RX   __NOT_PROVIDED__
# set_io   {SCL}              __NOT_PROVIDED__

# Pin      SDA                :: I_BUF |-> CLK_BUF
# set_mode MODE_BP_DIR_?_RX   __NOT_PROVIDED__
# set_io   {SDA}              __NOT_PROVIDED__

# Pin      We                 :: O_BUF
# set_mode MODE_BP_DIR_?_TX   __NOT_PROVIDED__
# set_io   {We}               __NOT_PROVIDED__

