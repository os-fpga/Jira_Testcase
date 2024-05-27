#############
#
# Fabric clock assignment
#
#############
# This clock is from pin. Use the port/pin name
set_clock_pin -device_clock {clk[0]} -design_clock {clk_10K}

# This clock is from pin. Use the port/pin name
set_clock_pin -device_clock {clk[1]} -design_clock {ff_clk}

# This clock is from pin. Use the port/pin name
set_clock_pin -device_clock {clk[2]} -design_clock {phy_rxclk}

#############
#
# Each pin mode and location assignment
#
#############
# Pin      clk_10K          :: I_BUF |-> CLK_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {clk_10K}        __NOT_PROVIDED__

# Pin      clk_in           :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {clk_in}         __NOT_PROVIDED__

# Pin      ff_clk           :: I_BUF |-> CLK_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {ff_clk}         __NOT_PROVIDED__

# Pin      phy_reset        :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {phy_reset}      __NOT_PROVIDED__

# Pin      phy_rxclk        :: I_BUF |-> CLK_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {phy_rxclk}      __NOT_PROVIDED__

# Pin      phy_rxd[0]       :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {phy_rxd[0]}     __NOT_PROVIDED__

# Pin      phy_rxd[1]       :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {phy_rxd[1]}     __NOT_PROVIDED__

# Pin      phy_rxd[2]       :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {phy_rxd[2]}     __NOT_PROVIDED__

# Pin      phy_rxd[3]       :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {phy_rxd[3]}     __NOT_PROVIDED__

# Pin      phy_rxer         :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {phy_rxer}       __NOT_PROVIDED__

# Pin      phy_txd[0]       :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {phy_txd[0]}     __NOT_PROVIDED__

# Pin      phy_txd[1]       :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {phy_txd[1]}     __NOT_PROVIDED__

# Pin      phy_txd[2]       :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {phy_txd[2]}     __NOT_PROVIDED__

# Pin      phy_txd[3]       :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {phy_txd[3]}     __NOT_PROVIDED__

# Pin      phy_txen         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {phy_txen}       __NOT_PROVIDED__

# Pin      phy_txer         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {phy_txer}       __NOT_PROVIDED__

# Pin      reset            :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {reset}          __NOT_PROVIDED__

# Pin      test1            :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {test1}          __NOT_PROVIDED__

# Pin      test2            :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {test2}          __NOT_PROVIDED__

# Pin      test3            :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {test3}          __NOT_PROVIDED__

# Pin      test4            :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {test4}          __NOT_PROVIDED__

