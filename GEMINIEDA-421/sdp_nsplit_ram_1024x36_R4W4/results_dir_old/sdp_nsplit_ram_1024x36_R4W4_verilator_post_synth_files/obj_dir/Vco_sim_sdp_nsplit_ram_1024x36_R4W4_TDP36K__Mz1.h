// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vco_sim_sdp_nsplit_ram_1024x36_R4W4.h for the primary calling header

#ifndef VERILATED_VCO_SIM_SDP_NSPLIT_RAM_1024X36_R4W4_TDP36K__MZ1_H_
#define VERILATED_VCO_SIM_SDP_NSPLIT_RAM_1024X36_R4W4_TDP36K__MZ1_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"
#include "verilated_timing.h"

class Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms;

class Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__sreset;
        VL_IN8(RESET_ni,0,0);
        VL_IN8(WEN_A1_i,0,0);
        VL_IN8(WEN_B1_i,0,0);
        VL_IN8(REN_A1_i,0,0);
        VL_IN8(REN_B1_i,0,0);
        VL_IN8(CLK_A1_i,0,0);
        VL_IN8(CLK_B1_i,0,0);
        VL_IN8(BE_A1_i,1,0);
        VL_IN8(BE_B1_i,1,0);
        VL_IN8(FLUSH1_i,0,0);
        VL_IN8(WEN_A2_i,0,0);
        VL_IN8(WEN_B2_i,0,0);
        VL_IN8(REN_A2_i,0,0);
        VL_IN8(REN_B2_i,0,0);
        VL_IN8(CLK_A2_i,0,0);
        VL_IN8(CLK_B2_i,0,0);
        VL_IN8(BE_A2_i,1,0);
        VL_IN8(BE_B2_i,1,0);
        VL_IN8(FLUSH2_i,0,0);
        CData/*0:0*/ __PVT__ram_wen_a1;
        CData/*0:0*/ __PVT__ram_wen_b1;
        CData/*0:0*/ __PVT__ram_wen_a2;
        CData/*0:0*/ __PVT__ram_wen_b2;
        CData/*0:0*/ __PVT__fifo36_ctl__DOT__u_fifo_push__DOT__full;
        CData/*0:0*/ __PVT__fifo36_ctl__DOT__u_fifo_push__DOT__paf;
        CData/*0:0*/ __PVT__fifo36_ctl__DOT__u_fifo_push__DOT__fmo;
        CData/*0:0*/ __PVT__fifo36_ctl__DOT__u_fifo_push__DOT__overflow;
        CData/*0:0*/ __PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__empty;
        CData/*0:0*/ __PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__epo;
        CData/*0:0*/ __PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__pae;
        CData/*0:0*/ __PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__underflow;
        CData/*0:0*/ __PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__e2;
        CData/*1:0*/ __PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__bwl_sel;
        CData/*4:0*/ __PVT__u1__DOT__addr_a_d;
        CData/*4:0*/ __PVT__u1__DOT__addr_b_d;
        CData/*0:0*/ __PVT__u1__DOT__initn;
        CData/*0:0*/ __PVT__u1__DOT__smux_rclk;
        CData/*0:0*/ __PVT__u1__DOT__smux_wclk;
        CData/*3:0*/ __PVT__u1__DOT__raw_fflags;
        CData/*0:0*/ __PVT__u1__DOT__uram__DOT__lcen_a;
        CData/*0:0*/ __PVT__u1__DOT__uram__DOT__lwen_a;
        CData/*0:0*/ __PVT__u1__DOT__uram__DOT__lcen_b;
        CData/*0:0*/ __PVT__u1__DOT__uram__DOT__lwen_b;
        CData/*0:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full;
        CData/*0:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf;
        CData/*0:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo;
        CData/*0:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow;
        CData/*0:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1;
        CData/*0:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2;
        CData/*0:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1;
        CData/*0:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2;
        CData/*1:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode;
        CData/*0:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty;
        CData/*0:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo;
        CData/*0:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae;
        CData/*0:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow;
        CData/*0:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1;
        CData/*0:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2;
        CData/*0:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1;
        CData/*0:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2;
        CData/*1:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel;
        CData/*1:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode;
        CData/*4:0*/ __PVT__u2__DOT__addr_a_d;
    };
    struct {
        CData/*4:0*/ __PVT__u2__DOT__addr_b_d;
        CData/*0:0*/ __PVT__u2__DOT__initn;
        CData/*0:0*/ __PVT__u2__DOT__smux_rclk;
        CData/*0:0*/ __PVT__u2__DOT__smux_wclk;
        CData/*3:0*/ __PVT__u2__DOT__raw_fflags;
        CData/*0:0*/ __PVT__u2__DOT__uram__DOT__lcen_a;
        CData/*0:0*/ __PVT__u2__DOT__uram__DOT__lwen_a;
        CData/*0:0*/ __PVT__u2__DOT__uram__DOT__lcen_b;
        CData/*0:0*/ __PVT__u2__DOT__uram__DOT__lwen_b;
        CData/*0:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__full;
        CData/*0:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__paf;
        CData/*0:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__fmo;
        CData/*0:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__overflow;
        CData/*0:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p1;
        CData/*0:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__p2;
        CData/*0:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f1;
        CData/*0:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__f2;
        CData/*1:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gmode;
        CData/*0:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__empty;
        CData/*0:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__epo;
        CData/*0:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__pae;
        CData/*0:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__underflow;
        CData/*0:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e1;
        CData/*0:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__e2;
        CData/*0:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o1;
        CData/*0:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__o2;
        CData/*1:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__bwl_sel;
        CData/*1:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gmode;
        VL_IN16(ADDR_A1_i,14,0);
        VL_IN16(ADDR_B1_i,14,0);
        VL_IN16(ADDR_A2_i,13,0);
        VL_IN16(ADDR_B2_i,13,0);
        SData/*14:0*/ __PVT__laddr_a1;
        SData/*14:0*/ __PVT__laddr_b1;
        SData/*12:0*/ __PVT__fifo36_ctl__DOT__pushtopop1;
        SData/*12:0*/ __PVT__fifo36_ctl__DOT__pushtopop2;
        SData/*12:0*/ __PVT__fifo36_ctl__DOT__poptopush1;
        SData/*12:0*/ __PVT__fifo36_ctl__DOT__poptopush2;
        SData/*12:0*/ __PVT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr;
        SData/*12:0*/ __PVT__fifo36_ctl__DOT__u_fifo_push__DOT__raddr;
        SData/*12:0*/ __PVT__fifo36_ctl__DOT__u_fifo_push__DOT__gcout_reg;
        SData/*12:0*/ __PVT__fifo36_ctl__DOT__u_fifo_push__DOT__waddr_next;
        SData/*12:0*/ __PVT__fifo36_ctl__DOT__u_fifo_push__DOT__tmp;
        SData/*11:0*/ __PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__ff_raddr;
        SData/*12:0*/ __PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__waddr;
        SData/*12:0*/ __PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__raddr;
        SData/*12:0*/ __PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__gcout_reg;
        SData/*12:0*/ __PVT__fifo36_ctl__DOT__u_fifo_pop__DOT__tmp;
        SData/*8:0*/ __PVT__u1__DOT__addr_a;
        SData/*8:0*/ __PVT__u1__DOT__addr_b;
        SData/*13:0*/ __PVT__u1__DOT__ram_addr_a;
        SData/*13:0*/ __PVT__u1__DOT__ram_addr_b;
        SData/*9:0*/ __PVT__u1__DOT__uram__DOT__laddr_a;
        SData/*9:0*/ __PVT__u1__DOT__uram__DOT__laddr_b;
        SData/*11:0*/ __PVT__u1__DOT__fifo_ctl__DOT__pushtopop1;
        SData/*11:0*/ __PVT__u1__DOT__fifo_ctl__DOT__pushtopop2;
        SData/*11:0*/ __PVT__u1__DOT__fifo_ctl__DOT__poptopush1;
        SData/*11:0*/ __PVT__u1__DOT__fifo_ctl__DOT__poptopush2;
        SData/*11:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr;
        SData/*11:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr;
        SData/*11:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg;
        SData/*11:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next;
        SData/*11:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr_next;
        SData/*11:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp;
    };
    struct {
        SData/*10:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr;
        SData/*11:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr;
        SData/*11:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr;
        SData/*11:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg;
        SData/*11:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next;
        SData/*11:0*/ __PVT__u1__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp;
        SData/*8:0*/ __PVT__u2__DOT__addr_a;
        SData/*8:0*/ __PVT__u2__DOT__addr_b;
        SData/*13:0*/ __PVT__u2__DOT__ram_addr_a;
        SData/*13:0*/ __PVT__u2__DOT__ram_addr_b;
        SData/*9:0*/ __PVT__u2__DOT__uram__DOT__laddr_a;
        SData/*9:0*/ __PVT__u2__DOT__uram__DOT__laddr_b;
        SData/*11:0*/ __PVT__u2__DOT__fifo_ctl__DOT__pushtopop1;
        SData/*11:0*/ __PVT__u2__DOT__fifo_ctl__DOT__pushtopop2;
        SData/*11:0*/ __PVT__u2__DOT__fifo_ctl__DOT__poptopush1;
        SData/*11:0*/ __PVT__u2__DOT__fifo_ctl__DOT__poptopush2;
        SData/*11:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr;
        SData/*11:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr;
        SData/*11:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__gcout_reg;
        SData/*11:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__raddr_next;
        SData/*11:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__waddr_next;
        SData/*11:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_push__DOT__tmp;
        SData/*10:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__ff_raddr;
        SData/*11:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr;
        SData/*11:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__raddr;
        SData/*11:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__gcout_reg;
        SData/*11:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__waddr_next;
        SData/*11:0*/ __PVT__u2__DOT__fifo_ctl__DOT__u_fifo_pop__DOT__tmp;
        VL_IN(WDATA_A1_i,17,0);
        VL_IN(WDATA_B1_i,17,0);
        VL_OUT(RDATA_A1_o,17,0);
        VL_OUT(RDATA_B1_o,17,0);
        VL_IN(WDATA_A2_i,17,0);
        VL_IN(WDATA_B2_i,17,0);
        VL_OUT(__PVT__RDATA_A2_o,17,0);
        VL_OUT(__PVT__RDATA_B2_o,17,0);
        IData/*17:0*/ __PVT__ram_rdata_a1;
        IData/*17:0*/ __PVT__ram_rdata_b1;
        IData/*17:0*/ __PVT__ram_rdata_a2;
        IData/*17:0*/ __PVT__ram_rdata_b2;
        IData/*17:0*/ __PVT__pl_dout0;
        IData/*17:0*/ __PVT__pl_dout1;
        IData/*17:0*/ __PVT__u1__DOT__wmsk_a;
        IData/*17:0*/ __PVT__u1__DOT__wmsk_b;
        IData/*17:0*/ __PVT__u1__DOT__ram_rdata_a;
        IData/*17:0*/ __PVT__u1__DOT__ram_rdata_b;
        IData/*17:0*/ __PVT__u1__DOT__uram__DOT__lwdata_a;
        IData/*17:0*/ __PVT__u1__DOT__uram__DOT__lwdata_b;
        IData/*17:0*/ __PVT__u1__DOT__uram__DOT__lwmsk_a;
        IData/*17:0*/ __PVT__u1__DOT__uram__DOT__lwmsk_b;
        IData/*31:0*/ __PVT__u1__DOT__uram__DOT__unnamedblk1__DOT__i;
        IData/*17:0*/ __PVT__u2__DOT__wmsk_a;
        IData/*17:0*/ __PVT__u2__DOT__wmsk_b;
        IData/*17:0*/ __PVT__u2__DOT__ram_rdata_a;
        IData/*17:0*/ __PVT__u2__DOT__ram_rdata_b;
        IData/*17:0*/ __PVT__u2__DOT__uram__DOT__lwdata_a;
        IData/*17:0*/ __PVT__u2__DOT__uram__DOT__lwdata_b;
        IData/*17:0*/ __PVT__u2__DOT__uram__DOT__lwmsk_a;
        IData/*17:0*/ __PVT__u2__DOT__uram__DOT__lwmsk_b;
        IData/*31:0*/ __PVT__u2__DOT__uram__DOT__unnamedblk1__DOT__i;
        VlUnpacked<IData/*17:0*/, 1024> __PVT__u1__DOT__uram__DOT__ram;
        VlUnpacked<IData/*17:0*/, 1024> __PVT__u2__DOT__uram__DOT__ram;
    };

    // INTERNAL VARIABLES
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1(Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms* symsp, const char* name);
    ~Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1();
    VL_UNCOPYABLE(Vco_sim_sdp_nsplit_ram_1024x36_R4W4_TDP36K__Mz1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
