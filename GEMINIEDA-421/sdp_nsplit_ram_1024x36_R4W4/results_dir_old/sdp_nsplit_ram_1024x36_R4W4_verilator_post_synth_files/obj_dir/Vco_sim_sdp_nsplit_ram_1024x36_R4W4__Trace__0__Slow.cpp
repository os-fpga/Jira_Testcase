// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms.h"


VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_init_sub__TOP__0(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("co_sim_sdp_nsplit_ram_1024x36_R4W4 ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+13,"we", false,-1);
    tracep->declBus(c+14,"wr_addr", false,-1, 9,0);
    tracep->declBus(c+15,"rd_addr", false,-1, 9,0);
    tracep->declQuad(c+16,"din", false,-1, 35,0);
    tracep->declQuad(c+452,"dout", false,-1, 35,0);
    tracep->declQuad(c+454,"dout_net", false,-1, 35,0);
    tracep->declBus(c+18,"mismatch", false,-1, 31,0);
    tracep->declBus(c+19,"cycle", false,-1, 6,0);
    tracep->declBus(c+20,"i", false,-1, 6,0);
    tracep->pushNamePrefix("golden ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declBit(c+13,"we", false,-1);
    tracep->declBus(c+14,"wr_addr", false,-1, 9,0);
    tracep->declBus(c+15,"rd_addr", false,-1, 9,0);
    tracep->declQuad(c+16,"din", false,-1, 35,0);
    tracep->declQuad(c+452,"dout", false,-1, 35,0);
    tracep->pushNamePrefix("inst1 ");
    tracep->declArray(c+492,"MODE_BITS", false,-1, 80,0);
    tracep->declBus(c+495,"SYNC_FIFO1_i", false,-1, 0,0);
    tracep->declBus(c+496,"RMODE_A1_i", false,-1, 2,0);
    tracep->declBus(c+496,"RMODE_B1_i", false,-1, 2,0);
    tracep->declBus(c+496,"WMODE_A1_i", false,-1, 2,0);
    tracep->declBus(c+496,"WMODE_B1_i", false,-1, 2,0);
    tracep->declBus(c+495,"FMODE1_i", false,-1, 0,0);
    tracep->declBus(c+495,"POWERDN1_i", false,-1, 0,0);
    tracep->declBus(c+495,"SLEEP1_i", false,-1, 0,0);
    tracep->declBus(c+495,"PROTECT1_i", false,-1, 0,0);
    tracep->declBus(c+497,"UPAE1_i", false,-1, 11,0);
    tracep->declBus(c+497,"UPAF1_i", false,-1, 11,0);
    tracep->declBus(c+495,"SYNC_FIFO2_i", false,-1, 0,0);
    tracep->declBus(c+498,"RMODE_A2_i", false,-1, 2,0);
    tracep->declBus(c+498,"RMODE_B2_i", false,-1, 2,0);
    tracep->declBus(c+498,"WMODE_A2_i", false,-1, 2,0);
    tracep->declBus(c+498,"WMODE_B2_i", false,-1, 2,0);
    tracep->declBus(c+495,"FMODE2_i", false,-1, 0,0);
    tracep->declBus(c+495,"POWERDN2_i", false,-1, 0,0);
    tracep->declBus(c+495,"SLEEP2_i", false,-1, 0,0);
    tracep->declBus(c+495,"PROTECT2_i", false,-1, 0,0);
    tracep->declBus(c+499,"UPAE2_i", false,-1, 10,0);
    tracep->declBus(c+499,"UPAF2_i", false,-1, 10,0);
    tracep->declBus(c+495,"SPLIT_i", false,-1, 0,0);
    tracep->declArray(c+500,"INIT_i", false,-1, 36863,0);
    tracep->declBit(c+1652,"RESET_ni", false,-1);
    tracep->declBit(c+13,"WEN_A1_i", false,-1);
    tracep->declBit(c+13,"WEN_B1_i", false,-1);
    tracep->declBit(c+1653,"REN_A1_i", false,-1);
    tracep->declBit(c+1653,"REN_B1_i", false,-1);
    tracep->declBit(c+451,"CLK_A1_i", false,-1);
    tracep->declBit(c+451,"CLK_B1_i", false,-1);
    tracep->declBus(c+1654,"BE_A1_i", false,-1, 1,0);
    tracep->declBus(c+1654,"BE_B1_i", false,-1, 1,0);
    tracep->declBus(c+21,"ADDR_A1_i", false,-1, 14,0);
    tracep->declBus(c+22,"ADDR_B1_i", false,-1, 14,0);
    tracep->declBus(c+50,"WDATA_A1_i", false,-1, 17,0);
    tracep->declBus(c+51,"WDATA_B1_i", false,-1, 17,0);
    tracep->declBus(c+456,"RDATA_A1_o", false,-1, 17,0);
    tracep->declBus(c+457,"RDATA_B1_o", false,-1, 17,0);
    tracep->declBit(c+1653,"FLUSH1_i", false,-1);
    tracep->declBit(c+1653,"WEN_A2_i", false,-1);
    tracep->declBit(c+1653,"WEN_B2_i", false,-1);
    tracep->declBit(c+1653,"REN_A2_i", false,-1);
    tracep->declBit(c+1653,"REN_B2_i", false,-1);
    tracep->declBit(c+451,"CLK_A2_i", false,-1);
    tracep->declBit(c+451,"CLK_B2_i", false,-1);
    tracep->declBus(c+1655,"BE_A2_i", false,-1, 1,0);
    tracep->declBus(c+1655,"BE_B2_i", false,-1, 1,0);
    tracep->declBus(c+1656,"ADDR_A2_i", false,-1, 13,0);
    tracep->declBus(c+1656,"ADDR_B2_i", false,-1, 13,0);
    tracep->declBus(c+1657,"WDATA_A2_i", false,-1, 17,0);
    tracep->declBus(c+1657,"WDATA_B2_i", false,-1, 17,0);
    tracep->declBus(c+1657,"RDATA_A2_o", false,-1, 17,0);
    tracep->declBus(c+1657,"RDATA_B2_o", false,-1, 17,0);
    tracep->declBit(c+1653,"FLUSH2_i", false,-1);
    tracep->declBit(c+99,"EMPTY2", false,-1);
    tracep->declBit(c+100,"EPO2", false,-1);
    tracep->declBit(c+101,"EWM2", false,-1);
    tracep->declBit(c+102,"FULL2", false,-1);
    tracep->declBit(c+103,"FMO2", false,-1);
    tracep->declBit(c+104,"FWM2", false,-1);
    tracep->declBit(c+105,"EMPTY1", false,-1);
    tracep->declBit(c+106,"EPO1", false,-1);
    tracep->declBit(c+107,"EWM1", false,-1);
    tracep->declBit(c+108,"FULL1", false,-1);
    tracep->declBit(c+109,"FMO1", false,-1);
    tracep->declBit(c+110,"FWM1", false,-1);
    tracep->declBit(c+1658,"UNDERRUN1", false,-1);
    tracep->declBit(c+111,"OVERRUN1", false,-1);
    tracep->declBit(c+1659,"UNDERRUN2", false,-1);
    tracep->declBit(c+112,"OVERRUN2", false,-1);
    tracep->declBit(c+1660,"UNDERRUN3", false,-1);
    tracep->declBit(c+113,"OVERRUN3", false,-1);
    tracep->declBit(c+114,"EMPTY3", false,-1);
    tracep->declBit(c+115,"EPO3", false,-1);
    tracep->declBit(c+116,"EWM3", false,-1);
    tracep->declBit(c+117,"FULL3", false,-1);
    tracep->declBit(c+118,"FMO3", false,-1);
    tracep->declBit(c+119,"FWM3", false,-1);
    tracep->declBit(c+1653,"ram_fmode1", false,-1);
    tracep->declBit(c+1653,"ram_fmode2", false,-1);
    tracep->declBus(c+458,"ram_rdata_a1", false,-1, 17,0);
    tracep->declBus(c+459,"ram_rdata_b1", false,-1, 17,0);
    tracep->declBus(c+460,"ram_rdata_a2", false,-1, 17,0);
    tracep->declBus(c+461,"ram_rdata_b2", false,-1, 17,0);
    tracep->declBus(c+50,"ram_wdata_a1", false,-1, 17,0);
    tracep->declBus(c+51,"ram_wdata_b1", false,-1, 17,0);
    tracep->declBus(c+50,"ram_wdata_a2", false,-1, 17,0);
    tracep->declBus(c+51,"ram_wdata_b2", false,-1, 17,0);
    tracep->declBus(c+120,"laddr_a1", false,-1, 14,0);
    tracep->declBus(c+121,"laddr_b1", false,-1, 14,0);
    tracep->declBus(c+23,"ram_addr_a1", false,-1, 13,0);
    tracep->declBus(c+24,"ram_addr_b1", false,-1, 13,0);
    tracep->declBus(c+23,"ram_addr_a2", false,-1, 13,0);
    tracep->declBus(c+24,"ram_addr_b2", false,-1, 13,0);
    tracep->declBit(c+451,"smux_clk_a1", false,-1);
    tracep->declBit(c+451,"smux_clk_b1", false,-1);
    tracep->declBit(c+451,"smux_clk_a2", false,-1);
    tracep->declBit(c+451,"smux_clk_b2", false,-1);
    tracep->declBus(c+1654,"ram_be_a1", false,-1, 1,0);
    tracep->declBus(c+1654,"ram_be_a2", false,-1, 1,0);
    tracep->declBus(c+1654,"ram_be_b1", false,-1, 1,0);
    tracep->declBus(c+1654,"ram_be_b2", false,-1, 1,0);
    tracep->declBus(c+496,"ram_rmode_a1", false,-1, 2,0);
    tracep->declBus(c+496,"ram_wmode_a1", false,-1, 2,0);
    tracep->declBus(c+496,"ram_rmode_b1", false,-1, 2,0);
    tracep->declBus(c+496,"ram_wmode_b1", false,-1, 2,0);
    tracep->declBus(c+496,"ram_rmode_a2", false,-1, 2,0);
    tracep->declBus(c+496,"ram_wmode_a2", false,-1, 2,0);
    tracep->declBus(c+496,"ram_rmode_b2", false,-1, 2,0);
    tracep->declBus(c+496,"ram_wmode_b2", false,-1, 2,0);
    tracep->declBit(c+1653,"ram_ren_a1", false,-1);
    tracep->declBit(c+1653,"ram_ren_b1", false,-1);
    tracep->declBit(c+1653,"ram_ren_a2", false,-1);
    tracep->declBit(c+1653,"ram_ren_b2", false,-1);
    tracep->declBit(c+52,"ram_wen_a1", false,-1);
    tracep->declBit(c+53,"ram_wen_b1", false,-1);
    tracep->declBit(c+54,"ram_wen_a2", false,-1);
    tracep->declBit(c+55,"ram_wen_b2", false,-1);
    tracep->declBit(c+114,"ren_o", false,-1);
    tracep->declBus(c+122,"ff_raddr", false,-1, 11,0);
    tracep->declBus(c+123,"ff_waddr", false,-1, 11,0);
    tracep->declQuad(c+462,"fifo_rdata", false,-1, 35,0);
    tracep->declBus(c+1655,"fifo_rmode", false,-1, 1,0);
    tracep->declBus(c+1655,"fifo_wmode", false,-1, 1,0);
    tracep->declBus(c+25,"bwl", false,-1, 1,0);
    tracep->declBus(c+1661,"pl_dout0", false,-1, 17,0);
    tracep->declBus(c+1662,"pl_dout1", false,-1, 17,0);
    tracep->declBit(c+451,"sclk_a1", false,-1);
    tracep->declBit(c+451,"sclk_b1", false,-1);
    tracep->declBit(c+451,"sclk_a2", false,-1);
    tracep->declBit(c+451,"sclk_b2", false,-1);
    tracep->declBit(c+1652,"sreset", false,-1);
    tracep->declBit(c+1652,"flush1", false,-1);
    tracep->declBit(c+1652,"flush2", false,-1);
    tracep->declBus(c+1663,"MODE_36", false,-1, 2,0);
    tracep->declBus(c+1664,"MODE_18", false,-1, 2,0);
    tracep->declBus(c+1665,"MODE_9", false,-1, 2,0);
    tracep->declBus(c+1666,"MODE_1", false,-1, 2,0);
    tracep->declBus(c+1667,"MODE_2", false,-1, 2,0);
    tracep->declBus(c+496,"MODE_4", false,-1, 2,0);
    tracep->pushNamePrefix("fifo36_ctl ");
    tracep->declBus(c+1668,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+496,"FIFO_WIDTH", false,-1, 2,0);
    tracep->declBus(c+1669,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+122,"raddr", false,-1, 11,0);
    tracep->declBus(c+123,"waddr", false,-1, 11,0);
    tracep->declBus(c+124,"fflags", false,-1, 7,0);
    tracep->declBit(c+114,"ren_o", false,-1);
    tracep->declBit(c+495,"sync", false,-1);
    tracep->declBus(c+1655,"rmode", false,-1, 1,0);
    tracep->declBus(c+1655,"wmode", false,-1, 1,0);
    tracep->declBit(c+451,"rclk", false,-1);
    tracep->declBit(c+1652,"rst_R_n", false,-1);
    tracep->declBit(c+451,"wclk", false,-1);
    tracep->declBit(c+1652,"rst_W_n", false,-1);
    tracep->declBit(c+1653,"ren", false,-1);
    tracep->declBit(c+52,"wen", false,-1);
    tracep->declBus(c+497,"upaf", false,-1, 11,0);
    tracep->declBus(c+497,"upae", false,-1, 11,0);
    tracep->declBus(c+1670,"ADDR_PLUS_ONE", false,-1, 31,0);
    tracep->declBus(c+125,"pushtopop1", false,-1, 12,0);
    tracep->declBus(c+126,"pushtopop2", false,-1, 12,0);
    tracep->declBus(c+127,"poptopush1", false,-1, 12,0);
    tracep->declBus(c+128,"poptopush2", false,-1, 12,0);
    tracep->declBus(c+129,"pushtopop0", false,-1, 12,0);
    tracep->declBus(c+1671,"poptopush0", false,-1, 12,0);
    tracep->declBus(c+128,"smux_poptopush", false,-1, 12,0);
    tracep->declBus(c+126,"smux_pushtopop", false,-1, 12,0);
    tracep->pushNamePrefix("u_fifo_pop ");
    tracep->declBus(c+1668,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+496,"FIFO_WIDTH", false,-1, 2,0);
    tracep->declBus(c+1669,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+114,"ren_o", false,-1);
    tracep->declBus(c+130,"popflags", false,-1, 3,0);
    tracep->declBus(c+122,"out_raddr", false,-1, 11,0);
    tracep->declBus(c+1671,"gcout", false,-1, 12,0);
    tracep->declBit(c+1652,"rst_n", false,-1);
    tracep->declBit(c+451,"rclk", false,-1);
    tracep->declBit(c+1653,"ren_in", false,-1);
    tracep->declBus(c+1655,"rmode", false,-1, 1,0);
    tracep->declBus(c+1655,"wmode", false,-1, 1,0);
    tracep->declBus(c+126,"gcin", false,-1, 12,0);
    tracep->declBus(c+497,"upae", false,-1, 11,0);
    tracep->declBus(c+1670,"ADDR_PLUS_ONE", false,-1, 31,0);
    tracep->declBit(c+114,"empty", false,-1);
    tracep->declBit(c+115,"epo", false,-1);
    tracep->declBit(c+116,"pae", false,-1);
    tracep->declBit(c+1660,"underflow", false,-1);
    tracep->declBit(c+131,"e1", false,-1);
    tracep->declBit(c+132,"e2", false,-1);
    tracep->declBit(c+133,"o1", false,-1);
    tracep->declBit(c+134,"o2", false,-1);
    tracep->declBit(c+1653,"q1", false,-1);
    tracep->declBit(c+1653,"q2", false,-1);
    tracep->declBus(c+1672,"bwl_sel", false,-1, 1,0);
    tracep->declBus(c+1655,"gmode", false,-1, 1,0);
    tracep->declBus(c+135,"ff_raddr", false,-1, 11,0);
    tracep->declBus(c+136,"waddr", false,-1, 12,0);
    tracep->declBus(c+1673,"raddr", false,-1, 12,0);
    tracep->declBus(c+1671,"gcout_reg", false,-1, 12,0);
    tracep->declBus(c+1674,"gcout_next", false,-1, 12,0);
    tracep->declBus(c+137,"waddr_next", false,-1, 12,0);
    tracep->declBus(c+497,"pae_thresh", false,-1, 11,0);
    tracep->declBit(c+114,"ren_out", false,-1);
    tracep->declBit(c+132,"empty_next", false,-1);
    tracep->declBit(c+1653,"pae_next", false,-1);
    tracep->declBit(c+134,"epo_next", false,-1);
    tracep->declBus(c+1675,"gc32out_next", false,-1, 10,0);
    tracep->declBus(c+1676,"gc16out_next", false,-1, 11,0);
    tracep->declBus(c+1677,"gc8out_next", false,-1, 12,0);
    tracep->declBus(c+1678,"raddr_next", false,-1, 12,0);
    tracep->declBus(c+138,"ff_raddr_next", false,-1, 11,0);
    tracep->declBus(c+139,"tmp", false,-1, 12,0);
    tracep->declBus(c+140,"next_count", false,-1, 13,0);
    tracep->declBus(c+141,"count", false,-1, 13,0);
    tracep->declBus(c+1679,"fbytes", false,-1, 13,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fifo_push ");
    tracep->declBus(c+1668,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1669,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+142,"pushflags", false,-1, 3,0);
    tracep->declBus(c+129,"gcout", false,-1, 12,0);
    tracep->declBus(c+123,"ff_waddr", false,-1, 11,0);
    tracep->declBit(c+1652,"rst_n", false,-1);
    tracep->declBit(c+451,"wclk", false,-1);
    tracep->declBit(c+52,"wen", false,-1);
    tracep->declBus(c+1655,"rmode", false,-1, 1,0);
    tracep->declBus(c+1655,"wmode", false,-1, 1,0);
    tracep->declBus(c+128,"gcin", false,-1, 12,0);
    tracep->declBus(c+497,"upaf", false,-1, 11,0);
    tracep->declBus(c+1670,"ADDR_PLUS_ONE", false,-1, 31,0);
    tracep->declBit(c+29,"full_next", false,-1);
    tracep->declBit(c+117,"full", false,-1);
    tracep->declBit(c+1653,"paf_next", false,-1);
    tracep->declBit(c+119,"paf", false,-1);
    tracep->declBit(c+118,"fmo", false,-1);
    tracep->declBit(c+30,"fmo_next", false,-1);
    tracep->declBit(c+113,"overflow", false,-1);
    tracep->declBit(c+143,"p1", false,-1);
    tracep->declBit(c+144,"p2", false,-1);
    tracep->declBit(c+145,"f1", false,-1);
    tracep->declBit(c+146,"f2", false,-1);
    tracep->declBit(c+1653,"q1", false,-1);
    tracep->declBit(c+1653,"q2", false,-1);
    tracep->declBus(c+1655,"gmode", false,-1, 1,0);
    tracep->declBus(c+147,"waddr", false,-1, 12,0);
    tracep->declBus(c+148,"raddr", false,-1, 12,0);
    tracep->declBus(c+129,"gcout_reg", false,-1, 12,0);
    tracep->declBus(c+31,"gcout_next", false,-1, 12,0);
    tracep->declBus(c+149,"raddr_next", false,-1, 12,0);
    tracep->declBus(c+497,"paf_thresh", false,-1, 11,0);
    tracep->declBit(c+32,"overflow_next", false,-1);
    tracep->declBus(c+150,"waddr_next", false,-1, 12,0);
    tracep->declBus(c+151,"gc8out_next", false,-1, 12,0);
    tracep->declBus(c+152,"gc16out_next", false,-1, 11,0);
    tracep->declBus(c+153,"gc32out_next", false,-1, 10,0);
    tracep->declBus(c+154,"tmp", false,-1, 12,0);
    tracep->declBus(c+155,"next_count", false,-1, 12,0);
    tracep->declBus(c+156,"count", false,-1, 12,0);
    tracep->declBus(c+1680,"fbytes", false,-1, 12,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+495,"SYNC_FIFO_i", false,-1, 0,0);
    tracep->declBus(c+495,"POWERDN_i", false,-1, 0,0);
    tracep->declBus(c+495,"SLEEP_i", false,-1, 0,0);
    tracep->declBus(c+495,"PROTECT_i", false,-1, 0,0);
    tracep->declBus(c+499,"UPAF_i", false,-1, 10,0);
    tracep->declBus(c+499,"UPAE_i", false,-1, 10,0);
    tracep->declArray(c+1681,"INIT_t_i", false,-1, 18431,0);
    tracep->declBus(c+496,"RMODE_A_i", false,-1, 2,0);
    tracep->declBus(c+496,"RMODE_B_i", false,-1, 2,0);
    tracep->declBus(c+496,"WMODE_A_i", false,-1, 2,0);
    tracep->declBus(c+496,"WMODE_B_i", false,-1, 2,0);
    tracep->declBit(c+52,"WEN_A_i", false,-1);
    tracep->declBit(c+53,"WEN_B_i", false,-1);
    tracep->declBit(c+1653,"REN_A_i", false,-1);
    tracep->declBit(c+1653,"REN_B_i", false,-1);
    tracep->declBit(c+451,"CLK_A_i", false,-1);
    tracep->declBit(c+451,"CLK_B_i", false,-1);
    tracep->declBus(c+1654,"BE_A_i", false,-1, 1,0);
    tracep->declBus(c+1654,"BE_B_i", false,-1, 1,0);
    tracep->declBus(c+23,"ADDR_A_i", false,-1, 13,0);
    tracep->declBus(c+24,"ADDR_B_i", false,-1, 13,0);
    tracep->declBus(c+50,"WDATA_A_i", false,-1, 17,0);
    tracep->declBus(c+51,"WDATA_B_i", false,-1, 17,0);
    tracep->declBus(c+458,"RDATA_A_o", false,-1, 17,0);
    tracep->declBus(c+459,"RDATA_B_o", false,-1, 17,0);
    tracep->declBit(c+105,"EMPTY_o", false,-1);
    tracep->declBit(c+106,"EPO_o", false,-1);
    tracep->declBit(c+107,"EWM_o", false,-1);
    tracep->declBit(c+1658,"UNDERRUN_o", false,-1);
    tracep->declBit(c+108,"FULL_o", false,-1);
    tracep->declBit(c+109,"FMO_o", false,-1);
    tracep->declBit(c+110,"FWM_o", false,-1);
    tracep->declBit(c+111,"OVERRUN_o", false,-1);
    tracep->declBit(c+1652,"FLUSH_ni", false,-1);
    tracep->declBit(c+1653,"FMODE_i", false,-1);
    tracep->declBus(c+56,"wmsk_a", false,-1, 17,0);
    tracep->declBus(c+57,"wmsk_b", false,-1, 17,0);
    tracep->declBus(c+2257,"addr_a", false,-1, 8,0);
    tracep->declBus(c+2258,"addr_b", false,-1, 8,0);
    tracep->declBus(c+157,"addr_a_d", false,-1, 4,0);
    tracep->declBus(c+158,"addr_b_d", false,-1, 4,0);
    tracep->declBus(c+464,"ram_rdata_a", false,-1, 17,0);
    tracep->declBus(c+465,"ram_rdata_b", false,-1, 17,0);
    tracep->declBus(c+58,"aligned_wdata_a", false,-1, 17,0);
    tracep->declBus(c+59,"aligned_wdata_b", false,-1, 17,0);
    tracep->declBit(c+105,"ren_o", false,-1);
    tracep->declBus(c+159,"ff_raddr", false,-1, 10,0);
    tracep->declBus(c+160,"ff_waddr", false,-1, 10,0);
    tracep->declBus(c+60,"ram_addr_a", false,-1, 13,0);
    tracep->declBus(c+61,"ram_addr_b", false,-1, 13,0);
    tracep->declBus(c+2259,"ram_waddr_a", false,-1, 3,0);
    tracep->declBus(c+2259,"ram_waddr_b", false,-1, 3,0);
    tracep->declBit(c+2260,"initn", false,-1);
    tracep->declBit(c+2261,"smux_rclk", false,-1);
    tracep->declBit(c+2262,"smux_wclk", false,-1);
    tracep->declBit(c+1653,"real_fmode", false,-1);
    tracep->declBus(c+2263,"raw_fflags", false,-1, 3,0);
    tracep->declBus(c+2264,"fifo_rmode", false,-1, 1,0);
    tracep->declBus(c+2264,"fifo_wmode", false,-1, 1,0);
    tracep->declBit(c+451,"smux_clk_a", false,-1);
    tracep->declBit(c+451,"smux_clk_b", false,-1);
    tracep->declBit(c+1653,"ram_ren_a", false,-1);
    tracep->declBit(c+1653,"ram_ren_b", false,-1);
    tracep->declBit(c+52,"ram_wen_a", false,-1);
    tracep->declBit(c+53,"ram_wen_b", false,-1);
    tracep->declBit(c+52,"cen_a", false,-1);
    tracep->declBit(c+53,"cen_b", false,-1);
    tracep->declBit(c+62,"cen_a_n", false,-1);
    tracep->declBit(c+63,"cen_b_n", false,-1);
    tracep->declBit(c+62,"ram_wen_a_n", false,-1);
    tracep->declBit(c+63,"ram_wen_b_n", false,-1);
    tracep->declBus(c+1665,"MODE_9", false,-1, 2,0);
    tracep->declBus(c+1666,"MODE_1", false,-1, 2,0);
    tracep->declBus(c+1664,"MODE_18", false,-1, 2,0);
    tracep->declBus(c+1667,"MODE_2", false,-1, 2,0);
    tracep->declBus(c+496,"MODE_4", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_ctl ");
    tracep->declBus(c+2265,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2266,"FIFO_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2267,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+159,"raddr", false,-1, 10,0);
    tracep->declBus(c+160,"waddr", false,-1, 10,0);
    tracep->declBus(c+161,"fflags", false,-1, 7,0);
    tracep->declBit(c+105,"ren_o", false,-1);
    tracep->declBit(c+495,"sync", false,-1);
    tracep->declBus(c+2264,"rmode", false,-1, 1,0);
    tracep->declBus(c+2264,"wmode", false,-1, 1,0);
    tracep->declBit(c+451,"rclk", false,-1);
    tracep->declBit(c+1652,"rst_R_n", false,-1);
    tracep->declBit(c+451,"wclk", false,-1);
    tracep->declBit(c+1652,"rst_W_n", false,-1);
    tracep->declBit(c+1653,"ren", false,-1);
    tracep->declBit(c+52,"wen", false,-1);
    tracep->declBus(c+499,"upaf", false,-1, 10,0);
    tracep->declBus(c+499,"upae", false,-1, 10,0);
    tracep->declBus(c+1668,"ADDR_PLUS_ONE", false,-1, 31,0);
    tracep->declBus(c+162,"pushtopop1", false,-1, 11,0);
    tracep->declBus(c+163,"pushtopop2", false,-1, 11,0);
    tracep->declBus(c+164,"poptopush1", false,-1, 11,0);
    tracep->declBus(c+165,"poptopush2", false,-1, 11,0);
    tracep->declBus(c+166,"pushtopop0", false,-1, 11,0);
    tracep->declBus(c+2268,"poptopush0", false,-1, 11,0);
    tracep->declBus(c+165,"smux_poptopush", false,-1, 11,0);
    tracep->declBus(c+163,"smux_pushtopop", false,-1, 11,0);
    tracep->pushNamePrefix("u_fifo_pop ");
    tracep->declBus(c+2265,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2266,"FIFO_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2267,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+105,"ren_o", false,-1);
    tracep->declBus(c+167,"popflags", false,-1, 3,0);
    tracep->declBus(c+159,"out_raddr", false,-1, 10,0);
    tracep->declBus(c+2268,"gcout", false,-1, 11,0);
    tracep->declBit(c+1652,"rst_n", false,-1);
    tracep->declBit(c+451,"rclk", false,-1);
    tracep->declBit(c+1653,"ren_in", false,-1);
    tracep->declBus(c+2264,"rmode", false,-1, 1,0);
    tracep->declBus(c+2264,"wmode", false,-1, 1,0);
    tracep->declBus(c+163,"gcin", false,-1, 11,0);
    tracep->declBus(c+499,"upae", false,-1, 10,0);
    tracep->declBus(c+1668,"ADDR_PLUS_ONE", false,-1, 31,0);
    tracep->declBit(c+105,"empty", false,-1);
    tracep->declBit(c+106,"epo", false,-1);
    tracep->declBit(c+107,"pae", false,-1);
    tracep->declBit(c+1658,"underflow", false,-1);
    tracep->declBit(c+409,"e1", false,-1);
    tracep->declBit(c+410,"e2", false,-1);
    tracep->declBit(c+411,"o1", false,-1);
    tracep->declBit(c+412,"o2", false,-1);
    tracep->declBit(c+1653,"q1", false,-1);
    tracep->declBit(c+1653,"q2", false,-1);
    tracep->declBus(c+2269,"bwl_sel", false,-1, 1,0);
    tracep->declBus(c+1,"gmode", false,-1, 1,0);
    tracep->declBus(c+168,"ff_raddr", false,-1, 10,0);
    tracep->declBus(c+169,"waddr", false,-1, 11,0);
    tracep->declBus(c+2270,"raddr", false,-1, 11,0);
    tracep->declBus(c+2268,"gcout_reg", false,-1, 11,0);
    tracep->declBus(c+497,"gcout_next", false,-1, 11,0);
    tracep->declBus(c+413,"waddr_next", false,-1, 11,0);
    tracep->declBus(c+499,"pae_thresh", false,-1, 10,0);
    tracep->declBit(c+105,"ren_out", false,-1);
    tracep->declBit(c+410,"empty_next", false,-1);
    tracep->declBit(c+1653,"pae_next", false,-1);
    tracep->declBit(c+412,"epo_next", false,-1);
    tracep->declBus(c+2271,"gc32out_next", false,-1, 9,0);
    tracep->declBus(c+2272,"gc16out_next", false,-1, 10,0);
    tracep->declBus(c+2273,"gc8out_next", false,-1, 11,0);
    tracep->declBus(c+2274,"raddr_next", false,-1, 11,0);
    tracep->declBus(c+170,"ff_raddr_next", false,-1, 10,0);
    tracep->declBus(c+171,"tmp", false,-1, 11,0);
    tracep->declBus(c+172,"next_count", false,-1, 12,0);
    tracep->declBus(c+173,"count", false,-1, 12,0);
    tracep->declBus(c+2275,"fbytes", false,-1, 12,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fifo_push ");
    tracep->declBus(c+2265,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2267,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+174,"pushflags", false,-1, 3,0);
    tracep->declBus(c+166,"gcout", false,-1, 11,0);
    tracep->declBus(c+160,"ff_waddr", false,-1, 10,0);
    tracep->declBit(c+1652,"rst_n", false,-1);
    tracep->declBit(c+451,"wclk", false,-1);
    tracep->declBit(c+52,"wen", false,-1);
    tracep->declBus(c+2264,"rmode", false,-1, 1,0);
    tracep->declBus(c+2264,"wmode", false,-1, 1,0);
    tracep->declBus(c+165,"gcin", false,-1, 11,0);
    tracep->declBus(c+499,"upaf", false,-1, 10,0);
    tracep->declBus(c+1668,"ADDR_PLUS_ONE", false,-1, 31,0);
    tracep->declBit(c+91,"full_next", false,-1);
    tracep->declBit(c+108,"full", false,-1);
    tracep->declBit(c+1653,"paf_next", false,-1);
    tracep->declBit(c+110,"paf", false,-1);
    tracep->declBit(c+109,"fmo", false,-1);
    tracep->declBit(c+92,"fmo_next", false,-1);
    tracep->declBit(c+111,"overflow", false,-1);
    tracep->declBit(c+414,"p1", false,-1);
    tracep->declBit(c+415,"p2", false,-1);
    tracep->declBit(c+416,"f1", false,-1);
    tracep->declBit(c+417,"f2", false,-1);
    tracep->declBit(c+1653,"q1", false,-1);
    tracep->declBit(c+1653,"q2", false,-1);
    tracep->declBus(c+2,"gmode", false,-1, 1,0);
    tracep->declBus(c+175,"waddr", false,-1, 11,0);
    tracep->declBus(c+176,"raddr", false,-1, 11,0);
    tracep->declBus(c+166,"gcout_reg", false,-1, 11,0);
    tracep->declBus(c+33,"gcout_next", false,-1, 11,0);
    tracep->declBus(c+418,"raddr_next", false,-1, 11,0);
    tracep->declBus(c+499,"paf_thresh", false,-1, 10,0);
    tracep->declBit(c+34,"overflow_next", false,-1);
    tracep->declBus(c+177,"waddr_next", false,-1, 11,0);
    tracep->declBus(c+178,"gc8out_next", false,-1, 11,0);
    tracep->declBus(c+179,"gc16out_next", false,-1, 10,0);
    tracep->declBus(c+180,"gc32out_next", false,-1, 9,0);
    tracep->declBus(c+181,"tmp", false,-1, 11,0);
    tracep->declBus(c+401,"next_count", false,-1, 11,0);
    tracep->declBus(c+182,"count", false,-1, 11,0);
    tracep->declBus(c+2276,"fbytes", false,-1, 11,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("uram ");
    tracep->declArray(c+1681,"INIT_s_i", false,-1, 18431,0);
    tracep->declBit(c+451,"clk_a", false,-1);
    tracep->declBit(c+62,"cen_a", false,-1);
    tracep->declBit(c+62,"wen_a", false,-1);
    tracep->declBus(c+64,"addr_a", false,-1, 9,0);
    tracep->declBus(c+56,"wmsk_a", false,-1, 17,0);
    tracep->declBus(c+58,"wdata_a", false,-1, 17,0);
    tracep->declBus(c+464,"rdata_a", false,-1, 17,0);
    tracep->declBit(c+451,"clk_b", false,-1);
    tracep->declBit(c+63,"cen_b", false,-1);
    tracep->declBit(c+63,"wen_b", false,-1);
    tracep->declBus(c+65,"addr_b", false,-1, 9,0);
    tracep->declBus(c+57,"wmsk_b", false,-1, 17,0);
    tracep->declBus(c+59,"wdata_b", false,-1, 17,0);
    tracep->declBus(c+465,"rdata_b", false,-1, 17,0);
    tracep->declBus(c+183,"laddr_a", false,-1, 9,0);
    tracep->declBus(c+184,"laddr_b", false,-1, 9,0);
    tracep->declBit(c+466,"lcen_a", false,-1);
    tracep->declBit(c+467,"lwen_a", false,-1);
    tracep->declBus(c+185,"lwdata_a", false,-1, 17,0);
    tracep->declBit(c+468,"lcen_b", false,-1);
    tracep->declBit(c+469,"lwen_b", false,-1);
    tracep->declBus(c+186,"lwdata_b", false,-1, 17,0);
    tracep->declBus(c+187,"lwmsk_a", false,-1, 17,0);
    tracep->declBus(c+188,"lwmsk_b", false,-1, 17,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+9,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+495,"SYNC_FIFO_i", false,-1, 0,0);
    tracep->declBus(c+495,"POWERDN_i", false,-1, 0,0);
    tracep->declBus(c+495,"SLEEP_i", false,-1, 0,0);
    tracep->declBus(c+495,"PROTECT_i", false,-1, 0,0);
    tracep->declBus(c+499,"UPAF_i", false,-1, 10,0);
    tracep->declBus(c+499,"UPAE_i", false,-1, 10,0);
    tracep->declArray(c+1681,"INIT_t_i", false,-1, 18431,0);
    tracep->declBus(c+496,"RMODE_A_i", false,-1, 2,0);
    tracep->declBus(c+496,"RMODE_B_i", false,-1, 2,0);
    tracep->declBus(c+496,"WMODE_A_i", false,-1, 2,0);
    tracep->declBus(c+496,"WMODE_B_i", false,-1, 2,0);
    tracep->declBit(c+54,"WEN_A_i", false,-1);
    tracep->declBit(c+55,"WEN_B_i", false,-1);
    tracep->declBit(c+1653,"REN_A_i", false,-1);
    tracep->declBit(c+1653,"REN_B_i", false,-1);
    tracep->declBit(c+451,"CLK_A_i", false,-1);
    tracep->declBit(c+451,"CLK_B_i", false,-1);
    tracep->declBus(c+1654,"BE_A_i", false,-1, 1,0);
    tracep->declBus(c+1654,"BE_B_i", false,-1, 1,0);
    tracep->declBus(c+23,"ADDR_A_i", false,-1, 13,0);
    tracep->declBus(c+24,"ADDR_B_i", false,-1, 13,0);
    tracep->declBus(c+50,"WDATA_A_i", false,-1, 17,0);
    tracep->declBus(c+51,"WDATA_B_i", false,-1, 17,0);
    tracep->declBus(c+460,"RDATA_A_o", false,-1, 17,0);
    tracep->declBus(c+461,"RDATA_B_o", false,-1, 17,0);
    tracep->declBit(c+99,"EMPTY_o", false,-1);
    tracep->declBit(c+100,"EPO_o", false,-1);
    tracep->declBit(c+101,"EWM_o", false,-1);
    tracep->declBit(c+1659,"UNDERRUN_o", false,-1);
    tracep->declBit(c+102,"FULL_o", false,-1);
    tracep->declBit(c+103,"FMO_o", false,-1);
    tracep->declBit(c+104,"FWM_o", false,-1);
    tracep->declBit(c+112,"OVERRUN_o", false,-1);
    tracep->declBit(c+1652,"FLUSH_ni", false,-1);
    tracep->declBit(c+1653,"FMODE_i", false,-1);
    tracep->declBus(c+66,"wmsk_a", false,-1, 17,0);
    tracep->declBus(c+67,"wmsk_b", false,-1, 17,0);
    tracep->declBus(c+2277,"addr_a", false,-1, 8,0);
    tracep->declBus(c+2278,"addr_b", false,-1, 8,0);
    tracep->declBus(c+189,"addr_a_d", false,-1, 4,0);
    tracep->declBus(c+190,"addr_b_d", false,-1, 4,0);
    tracep->declBus(c+470,"ram_rdata_a", false,-1, 17,0);
    tracep->declBus(c+471,"ram_rdata_b", false,-1, 17,0);
    tracep->declBus(c+68,"aligned_wdata_a", false,-1, 17,0);
    tracep->declBus(c+69,"aligned_wdata_b", false,-1, 17,0);
    tracep->declBit(c+99,"ren_o", false,-1);
    tracep->declBus(c+191,"ff_raddr", false,-1, 10,0);
    tracep->declBus(c+192,"ff_waddr", false,-1, 10,0);
    tracep->declBus(c+70,"ram_addr_a", false,-1, 13,0);
    tracep->declBus(c+71,"ram_addr_b", false,-1, 13,0);
    tracep->declBus(c+2259,"ram_waddr_a", false,-1, 3,0);
    tracep->declBus(c+2259,"ram_waddr_b", false,-1, 3,0);
    tracep->declBit(c+2279,"initn", false,-1);
    tracep->declBit(c+2280,"smux_rclk", false,-1);
    tracep->declBit(c+2281,"smux_wclk", false,-1);
    tracep->declBit(c+1653,"real_fmode", false,-1);
    tracep->declBus(c+2282,"raw_fflags", false,-1, 3,0);
    tracep->declBus(c+2264,"fifo_rmode", false,-1, 1,0);
    tracep->declBus(c+2264,"fifo_wmode", false,-1, 1,0);
    tracep->declBit(c+451,"smux_clk_a", false,-1);
    tracep->declBit(c+451,"smux_clk_b", false,-1);
    tracep->declBit(c+1653,"ram_ren_a", false,-1);
    tracep->declBit(c+1653,"ram_ren_b", false,-1);
    tracep->declBit(c+54,"ram_wen_a", false,-1);
    tracep->declBit(c+55,"ram_wen_b", false,-1);
    tracep->declBit(c+54,"cen_a", false,-1);
    tracep->declBit(c+55,"cen_b", false,-1);
    tracep->declBit(c+72,"cen_a_n", false,-1);
    tracep->declBit(c+73,"cen_b_n", false,-1);
    tracep->declBit(c+72,"ram_wen_a_n", false,-1);
    tracep->declBit(c+73,"ram_wen_b_n", false,-1);
    tracep->declBus(c+1665,"MODE_9", false,-1, 2,0);
    tracep->declBus(c+1666,"MODE_1", false,-1, 2,0);
    tracep->declBus(c+1664,"MODE_18", false,-1, 2,0);
    tracep->declBus(c+1667,"MODE_2", false,-1, 2,0);
    tracep->declBus(c+496,"MODE_4", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_ctl ");
    tracep->declBus(c+2265,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2266,"FIFO_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2267,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+191,"raddr", false,-1, 10,0);
    tracep->declBus(c+192,"waddr", false,-1, 10,0);
    tracep->declBus(c+193,"fflags", false,-1, 7,0);
    tracep->declBit(c+99,"ren_o", false,-1);
    tracep->declBit(c+495,"sync", false,-1);
    tracep->declBus(c+2264,"rmode", false,-1, 1,0);
    tracep->declBus(c+2264,"wmode", false,-1, 1,0);
    tracep->declBit(c+451,"rclk", false,-1);
    tracep->declBit(c+1652,"rst_R_n", false,-1);
    tracep->declBit(c+451,"wclk", false,-1);
    tracep->declBit(c+1652,"rst_W_n", false,-1);
    tracep->declBit(c+1653,"ren", false,-1);
    tracep->declBit(c+54,"wen", false,-1);
    tracep->declBus(c+499,"upaf", false,-1, 10,0);
    tracep->declBus(c+499,"upae", false,-1, 10,0);
    tracep->declBus(c+1668,"ADDR_PLUS_ONE", false,-1, 31,0);
    tracep->declBus(c+194,"pushtopop1", false,-1, 11,0);
    tracep->declBus(c+195,"pushtopop2", false,-1, 11,0);
    tracep->declBus(c+196,"poptopush1", false,-1, 11,0);
    tracep->declBus(c+197,"poptopush2", false,-1, 11,0);
    tracep->declBus(c+198,"pushtopop0", false,-1, 11,0);
    tracep->declBus(c+2283,"poptopush0", false,-1, 11,0);
    tracep->declBus(c+197,"smux_poptopush", false,-1, 11,0);
    tracep->declBus(c+195,"smux_pushtopop", false,-1, 11,0);
    tracep->pushNamePrefix("u_fifo_pop ");
    tracep->declBus(c+2265,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2266,"FIFO_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2267,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+99,"ren_o", false,-1);
    tracep->declBus(c+199,"popflags", false,-1, 3,0);
    tracep->declBus(c+191,"out_raddr", false,-1, 10,0);
    tracep->declBus(c+2283,"gcout", false,-1, 11,0);
    tracep->declBit(c+1652,"rst_n", false,-1);
    tracep->declBit(c+451,"rclk", false,-1);
    tracep->declBit(c+1653,"ren_in", false,-1);
    tracep->declBus(c+2264,"rmode", false,-1, 1,0);
    tracep->declBus(c+2264,"wmode", false,-1, 1,0);
    tracep->declBus(c+195,"gcin", false,-1, 11,0);
    tracep->declBus(c+499,"upae", false,-1, 10,0);
    tracep->declBus(c+1668,"ADDR_PLUS_ONE", false,-1, 31,0);
    tracep->declBit(c+99,"empty", false,-1);
    tracep->declBit(c+100,"epo", false,-1);
    tracep->declBit(c+101,"pae", false,-1);
    tracep->declBit(c+1659,"underflow", false,-1);
    tracep->declBit(c+419,"e1", false,-1);
    tracep->declBit(c+420,"e2", false,-1);
    tracep->declBit(c+421,"o1", false,-1);
    tracep->declBit(c+422,"o2", false,-1);
    tracep->declBit(c+1653,"q1", false,-1);
    tracep->declBit(c+1653,"q2", false,-1);
    tracep->declBus(c+2284,"bwl_sel", false,-1, 1,0);
    tracep->declBus(c+3,"gmode", false,-1, 1,0);
    tracep->declBus(c+200,"ff_raddr", false,-1, 10,0);
    tracep->declBus(c+201,"waddr", false,-1, 11,0);
    tracep->declBus(c+2285,"raddr", false,-1, 11,0);
    tracep->declBus(c+2283,"gcout_reg", false,-1, 11,0);
    tracep->declBus(c+497,"gcout_next", false,-1, 11,0);
    tracep->declBus(c+423,"waddr_next", false,-1, 11,0);
    tracep->declBus(c+499,"pae_thresh", false,-1, 10,0);
    tracep->declBit(c+99,"ren_out", false,-1);
    tracep->declBit(c+420,"empty_next", false,-1);
    tracep->declBit(c+1653,"pae_next", false,-1);
    tracep->declBit(c+422,"epo_next", false,-1);
    tracep->declBus(c+2286,"gc32out_next", false,-1, 9,0);
    tracep->declBus(c+2287,"gc16out_next", false,-1, 10,0);
    tracep->declBus(c+2288,"gc8out_next", false,-1, 11,0);
    tracep->declBus(c+2289,"raddr_next", false,-1, 11,0);
    tracep->declBus(c+202,"ff_raddr_next", false,-1, 10,0);
    tracep->declBus(c+203,"tmp", false,-1, 11,0);
    tracep->declBus(c+204,"next_count", false,-1, 12,0);
    tracep->declBus(c+205,"count", false,-1, 12,0);
    tracep->declBus(c+2275,"fbytes", false,-1, 12,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fifo_push ");
    tracep->declBus(c+2265,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2267,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+206,"pushflags", false,-1, 3,0);
    tracep->declBus(c+198,"gcout", false,-1, 11,0);
    tracep->declBus(c+192,"ff_waddr", false,-1, 10,0);
    tracep->declBit(c+1652,"rst_n", false,-1);
    tracep->declBit(c+451,"wclk", false,-1);
    tracep->declBit(c+54,"wen", false,-1);
    tracep->declBus(c+2264,"rmode", false,-1, 1,0);
    tracep->declBus(c+2264,"wmode", false,-1, 1,0);
    tracep->declBus(c+197,"gcin", false,-1, 11,0);
    tracep->declBus(c+499,"upaf", false,-1, 10,0);
    tracep->declBus(c+1668,"ADDR_PLUS_ONE", false,-1, 31,0);
    tracep->declBit(c+93,"full_next", false,-1);
    tracep->declBit(c+102,"full", false,-1);
    tracep->declBit(c+1653,"paf_next", false,-1);
    tracep->declBit(c+104,"paf", false,-1);
    tracep->declBit(c+103,"fmo", false,-1);
    tracep->declBit(c+94,"fmo_next", false,-1);
    tracep->declBit(c+112,"overflow", false,-1);
    tracep->declBit(c+424,"p1", false,-1);
    tracep->declBit(c+425,"p2", false,-1);
    tracep->declBit(c+426,"f1", false,-1);
    tracep->declBit(c+427,"f2", false,-1);
    tracep->declBit(c+1653,"q1", false,-1);
    tracep->declBit(c+1653,"q2", false,-1);
    tracep->declBus(c+4,"gmode", false,-1, 1,0);
    tracep->declBus(c+207,"waddr", false,-1, 11,0);
    tracep->declBus(c+208,"raddr", false,-1, 11,0);
    tracep->declBus(c+198,"gcout_reg", false,-1, 11,0);
    tracep->declBus(c+35,"gcout_next", false,-1, 11,0);
    tracep->declBus(c+428,"raddr_next", false,-1, 11,0);
    tracep->declBus(c+499,"paf_thresh", false,-1, 10,0);
    tracep->declBit(c+36,"overflow_next", false,-1);
    tracep->declBus(c+209,"waddr_next", false,-1, 11,0);
    tracep->declBus(c+210,"gc8out_next", false,-1, 11,0);
    tracep->declBus(c+211,"gc16out_next", false,-1, 10,0);
    tracep->declBus(c+212,"gc32out_next", false,-1, 9,0);
    tracep->declBus(c+213,"tmp", false,-1, 11,0);
    tracep->declBus(c+402,"next_count", false,-1, 11,0);
    tracep->declBus(c+214,"count", false,-1, 11,0);
    tracep->declBus(c+2276,"fbytes", false,-1, 11,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("uram ");
    tracep->declArray(c+1681,"INIT_s_i", false,-1, 18431,0);
    tracep->declBit(c+451,"clk_a", false,-1);
    tracep->declBit(c+72,"cen_a", false,-1);
    tracep->declBit(c+72,"wen_a", false,-1);
    tracep->declBus(c+74,"addr_a", false,-1, 9,0);
    tracep->declBus(c+66,"wmsk_a", false,-1, 17,0);
    tracep->declBus(c+68,"wdata_a", false,-1, 17,0);
    tracep->declBus(c+470,"rdata_a", false,-1, 17,0);
    tracep->declBit(c+451,"clk_b", false,-1);
    tracep->declBit(c+73,"cen_b", false,-1);
    tracep->declBit(c+73,"wen_b", false,-1);
    tracep->declBus(c+75,"addr_b", false,-1, 9,0);
    tracep->declBus(c+67,"wmsk_b", false,-1, 17,0);
    tracep->declBus(c+69,"wdata_b", false,-1, 17,0);
    tracep->declBus(c+471,"rdata_b", false,-1, 17,0);
    tracep->declBus(c+215,"laddr_a", false,-1, 9,0);
    tracep->declBus(c+216,"laddr_b", false,-1, 9,0);
    tracep->declBit(c+472,"lcen_a", false,-1);
    tracep->declBit(c+473,"lwen_a", false,-1);
    tracep->declBus(c+217,"lwdata_a", false,-1, 17,0);
    tracep->declBit(c+474,"lcen_b", false,-1);
    tracep->declBit(c+475,"lwen_b", false,-1);
    tracep->declBus(c+218,"lwdata_b", false,-1, 17,0);
    tracep->declBus(c+219,"lwmsk_a", false,-1, 17,0);
    tracep->declBus(c+220,"lwmsk_b", false,-1, 17,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+10,"i", false,-1, 31,0);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("netlist ");
    tracep->declBit(c+451,"clk", false,-1);
    tracep->declQuad(c+16,"din", false,-1, 35,0);
    tracep->declQuad(c+454,"dout", false,-1, 35,0);
    tracep->declBus(c+15,"rd_addr", false,-1, 9,0);
    tracep->declBit(c+13,"we", false,-1);
    tracep->declBus(c+14,"wr_addr", false,-1, 9,0);
    tracep->pushNamePrefix("inst1 ");
    tracep->declArray(c+2290,"MODE_BITS", false,-1, 80,0);
    tracep->declBus(c+495,"SYNC_FIFO1_i", false,-1, 0,0);
    tracep->declBus(c+498,"RMODE_A1_i", false,-1, 2,0);
    tracep->declBus(c+1663,"RMODE_B1_i", false,-1, 2,0);
    tracep->declBus(c+498,"WMODE_A1_i", false,-1, 2,0);
    tracep->declBus(c+496,"WMODE_B1_i", false,-1, 2,0);
    tracep->declBus(c+2293,"FMODE1_i", false,-1, 0,0);
    tracep->declBus(c+495,"POWERDN1_i", false,-1, 0,0);
    tracep->declBus(c+495,"SLEEP1_i", false,-1, 0,0);
    tracep->declBus(c+495,"PROTECT1_i", false,-1, 0,0);
    tracep->declBus(c+2294,"UPAE1_i", false,-1, 11,0);
    tracep->declBus(c+2295,"UPAF1_i", false,-1, 11,0);
    tracep->declBus(c+495,"SYNC_FIFO2_i", false,-1, 0,0);
    tracep->declBus(c+496,"RMODE_A2_i", false,-1, 2,0);
    tracep->declBus(c+1665,"RMODE_B2_i", false,-1, 2,0);
    tracep->declBus(c+1665,"WMODE_A2_i", false,-1, 2,0);
    tracep->declBus(c+1667,"WMODE_B2_i", false,-1, 2,0);
    tracep->declBus(c+495,"FMODE2_i", false,-1, 0,0);
    tracep->declBus(c+495,"POWERDN2_i", false,-1, 0,0);
    tracep->declBus(c+495,"SLEEP2_i", false,-1, 0,0);
    tracep->declBus(c+495,"PROTECT2_i", false,-1, 0,0);
    tracep->declBus(c+2296,"UPAE2_i", false,-1, 10,0);
    tracep->declBus(c+2297,"UPAF2_i", false,-1, 10,0);
    tracep->declBus(c+495,"SPLIT_i", false,-1, 0,0);
    tracep->declArray(c+2298,"INIT_i", false,-1, 36863,0);
    tracep->declBit(c+1652,"RESET_ni", false,-1);
    tracep->declBit(c+13,"WEN_A1_i", false,-1);
    tracep->declBit(c+13,"WEN_B1_i", false,-1);
    tracep->declBit(c+1653,"REN_A1_i", false,-1);
    tracep->declBit(c+1653,"REN_B1_i", false,-1);
    tracep->declBit(c+451,"CLK_A1_i", false,-1);
    tracep->declBit(c+451,"CLK_B1_i", false,-1);
    tracep->declBus(c+1654,"BE_A1_i", false,-1, 1,0);
    tracep->declBus(c+1654,"BE_B1_i", false,-1, 1,0);
    tracep->declBus(c+21,"ADDR_A1_i", false,-1, 14,0);
    tracep->declBus(c+22,"ADDR_B1_i", false,-1, 14,0);
    tracep->declBus(c+76,"WDATA_A1_i", false,-1, 17,0);
    tracep->declBus(c+26,"WDATA_B1_i", false,-1, 17,0);
    tracep->declBus(c+221,"RDATA_A1_o", false,-1, 17,0);
    tracep->declBus(c+476,"RDATA_B1_o", false,-1, 17,0);
    tracep->declBit(c+1653,"FLUSH1_i", false,-1);
    tracep->declBit(c+1653,"WEN_A2_i", false,-1);
    tracep->declBit(c+1653,"WEN_B2_i", false,-1);
    tracep->declBit(c+1653,"REN_A2_i", false,-1);
    tracep->declBit(c+1653,"REN_B2_i", false,-1);
    tracep->declBit(c+451,"CLK_A2_i", false,-1);
    tracep->declBit(c+451,"CLK_B2_i", false,-1);
    tracep->declBus(c+1655,"BE_A2_i", false,-1, 1,0);
    tracep->declBus(c+1655,"BE_B2_i", false,-1, 1,0);
    tracep->declBus(c+1656,"ADDR_A2_i", false,-1, 13,0);
    tracep->declBus(c+1656,"ADDR_B2_i", false,-1, 13,0);
    tracep->declBus(c+1657,"WDATA_A2_i", false,-1, 17,0);
    tracep->declBus(c+1657,"WDATA_B2_i", false,-1, 17,0);
    tracep->declBus(c+1657,"RDATA_A2_o", false,-1, 17,0);
    tracep->declBus(c+477,"RDATA_B2_o", false,-1, 17,0);
    tracep->declBit(c+1653,"FLUSH2_i", false,-1);
    tracep->declBit(c+222,"EMPTY2", false,-1);
    tracep->declBit(c+223,"EPO2", false,-1);
    tracep->declBit(c+224,"EWM2", false,-1);
    tracep->declBit(c+225,"FULL2", false,-1);
    tracep->declBit(c+226,"FMO2", false,-1);
    tracep->declBit(c+227,"FWM2", false,-1);
    tracep->declBit(c+228,"EMPTY1", false,-1);
    tracep->declBit(c+229,"EPO1", false,-1);
    tracep->declBit(c+230,"EWM1", false,-1);
    tracep->declBit(c+231,"FULL1", false,-1);
    tracep->declBit(c+232,"FMO1", false,-1);
    tracep->declBit(c+233,"FWM1", false,-1);
    tracep->declBit(c+234,"UNDERRUN1", false,-1);
    tracep->declBit(c+235,"OVERRUN1", false,-1);
    tracep->declBit(c+236,"UNDERRUN2", false,-1);
    tracep->declBit(c+237,"OVERRUN2", false,-1);
    tracep->declBit(c+238,"UNDERRUN3", false,-1);
    tracep->declBit(c+239,"OVERRUN3", false,-1);
    tracep->declBit(c+240,"EMPTY3", false,-1);
    tracep->declBit(c+241,"EPO3", false,-1);
    tracep->declBit(c+242,"EWM3", false,-1);
    tracep->declBit(c+243,"FULL3", false,-1);
    tracep->declBit(c+244,"FMO3", false,-1);
    tracep->declBit(c+245,"FWM3", false,-1);
    tracep->declBit(c+1653,"ram_fmode1", false,-1);
    tracep->declBit(c+1653,"ram_fmode2", false,-1);
    tracep->declBus(c+1657,"ram_rdata_a1", false,-1, 17,0);
    tracep->declBus(c+476,"ram_rdata_b1", false,-1, 17,0);
    tracep->declBus(c+1657,"ram_rdata_a2", false,-1, 17,0);
    tracep->declBus(c+477,"ram_rdata_b2", false,-1, 17,0);
    tracep->declBus(c+76,"ram_wdata_a1", false,-1, 17,0);
    tracep->declBus(c+1657,"ram_wdata_b1", false,-1, 17,0);
    tracep->declBus(c+76,"ram_wdata_a2", false,-1, 17,0);
    tracep->declBus(c+1657,"ram_wdata_b2", false,-1, 17,0);
    tracep->declBus(c+246,"laddr_a1", false,-1, 14,0);
    tracep->declBus(c+247,"laddr_b1", false,-1, 14,0);
    tracep->declBus(c+248,"ram_addr_a1", false,-1, 13,0);
    tracep->declBus(c+249,"ram_addr_b1", false,-1, 13,0);
    tracep->declBus(c+250,"ram_addr_a2", false,-1, 13,0);
    tracep->declBus(c+251,"ram_addr_b2", false,-1, 13,0);
    tracep->declBit(c+451,"smux_clk_a1", false,-1);
    tracep->declBit(c+451,"smux_clk_b1", false,-1);
    tracep->declBit(c+451,"smux_clk_a2", false,-1);
    tracep->declBit(c+451,"smux_clk_b2", false,-1);
    tracep->declBus(c+1654,"ram_be_a1", false,-1, 1,0);
    tracep->declBus(c+1654,"ram_be_a2", false,-1, 1,0);
    tracep->declBus(c+1654,"ram_be_b1", false,-1, 1,0);
    tracep->declBus(c+1654,"ram_be_b2", false,-1, 1,0);
    tracep->declBus(c+498,"ram_rmode_a1", false,-1, 2,0);
    tracep->declBus(c+1664,"ram_wmode_a1", false,-1, 2,0);
    tracep->declBus(c+1664,"ram_rmode_b1", false,-1, 2,0);
    tracep->declBus(c+496,"ram_wmode_b1", false,-1, 2,0);
    tracep->declBus(c+498,"ram_rmode_a2", false,-1, 2,0);
    tracep->declBus(c+1664,"ram_wmode_a2", false,-1, 2,0);
    tracep->declBus(c+1664,"ram_rmode_b2", false,-1, 2,0);
    tracep->declBus(c+496,"ram_wmode_b2", false,-1, 2,0);
    tracep->declBit(c+1653,"ram_ren_a1", false,-1);
    tracep->declBit(c+252,"ram_ren_b1", false,-1);
    tracep->declBit(c+1653,"ram_ren_a2", false,-1);
    tracep->declBit(c+252,"ram_ren_b2", false,-1);
    tracep->declBit(c+77,"ram_wen_a1", false,-1);
    tracep->declBit(c+78,"ram_wen_b1", false,-1);
    tracep->declBit(c+79,"ram_wen_a2", false,-1);
    tracep->declBit(c+80,"ram_wen_b2", false,-1);
    tracep->declBit(c+252,"ren_o", false,-1);
    tracep->declBus(c+253,"ff_raddr", false,-1, 11,0);
    tracep->declBus(c+254,"ff_waddr", false,-1, 11,0);
    tracep->declQuad(c+478,"fifo_rdata", false,-1, 35,0);
    tracep->declBus(c+1655,"fifo_rmode", false,-1, 1,0);
    tracep->declBus(c+1655,"fifo_wmode", false,-1, 1,0);
    tracep->declBus(c+255,"bwl", false,-1, 1,0);
    tracep->declBus(c+3450,"pl_dout0", false,-1, 17,0);
    tracep->declBus(c+3451,"pl_dout1", false,-1, 17,0);
    tracep->declBit(c+451,"sclk_a1", false,-1);
    tracep->declBit(c+451,"sclk_b1", false,-1);
    tracep->declBit(c+451,"sclk_a2", false,-1);
    tracep->declBit(c+451,"sclk_b2", false,-1);
    tracep->declBit(c+1652,"sreset", false,-1);
    tracep->declBit(c+1652,"flush1", false,-1);
    tracep->declBit(c+1652,"flush2", false,-1);
    tracep->declBus(c+1663,"MODE_36", false,-1, 2,0);
    tracep->declBus(c+1664,"MODE_18", false,-1, 2,0);
    tracep->declBus(c+1665,"MODE_9", false,-1, 2,0);
    tracep->declBus(c+1666,"MODE_1", false,-1, 2,0);
    tracep->declBus(c+1667,"MODE_2", false,-1, 2,0);
    tracep->declBus(c+496,"MODE_4", false,-1, 2,0);
    tracep->pushNamePrefix("fifo36_ctl ");
    tracep->declBus(c+1668,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+496,"FIFO_WIDTH", false,-1, 2,0);
    tracep->declBus(c+1669,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+253,"raddr", false,-1, 11,0);
    tracep->declBus(c+254,"waddr", false,-1, 11,0);
    tracep->declBus(c+256,"fflags", false,-1, 7,0);
    tracep->declBit(c+252,"ren_o", false,-1);
    tracep->declBit(c+495,"sync", false,-1);
    tracep->declBus(c+1655,"rmode", false,-1, 1,0);
    tracep->declBus(c+1655,"wmode", false,-1, 1,0);
    tracep->declBit(c+451,"rclk", false,-1);
    tracep->declBit(c+1652,"rst_R_n", false,-1);
    tracep->declBit(c+451,"wclk", false,-1);
    tracep->declBit(c+1652,"rst_W_n", false,-1);
    tracep->declBit(c+1653,"ren", false,-1);
    tracep->declBit(c+77,"wen", false,-1);
    tracep->declBus(c+2295,"upaf", false,-1, 11,0);
    tracep->declBus(c+2294,"upae", false,-1, 11,0);
    tracep->declBus(c+1670,"ADDR_PLUS_ONE", false,-1, 31,0);
    tracep->declBus(c+257,"pushtopop1", false,-1, 12,0);
    tracep->declBus(c+258,"pushtopop2", false,-1, 12,0);
    tracep->declBus(c+259,"poptopush1", false,-1, 12,0);
    tracep->declBus(c+260,"poptopush2", false,-1, 12,0);
    tracep->declBus(c+261,"pushtopop0", false,-1, 12,0);
    tracep->declBus(c+3452,"poptopush0", false,-1, 12,0);
    tracep->declBus(c+260,"smux_poptopush", false,-1, 12,0);
    tracep->declBus(c+258,"smux_pushtopop", false,-1, 12,0);
    tracep->pushNamePrefix("u_fifo_pop ");
    tracep->declBus(c+1668,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+496,"FIFO_WIDTH", false,-1, 2,0);
    tracep->declBus(c+1669,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+252,"ren_o", false,-1);
    tracep->declBus(c+262,"popflags", false,-1, 3,0);
    tracep->declBus(c+253,"out_raddr", false,-1, 11,0);
    tracep->declBus(c+3452,"gcout", false,-1, 12,0);
    tracep->declBit(c+1652,"rst_n", false,-1);
    tracep->declBit(c+451,"rclk", false,-1);
    tracep->declBit(c+1653,"ren_in", false,-1);
    tracep->declBus(c+1655,"rmode", false,-1, 1,0);
    tracep->declBus(c+1655,"wmode", false,-1, 1,0);
    tracep->declBus(c+258,"gcin", false,-1, 12,0);
    tracep->declBus(c+2294,"upae", false,-1, 11,0);
    tracep->declBus(c+1670,"ADDR_PLUS_ONE", false,-1, 31,0);
    tracep->declBit(c+252,"empty", false,-1);
    tracep->declBit(c+263,"epo", false,-1);
    tracep->declBit(c+264,"pae", false,-1);
    tracep->declBit(c+3453,"underflow", false,-1);
    tracep->declBit(c+265,"e1", false,-1);
    tracep->declBit(c+266,"e2", false,-1);
    tracep->declBit(c+267,"o1", false,-1);
    tracep->declBit(c+268,"o2", false,-1);
    tracep->declBit(c+269,"q1", false,-1);
    tracep->declBit(c+270,"q2", false,-1);
    tracep->declBus(c+3454,"bwl_sel", false,-1, 1,0);
    tracep->declBus(c+1655,"gmode", false,-1, 1,0);
    tracep->declBus(c+271,"ff_raddr", false,-1, 11,0);
    tracep->declBus(c+272,"waddr", false,-1, 12,0);
    tracep->declBus(c+3455,"raddr", false,-1, 12,0);
    tracep->declBus(c+3452,"gcout_reg", false,-1, 12,0);
    tracep->declBus(c+1674,"gcout_next", false,-1, 12,0);
    tracep->declBus(c+273,"waddr_next", false,-1, 12,0);
    tracep->declBus(c+3456,"pae_thresh", false,-1, 11,0);
    tracep->declBit(c+252,"ren_out", false,-1);
    tracep->declBit(c+266,"empty_next", false,-1);
    tracep->declBit(c+270,"pae_next", false,-1);
    tracep->declBit(c+268,"epo_next", false,-1);
    tracep->declBus(c+3457,"gc32out_next", false,-1, 10,0);
    tracep->declBus(c+3458,"gc16out_next", false,-1, 11,0);
    tracep->declBus(c+3459,"gc8out_next", false,-1, 12,0);
    tracep->declBus(c+3460,"raddr_next", false,-1, 12,0);
    tracep->declBus(c+274,"ff_raddr_next", false,-1, 11,0);
    tracep->declBus(c+275,"tmp", false,-1, 12,0);
    tracep->declBus(c+276,"next_count", false,-1, 13,0);
    tracep->declBus(c+277,"count", false,-1, 13,0);
    tracep->declBus(c+1679,"fbytes", false,-1, 13,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fifo_push ");
    tracep->declBus(c+1668,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1669,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+278,"pushflags", false,-1, 3,0);
    tracep->declBus(c+261,"gcout", false,-1, 12,0);
    tracep->declBus(c+254,"ff_waddr", false,-1, 11,0);
    tracep->declBit(c+1652,"rst_n", false,-1);
    tracep->declBit(c+451,"wclk", false,-1);
    tracep->declBit(c+77,"wen", false,-1);
    tracep->declBus(c+1655,"rmode", false,-1, 1,0);
    tracep->declBus(c+1655,"wmode", false,-1, 1,0);
    tracep->declBus(c+260,"gcin", false,-1, 12,0);
    tracep->declBus(c+2295,"upaf", false,-1, 11,0);
    tracep->declBus(c+1670,"ADDR_PLUS_ONE", false,-1, 31,0);
    tracep->declBit(c+37,"full_next", false,-1);
    tracep->declBit(c+279,"full", false,-1);
    tracep->declBit(c+38,"paf_next", false,-1);
    tracep->declBit(c+280,"paf", false,-1);
    tracep->declBit(c+281,"fmo", false,-1);
    tracep->declBit(c+39,"fmo_next", false,-1);
    tracep->declBit(c+282,"overflow", false,-1);
    tracep->declBit(c+283,"p1", false,-1);
    tracep->declBit(c+284,"p2", false,-1);
    tracep->declBit(c+285,"f1", false,-1);
    tracep->declBit(c+286,"f2", false,-1);
    tracep->declBit(c+287,"q1", false,-1);
    tracep->declBit(c+288,"q2", false,-1);
    tracep->declBus(c+1655,"gmode", false,-1, 1,0);
    tracep->declBus(c+289,"waddr", false,-1, 12,0);
    tracep->declBus(c+290,"raddr", false,-1, 12,0);
    tracep->declBus(c+261,"gcout_reg", false,-1, 12,0);
    tracep->declBus(c+40,"gcout_next", false,-1, 12,0);
    tracep->declBus(c+291,"raddr_next", false,-1, 12,0);
    tracep->declBus(c+3461,"paf_thresh", false,-1, 11,0);
    tracep->declBit(c+41,"overflow_next", false,-1);
    tracep->declBus(c+292,"waddr_next", false,-1, 12,0);
    tracep->declBus(c+293,"gc8out_next", false,-1, 12,0);
    tracep->declBus(c+294,"gc16out_next", false,-1, 11,0);
    tracep->declBus(c+295,"gc32out_next", false,-1, 10,0);
    tracep->declBus(c+296,"tmp", false,-1, 12,0);
    tracep->declBus(c+297,"next_count", false,-1, 12,0);
    tracep->declBus(c+298,"count", false,-1, 12,0);
    tracep->declBus(c+1680,"fbytes", false,-1, 12,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+495,"SYNC_FIFO_i", false,-1, 0,0);
    tracep->declBus(c+495,"POWERDN_i", false,-1, 0,0);
    tracep->declBus(c+495,"SLEEP_i", false,-1, 0,0);
    tracep->declBus(c+495,"PROTECT_i", false,-1, 0,0);
    tracep->declBus(c+3462,"UPAF_i", false,-1, 10,0);
    tracep->declBus(c+3463,"UPAE_i", false,-1, 10,0);
    tracep->declArray(c+3464,"INIT_t_i", false,-1, 18431,0);
    tracep->declBus(c+498,"RMODE_A_i", false,-1, 2,0);
    tracep->declBus(c+1664,"RMODE_B_i", false,-1, 2,0);
    tracep->declBus(c+1664,"WMODE_A_i", false,-1, 2,0);
    tracep->declBus(c+496,"WMODE_B_i", false,-1, 2,0);
    tracep->declBit(c+77,"WEN_A_i", false,-1);
    tracep->declBit(c+78,"WEN_B_i", false,-1);
    tracep->declBit(c+1653,"REN_A_i", false,-1);
    tracep->declBit(c+252,"REN_B_i", false,-1);
    tracep->declBit(c+451,"CLK_A_i", false,-1);
    tracep->declBit(c+451,"CLK_B_i", false,-1);
    tracep->declBus(c+1654,"BE_A_i", false,-1, 1,0);
    tracep->declBus(c+1654,"BE_B_i", false,-1, 1,0);
    tracep->declBus(c+248,"ADDR_A_i", false,-1, 13,0);
    tracep->declBus(c+249,"ADDR_B_i", false,-1, 13,0);
    tracep->declBus(c+76,"WDATA_A_i", false,-1, 17,0);
    tracep->declBus(c+1657,"WDATA_B_i", false,-1, 17,0);
    tracep->declBus(c+1657,"RDATA_A_o", false,-1, 17,0);
    tracep->declBus(c+476,"RDATA_B_o", false,-1, 17,0);
    tracep->declBit(c+228,"EMPTY_o", false,-1);
    tracep->declBit(c+229,"EPO_o", false,-1);
    tracep->declBit(c+230,"EWM_o", false,-1);
    tracep->declBit(c+234,"UNDERRUN_o", false,-1);
    tracep->declBit(c+231,"FULL_o", false,-1);
    tracep->declBit(c+232,"FMO_o", false,-1);
    tracep->declBit(c+233,"FWM_o", false,-1);
    tracep->declBit(c+235,"OVERRUN_o", false,-1);
    tracep->declBit(c+1652,"FLUSH_ni", false,-1);
    tracep->declBit(c+1653,"FMODE_i", false,-1);
    tracep->declBus(c+81,"wmsk_a", false,-1, 17,0);
    tracep->declBus(c+82,"wmsk_b", false,-1, 17,0);
    tracep->declBus(c+4040,"addr_a", false,-1, 8,0);
    tracep->declBus(c+4041,"addr_b", false,-1, 8,0);
    tracep->declBus(c+299,"addr_a_d", false,-1, 4,0);
    tracep->declBus(c+300,"addr_b_d", false,-1, 4,0);
    tracep->declBus(c+480,"ram_rdata_a", false,-1, 17,0);
    tracep->declBus(c+476,"ram_rdata_b", false,-1, 17,0);
    tracep->declBus(c+83,"aligned_wdata_a", false,-1, 17,0);
    tracep->declBus(c+1657,"aligned_wdata_b", false,-1, 17,0);
    tracep->declBit(c+301,"ren_o", false,-1);
    tracep->declBus(c+302,"ff_raddr", false,-1, 10,0);
    tracep->declBus(c+303,"ff_waddr", false,-1, 10,0);
    tracep->declBus(c+304,"ram_addr_a", false,-1, 13,0);
    tracep->declBus(c+305,"ram_addr_b", false,-1, 13,0);
    tracep->declBus(c+306,"ram_waddr_a", false,-1, 3,0);
    tracep->declBus(c+307,"ram_waddr_b", false,-1, 3,0);
    tracep->declBit(c+4042,"initn", false,-1);
    tracep->declBit(c+4043,"smux_rclk", false,-1);
    tracep->declBit(c+4044,"smux_wclk", false,-1);
    tracep->declBit(c+1653,"real_fmode", false,-1);
    tracep->declBus(c+4045,"raw_fflags", false,-1, 3,0);
    tracep->declBus(c+2264,"fifo_rmode", false,-1, 1,0);
    tracep->declBus(c+2264,"fifo_wmode", false,-1, 1,0);
    tracep->declBit(c+451,"smux_clk_a", false,-1);
    tracep->declBit(c+451,"smux_clk_b", false,-1);
    tracep->declBit(c+1653,"ram_ren_a", false,-1);
    tracep->declBit(c+252,"ram_ren_b", false,-1);
    tracep->declBit(c+77,"ram_wen_a", false,-1);
    tracep->declBit(c+78,"ram_wen_b", false,-1);
    tracep->declBit(c+77,"cen_a", false,-1);
    tracep->declBit(c+42,"cen_b", false,-1);
    tracep->declBit(c+84,"cen_a_n", false,-1);
    tracep->declBit(c+43,"cen_b_n", false,-1);
    tracep->declBit(c+84,"ram_wen_a_n", false,-1);
    tracep->declBit(c+85,"ram_wen_b_n", false,-1);
    tracep->declBus(c+1665,"MODE_9", false,-1, 2,0);
    tracep->declBus(c+1666,"MODE_1", false,-1, 2,0);
    tracep->declBus(c+1664,"MODE_18", false,-1, 2,0);
    tracep->declBus(c+1667,"MODE_2", false,-1, 2,0);
    tracep->declBus(c+496,"MODE_4", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_ctl ");
    tracep->declBus(c+2265,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2266,"FIFO_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2267,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+302,"raddr", false,-1, 10,0);
    tracep->declBus(c+303,"waddr", false,-1, 10,0);
    tracep->declBus(c+308,"fflags", false,-1, 7,0);
    tracep->declBit(c+301,"ren_o", false,-1);
    tracep->declBit(c+495,"sync", false,-1);
    tracep->declBus(c+2264,"rmode", false,-1, 1,0);
    tracep->declBus(c+2264,"wmode", false,-1, 1,0);
    tracep->declBit(c+451,"rclk", false,-1);
    tracep->declBit(c+1652,"rst_R_n", false,-1);
    tracep->declBit(c+451,"wclk", false,-1);
    tracep->declBit(c+1652,"rst_W_n", false,-1);
    tracep->declBit(c+252,"ren", false,-1);
    tracep->declBit(c+77,"wen", false,-1);
    tracep->declBus(c+3462,"upaf", false,-1, 10,0);
    tracep->declBus(c+3463,"upae", false,-1, 10,0);
    tracep->declBus(c+1668,"ADDR_PLUS_ONE", false,-1, 31,0);
    tracep->declBus(c+309,"pushtopop1", false,-1, 11,0);
    tracep->declBus(c+310,"pushtopop2", false,-1, 11,0);
    tracep->declBus(c+311,"poptopush1", false,-1, 11,0);
    tracep->declBus(c+312,"poptopush2", false,-1, 11,0);
    tracep->declBus(c+313,"pushtopop0", false,-1, 11,0);
    tracep->declBus(c+314,"poptopush0", false,-1, 11,0);
    tracep->declBus(c+312,"smux_poptopush", false,-1, 11,0);
    tracep->declBus(c+310,"smux_pushtopop", false,-1, 11,0);
    tracep->pushNamePrefix("u_fifo_pop ");
    tracep->declBus(c+2265,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2266,"FIFO_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2267,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+301,"ren_o", false,-1);
    tracep->declBus(c+315,"popflags", false,-1, 3,0);
    tracep->declBus(c+302,"out_raddr", false,-1, 10,0);
    tracep->declBus(c+314,"gcout", false,-1, 11,0);
    tracep->declBit(c+1652,"rst_n", false,-1);
    tracep->declBit(c+451,"rclk", false,-1);
    tracep->declBit(c+252,"ren_in", false,-1);
    tracep->declBus(c+2264,"rmode", false,-1, 1,0);
    tracep->declBus(c+2264,"wmode", false,-1, 1,0);
    tracep->declBus(c+310,"gcin", false,-1, 11,0);
    tracep->declBus(c+3463,"upae", false,-1, 10,0);
    tracep->declBus(c+1668,"ADDR_PLUS_ONE", false,-1, 31,0);
    tracep->declBit(c+228,"empty", false,-1);
    tracep->declBit(c+229,"epo", false,-1);
    tracep->declBit(c+230,"pae", false,-1);
    tracep->declBit(c+234,"underflow", false,-1);
    tracep->declBit(c+429,"e1", false,-1);
    tracep->declBit(c+430,"e2", false,-1);
    tracep->declBit(c+431,"o1", false,-1);
    tracep->declBit(c+432,"o2", false,-1);
    tracep->declBit(c+316,"q1", false,-1);
    tracep->declBit(c+317,"q2", false,-1);
    tracep->declBus(c+318,"bwl_sel", false,-1, 1,0);
    tracep->declBus(c+5,"gmode", false,-1, 1,0);
    tracep->declBus(c+319,"ff_raddr", false,-1, 10,0);
    tracep->declBus(c+320,"waddr", false,-1, 11,0);
    tracep->declBus(c+321,"raddr", false,-1, 11,0);
    tracep->declBus(c+314,"gcout_reg", false,-1, 11,0);
    tracep->declBus(c+322,"gcout_next", false,-1, 11,0);
    tracep->declBus(c+433,"waddr_next", false,-1, 11,0);
    tracep->declBus(c+4046,"pae_thresh", false,-1, 10,0);
    tracep->declBit(c+301,"ren_out", false,-1);
    tracep->declBit(c+434,"empty_next", false,-1);
    tracep->declBit(c+323,"pae_next", false,-1);
    tracep->declBit(c+403,"epo_next", false,-1);
    tracep->declBus(c+324,"gc32out_next", false,-1, 9,0);
    tracep->declBus(c+325,"gc16out_next", false,-1, 10,0);
    tracep->declBus(c+326,"gc8out_next", false,-1, 11,0);
    tracep->declBus(c+327,"raddr_next", false,-1, 11,0);
    tracep->declBus(c+328,"ff_raddr_next", false,-1, 10,0);
    tracep->declBus(c+329,"tmp", false,-1, 11,0);
    tracep->declBus(c+330,"next_count", false,-1, 12,0);
    tracep->declBus(c+331,"count", false,-1, 12,0);
    tracep->declBus(c+2275,"fbytes", false,-1, 12,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fifo_push ");
    tracep->declBus(c+2265,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2267,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+332,"pushflags", false,-1, 3,0);
    tracep->declBus(c+313,"gcout", false,-1, 11,0);
    tracep->declBus(c+303,"ff_waddr", false,-1, 10,0);
    tracep->declBit(c+1652,"rst_n", false,-1);
    tracep->declBit(c+451,"wclk", false,-1);
    tracep->declBit(c+77,"wen", false,-1);
    tracep->declBus(c+2264,"rmode", false,-1, 1,0);
    tracep->declBus(c+2264,"wmode", false,-1, 1,0);
    tracep->declBus(c+312,"gcin", false,-1, 11,0);
    tracep->declBus(c+3462,"upaf", false,-1, 10,0);
    tracep->declBus(c+1668,"ADDR_PLUS_ONE", false,-1, 31,0);
    tracep->declBit(c+95,"full_next", false,-1);
    tracep->declBit(c+231,"full", false,-1);
    tracep->declBit(c+481,"paf_next", false,-1);
    tracep->declBit(c+233,"paf", false,-1);
    tracep->declBit(c+232,"fmo", false,-1);
    tracep->declBit(c+96,"fmo_next", false,-1);
    tracep->declBit(c+235,"overflow", false,-1);
    tracep->declBit(c+435,"p1", false,-1);
    tracep->declBit(c+436,"p2", false,-1);
    tracep->declBit(c+437,"f1", false,-1);
    tracep->declBit(c+438,"f2", false,-1);
    tracep->declBit(c+404,"q1", false,-1);
    tracep->declBit(c+333,"q2", false,-1);
    tracep->declBus(c+6,"gmode", false,-1, 1,0);
    tracep->declBus(c+334,"waddr", false,-1, 11,0);
    tracep->declBus(c+335,"raddr", false,-1, 11,0);
    tracep->declBus(c+313,"gcout_reg", false,-1, 11,0);
    tracep->declBus(c+44,"gcout_next", false,-1, 11,0);
    tracep->declBus(c+439,"raddr_next", false,-1, 11,0);
    tracep->declBus(c+4047,"paf_thresh", false,-1, 10,0);
    tracep->declBit(c+45,"overflow_next", false,-1);
    tracep->declBus(c+336,"waddr_next", false,-1, 11,0);
    tracep->declBus(c+337,"gc8out_next", false,-1, 11,0);
    tracep->declBus(c+338,"gc16out_next", false,-1, 10,0);
    tracep->declBus(c+339,"gc32out_next", false,-1, 9,0);
    tracep->declBus(c+340,"tmp", false,-1, 11,0);
    tracep->declBus(c+405,"next_count", false,-1, 11,0);
    tracep->declBus(c+341,"count", false,-1, 11,0);
    tracep->declBus(c+2276,"fbytes", false,-1, 11,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("uram ");
    tracep->declArray(c+3464,"INIT_s_i", false,-1, 18431,0);
    tracep->declBit(c+451,"clk_a", false,-1);
    tracep->declBit(c+84,"cen_a", false,-1);
    tracep->declBit(c+84,"wen_a", false,-1);
    tracep->declBus(c+342,"addr_a", false,-1, 9,0);
    tracep->declBus(c+81,"wmsk_a", false,-1, 17,0);
    tracep->declBus(c+83,"wdata_a", false,-1, 17,0);
    tracep->declBus(c+480,"rdata_a", false,-1, 17,0);
    tracep->declBit(c+451,"clk_b", false,-1);
    tracep->declBit(c+43,"cen_b", false,-1);
    tracep->declBit(c+85,"wen_b", false,-1);
    tracep->declBus(c+343,"addr_b", false,-1, 9,0);
    tracep->declBus(c+82,"wmsk_b", false,-1, 17,0);
    tracep->declBus(c+1657,"wdata_b", false,-1, 17,0);
    tracep->declBus(c+476,"rdata_b", false,-1, 17,0);
    tracep->declBus(c+344,"laddr_a", false,-1, 9,0);
    tracep->declBus(c+345,"laddr_b", false,-1, 9,0);
    tracep->declBit(c+482,"lcen_a", false,-1);
    tracep->declBit(c+483,"lwen_a", false,-1);
    tracep->declBus(c+346,"lwdata_a", false,-1, 17,0);
    tracep->declBit(c+484,"lcen_b", false,-1);
    tracep->declBit(c+485,"lwen_b", false,-1);
    tracep->declBus(c+347,"lwdata_b", false,-1, 17,0);
    tracep->declBus(c+348,"lwmsk_a", false,-1, 17,0);
    tracep->declBus(c+349,"lwmsk_b", false,-1, 17,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+11,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+495,"SYNC_FIFO_i", false,-1, 0,0);
    tracep->declBus(c+495,"POWERDN_i", false,-1, 0,0);
    tracep->declBus(c+495,"SLEEP_i", false,-1, 0,0);
    tracep->declBus(c+495,"PROTECT_i", false,-1, 0,0);
    tracep->declBus(c+2297,"UPAF_i", false,-1, 10,0);
    tracep->declBus(c+2296,"UPAE_i", false,-1, 10,0);
    tracep->declArray(c+3464,"INIT_t_i", false,-1, 18431,0);
    tracep->declBus(c+498,"RMODE_A_i", false,-1, 2,0);
    tracep->declBus(c+1664,"RMODE_B_i", false,-1, 2,0);
    tracep->declBus(c+1664,"WMODE_A_i", false,-1, 2,0);
    tracep->declBus(c+496,"WMODE_B_i", false,-1, 2,0);
    tracep->declBit(c+79,"WEN_A_i", false,-1);
    tracep->declBit(c+80,"WEN_B_i", false,-1);
    tracep->declBit(c+1653,"REN_A_i", false,-1);
    tracep->declBit(c+252,"REN_B_i", false,-1);
    tracep->declBit(c+451,"CLK_A_i", false,-1);
    tracep->declBit(c+451,"CLK_B_i", false,-1);
    tracep->declBus(c+1654,"BE_A_i", false,-1, 1,0);
    tracep->declBus(c+1654,"BE_B_i", false,-1, 1,0);
    tracep->declBus(c+250,"ADDR_A_i", false,-1, 13,0);
    tracep->declBus(c+251,"ADDR_B_i", false,-1, 13,0);
    tracep->declBus(c+76,"WDATA_A_i", false,-1, 17,0);
    tracep->declBus(c+1657,"WDATA_B_i", false,-1, 17,0);
    tracep->declBus(c+1657,"RDATA_A_o", false,-1, 17,0);
    tracep->declBus(c+477,"RDATA_B_o", false,-1, 17,0);
    tracep->declBit(c+222,"EMPTY_o", false,-1);
    tracep->declBit(c+223,"EPO_o", false,-1);
    tracep->declBit(c+224,"EWM_o", false,-1);
    tracep->declBit(c+236,"UNDERRUN_o", false,-1);
    tracep->declBit(c+225,"FULL_o", false,-1);
    tracep->declBit(c+226,"FMO_o", false,-1);
    tracep->declBit(c+227,"FWM_o", false,-1);
    tracep->declBit(c+237,"OVERRUN_o", false,-1);
    tracep->declBit(c+1652,"FLUSH_ni", false,-1);
    tracep->declBit(c+1653,"FMODE_i", false,-1);
    tracep->declBus(c+86,"wmsk_a", false,-1, 17,0);
    tracep->declBus(c+87,"wmsk_b", false,-1, 17,0);
    tracep->declBus(c+4048,"addr_a", false,-1, 8,0);
    tracep->declBus(c+4049,"addr_b", false,-1, 8,0);
    tracep->declBus(c+350,"addr_a_d", false,-1, 4,0);
    tracep->declBus(c+351,"addr_b_d", false,-1, 4,0);
    tracep->declBus(c+486,"ram_rdata_a", false,-1, 17,0);
    tracep->declBus(c+477,"ram_rdata_b", false,-1, 17,0);
    tracep->declBus(c+88,"aligned_wdata_a", false,-1, 17,0);
    tracep->declBus(c+1657,"aligned_wdata_b", false,-1, 17,0);
    tracep->declBit(c+352,"ren_o", false,-1);
    tracep->declBus(c+353,"ff_raddr", false,-1, 10,0);
    tracep->declBus(c+354,"ff_waddr", false,-1, 10,0);
    tracep->declBus(c+355,"ram_addr_a", false,-1, 13,0);
    tracep->declBus(c+356,"ram_addr_b", false,-1, 13,0);
    tracep->declBus(c+357,"ram_waddr_a", false,-1, 3,0);
    tracep->declBus(c+358,"ram_waddr_b", false,-1, 3,0);
    tracep->declBit(c+4050,"initn", false,-1);
    tracep->declBit(c+4051,"smux_rclk", false,-1);
    tracep->declBit(c+4052,"smux_wclk", false,-1);
    tracep->declBit(c+1653,"real_fmode", false,-1);
    tracep->declBus(c+4053,"raw_fflags", false,-1, 3,0);
    tracep->declBus(c+2264,"fifo_rmode", false,-1, 1,0);
    tracep->declBus(c+2264,"fifo_wmode", false,-1, 1,0);
    tracep->declBit(c+451,"smux_clk_a", false,-1);
    tracep->declBit(c+451,"smux_clk_b", false,-1);
    tracep->declBit(c+1653,"ram_ren_a", false,-1);
    tracep->declBit(c+252,"ram_ren_b", false,-1);
    tracep->declBit(c+79,"ram_wen_a", false,-1);
    tracep->declBit(c+80,"ram_wen_b", false,-1);
    tracep->declBit(c+79,"cen_a", false,-1);
    tracep->declBit(c+46,"cen_b", false,-1);
    tracep->declBit(c+89,"cen_a_n", false,-1);
    tracep->declBit(c+47,"cen_b_n", false,-1);
    tracep->declBit(c+89,"ram_wen_a_n", false,-1);
    tracep->declBit(c+90,"ram_wen_b_n", false,-1);
    tracep->declBus(c+1665,"MODE_9", false,-1, 2,0);
    tracep->declBus(c+1666,"MODE_1", false,-1, 2,0);
    tracep->declBus(c+1664,"MODE_18", false,-1, 2,0);
    tracep->declBus(c+1667,"MODE_2", false,-1, 2,0);
    tracep->declBus(c+496,"MODE_4", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_ctl ");
    tracep->declBus(c+2265,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2266,"FIFO_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2267,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+353,"raddr", false,-1, 10,0);
    tracep->declBus(c+354,"waddr", false,-1, 10,0);
    tracep->declBus(c+359,"fflags", false,-1, 7,0);
    tracep->declBit(c+352,"ren_o", false,-1);
    tracep->declBit(c+495,"sync", false,-1);
    tracep->declBus(c+2264,"rmode", false,-1, 1,0);
    tracep->declBus(c+2264,"wmode", false,-1, 1,0);
    tracep->declBit(c+451,"rclk", false,-1);
    tracep->declBit(c+1652,"rst_R_n", false,-1);
    tracep->declBit(c+451,"wclk", false,-1);
    tracep->declBit(c+1652,"rst_W_n", false,-1);
    tracep->declBit(c+252,"ren", false,-1);
    tracep->declBit(c+79,"wen", false,-1);
    tracep->declBus(c+2297,"upaf", false,-1, 10,0);
    tracep->declBus(c+2296,"upae", false,-1, 10,0);
    tracep->declBus(c+1668,"ADDR_PLUS_ONE", false,-1, 31,0);
    tracep->declBus(c+360,"pushtopop1", false,-1, 11,0);
    tracep->declBus(c+361,"pushtopop2", false,-1, 11,0);
    tracep->declBus(c+362,"poptopush1", false,-1, 11,0);
    tracep->declBus(c+363,"poptopush2", false,-1, 11,0);
    tracep->declBus(c+364,"pushtopop0", false,-1, 11,0);
    tracep->declBus(c+365,"poptopush0", false,-1, 11,0);
    tracep->declBus(c+363,"smux_poptopush", false,-1, 11,0);
    tracep->declBus(c+361,"smux_pushtopop", false,-1, 11,0);
    tracep->pushNamePrefix("u_fifo_pop ");
    tracep->declBus(c+2265,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2266,"FIFO_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2267,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+352,"ren_o", false,-1);
    tracep->declBus(c+366,"popflags", false,-1, 3,0);
    tracep->declBus(c+353,"out_raddr", false,-1, 10,0);
    tracep->declBus(c+365,"gcout", false,-1, 11,0);
    tracep->declBit(c+1652,"rst_n", false,-1);
    tracep->declBit(c+451,"rclk", false,-1);
    tracep->declBit(c+252,"ren_in", false,-1);
    tracep->declBus(c+2264,"rmode", false,-1, 1,0);
    tracep->declBus(c+2264,"wmode", false,-1, 1,0);
    tracep->declBus(c+361,"gcin", false,-1, 11,0);
    tracep->declBus(c+2296,"upae", false,-1, 10,0);
    tracep->declBus(c+1668,"ADDR_PLUS_ONE", false,-1, 31,0);
    tracep->declBit(c+222,"empty", false,-1);
    tracep->declBit(c+223,"epo", false,-1);
    tracep->declBit(c+224,"pae", false,-1);
    tracep->declBit(c+236,"underflow", false,-1);
    tracep->declBit(c+440,"e1", false,-1);
    tracep->declBit(c+441,"e2", false,-1);
    tracep->declBit(c+442,"o1", false,-1);
    tracep->declBit(c+443,"o2", false,-1);
    tracep->declBit(c+367,"q1", false,-1);
    tracep->declBit(c+368,"q2", false,-1);
    tracep->declBus(c+369,"bwl_sel", false,-1, 1,0);
    tracep->declBus(c+7,"gmode", false,-1, 1,0);
    tracep->declBus(c+370,"ff_raddr", false,-1, 10,0);
    tracep->declBus(c+371,"waddr", false,-1, 11,0);
    tracep->declBus(c+372,"raddr", false,-1, 11,0);
    tracep->declBus(c+365,"gcout_reg", false,-1, 11,0);
    tracep->declBus(c+373,"gcout_next", false,-1, 11,0);
    tracep->declBus(c+444,"waddr_next", false,-1, 11,0);
    tracep->declBus(c+4054,"pae_thresh", false,-1, 10,0);
    tracep->declBit(c+352,"ren_out", false,-1);
    tracep->declBit(c+445,"empty_next", false,-1);
    tracep->declBit(c+374,"pae_next", false,-1);
    tracep->declBit(c+406,"epo_next", false,-1);
    tracep->declBus(c+375,"gc32out_next", false,-1, 9,0);
    tracep->declBus(c+376,"gc16out_next", false,-1, 10,0);
    tracep->declBus(c+377,"gc8out_next", false,-1, 11,0);
    tracep->declBus(c+378,"raddr_next", false,-1, 11,0);
    tracep->declBus(c+379,"ff_raddr_next", false,-1, 10,0);
    tracep->declBus(c+380,"tmp", false,-1, 11,0);
    tracep->declBus(c+381,"next_count", false,-1, 12,0);
    tracep->declBus(c+382,"count", false,-1, 12,0);
    tracep->declBus(c+2275,"fbytes", false,-1, 12,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fifo_push ");
    tracep->declBus(c+2265,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2267,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+383,"pushflags", false,-1, 3,0);
    tracep->declBus(c+364,"gcout", false,-1, 11,0);
    tracep->declBus(c+354,"ff_waddr", false,-1, 10,0);
    tracep->declBit(c+1652,"rst_n", false,-1);
    tracep->declBit(c+451,"wclk", false,-1);
    tracep->declBit(c+79,"wen", false,-1);
    tracep->declBus(c+2264,"rmode", false,-1, 1,0);
    tracep->declBus(c+2264,"wmode", false,-1, 1,0);
    tracep->declBus(c+363,"gcin", false,-1, 11,0);
    tracep->declBus(c+2297,"upaf", false,-1, 10,0);
    tracep->declBus(c+1668,"ADDR_PLUS_ONE", false,-1, 31,0);
    tracep->declBit(c+97,"full_next", false,-1);
    tracep->declBit(c+225,"full", false,-1);
    tracep->declBit(c+487,"paf_next", false,-1);
    tracep->declBit(c+227,"paf", false,-1);
    tracep->declBit(c+226,"fmo", false,-1);
    tracep->declBit(c+98,"fmo_next", false,-1);
    tracep->declBit(c+237,"overflow", false,-1);
    tracep->declBit(c+446,"p1", false,-1);
    tracep->declBit(c+447,"p2", false,-1);
    tracep->declBit(c+448,"f1", false,-1);
    tracep->declBit(c+449,"f2", false,-1);
    tracep->declBit(c+407,"q1", false,-1);
    tracep->declBit(c+384,"q2", false,-1);
    tracep->declBus(c+8,"gmode", false,-1, 1,0);
    tracep->declBus(c+385,"waddr", false,-1, 11,0);
    tracep->declBus(c+386,"raddr", false,-1, 11,0);
    tracep->declBus(c+364,"gcout_reg", false,-1, 11,0);
    tracep->declBus(c+48,"gcout_next", false,-1, 11,0);
    tracep->declBus(c+450,"raddr_next", false,-1, 11,0);
    tracep->declBus(c+4055,"paf_thresh", false,-1, 10,0);
    tracep->declBit(c+49,"overflow_next", false,-1);
    tracep->declBus(c+387,"waddr_next", false,-1, 11,0);
    tracep->declBus(c+388,"gc8out_next", false,-1, 11,0);
    tracep->declBus(c+389,"gc16out_next", false,-1, 10,0);
    tracep->declBus(c+390,"gc32out_next", false,-1, 9,0);
    tracep->declBus(c+391,"tmp", false,-1, 11,0);
    tracep->declBus(c+408,"next_count", false,-1, 11,0);
    tracep->declBus(c+392,"count", false,-1, 11,0);
    tracep->declBus(c+2276,"fbytes", false,-1, 11,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("uram ");
    tracep->declArray(c+3464,"INIT_s_i", false,-1, 18431,0);
    tracep->declBit(c+451,"clk_a", false,-1);
    tracep->declBit(c+89,"cen_a", false,-1);
    tracep->declBit(c+89,"wen_a", false,-1);
    tracep->declBus(c+393,"addr_a", false,-1, 9,0);
    tracep->declBus(c+86,"wmsk_a", false,-1, 17,0);
    tracep->declBus(c+88,"wdata_a", false,-1, 17,0);
    tracep->declBus(c+486,"rdata_a", false,-1, 17,0);
    tracep->declBit(c+451,"clk_b", false,-1);
    tracep->declBit(c+47,"cen_b", false,-1);
    tracep->declBit(c+90,"wen_b", false,-1);
    tracep->declBus(c+394,"addr_b", false,-1, 9,0);
    tracep->declBus(c+87,"wmsk_b", false,-1, 17,0);
    tracep->declBus(c+1657,"wdata_b", false,-1, 17,0);
    tracep->declBus(c+477,"rdata_b", false,-1, 17,0);
    tracep->declBus(c+395,"laddr_a", false,-1, 9,0);
    tracep->declBus(c+396,"laddr_b", false,-1, 9,0);
    tracep->declBit(c+488,"lcen_a", false,-1);
    tracep->declBit(c+489,"lwen_a", false,-1);
    tracep->declBus(c+397,"lwdata_a", false,-1, 17,0);
    tracep->declBit(c+490,"lcen_b", false,-1);
    tracep->declBit(c+491,"lwen_b", false,-1);
    tracep->declBus(c+398,"lwdata_b", false,-1, 17,0);
    tracep->declBus(c+399,"lwmsk_a", false,-1, 17,0);
    tracep->declBus(c+400,"lwmsk_b", false,-1, 17,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+12,"i", false,-1, 31,0);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+27,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+28,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_init_top(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_init_top\n"); );
    // Body
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_register(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_full_sub_0(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_full_top_0\n"); );
    // Init
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root*>(voidSelf);
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<1152>/*36863:0*/ Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_h8f5f7289_0;
extern const VlWide<576>/*18431:0*/ Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_ha5ac2e72_0;
extern const VlWide<1152>/*36863:0*/ Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_hc6fae7d9_0;
extern const VlWide<576>/*18431:0*/ Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_hbca17dff_0;

VL_ATTR_COLD void Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_full_sub_0(Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_hf3eb020a__0;
    VlWide<3>/*95:0*/ __Vtemp_h9027675a__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode),2);
    bufp->fullCData(oldp+2,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode),2);
    bufp->fullCData(oldp+3,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode),2);
    bufp->fullCData(oldp+4,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode),2);
    bufp->fullCData(oldp+5,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode),2);
    bufp->fullCData(oldp+6,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode),2);
    bufp->fullCData(oldp+7,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode),2);
    bufp->fullCData(oldp+8,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode),2);
    bufp->fullIData(oldp+9,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+10,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+11,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+12,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+13,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__we));
    bufp->fullSData(oldp+14,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr),10);
    bufp->fullSData(oldp+15,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr),10);
    bufp->fullQData(oldp+16,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__din),36);
    bufp->fullIData(oldp+18,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__mismatch),32);
    bufp->fullCData(oldp+19,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__cycle),7);
    bufp->fullCData(oldp+20,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__i),7);
    bufp->fullSData(oldp+21,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr) 
                              << 4U)),15);
    bufp->fullSData(oldp+22,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr) 
                              << 4U)),15);
    bufp->fullSData(oldp+23,((0x3ff0U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr) 
                                         << 3U))),14);
    bufp->fullSData(oldp+24,((0x3ff0U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__rd_addr) 
                                         << 3U))),14);
    bufp->fullCData(oldp+25,((2U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__wr_addr) 
                                    << 1U))),2);
    bufp->fullIData(oldp+26,(((0x30000U & ((IData)(
                                                   (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__din 
                                                    >> 0x22U)) 
                                           << 0x10U)) 
                              | (0xffffU & (IData)(
                                                   (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__din 
                                                    >> 0x10U))))),18);
    bufp->fullIData(oldp+27,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+28,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+29,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)
                             ? (((0x400U & ((~ (1U 
                                                & (((IData)(4U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                   >> 0xcU))) 
                                            << 0xaU)) 
                                 | (0x3ffU & (((IData)(4U) 
                                               + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                              >> 2U))) 
                                == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))
                             : (((0x400U & ((~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                >> 0xcU)) 
                                            << 0xaU)) 
                                 | (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                              >> 2U))) 
                                == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp))))));
    bufp->fullBit(oldp+30,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)
                             ? ((0x3ffU & ((IData)(1U) 
                                           + (0x3ffU 
                                              & (((IData)(4U) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                 >> 2U)))) 
                                == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))
                             : ((0x3ffU & ((IData)(1U) 
                                           + (0x3ffU 
                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                 >> 2U)))) 
                                == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp))))));
    bufp->fullSData(oldp+31,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)
                               ? (0x7ffU & ((0x3ffU 
                                             & (((IData)(4U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 3U)) 
                                            ^ (0x7ffU 
                                               & (((IData)(4U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                  >> 2U))))
                               : 0U)),13);
    bufp->fullBit(oldp+32,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full) 
                            & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1))));
    bufp->fullSData(oldp+33,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)
                               ? (0xfffU & ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                             ? ((0x7ffU 
                                                 & (((IData)(2U) 
                                                     + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                    >> 1U)) 
                                                ^ ((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))
                                             : ((1U 
                                                 == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                 ? 
                                                (0x7ffU 
                                                 & ((0x3ffU 
                                                     & (((IData)(2U) 
                                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x7ffU 
                                                     & (((IData)(2U) 
                                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                        >> 1U))))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                  ? 
                                                 (0x3ffU 
                                                  & ((0x1ffU 
                                                      & (((IData)(2U) 
                                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                         >> 3U)) 
                                                     ^ 
                                                     (0x3ffU 
                                                      & (((IData)(2U) 
                                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                         >> 2U))))
                                                  : 0U))))
                               : 0U)),12);
    bufp->fullBit(oldp+34,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                            & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1))));
    bufp->fullSData(oldp+35,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2)
                               ? (0xfffU & ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                             ? ((0x7ffU 
                                                 & (((IData)(2U) 
                                                     + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                    >> 1U)) 
                                                ^ ((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))
                                             : ((1U 
                                                 == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                 ? 
                                                (0x7ffU 
                                                 & ((0x3ffU 
                                                     & (((IData)(2U) 
                                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x7ffU 
                                                     & (((IData)(2U) 
                                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                        >> 1U))))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                  ? 
                                                 (0x3ffU 
                                                  & ((0x1ffU 
                                                      & (((IData)(2U) 
                                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                         >> 3U)) 
                                                     ^ 
                                                     (0x3ffU 
                                                      & (((IData)(2U) 
                                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                         >> 2U))))
                                                  : 0U))))
                               : 0U)),12);
    bufp->fullBit(oldp+36,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                            & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2))));
    bufp->fullBit(oldp+37,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
                             ? (((0x400U & ((~ (1U 
                                                & (((IData)(4U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                   >> 0xcU))) 
                                            << 0xaU)) 
                                 | (0x3ffU & (((IData)(4U) 
                                               + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                              >> 2U))) 
                                == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))
                             : (((0x400U & ((~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                >> 0xcU)) 
                                            << 0xaU)) 
                                 | (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                              >> 2U))) 
                                == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp))))));
    bufp->fullBit(oldp+38,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
                             ? (0x604U > (0x1fffU & 
                                          ((IData)(0x1000U) 
                                           - (((0x1fffU 
                                                & ((IData)(4U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                               >= (0x1ffcU 
                                                   & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                      << 2U)))
                                               ? ((0x1fffU 
                                                   & ((IData)(4U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                  - 
                                                  (0x1ffcU 
                                                   & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                      << 2U)))
                                               : ((IData)(1U) 
                                                  + 
                                                  ((~ 
                                                    (0x1ffcU 
                                                     & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                        << 2U))) 
                                                   + 
                                                   (0x1fffU 
                                                    & ((IData)(4U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)))))))))
                             : (0x604U > (0x1fffU & 
                                          ((IData)(0x1000U) 
                                           - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                               >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr))
                                               ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                  - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr))
                                               : ((IData)(1U) 
                                                  + 
                                                  ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))))))))));
    bufp->fullBit(oldp+39,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
                             ? ((0x3ffU & ((IData)(1U) 
                                           + (0x3ffU 
                                              & (((IData)(4U) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                 >> 2U)))) 
                                == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))
                             : ((0x3ffU & ((IData)(1U) 
                                           + (0x3ffU 
                                              & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                 >> 2U)))) 
                                == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp))))));
    bufp->fullSData(oldp+40,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
                               ? (0x7ffU & ((0x3ffU 
                                             & (((IData)(4U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                >> 3U)) 
                                            ^ (0x7ffU 
                                               & (((IData)(4U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                  >> 2U))))
                               : 0U)),13);
    bufp->fullBit(oldp+41,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full) 
                            & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1))));
    bufp->fullBit(oldp+42,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                            | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b1))));
    bufp->fullBit(oldp+43,((1U & (~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                                     | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b1))))));
    bufp->fullSData(oldp+44,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
                               ? (0xfffU & ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                             ? ((0x7ffU 
                                                 & (((IData)(2U) 
                                                     + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                    >> 1U)) 
                                                ^ ((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))
                                             : ((1U 
                                                 == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                 ? 
                                                (0x7ffU 
                                                 & ((0x3ffU 
                                                     & (((IData)(2U) 
                                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x7ffU 
                                                     & (((IData)(2U) 
                                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                        >> 1U))))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                  ? 
                                                 (0x3ffU 
                                                  & ((0x1ffU 
                                                      & (((IData)(2U) 
                                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                         >> 3U)) 
                                                     ^ 
                                                     (0x3ffU 
                                                      & (((IData)(2U) 
                                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                         >> 2U))))
                                                  : 0U))))
                               : 0U)),12);
    bufp->fullBit(oldp+45,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                            & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1))));
    bufp->fullBit(oldp+46,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                            | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b2))));
    bufp->fullBit(oldp+47,((1U & (~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                                     | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b2))))));
    bufp->fullSData(oldp+48,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2)
                               ? (0xfffU & ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                             ? ((0x7ffU 
                                                 & (((IData)(2U) 
                                                     + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                    >> 1U)) 
                                                ^ ((IData)(2U) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))
                                             : ((1U 
                                                 == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                 ? 
                                                (0x7ffU 
                                                 & ((0x3ffU 
                                                     & (((IData)(2U) 
                                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (0x7ffU 
                                                     & (((IData)(2U) 
                                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                        >> 1U))))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode))
                                                  ? 
                                                 (0x3ffU 
                                                  & ((0x1ffU 
                                                      & (((IData)(2U) 
                                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                         >> 3U)) 
                                                     ^ 
                                                     (0x3ffU 
                                                      & (((IData)(2U) 
                                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                         >> 2U))))
                                                  : 0U))))
                               : 0U)),12);
    bufp->fullBit(oldp+49,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                            & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2))));
    bufp->fullIData(oldp+50,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i),18);
    bufp->fullIData(oldp+51,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i),18);
    bufp->fullBit(oldp+52,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1));
    bufp->fullBit(oldp+53,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b1));
    bufp->fullBit(oldp+54,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2));
    bufp->fullBit(oldp+55,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b2));
    bufp->fullIData(oldp+56,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__wmsk_a),18);
    bufp->fullIData(oldp+57,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__wmsk_b),18);
    bufp->fullIData(oldp+58,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)
                               ? (0xffffU & ((0xf000U 
                                              & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                 << 0xcU)) 
                                             | ((0xf00U 
                                                 & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                    << 8U)) 
                                                | ((0xf0U 
                                                    & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i)))))
                               : 0U)),18);
    bufp->fullIData(oldp+59,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b1)
                               ? (0xffffU & ((0xf000U 
                                              & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                 << 0xcU)) 
                                             | ((0xf00U 
                                                 & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                    << 8U)) 
                                                | ((0xf0U 
                                                    & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i)))))
                               : 0U)),18);
    bufp->fullSData(oldp+60,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_a),14);
    bufp->fullSData(oldp+61,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_b),14);
    bufp->fullBit(oldp+62,((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)))));
    bufp->fullBit(oldp+63,((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b1)))));
    bufp->fullSData(oldp+64,((0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_a) 
                                        >> 4U))),10);
    bufp->fullSData(oldp+65,((0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_addr_b) 
                                        >> 4U))),10);
    bufp->fullIData(oldp+66,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__wmsk_a),18);
    bufp->fullIData(oldp+67,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__wmsk_b),18);
    bufp->fullIData(oldp+68,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2)
                               ? (0xffffU & ((0xf000U 
                                              & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                 << 0xcU)) 
                                             | ((0xf00U 
                                                 & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                    << 8U)) 
                                                | ((0xf0U 
                                                    & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_A1_i)))))
                               : 0U)),18);
    bufp->fullIData(oldp+69,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b2)
                               ? (0xffffU & ((0xf000U 
                                              & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                 << 0xcU)) 
                                             | ((0xf00U 
                                                 & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                    << 8U)) 
                                                | ((0xf0U 
                                                    & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellinp__inst1__WDATA_B1_i)))))
                               : 0U)),18);
    bufp->fullSData(oldp+70,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_a),14);
    bufp->fullSData(oldp+71,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_b),14);
    bufp->fullBit(oldp+72,((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2)))));
    bufp->fullBit(oldp+73,((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_b2)))));
    bufp->fullSData(oldp+74,((0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_a) 
                                        >> 4U))),10);
    bufp->fullSData(oldp+75,((0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_addr_b) 
                                        >> 4U))),10);
    bufp->fullIData(oldp+76,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_A1_i),18);
    bufp->fullBit(oldp+77,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1));
    bufp->fullBit(oldp+78,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b1));
    bufp->fullBit(oldp+79,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2));
    bufp->fullBit(oldp+80,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b2));
    bufp->fullIData(oldp+81,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_a),18);
    bufp->fullIData(oldp+82,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__wmsk_b),18);
    bufp->fullIData(oldp+83,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
                               ? vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_A1_i
                               : 0U)),18);
    bufp->fullBit(oldp+84,((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)))));
    bufp->fullBit(oldp+85,((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b1)))));
    bufp->fullIData(oldp+86,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_a),18);
    bufp->fullIData(oldp+87,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__wmsk_b),18);
    bufp->fullIData(oldp+88,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2)
                               ? vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellinp__inst1__WDATA_A1_i
                               : 0U)),18);
    bufp->fullBit(oldp+89,((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2)))));
    bufp->fullBit(oldp+90,((1U & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_b2)))));
    bufp->fullBit(oldp+91,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)
                             ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1)
                             : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2))));
    bufp->fullBit(oldp+92,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a1)
                             ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1)
                             : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2))));
    bufp->fullBit(oldp+93,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2)
                             ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1)
                             : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2))));
    bufp->fullBit(oldp+94,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_wen_a2)
                             ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1)
                             : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2))));
    bufp->fullBit(oldp+95,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
                             ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1)
                             : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2))));
    bufp->fullBit(oldp+96,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
                             ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1)
                             : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2))));
    bufp->fullBit(oldp+97,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2)
                             ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1)
                             : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2))));
    bufp->fullBit(oldp+98,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2)
                             ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1)
                             : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2))));
    bufp->fullBit(oldp+99,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty));
    bufp->fullBit(oldp+100,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo));
    bufp->fullBit(oldp+101,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae));
    bufp->fullBit(oldp+102,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full));
    bufp->fullBit(oldp+103,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo));
    bufp->fullBit(oldp+104,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf));
    bufp->fullBit(oldp+105,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty));
    bufp->fullBit(oldp+106,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo));
    bufp->fullBit(oldp+107,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae));
    bufp->fullBit(oldp+108,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full));
    bufp->fullBit(oldp+109,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo));
    bufp->fullBit(oldp+110,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf));
    bufp->fullBit(oldp+111,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow));
    bufp->fullBit(oldp+112,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow));
    bufp->fullBit(oldp+113,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow));
    bufp->fullBit(oldp+114,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty));
    bufp->fullBit(oldp+115,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__epo));
    bufp->fullBit(oldp+116,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__pae));
    bufp->fullBit(oldp+117,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full));
    bufp->fullBit(oldp+118,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo));
    bufp->fullBit(oldp+119,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__paf));
    bufp->fullSData(oldp+120,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__laddr_a1),15);
    bufp->fullSData(oldp+121,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__laddr_b1),15);
    bufp->fullSData(oldp+122,(((0xffcU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__ff_raddr)) 
                               | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__bwl_sel))),12);
    bufp->fullSData(oldp+123,((0xfffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))),12);
    bufp->fullCData(oldp+124,(((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full) 
                                 << 7U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo) 
                                            << 6U) 
                                           | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__paf) 
                                               << 5U) 
                                              | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow) 
                                                 << 4U)))) 
                               | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                                   << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__epo) 
                                              << 2U) 
                                             | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__pae) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__underflow)))))),8);
    bufp->fullSData(oldp+125,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop1),13);
    bufp->fullSData(oldp+126,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2),13);
    bufp->fullSData(oldp+127,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush1),13);
    bufp->fullSData(oldp+128,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2),13);
    bufp->fullSData(oldp+129,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__gcout_reg),13);
    bufp->fullCData(oldp+130,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                                << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__epo) 
                                           << 2U) | 
                                          (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__pae) 
                                            << 1U) 
                                           | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__underflow))))),4);
    bufp->fullBit(oldp+131,(((0x7ffU & (((IData)(4U) 
                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                        >> 2U)) == 
                             (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)))));
    bufp->fullBit(oldp+132,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__e2));
    bufp->fullBit(oldp+133,((((IData)(1U) + (0x7ffU 
                                             & (((IData)(4U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                >> 2U))) 
                             == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)))));
    bufp->fullBit(oldp+134,((((IData)(1U) + (0x7ffU 
                                             & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr) 
                                                >> 2U))) 
                             == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)))));
    bufp->fullSData(oldp+135,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__ff_raddr),12);
    bufp->fullSData(oldp+136,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr),13);
    bufp->fullSData(oldp+137,((0x1ffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp) 
                                          << 2U))),13);
    bufp->fullSData(oldp+138,((0xfffU & ((IData)(4U) 
                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__ff_raddr)))),12);
    bufp->fullSData(oldp+139,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp),13);
    bufp->fullSData(oldp+140,((0x3fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                          - (0x1fffU 
                                             & ((IData)(4U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)))))),14);
    bufp->fullSData(oldp+141,((0x3fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                          - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)))),14);
    bufp->fullCData(oldp+142,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full) 
                                << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo) 
                                           << 2U) | 
                                          (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__paf) 
                                            << 1U) 
                                           | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow))))),4);
    bufp->fullBit(oldp+143,(((0x3ffU & ((IData)(1U) 
                                        + (0x3ffU & 
                                           (((IData)(4U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                            >> 2U)))) 
                             == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))));
    bufp->fullBit(oldp+144,(((0x3ffU & ((IData)(1U) 
                                        + (0x3ffU & 
                                           ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                            >> 2U)))) 
                             == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))));
    bufp->fullBit(oldp+145,((((0x400U & ((~ (1U & (
                                                   ((IData)(4U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                   >> 0xcU))) 
                                         << 0xaU)) 
                              | (0x3ffU & (((IData)(4U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                           >> 2U))) 
                             == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))));
    bufp->fullBit(oldp+146,((((0x400U & ((~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                             >> 0xcU)) 
                                         << 0xaU)) 
                              | (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                           >> 2U))) 
                             == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))));
    bufp->fullSData(oldp+147,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr),13);
    bufp->fullSData(oldp+148,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr),13);
    bufp->fullSData(oldp+149,((0x1ffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                          << 2U))),13);
    bufp->fullSData(oldp+150,((0x1fffU & ((IData)(4U) 
                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)))),13);
    bufp->fullSData(oldp+151,((0x1fffU & ((0xfffU & 
                                           (((IData)(4U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                            >> 1U)) 
                                          ^ ((IData)(4U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))))),13);
    bufp->fullSData(oldp+152,((0xfffU & ((0x7ffU & 
                                          (((IData)(4U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                           >> 2U)) 
                                         ^ (0xfffU 
                                            & (((IData)(4U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                               >> 1U))))),12);
    bufp->fullSData(oldp+153,((0x7ffU & ((0x3ffU & 
                                          (((IData)(4U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                           >> 3U)) 
                                         ^ (0x7ffU 
                                            & (((IData)(4U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                               >> 2U))))),11);
    bufp->fullSData(oldp+154,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp),13);
    bufp->fullSData(oldp+155,((0x1fffU & ((IData)(0x1000U) 
                                          - (((0x1fffU 
                                               & ((IData)(4U) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                              >= (0x1ffcU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                     << 2U)))
                                              ? ((0x1fffU 
                                                  & ((IData)(4U) 
                                                     + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                 - 
                                                 (0x1ffcU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                     << 2U)))
                                              : ((IData)(1U) 
                                                 + 
                                                 ((~ 
                                                   (0x1ffcU 
                                                    & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                       << 2U))) 
                                                  + 
                                                  (0x1fffU 
                                                   & ((IData)(4U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))))))))),13);
    bufp->fullSData(oldp+156,((0x1fffU & ((IData)(0x1000U) 
                                          - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                              >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr))
                                              ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                 - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr))
                                              : ((IData)(1U) 
                                                 + 
                                                 ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))))))),13);
    bufp->fullCData(oldp+157,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__addr_a_d),5);
    bufp->fullCData(oldp+158,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__addr_b_d),5);
    bufp->fullSData(oldp+159,(((0x7feU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr)) 
                               | (1U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel)))),11);
    bufp->fullSData(oldp+160,((0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))),11);
    bufp->fullCData(oldp+161,(((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                                 << 7U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo) 
                                            << 6U) 
                                           | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf) 
                                               << 5U) 
                                              | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow) 
                                                 << 4U)))) 
                               | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                                   << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo) 
                                              << 2U) 
                                             | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow)))))),8);
    bufp->fullSData(oldp+162,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop1),12);
    bufp->fullSData(oldp+163,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2),12);
    bufp->fullSData(oldp+164,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush1),12);
    bufp->fullSData(oldp+165,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2),12);
    bufp->fullSData(oldp+166,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg),12);
    bufp->fullCData(oldp+167,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                                << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo) 
                                           << 2U) | 
                                          (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae) 
                                            << 1U) 
                                           | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow))))),4);
    bufp->fullSData(oldp+168,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr),11);
    bufp->fullSData(oldp+169,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr),12);
    bufp->fullSData(oldp+170,((0x7ffU & ((IData)(2U) 
                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr)))),11);
    bufp->fullSData(oldp+171,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp),12);
    bufp->fullSData(oldp+172,((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                          - (0xfffU 
                                             & ((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))),13);
    bufp->fullSData(oldp+173,((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                          - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))),13);
    bufp->fullCData(oldp+174,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                                << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo) 
                                           << 2U) | 
                                          (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf) 
                                            << 1U) 
                                           | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow))))),4);
    bufp->fullSData(oldp+175,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr),12);
    bufp->fullSData(oldp+176,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr),12);
    bufp->fullSData(oldp+177,((0xfffU & ((IData)(2U) 
                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))),12);
    bufp->fullSData(oldp+178,((0xfffU & ((0x7ffU & 
                                          (((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                           >> 1U)) 
                                         ^ ((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))),12);
    bufp->fullSData(oldp+179,((0x7ffU & ((0x3ffU & 
                                          (((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                           >> 2U)) 
                                         ^ (0x7ffU 
                                            & (((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                               >> 1U))))),11);
    bufp->fullSData(oldp+180,((0x3ffU & ((0x1ffU & 
                                          (((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                           >> 3U)) 
                                         ^ (0x3ffU 
                                            & (((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                               >> 2U))))),10);
    bufp->fullSData(oldp+181,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp),12);
    bufp->fullSData(oldp+182,((0xfffU & ((IData)(0x800U) 
                                         - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                             >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                             ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                             : ((IData)(1U) 
                                                + (
                                                   (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))),12);
    bufp->fullSData(oldp+183,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a),10);
    bufp->fullSData(oldp+184,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b),10);
    bufp->fullIData(oldp+185,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a),18);
    bufp->fullIData(oldp+186,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b),18);
    bufp->fullIData(oldp+187,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a),18);
    bufp->fullIData(oldp+188,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b),18);
    bufp->fullCData(oldp+189,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__addr_a_d),5);
    bufp->fullCData(oldp+190,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__addr_b_d),5);
    bufp->fullSData(oldp+191,(((0x7feU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr)) 
                               | (1U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel)))),11);
    bufp->fullSData(oldp+192,((0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))),11);
    bufp->fullCData(oldp+193,(((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                                 << 7U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo) 
                                            << 6U) 
                                           | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf) 
                                               << 5U) 
                                              | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow) 
                                                 << 4U)))) 
                               | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                                   << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo) 
                                              << 2U) 
                                             | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow)))))),8);
    bufp->fullSData(oldp+194,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop1),12);
    bufp->fullSData(oldp+195,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2),12);
    bufp->fullSData(oldp+196,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush1),12);
    bufp->fullSData(oldp+197,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2),12);
    bufp->fullSData(oldp+198,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg),12);
    bufp->fullCData(oldp+199,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                                << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo) 
                                           << 2U) | 
                                          (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae) 
                                            << 1U) 
                                           | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow))))),4);
    bufp->fullSData(oldp+200,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr),11);
    bufp->fullSData(oldp+201,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr),12);
    bufp->fullSData(oldp+202,((0x7ffU & ((IData)(2U) 
                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr)))),11);
    bufp->fullSData(oldp+203,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp),12);
    bufp->fullSData(oldp+204,((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                          - (0xfffU 
                                             & ((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))),13);
    bufp->fullSData(oldp+205,((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                          - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))),13);
    bufp->fullCData(oldp+206,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                                << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo) 
                                           << 2U) | 
                                          (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf) 
                                            << 1U) 
                                           | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow))))),4);
    bufp->fullSData(oldp+207,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr),12);
    bufp->fullSData(oldp+208,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr),12);
    bufp->fullSData(oldp+209,((0xfffU & ((IData)(2U) 
                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))),12);
    bufp->fullSData(oldp+210,((0xfffU & ((0x7ffU & 
                                          (((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                           >> 1U)) 
                                         ^ ((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))),12);
    bufp->fullSData(oldp+211,((0x7ffU & ((0x3ffU & 
                                          (((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                           >> 2U)) 
                                         ^ (0x7ffU 
                                            & (((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                               >> 1U))))),11);
    bufp->fullSData(oldp+212,((0x3ffU & ((0x1ffU & 
                                          (((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                           >> 3U)) 
                                         ^ (0x3ffU 
                                            & (((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                               >> 2U))))),10);
    bufp->fullSData(oldp+213,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp),12);
    bufp->fullSData(oldp+214,((0xfffU & ((IData)(0x800U) 
                                         - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                             >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                             ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                             : ((IData)(1U) 
                                                + (
                                                   (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))),12);
    bufp->fullSData(oldp+215,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a),10);
    bufp->fullSData(oldp+216,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b),10);
    bufp->fullIData(oldp+217,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a),18);
    bufp->fullIData(oldp+218,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b),18);
    bufp->fullIData(oldp+219,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a),18);
    bufp->fullIData(oldp+220,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b),18);
    bufp->fullIData(oldp+221,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT____Vcellout__inst1__RDATA_A1_o),18);
    bufp->fullBit(oldp+222,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty));
    bufp->fullBit(oldp+223,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo));
    bufp->fullBit(oldp+224,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae));
    bufp->fullBit(oldp+225,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full));
    bufp->fullBit(oldp+226,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo));
    bufp->fullBit(oldp+227,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf));
    bufp->fullBit(oldp+228,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty));
    bufp->fullBit(oldp+229,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo));
    bufp->fullBit(oldp+230,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae));
    bufp->fullBit(oldp+231,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full));
    bufp->fullBit(oldp+232,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo));
    bufp->fullBit(oldp+233,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf));
    bufp->fullBit(oldp+234,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow));
    bufp->fullBit(oldp+235,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow));
    bufp->fullBit(oldp+236,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow));
    bufp->fullBit(oldp+237,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow));
    bufp->fullBit(oldp+238,((1U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags))));
    bufp->fullBit(oldp+239,((1U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                                   >> 4U))));
    bufp->fullBit(oldp+240,((1U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                                   >> 3U))));
    bufp->fullBit(oldp+241,((1U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                                   >> 2U))));
    bufp->fullBit(oldp+242,((1U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                                   >> 1U))));
    bufp->fullBit(oldp+243,((1U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                                   >> 7U))));
    bufp->fullBit(oldp+244,((1U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                                   >> 6U))));
    bufp->fullBit(oldp+245,((1U & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags) 
                                   >> 5U))));
    bufp->fullSData(oldp+246,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__laddr_a1),15);
    bufp->fullSData(oldp+247,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__laddr_b1),15);
    bufp->fullSData(oldp+248,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a1),14);
    bufp->fullSData(oldp+249,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1),14);
    bufp->fullSData(oldp+250,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a2),14);
    bufp->fullSData(oldp+251,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2),14);
    bufp->fullBit(oldp+252,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty));
    bufp->fullSData(oldp+253,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ff_raddr),12);
    bufp->fullSData(oldp+254,((0xfffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))),12);
    bufp->fullCData(oldp+255,((3U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))),2);
    bufp->fullCData(oldp+256,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT____Vcellout__fifo36_ctl__fflags),8);
    bufp->fullSData(oldp+257,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop1),13);
    bufp->fullSData(oldp+258,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__pushtopop2),13);
    bufp->fullSData(oldp+259,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush1),13);
    bufp->fullSData(oldp+260,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__poptopush2),13);
    bufp->fullSData(oldp+261,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__gcout_reg),13);
    bufp->fullCData(oldp+262,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                                << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__epo) 
                                           << 2U) | 
                                          (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__pae) 
                                            << 1U) 
                                           | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__underflow))))),4);
    bufp->fullBit(oldp+263,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__epo));
    bufp->fullBit(oldp+264,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__pae));
    bufp->fullBit(oldp+265,(((0x7ffU & (((IData)(4U) 
                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                        >> 2U)) == 
                             (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)))));
    bufp->fullBit(oldp+266,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__e2));
    bufp->fullBit(oldp+267,((((IData)(1U) + (0x7ffU 
                                             & (((IData)(4U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                >> 2U))) 
                             == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)))));
    bufp->fullBit(oldp+268,((((IData)(1U) + (0x7ffU 
                                             & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr) 
                                                >> 2U))) 
                             == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp)))));
    bufp->fullBit(oldp+269,((0x260U > (0x3fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                                  - 
                                                  (0x1fffU 
                                                   & ((IData)(4U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr))))))));
    bufp->fullBit(oldp+270,((0x260U > (0x3fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                                  - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr))))));
    bufp->fullSData(oldp+271,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__ff_raddr),12);
    bufp->fullSData(oldp+272,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr),13);
    bufp->fullSData(oldp+273,((0x1ffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp) 
                                          << 2U))),13);
    bufp->fullSData(oldp+274,((0xfffU & ((IData)(4U) 
                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__ff_raddr)))),12);
    bufp->fullSData(oldp+275,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp),13);
    bufp->fullSData(oldp+276,((0x3fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                          - (0x1fffU 
                                             & ((IData)(4U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)))))),14);
    bufp->fullSData(oldp+277,((0x3fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                          - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)))),14);
    bufp->fullCData(oldp+278,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full) 
                                << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo) 
                                           << 2U) | 
                                          (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__paf) 
                                            << 1U) 
                                           | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow))))),4);
    bufp->fullBit(oldp+279,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__full));
    bufp->fullBit(oldp+280,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__paf));
    bufp->fullBit(oldp+281,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo));
    bufp->fullBit(oldp+282,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow));
    bufp->fullBit(oldp+283,(((0x3ffU & ((IData)(1U) 
                                        + (0x3ffU & 
                                           (((IData)(4U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                            >> 2U)))) 
                             == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))));
    bufp->fullBit(oldp+284,(((0x3ffU & ((IData)(1U) 
                                        + (0x3ffU & 
                                           ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                            >> 2U)))) 
                             == (0x3ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))));
    bufp->fullBit(oldp+285,((((0x400U & ((~ (1U & (
                                                   ((IData)(4U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                                   >> 0xcU))) 
                                         << 0xaU)) 
                              | (0x3ffU & (((IData)(4U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                           >> 2U))) 
                             == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))));
    bufp->fullBit(oldp+286,((((0x400U & ((~ ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                             >> 0xcU)) 
                                         << 0xaU)) 
                              | (0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                           >> 2U))) 
                             == (0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp)))));
    bufp->fullBit(oldp+287,((0x604U > (0x1fffU & ((IData)(0x1000U) 
                                                  - 
                                                  (((0x1fffU 
                                                     & ((IData)(4U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                    >= 
                                                    (0x1ffcU 
                                                     & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                        << 2U)))
                                                    ? 
                                                   ((0x1fffU 
                                                     & ((IData)(4U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                    - 
                                                    (0x1ffcU 
                                                     & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                        << 2U)))
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((~ 
                                                      (0x1ffcU 
                                                       & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                          << 2U))) 
                                                     + 
                                                     (0x1fffU 
                                                      & ((IData)(4U) 
                                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)))))))))));
    bufp->fullBit(oldp+288,((0x604U > (0x1fffU & ((IData)(0x1000U) 
                                                  - 
                                                  (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                    >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr))
                                                    ? 
                                                   ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                    - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr))
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                     + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)))))))));
    bufp->fullSData(oldp+289,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr),13);
    bufp->fullSData(oldp+290,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr),13);
    bufp->fullSData(oldp+291,((0x1ffcU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                          << 2U))),13);
    bufp->fullSData(oldp+292,((0x1fffU & ((IData)(4U) 
                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)))),13);
    bufp->fullSData(oldp+293,((0x1fffU & ((0xfffU & 
                                           (((IData)(4U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                            >> 1U)) 
                                          ^ ((IData)(4U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))))),13);
    bufp->fullSData(oldp+294,((0xfffU & ((0x7ffU & 
                                          (((IData)(4U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                           >> 2U)) 
                                         ^ (0xfffU 
                                            & (((IData)(4U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                               >> 1U))))),12);
    bufp->fullSData(oldp+295,((0x7ffU & ((0x3ffU & 
                                          (((IData)(4U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                           >> 3U)) 
                                         ^ (0x7ffU 
                                            & (((IData)(4U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                               >> 2U))))),11);
    bufp->fullSData(oldp+296,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp),13);
    bufp->fullSData(oldp+297,((0x1fffU & ((IData)(0x1000U) 
                                          - (((0x1fffU 
                                               & ((IData)(4U) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                              >= (0x1ffcU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                     << 2U)))
                                              ? ((0x1fffU 
                                                  & ((IData)(4U) 
                                                     + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                 - 
                                                 (0x1ffcU 
                                                  & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                     << 2U)))
                                              : ((IData)(1U) 
                                                 + 
                                                 ((~ 
                                                   (0x1ffcU 
                                                    & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp) 
                                                       << 2U))) 
                                                  + 
                                                  (0x1fffU 
                                                   & ((IData)(4U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))))))))),13);
    bufp->fullSData(oldp+298,((0x1fffU & ((IData)(0x1000U) 
                                          - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                              >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr))
                                              ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                 - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr))
                                              : ((IData)(1U) 
                                                 + 
                                                 ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr))))))),13);
    bufp->fullCData(oldp+299,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__addr_a_d),5);
    bufp->fullCData(oldp+300,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__addr_b_d),5);
    bufp->fullBit(oldp+301,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                             | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty))));
    bufp->fullSData(oldp+302,(((0x7feU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr)) 
                               | (1U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel)))),11);
    bufp->fullSData(oldp+303,((0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))),11);
    bufp->fullSData(oldp+304,(((0x3ff0U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a1)) 
                               | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__addr_a_d)))),14);
    bufp->fullSData(oldp+305,(((0x3ff0U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1)) 
                               | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__addr_b_d)))),14);
    bufp->fullCData(oldp+306,((0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a1))),4);
    bufp->fullCData(oldp+307,((0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1))),4);
    bufp->fullCData(oldp+308,(((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                                 << 7U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo) 
                                            << 6U) 
                                           | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf) 
                                               << 5U) 
                                              | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow) 
                                                 << 4U)))) 
                               | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                                   << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo) 
                                              << 2U) 
                                             | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow)))))),8);
    bufp->fullSData(oldp+309,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop1),12);
    bufp->fullSData(oldp+310,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__pushtopop2),12);
    bufp->fullSData(oldp+311,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush1),12);
    bufp->fullSData(oldp+312,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__poptopush2),12);
    bufp->fullSData(oldp+313,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg),12);
    bufp->fullSData(oldp+314,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg),12);
    bufp->fullCData(oldp+315,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                                << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo) 
                                           << 2U) | 
                                          (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae) 
                                            << 1U) 
                                           | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow))))),4);
    bufp->fullBit(oldp+316,((0x130U > (0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                                  - 
                                                  (0xfffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))))));
    bufp->fullBit(oldp+317,((0x130U > (0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                                  - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))));
    bufp->fullCData(oldp+318,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel),2);
    bufp->fullSData(oldp+319,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr),11);
    bufp->fullSData(oldp+320,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr),12);
    bufp->fullSData(oldp+321,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr),12);
    bufp->fullSData(oldp+322,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty)
                                ? (0xfffU & ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                              ? ((0x7ffU 
                                                  & (((IData)(2U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                     >> 1U)) 
                                                 ^ 
                                                 ((IData)(2U) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))
                                              : ((1U 
                                                  == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                                  ? 
                                                 (0x7ffU 
                                                  & ((0x3ffU 
                                                      & (((IData)(2U) 
                                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                         >> 2U)) 
                                                     ^ 
                                                     (0x7ffU 
                                                      & (((IData)(2U) 
                                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                         >> 1U))))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                                   ? 
                                                  (0x3ffU 
                                                   & ((0x1ffU 
                                                       & (((IData)(2U) 
                                                           + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                          >> 3U)) 
                                                      ^ 
                                                      (0x3ffU 
                                                       & (((IData)(2U) 
                                                           + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                          >> 2U))))
                                                   : 0U))))
                                : 0U)),12);
    bufp->fullBit(oldp+323,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                              & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty)))
                              ? (0x130U > (0x1fffU 
                                           & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                              - (0xfffU 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))))
                              : (0x130U > (0x1fffU 
                                           & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                              - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))));
    bufp->fullSData(oldp+324,((0x3ffU & ((0x1ffU & 
                                          (((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                           >> 3U)) 
                                         ^ (0x3ffU 
                                            & (((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                               >> 2U))))),10);
    bufp->fullSData(oldp+325,((0x7ffU & ((0x3ffU & 
                                          (((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                           >> 2U)) 
                                         ^ (0x7ffU 
                                            & (((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                               >> 1U))))),11);
    bufp->fullSData(oldp+326,((0xfffU & ((0x7ffU & 
                                          (((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                           >> 1U)) 
                                         ^ ((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))),12);
    bufp->fullSData(oldp+327,((0xfffU & ((IData)(2U) 
                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))),12);
    bufp->fullSData(oldp+328,((0x7ffU & ((IData)(2U) 
                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr)))),11);
    bufp->fullSData(oldp+329,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp),12);
    bufp->fullSData(oldp+330,((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                          - (0xfffU 
                                             & ((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))),13);
    bufp->fullSData(oldp+331,((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                          - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))),13);
    bufp->fullCData(oldp+332,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                                << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo) 
                                           << 2U) | 
                                          (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf) 
                                            << 1U) 
                                           | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow))))),4);
    bufp->fullBit(oldp+333,((0x302U > (0xfffU & ((IData)(0x800U) 
                                                 - 
                                                 (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                   >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                                   ? 
                                                  ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                   - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                                   : 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))))))));
    bufp->fullSData(oldp+334,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr),12);
    bufp->fullSData(oldp+335,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr),12);
    bufp->fullSData(oldp+336,((0xfffU & ((IData)(2U) 
                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))),12);
    bufp->fullSData(oldp+337,((0xfffU & ((0x7ffU & 
                                          (((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                           >> 1U)) 
                                         ^ ((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))),12);
    bufp->fullSData(oldp+338,((0x7ffU & ((0x3ffU & 
                                          (((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                           >> 2U)) 
                                         ^ (0x7ffU 
                                            & (((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                               >> 1U))))),11);
    bufp->fullSData(oldp+339,((0x3ffU & ((0x1ffU & 
                                          (((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                           >> 3U)) 
                                         ^ (0x3ffU 
                                            & (((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                               >> 2U))))),10);
    bufp->fullSData(oldp+340,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp),12);
    bufp->fullSData(oldp+341,((0xfffU & ((IData)(0x800U) 
                                         - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                             >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                             ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                             : ((IData)(1U) 
                                                + (
                                                   (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))),12);
    bufp->fullSData(oldp+342,((0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a1) 
                                         >> 4U))),10);
    bufp->fullSData(oldp+343,((0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b1) 
                                         >> 4U))),10);
    bufp->fullSData(oldp+344,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_a),10);
    bufp->fullSData(oldp+345,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__laddr_b),10);
    bufp->fullIData(oldp+346,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_a),18);
    bufp->fullIData(oldp+347,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwdata_b),18);
    bufp->fullIData(oldp+348,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_a),18);
    bufp->fullIData(oldp+349,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwmsk_b),18);
    bufp->fullCData(oldp+350,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__addr_a_d),5);
    bufp->fullCData(oldp+351,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__addr_b_d),5);
    bufp->fullBit(oldp+352,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                             | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty))));
    bufp->fullSData(oldp+353,(((0x7feU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr)) 
                               | (1U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel)))),11);
    bufp->fullSData(oldp+354,((0x7ffU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))),11);
    bufp->fullSData(oldp+355,(((0x3ff0U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a2)) 
                               | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__addr_a_d)))),14);
    bufp->fullSData(oldp+356,(((0x3ff0U & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2)) 
                               | (0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__addr_b_d)))),14);
    bufp->fullCData(oldp+357,((0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a2))),4);
    bufp->fullCData(oldp+358,((0xfU & (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2))),4);
    bufp->fullCData(oldp+359,(((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                                 << 7U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo) 
                                            << 6U) 
                                           | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf) 
                                               << 5U) 
                                              | ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow) 
                                                 << 4U)))) 
                               | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                                   << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo) 
                                              << 2U) 
                                             | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae) 
                                                 << 1U) 
                                                | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow)))))),8);
    bufp->fullSData(oldp+360,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop1),12);
    bufp->fullSData(oldp+361,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__pushtopop2),12);
    bufp->fullSData(oldp+362,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush1),12);
    bufp->fullSData(oldp+363,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__poptopush2),12);
    bufp->fullSData(oldp+364,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg),12);
    bufp->fullSData(oldp+365,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg),12);
    bufp->fullCData(oldp+366,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty) 
                                << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo) 
                                           << 2U) | 
                                          (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae) 
                                            << 1U) 
                                           | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow))))),4);
    bufp->fullBit(oldp+367,((0x18U > (0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                                 - 
                                                 (0xfffU 
                                                  & ((IData)(2U) 
                                                     + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))))));
    bufp->fullBit(oldp+368,((0x18U > (0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                                 - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))));
    bufp->fullCData(oldp+369,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel),2);
    bufp->fullSData(oldp+370,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr),11);
    bufp->fullSData(oldp+371,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr),12);
    bufp->fullSData(oldp+372,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr),12);
    bufp->fullSData(oldp+373,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty)
                                ? (0xfffU & ((2U == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                              ? ((0x7ffU 
                                                  & (((IData)(2U) 
                                                      + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                     >> 1U)) 
                                                 ^ 
                                                 ((IData)(2U) 
                                                  + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))
                                              : ((1U 
                                                  == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                                  ? 
                                                 (0x7ffU 
                                                  & ((0x3ffU 
                                                      & (((IData)(2U) 
                                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                         >> 2U)) 
                                                     ^ 
                                                     (0x7ffU 
                                                      & (((IData)(2U) 
                                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                         >> 1U))))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode))
                                                   ? 
                                                  (0x3ffU 
                                                   & ((0x1ffU 
                                                       & (((IData)(2U) 
                                                           + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                          >> 3U)) 
                                                      ^ 
                                                      (0x3ffU 
                                                       & (((IData)(2U) 
                                                           + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                          >> 2U))))
                                                   : 0U))))
                                : 0U)),12);
    bufp->fullBit(oldp+374,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                              & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty)))
                              ? (0x18U > (0x1fffU & 
                                          ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                           - (0xfffU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))))
                              : (0x18U > (0x1fffU & 
                                          ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                           - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))));
    bufp->fullSData(oldp+375,((0x3ffU & ((0x1ffU & 
                                          (((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                           >> 3U)) 
                                         ^ (0x3ffU 
                                            & (((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                               >> 2U))))),10);
    bufp->fullSData(oldp+376,((0x7ffU & ((0x3ffU & 
                                          (((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                           >> 2U)) 
                                         ^ (0x7ffU 
                                            & (((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                               >> 1U))))),11);
    bufp->fullSData(oldp+377,((0xfffU & ((0x7ffU & 
                                          (((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                           >> 1U)) 
                                         ^ ((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))),12);
    bufp->fullSData(oldp+378,((0xfffU & ((IData)(2U) 
                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))),12);
    bufp->fullSData(oldp+379,((0x7ffU & ((IData)(2U) 
                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr)))),11);
    bufp->fullSData(oldp+380,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp),12);
    bufp->fullSData(oldp+381,((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                          - (0xfffU 
                                             & ((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))))),13);
    bufp->fullSData(oldp+382,((0x1fffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr) 
                                          - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))),13);
    bufp->fullCData(oldp+383,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full) 
                                << 3U) | (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo) 
                                           << 2U) | 
                                          (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf) 
                                            << 1U) 
                                           | (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow))))),4);
    bufp->fullBit(oldp+384,((0x312U > (0xfffU & ((IData)(0x800U) 
                                                 - 
                                                 (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                   >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                                   ? 
                                                  ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                   - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                                   : 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))))))));
    bufp->fullSData(oldp+385,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr),12);
    bufp->fullSData(oldp+386,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr),12);
    bufp->fullSData(oldp+387,((0xfffU & ((IData)(2U) 
                                         + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))),12);
    bufp->fullSData(oldp+388,((0xfffU & ((0x7ffU & 
                                          (((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                           >> 1U)) 
                                         ^ ((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))),12);
    bufp->fullSData(oldp+389,((0x7ffU & ((0x3ffU & 
                                          (((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                           >> 2U)) 
                                         ^ (0x7ffU 
                                            & (((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                               >> 1U))))),11);
    bufp->fullSData(oldp+390,((0x3ffU & ((0x1ffU & 
                                          (((IData)(2U) 
                                            + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                           >> 3U)) 
                                         ^ (0x3ffU 
                                            & (((IData)(2U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)) 
                                               >> 2U))))),10);
    bufp->fullSData(oldp+391,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp),12);
    bufp->fullSData(oldp+392,((0xfffU & ((IData)(0x800U) 
                                         - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                             >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                             ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                             : ((IData)(1U) 
                                                + (
                                                   (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                   + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))),12);
    bufp->fullSData(oldp+393,((0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_a2) 
                                         >> 4U))),10);
    bufp->fullSData(oldp+394,((0x3ffU & ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_addr_b2) 
                                         >> 4U))),10);
    bufp->fullSData(oldp+395,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_a),10);
    bufp->fullSData(oldp+396,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__laddr_b),10);
    bufp->fullIData(oldp+397,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_a),18);
    bufp->fullIData(oldp+398,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwdata_b),18);
    bufp->fullIData(oldp+399,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_a),18);
    bufp->fullIData(oldp+400,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwmsk_b),18);
    bufp->fullSData(oldp+401,((0xfffU & ((IData)(0x800U) 
                                         - (((0xfffU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                             >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                             ? ((0xfffU 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                             : ((IData)(1U) 
                                                + (
                                                   (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next)) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))))),12);
    bufp->fullSData(oldp+402,((0xfffU & ((IData)(0x800U) 
                                         - (((0xfffU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                             >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                             ? ((0xfffU 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                             : ((IData)(1U) 
                                                + (
                                                   (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next)) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))))),12);
    bufp->fullBit(oldp+403,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                              & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty)))
                              ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1)
                              : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2))));
    bufp->fullBit(oldp+404,((0x302U > (0xfffU & ((IData)(0x800U) 
                                                 - 
                                                 (((0xfffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                   >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                                   ? 
                                                  ((0xfffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                   - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                                   : 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next)) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))))))))));
    bufp->fullSData(oldp+405,((0xfffU & ((IData)(0x800U) 
                                         - (((0xfffU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                             >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                             ? ((0xfffU 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                             : ((IData)(1U) 
                                                + (
                                                   (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next)) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))))),12);
    bufp->fullBit(oldp+406,((((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty) 
                              & (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty)))
                              ? (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1)
                              : (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2))));
    bufp->fullBit(oldp+407,((0x312U > (0xfffU & ((IData)(0x800U) 
                                                 - 
                                                 (((0xfffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                   >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                                   ? 
                                                  ((0xfffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                   - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                                   : 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next)) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))))))))));
    bufp->fullSData(oldp+408,((0xfffU & ((IData)(0x800U) 
                                         - (((0xfffU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                             >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                             ? ((0xfffU 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                             : ((IData)(1U) 
                                                + (
                                                   (~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next)) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))))),12);
    bufp->fullBit(oldp+409,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1));
    bufp->fullBit(oldp+410,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2));
    bufp->fullBit(oldp+411,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1));
    bufp->fullBit(oldp+412,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2));
    bufp->fullSData(oldp+413,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next),12);
    bufp->fullBit(oldp+414,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1));
    bufp->fullBit(oldp+415,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2));
    bufp->fullBit(oldp+416,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1));
    bufp->fullBit(oldp+417,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2));
    bufp->fullSData(oldp+418,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next),12);
    bufp->fullBit(oldp+419,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1));
    bufp->fullBit(oldp+420,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2));
    bufp->fullBit(oldp+421,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1));
    bufp->fullBit(oldp+422,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2));
    bufp->fullSData(oldp+423,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next),12);
    bufp->fullBit(oldp+424,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1));
    bufp->fullBit(oldp+425,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2));
    bufp->fullBit(oldp+426,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1));
    bufp->fullBit(oldp+427,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2));
    bufp->fullSData(oldp+428,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next),12);
    bufp->fullBit(oldp+429,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1));
    bufp->fullBit(oldp+430,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2));
    bufp->fullBit(oldp+431,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1));
    bufp->fullBit(oldp+432,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2));
    bufp->fullSData(oldp+433,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next),12);
    bufp->fullBit(oldp+434,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next));
    bufp->fullBit(oldp+435,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1));
    bufp->fullBit(oldp+436,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2));
    bufp->fullBit(oldp+437,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1));
    bufp->fullBit(oldp+438,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2));
    bufp->fullSData(oldp+439,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next),12);
    bufp->fullBit(oldp+440,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1));
    bufp->fullBit(oldp+441,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2));
    bufp->fullBit(oldp+442,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1));
    bufp->fullBit(oldp+443,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2));
    bufp->fullSData(oldp+444,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next),12);
    bufp->fullBit(oldp+445,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty_next));
    bufp->fullBit(oldp+446,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1));
    bufp->fullBit(oldp+447,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2));
    bufp->fullBit(oldp+448,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1));
    bufp->fullBit(oldp+449,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2));
    bufp->fullSData(oldp+450,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next),12);
    bufp->fullBit(oldp+451,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__clk));
    bufp->fullQData(oldp+452,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__dout),36);
    bufp->fullQData(oldp+454,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__dout_net),36);
    bufp->fullIData(oldp+456,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellout__inst1__RDATA_A1_o),18);
    bufp->fullIData(oldp+457,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT____Vcellout__inst1__RDATA_B1_o),18);
    bufp->fullIData(oldp+458,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a1),18);
    bufp->fullIData(oldp+459,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b1),18);
    bufp->fullIData(oldp+460,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_a2),18);
    bufp->fullIData(oldp+461,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b2),18);
    bufp->fullQData(oldp+462,((((QData)((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b2)) 
                                << 0x12U) | (QData)((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__ram_rdata_b1)))),36);
    bufp->fullIData(oldp+464,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_rdata_a),18);
    bufp->fullIData(oldp+465,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__ram_rdata_b),18);
    bufp->fullBit(oldp+466,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a));
    bufp->fullBit(oldp+467,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a));
    bufp->fullBit(oldp+468,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b));
    bufp->fullBit(oldp+469,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b));
    bufp->fullIData(oldp+470,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_rdata_a),18);
    bufp->fullIData(oldp+471,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__ram_rdata_b),18);
    bufp->fullBit(oldp+472,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a));
    bufp->fullBit(oldp+473,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a));
    bufp->fullBit(oldp+474,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b));
    bufp->fullBit(oldp+475,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b));
    bufp->fullIData(oldp+476,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__ram_rdata_b),18);
    bufp->fullIData(oldp+477,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__ram_rdata_b),18);
    bufp->fullQData(oldp+478,((((QData)((IData)((3U 
                                                 & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__ram_rdata_b 
                                                    >> 0x10U)))) 
                                << 0x22U) | (((QData)((IData)(
                                                              (3U 
                                                               & (vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__ram_rdata_b 
                                                                  >> 0x10U)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__ram_rdata_b 
                                                                 << 0x10U) 
                                                                | (0xffffU 
                                                                   & vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__ram_rdata_b))))))),36);
    bufp->fullIData(oldp+480,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__ram_rdata_a),18);
    bufp->fullBit(oldp+481,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a1)
                              ? (0x302U > (0xfffU & 
                                           ((IData)(0x800U) 
                                            - (((0xfffU 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                                ? (
                                                   (0xfffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                   - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                                : ((IData)(1U) 
                                                   + 
                                                   ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next)) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))))))))
                              : (0x302U > (0xfffU & 
                                           ((IData)(0x800U) 
                                            - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                                ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                   - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                                : ((IData)(1U) 
                                                   + 
                                                   ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))))));
    bufp->fullBit(oldp+482,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_a));
    bufp->fullBit(oldp+483,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_a));
    bufp->fullBit(oldp+484,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lcen_b));
    bufp->fullBit(oldp+485,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__uram__DOT__lwen_b));
    bufp->fullIData(oldp+486,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__ram_rdata_a),18);
    bufp->fullBit(oldp+487,(((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__ram_wen_a2)
                              ? (0x312U > (0xfffU & 
                                           ((IData)(0x800U) 
                                            - (((0xfffU 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                                ? (
                                                   (0xfffU 
                                                    & ((IData)(2U) 
                                                       + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))) 
                                                   - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next))
                                                : ((IData)(1U) 
                                                   + 
                                                   ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next)) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr)))))))))
                              : (0x312U > (0xfffU & 
                                           ((IData)(0x800U) 
                                            - (((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                >= (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                                ? ((IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr) 
                                                   - (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr))
                                                : ((IData)(1U) 
                                                   + 
                                                   ((~ (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr)) 
                                                    + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr))))))))));
    bufp->fullBit(oldp+488,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_a));
    bufp->fullBit(oldp+489,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_a));
    bufp->fullBit(oldp+490,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lcen_b));
    bufp->fullBit(oldp+491,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__uram__DOT__lwen_b));
    __Vtemp_hf3eb020a__0[0U] = 0x1248U;
    __Vtemp_hf3eb020a__0[1U] = 0U;
    __Vtemp_hf3eb020a__0[2U] = 0U;
    bufp->fullWData(oldp+492,(__Vtemp_hf3eb020a__0),81);
    bufp->fullBit(oldp+495,(0U));
    bufp->fullCData(oldp+496,(4U),3);
    bufp->fullSData(oldp+497,(0U),12);
    bufp->fullCData(oldp+498,(0U),3);
    bufp->fullSData(oldp+499,(0U),11);
    bufp->fullWData(oldp+500,(Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_h8f5f7289_0),36864);
    bufp->fullBit(oldp+1652,(1U));
    bufp->fullBit(oldp+1653,(0U));
    bufp->fullCData(oldp+1654,(3U),2);
    bufp->fullCData(oldp+1655,(0U),2);
    bufp->fullSData(oldp+1656,(0U),14);
    bufp->fullIData(oldp+1657,(0U),18);
    bufp->fullBit(oldp+1658,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow));
    bufp->fullBit(oldp+1659,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow));
    bufp->fullBit(oldp+1660,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__underflow));
    bufp->fullIData(oldp+1661,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__pl_dout0),18);
    bufp->fullIData(oldp+1662,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__pl_dout1),18);
    bufp->fullCData(oldp+1663,(3U),3);
    bufp->fullCData(oldp+1664,(2U),3);
    bufp->fullCData(oldp+1665,(1U),3);
    bufp->fullCData(oldp+1666,(5U),3);
    bufp->fullCData(oldp+1667,(6U),3);
    bufp->fullIData(oldp+1668,(0xcU),32);
    bufp->fullIData(oldp+1669,(7U),32);
    bufp->fullIData(oldp+1670,(0xdU),32);
    bufp->fullSData(oldp+1671,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__gcout_reg),13);
    bufp->fullCData(oldp+1672,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__bwl_sel),2);
    bufp->fullSData(oldp+1673,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr),13);
    bufp->fullSData(oldp+1674,(0U),13);
    bufp->fullSData(oldp+1675,((0x7ffU & ((0x3ffU & 
                                           (((IData)(4U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                            >> 3U)) 
                                          ^ (0x7ffU 
                                             & (((IData)(4U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                >> 2U))))),11);
    bufp->fullSData(oldp+1676,((0xfffU & ((0x7ffU & 
                                           (((IData)(4U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                            >> 2U)) 
                                          ^ (0xfffU 
                                             & (((IData)(4U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                >> 1U))))),12);
    bufp->fullSData(oldp+1677,((0x1fffU & ((0xfffU 
                                            & (((IData)(4U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                               >> 1U)) 
                                           ^ ((IData)(4U) 
                                              + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr))))),13);
    bufp->fullSData(oldp+1678,((0x1fffU & ((IData)(4U) 
                                           + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)))),13);
    bufp->fullSData(oldp+1679,(0x1000U),14);
    bufp->fullSData(oldp+1680,(0x1000U),13);
    bufp->fullWData(oldp+1681,(Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_ha5ac2e72_0),18432);
    bufp->fullSData(oldp+2257,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__addr_a),9);
    bufp->fullSData(oldp+2258,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__addr_b),9);
    bufp->fullCData(oldp+2259,(0U),4);
    bufp->fullBit(oldp+2260,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__initn));
    bufp->fullBit(oldp+2261,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__smux_rclk));
    bufp->fullBit(oldp+2262,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__smux_wclk));
    bufp->fullCData(oldp+2263,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__raw_fflags),4);
    bufp->fullCData(oldp+2264,(1U),2);
    bufp->fullIData(oldp+2265,(0xbU),32);
    bufp->fullIData(oldp+2266,(2U),32);
    bufp->fullIData(oldp+2267,(6U),32);
    bufp->fullSData(oldp+2268,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg),12);
    bufp->fullCData(oldp+2269,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel),2);
    bufp->fullSData(oldp+2270,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr),12);
    bufp->fullSData(oldp+2271,((0x3ffU & ((0x1ffU & 
                                           (((IData)(2U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                            >> 3U)) 
                                          ^ (0x3ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                >> 2U))))),10);
    bufp->fullSData(oldp+2272,((0x7ffU & ((0x3ffU & 
                                           (((IData)(2U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                            >> 2U)) 
                                          ^ (0x7ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                >> 1U))))),11);
    bufp->fullSData(oldp+2273,((0xfffU & ((0x7ffU & 
                                           (((IData)(2U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                            >> 1U)) 
                                          ^ ((IData)(2U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))),12);
    bufp->fullSData(oldp+2274,((0xfffU & ((IData)(2U) 
                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))),12);
    bufp->fullSData(oldp+2275,(0x800U),13);
    bufp->fullSData(oldp+2276,(0x800U),12);
    bufp->fullSData(oldp+2277,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__addr_a),9);
    bufp->fullSData(oldp+2278,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__addr_b),9);
    bufp->fullBit(oldp+2279,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__initn));
    bufp->fullBit(oldp+2280,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__smux_rclk));
    bufp->fullBit(oldp+2281,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__smux_wclk));
    bufp->fullCData(oldp+2282,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__raw_fflags),4);
    bufp->fullSData(oldp+2283,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg),12);
    bufp->fullCData(oldp+2284,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel),2);
    bufp->fullSData(oldp+2285,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr),12);
    bufp->fullSData(oldp+2286,((0x3ffU & ((0x1ffU & 
                                           (((IData)(2U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                            >> 3U)) 
                                          ^ (0x3ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                >> 2U))))),10);
    bufp->fullSData(oldp+2287,((0x7ffU & ((0x3ffU & 
                                           (((IData)(2U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                            >> 2U)) 
                                          ^ (0x7ffU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                >> 1U))))),11);
    bufp->fullSData(oldp+2288,((0xfffU & ((0x7ffU & 
                                           (((IData)(2U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                            >> 1U)) 
                                          ^ ((IData)(2U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr))))),12);
    bufp->fullSData(oldp+2289,((0xfffU & ((IData)(2U) 
                                          + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__golden__DOT__inst1__DOT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr)))),12);
    __Vtemp_h9027675a__0[0U] = 0x31303030U;
    __Vtemp_h9027675a__0[1U] = 0x30313030U;
    __Vtemp_h9027675a__0[2U] = 0x3130U;
    bufp->fullWData(oldp+2290,(__Vtemp_h9027675a__0),81);
    bufp->fullBit(oldp+2293,(1U));
    bufp->fullSData(oldp+2294,(0x898U),12);
    bufp->fullSData(oldp+2295,(0x181U),12);
    bufp->fullSData(oldp+2296,(0x40cU),11);
    bufp->fullSData(oldp+2297,(0x189U),11);
    bufp->fullWData(oldp+2298,(Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_hc6fae7d9_0),36864);
    bufp->fullIData(oldp+3450,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__pl_dout0),18);
    bufp->fullIData(oldp+3451,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__pl_dout1),18);
    bufp->fullSData(oldp+3452,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__gcout_reg),13);
    bufp->fullBit(oldp+3453,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__underflow));
    bufp->fullCData(oldp+3454,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__bwl_sel),2);
    bufp->fullSData(oldp+3455,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr),13);
    bufp->fullSData(oldp+3456,(0x260U),12);
    bufp->fullSData(oldp+3457,((0x7ffU & ((0x3ffU & 
                                           (((IData)(4U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                            >> 3U)) 
                                          ^ (0x7ffU 
                                             & (((IData)(4U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                >> 2U))))),11);
    bufp->fullSData(oldp+3458,((0xfffU & ((0x7ffU & 
                                           (((IData)(4U) 
                                             + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                            >> 2U)) 
                                          ^ (0xfffU 
                                             & (((IData)(4U) 
                                                 + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                                >> 1U))))),12);
    bufp->fullSData(oldp+3459,((0x1fffU & ((0xfffU 
                                            & (((IData)(4U) 
                                                + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)) 
                                               >> 1U)) 
                                           ^ ((IData)(4U) 
                                              + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr))))),13);
    bufp->fullSData(oldp+3460,((0x1fffU & ((IData)(4U) 
                                           + (IData)(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr)))),13);
    bufp->fullSData(oldp+3461,(0x604U),12);
    bufp->fullSData(oldp+3462,(0x181U),11);
    bufp->fullSData(oldp+3463,(0x98U),11);
    bufp->fullWData(oldp+3464,(Vco_sim_sdp_nsplit_ram_1024x36_R4W4__ConstPool__CONST_hbca17dff_0),18432);
    bufp->fullSData(oldp+4040,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__addr_a),9);
    bufp->fullSData(oldp+4041,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__addr_b),9);
    bufp->fullBit(oldp+4042,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__initn));
    bufp->fullBit(oldp+4043,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__smux_rclk));
    bufp->fullBit(oldp+4044,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__smux_wclk));
    bufp->fullCData(oldp+4045,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u1__DOT__raw_fflags),4);
    bufp->fullSData(oldp+4046,(0x130U),11);
    bufp->fullSData(oldp+4047,(0x302U),11);
    bufp->fullSData(oldp+4048,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__addr_a),9);
    bufp->fullSData(oldp+4049,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__addr_b),9);
    bufp->fullBit(oldp+4050,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__initn));
    bufp->fullBit(oldp+4051,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__smux_rclk));
    bufp->fullBit(oldp+4052,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__smux_wclk));
    bufp->fullCData(oldp+4053,(vlSelf->co_sim_sdp_nsplit_ram_1024x36_R4W4__DOT__netlist__DOT__inst1__DOT__u2__DOT__raw_fflags),4);
    bufp->fullSData(oldp+4054,(0x18U),11);
    bufp->fullSData(oldp+4055,(0x312U),11);
}
