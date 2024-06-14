#############
#
# Fabric clock assignment
#
#############
# set_clock_pin -device_clock {clk[0]} -design_clock {$iopadmap$clk_o}
set_clock_pin   -device_clock {clk[0]} -design_clock {$iopadmap$clk_o}

#############
#
# Each pin mode and location assignment
#
#############
# Pin      a[1]             :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {a[1]}           __NOT_PROVIDED__

# Pin      a[2]             :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {a[2]}           __NOT_PROVIDED__

# Pin      a[3]             :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {a[3]}           __NOT_PROVIDED__

# Pin      a[4]             :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {a[4]}           __NOT_PROVIDED__

# Pin      a[5]             :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {a[5]}           __NOT_PROVIDED__

# Pin      a[6]             :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {a[6]}           __NOT_PROVIDED__

# Pin      a[7]             :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {a[7]}           __NOT_PROVIDED__

# Pin      a[8]             :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {a[8]}           __NOT_PROVIDED__

# Pin      a[9]             :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {a[9]}           __NOT_PROVIDED__

# Pin      ack_i            :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {ack_i}          __NOT_PROVIDED__

# Pin      adr_o[1]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {adr_o[1]}       __NOT_PROVIDED__

# Pin      adr_o[2]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {adr_o[2]}       __NOT_PROVIDED__

# Pin      adr_o[3]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {adr_o[3]}       __NOT_PROVIDED__

# Pin      adr_o[4]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {adr_o[4]}       __NOT_PROVIDED__

# Pin      adr_o[5]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {adr_o[5]}       __NOT_PROVIDED__

# Pin      adr_o[6]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {adr_o[6]}       __NOT_PROVIDED__

# Pin      adr_o[7]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {adr_o[7]}       __NOT_PROVIDED__

# Pin      adr_o[8]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {adr_o[8]}       __NOT_PROVIDED__

# Pin      adr_o[9]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {adr_o[9]}       __NOT_PROVIDED__

# Pin      berr             :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {berr}           __NOT_PROVIDED__

# Pin      clk              :: I_BUF |-> CLK_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {clk}            __NOT_PROVIDED__

# Pin      clk_o            :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {clk_o}          __NOT_PROVIDED__

# Pin      cs_n             :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {cs_n}           __NOT_PROVIDED__

# Pin      cyc_o            :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {cyc_o}          __NOT_PROVIDED__

# Pin      dat_i[0]         :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {dat_i[0]}       __NOT_PROVIDED__

# Pin      dat_i[10]        :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {dat_i[10]}      __NOT_PROVIDED__

# Pin      dat_i[11]        :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {dat_i[11]}      __NOT_PROVIDED__

# Pin      dat_i[12]        :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {dat_i[12]}      __NOT_PROVIDED__

# Pin      dat_i[13]        :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {dat_i[13]}      __NOT_PROVIDED__

# Pin      dat_i[14]        :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {dat_i[14]}      __NOT_PROVIDED__

# Pin      dat_i[15]        :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {dat_i[15]}      __NOT_PROVIDED__

# Pin      dat_i[1]         :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {dat_i[1]}       __NOT_PROVIDED__

# Pin      dat_i[2]         :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {dat_i[2]}       __NOT_PROVIDED__

# Pin      dat_i[3]         :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {dat_i[3]}       __NOT_PROVIDED__

# Pin      dat_i[4]         :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {dat_i[4]}       __NOT_PROVIDED__

# Pin      dat_i[5]         :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {dat_i[5]}       __NOT_PROVIDED__

# Pin      dat_i[6]         :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {dat_i[6]}       __NOT_PROVIDED__

# Pin      dat_i[7]         :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {dat_i[7]}       __NOT_PROVIDED__

# Pin      dat_i[8]         :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {dat_i[8]}       __NOT_PROVIDED__

# Pin      dat_i[9]         :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {dat_i[9]}       __NOT_PROVIDED__

# Pin      dat_o[0]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {dat_o[0]}       __NOT_PROVIDED__

# Pin      dat_o[10]        :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {dat_o[10]}      __NOT_PROVIDED__

# Pin      dat_o[11]        :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {dat_o[11]}      __NOT_PROVIDED__

# Pin      dat_o[12]        :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {dat_o[12]}      __NOT_PROVIDED__

# Pin      dat_o[13]        :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {dat_o[13]}      __NOT_PROVIDED__

# Pin      dat_o[14]        :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {dat_o[14]}      __NOT_PROVIDED__

# Pin      dat_o[15]        :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {dat_o[15]}      __NOT_PROVIDED__

# Pin      dat_o[1]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {dat_o[1]}       __NOT_PROVIDED__

# Pin      dat_o[2]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {dat_o[2]}       __NOT_PROVIDED__

# Pin      dat_o[3]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {dat_o[3]}       __NOT_PROVIDED__

# Pin      dat_o[4]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {dat_o[4]}       __NOT_PROVIDED__

# Pin      dat_o[5]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {dat_o[5]}       __NOT_PROVIDED__

# Pin      dat_o[6]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {dat_o[6]}       __NOT_PROVIDED__

# Pin      dat_o[7]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {dat_o[7]}       __NOT_PROVIDED__

# Pin      dat_o[8]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {dat_o[8]}       __NOT_PROVIDED__

# Pin      dat_o[9]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {dat_o[9]}       __NOT_PROVIDED__

# Pin      dtack_n          :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {dtack_n}        __NOT_PROVIDED__

# Pin      err_i            :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {err_i}          __NOT_PROVIDED__

# Pin      lwe_n            :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {lwe_n}          __NOT_PROVIDED__

# Pin      oe_n             :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {oe_n}           __NOT_PROVIDED__

# Pin      reset_n          :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {reset_n}        __NOT_PROVIDED__

# Pin      rst_o            :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {rst_o}          __NOT_PROVIDED__

# Pin      sel_o[0]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {sel_o[0]}       __NOT_PROVIDED__

# Pin      sel_o[1]         :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {sel_o[1]}       __NOT_PROVIDED__

# Pin      stb_o            :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {stb_o}          __NOT_PROVIDED__

# Pin      uwe_n            :: I_BUF
# set_mode MODE_BP_DIR_?_RX __NOT_PROVIDED__
# set_io   {uwe_n}          __NOT_PROVIDED__

# Pin      we_o             :: O_BUF
# set_mode MODE_BP_DIR_?_TX __NOT_PROVIDED__
# set_io   {we_o}           __NOT_PROVIDED__

