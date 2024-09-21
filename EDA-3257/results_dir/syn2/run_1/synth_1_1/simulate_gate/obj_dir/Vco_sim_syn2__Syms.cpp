// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2.h"
#include "Vco_sim_syn2___024root.h"
#include "Vco_sim_syn2_fpu_mul.h"
#include "Vco_sim_syn2_fpu_add.h"
#include "Vco_sim_syn2_post_norm.h"

// FUNCTIONS
Vco_sim_syn2__Syms::~Vco_sim_syn2__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vco_sim_syn2__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vco_sim_syn2__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedFstC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vco_sim_syn2__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vco_sim_syn2__Syms::Vco_sim_syn2__Syms(VerilatedContext* contextp, const char* namep, Vco_sim_syn2* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__co_sim_syn2__DOT__golden__DOT__add1_add{this, Verilated::catName(namep, "co_sim_syn2.golden.add1_add")}
    , TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4{this, Verilated::catName(namep, "co_sim_syn2.golden.add1_add.u4")}
    , TOP__co_sim_syn2__DOT__golden__DOT__add2_add{this, Verilated::catName(namep, "co_sim_syn2.golden.add2_add")}
    , TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4{this, Verilated::catName(namep, "co_sim_syn2.golden.add2_add.u4")}
    , TOP__co_sim_syn2__DOT__golden__DOT__add3_add{this, Verilated::catName(namep, "co_sim_syn2.golden.add3_add")}
    , TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4{this, Verilated::catName(namep, "co_sim_syn2.golden.add3_add.u4")}
    , TOP__co_sim_syn2__DOT__golden__DOT__add4_add{this, Verilated::catName(namep, "co_sim_syn2.golden.add4_add")}
    , TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4{this, Verilated::catName(namep, "co_sim_syn2.golden.add4_add.u4")}
    , TOP__co_sim_syn2__DOT__golden__DOT__add5_add{this, Verilated::catName(namep, "co_sim_syn2.golden.add5_add")}
    , TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4{this, Verilated::catName(namep, "co_sim_syn2.golden.add5_add.u4")}
    , TOP__co_sim_syn2__DOT__golden__DOT__x1_mul{this, Verilated::catName(namep, "co_sim_syn2.golden.x1_mul")}
    , TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4{this, Verilated::catName(namep, "co_sim_syn2.golden.x1_mul.u4")}
    , TOP__co_sim_syn2__DOT__golden__DOT__x2_mul{this, Verilated::catName(namep, "co_sim_syn2.golden.x2_mul")}
    , TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4{this, Verilated::catName(namep, "co_sim_syn2.golden.x2_mul.u4")}
    , TOP__co_sim_syn2__DOT__golden__DOT__x3_mul{this, Verilated::catName(namep, "co_sim_syn2.golden.x3_mul")}
    , TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4{this, Verilated::catName(namep, "co_sim_syn2.golden.x3_mul.u4")}
    , TOP__co_sim_syn2__DOT__golden__DOT__x4_mul{this, Verilated::catName(namep, "co_sim_syn2.golden.x4_mul")}
    , TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4{this, Verilated::catName(namep, "co_sim_syn2.golden.x4_mul.u4")}
{
        // Check resources
        Verilated::stackCheck(252);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-14);
    // Setup each module's pointers to their submodules
    TOP.__PVT__co_sim_syn2__DOT__golden__DOT__add1_add = &TOP__co_sim_syn2__DOT__golden__DOT__add1_add;
    TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__PVT__u4 = &TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4;
    TOP.__PVT__co_sim_syn2__DOT__golden__DOT__add2_add = &TOP__co_sim_syn2__DOT__golden__DOT__add2_add;
    TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__PVT__u4 = &TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4;
    TOP.__PVT__co_sim_syn2__DOT__golden__DOT__add3_add = &TOP__co_sim_syn2__DOT__golden__DOT__add3_add;
    TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__PVT__u4 = &TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4;
    TOP.__PVT__co_sim_syn2__DOT__golden__DOT__add4_add = &TOP__co_sim_syn2__DOT__golden__DOT__add4_add;
    TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__PVT__u4 = &TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4;
    TOP.__PVT__co_sim_syn2__DOT__golden__DOT__add5_add = &TOP__co_sim_syn2__DOT__golden__DOT__add5_add;
    TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__PVT__u4 = &TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4;
    TOP.__PVT__co_sim_syn2__DOT__golden__DOT__x1_mul = &TOP__co_sim_syn2__DOT__golden__DOT__x1_mul;
    TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__PVT__u4 = &TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4;
    TOP.__PVT__co_sim_syn2__DOT__golden__DOT__x2_mul = &TOP__co_sim_syn2__DOT__golden__DOT__x2_mul;
    TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__PVT__u4 = &TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4;
    TOP.__PVT__co_sim_syn2__DOT__golden__DOT__x3_mul = &TOP__co_sim_syn2__DOT__golden__DOT__x3_mul;
    TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__PVT__u4 = &TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4;
    TOP.__PVT__co_sim_syn2__DOT__golden__DOT__x4_mul = &TOP__co_sim_syn2__DOT__golden__DOT__x4_mul;
    TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__PVT__u4 = &TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__Vconfigure(true);
    TOP__co_sim_syn2__DOT__golden__DOT__add1_add__u4.__Vconfigure(true);
    TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__add2_add__u4.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__add3_add__u4.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__add4_add__u4.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__add5_add__u4.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__Vconfigure(true);
    TOP__co_sim_syn2__DOT__golden__DOT__x1_mul__u4.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__x2_mul__u4.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__x3_mul__u4.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__x4_mul__u4.__Vconfigure(false);
    // Setup scopes
    __Vscope_co_sim_syn2.configure(this, name(), "co_sim_syn2", "co_sim_syn2", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_syn2__golden__add1_add__u1.configure(this, name(), "co_sim_syn2.golden.add1_add.u1", "u1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_syn2__golden__add2_add__u1.configure(this, name(), "co_sim_syn2.golden.add2_add.u1", "u1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_syn2__golden__add3_add__u1.configure(this, name(), "co_sim_syn2.golden.add3_add.u1", "u1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_syn2__golden__add4_add__u1.configure(this, name(), "co_sim_syn2.golden.add4_add.u1", "u1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_syn2__golden__add5_add__u1.configure(this, name(), "co_sim_syn2.golden.add5_add.u1", "u1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_syn2__synth_net____024flatten__05cx1_mul__02e____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS.configure(this, name(), "co_sim_syn2.synth_net.$flatten\\x1_mul.____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS", "____VhshBxuRHTityI6iNNr10ryRBgO0QSIwvuCbCbbMbmoS", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_syn2__synth_net____024flatten__05cx2_mul__02e____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p.configure(this, name(), "co_sim_syn2.synth_net.$flatten\\x2_mul.____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p", "____VhshRrFaYytnw6nIQuniAWQqJkW5QVsD3bb3eiMl2E4p", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_syn2__synth_net____024flatten__05cx3_mul__02e____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC.configure(this, name(), "co_sim_syn2.synth_net.$flatten\\x3_mul.____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC", "____VhshWScOvPjVsHc5N4LU1a7DMLFW9Mbt76PiveC4emTC", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_syn2__synth_net____024flatten__05cx4_mul__02e____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc.configure(this, name(), "co_sim_syn2.synth_net.$flatten\\x4_mul.____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc", "____VhshiHk0hBnMBg5YmEz4uFPvtCA3Y2PVaOtAj79meNrc", -9, VerilatedScope::SCOPE_OTHER);
}
