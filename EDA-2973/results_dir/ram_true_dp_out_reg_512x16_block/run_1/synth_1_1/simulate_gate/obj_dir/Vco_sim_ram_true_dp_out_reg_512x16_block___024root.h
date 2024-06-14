// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vco_sim_ram_true_dp_out_reg_512x16_block.h for the primary calling header

#ifndef VERILATED_VCO_SIM_RAM_TRUE_DP_OUT_REG_512X16_BLOCK___024ROOT_H_
#define VERILATED_VCO_SIM_RAM_TRUE_DP_OUT_REG_512X16_BLOCK___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vco_sim_ram_true_dp_out_reg_512x16_block__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vco_sim_ram_true_dp_out_reg_512x16_block___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__clk;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_write_flag;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_write_flag;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_read_flag;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_read_flag;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_write_flag;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_write_flag;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_read_flag;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_read_flag;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__weA;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__weB;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__reA;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__reB;
        CData/*6:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__cycle;
        CData/*6:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__i;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b0__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b1__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b2__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b3__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b15__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b14__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b13__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b12__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b11__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b10__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b9__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b8__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b7__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b6__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b5__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b4__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b3__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b2__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b1__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__024102__05b0__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutB__05b15__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutB__05b14__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutB__05b13__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutB__05b12__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutB__05b11__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutB__05b10__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutB__05b9__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutB__05b8__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutB__05b7__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutB__05b6__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutB__05b5__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutB__05b4__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutB__05b2__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutB__05b1__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutB__05b0__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutA__05b15__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutA__05b14__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutA__05b12__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutA__05b11__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutA__05b10__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutA__05b9__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutA__05b8__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutA__05b7__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutA__05b6__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutA__05b5__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutA__05b4__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutA__05b3__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutA__05b2__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutA__05b1__05d;
    };
    struct {
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024iopadmap__024doutA__05b0__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b14__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b9__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b10__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b15__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__024103;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2438__03aexecute__02496;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b11__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b12__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b5__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b6__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b4__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b8__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b13__05d;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024auto__024memory_libmap__02ecc__03a2437__03aexecute__02495__05b7__05d;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RPARITY_B1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RPARITY_A1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242650__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242651__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242652__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242653__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242654__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242655__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242656__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242657__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242658__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242659__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242660__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242661__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242662__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242663__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242664__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242665__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242666__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242667__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242668__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242669__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242670__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242671__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242672__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242673__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242674__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242675__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242676__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242677__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242678__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242679__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242680__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____024abc__0242649__024auto__024blifparse__02ecc__03a535__03aparse_blif__0242681__DOT__s1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__temp_WPARITY_A1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__temp_WPARITY_B1;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__temp_WPARITY_A2;
        CData/*1:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__temp_WPARITY_B2;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__temp_WDATA_A2;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__temp_WDATA_B2;
        CData/*0:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT____Vlvbound_hf948b197__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_write_flag__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_read_flag__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_write_flag__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_read_flag__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_write_flag__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a2_read_flag__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_write_flag__0;
    };
    struct {
        CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b2_read_flag__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__co_sim_ram_true_dp_out_reg_512x16_block__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrA;
        SData/*8:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__addrB;
        SData/*15:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinA;
        SData/*15:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__dinB;
        SData/*15:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__doutA;
        SData/*15:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__doutB;
        SData/*15:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_B1;
        SData/*15:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT____Vcellout__ram__02e0__02e0__RDATA_A1;
        SData/*9:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_a_address;
        SData/*9:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__collision_b_address;
        SData/*15:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__temp_WDATA_A1;
        SData/*15:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__temp_WDATA_B1;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__mismatch;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__f;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__g;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__h;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__i;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__j;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__k;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__m;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__a;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__b;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__c;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__l;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__n;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__p;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__r;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__f_p;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__g_p;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__h_p;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__i_p;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__j_p;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__k_p;
        IData/*31:0*/ co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__m_p;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*15:0*/, 512> co_sim_ram_true_dp_out_reg_512x16_block__DOT__golden__DOT__ram;
        VlUnpacked<SData/*15:0*/, 1024> co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__RAM1_DATA;
        VlUnpacked<CData/*1:0*/, 1024> co_sim_ram_true_dp_out_reg_512x16_block__DOT__netlist__DOT__ram__02e0__02e0__DOT__parity_RAM1__DOT__RAM1_PARITY;
        VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc8cb6c27__0;
    VlTriggerScheduler __VtrigSched_hc8cb6b68__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<11> __VactTriggered;
    VlTriggerVec<11> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vco_sim_ram_true_dp_out_reg_512x16_block___024root(Vco_sim_ram_true_dp_out_reg_512x16_block__Syms* symsp, const char* v__name);
    ~Vco_sim_ram_true_dp_out_reg_512x16_block___024root();
    VL_UNCOPYABLE(Vco_sim_ram_true_dp_out_reg_512x16_block___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
