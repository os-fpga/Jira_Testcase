// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vco_sim_syn2__pch.h"
#include "Vco_sim_syn2.h"
#include "Vco_sim_syn2___024root.h"
#include "Vco_sim_syn2_fpu_mul.h"
#include "Vco_sim_syn2_fpu_add.h"

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
    , TOP__co_sim_syn2__DOT__golden__DOT__add2_add{this, Verilated::catName(namep, "co_sim_syn2.golden.add2_add")}
    , TOP__co_sim_syn2__DOT__golden__DOT__add3_add{this, Verilated::catName(namep, "co_sim_syn2.golden.add3_add")}
    , TOP__co_sim_syn2__DOT__golden__DOT__add4_add{this, Verilated::catName(namep, "co_sim_syn2.golden.add4_add")}
    , TOP__co_sim_syn2__DOT__golden__DOT__add5_add{this, Verilated::catName(namep, "co_sim_syn2.golden.add5_add")}
    , TOP__co_sim_syn2__DOT__golden__DOT__x1_mul{this, Verilated::catName(namep, "co_sim_syn2.golden.x1_mul")}
    , TOP__co_sim_syn2__DOT__golden__DOT__x2_mul{this, Verilated::catName(namep, "co_sim_syn2.golden.x2_mul")}
    , TOP__co_sim_syn2__DOT__golden__DOT__x3_mul{this, Verilated::catName(namep, "co_sim_syn2.golden.x3_mul")}
    , TOP__co_sim_syn2__DOT__golden__DOT__x4_mul{this, Verilated::catName(namep, "co_sim_syn2.golden.x4_mul")}
{
        // Check resources
        Verilated::stackCheck(264);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-14);
    // Setup each module's pointers to their submodules
    TOP.__PVT__co_sim_syn2__DOT__golden__DOT__add1_add = &TOP__co_sim_syn2__DOT__golden__DOT__add1_add;
    TOP.__PVT__co_sim_syn2__DOT__golden__DOT__add2_add = &TOP__co_sim_syn2__DOT__golden__DOT__add2_add;
    TOP.__PVT__co_sim_syn2__DOT__golden__DOT__add3_add = &TOP__co_sim_syn2__DOT__golden__DOT__add3_add;
    TOP.__PVT__co_sim_syn2__DOT__golden__DOT__add4_add = &TOP__co_sim_syn2__DOT__golden__DOT__add4_add;
    TOP.__PVT__co_sim_syn2__DOT__golden__DOT__add5_add = &TOP__co_sim_syn2__DOT__golden__DOT__add5_add;
    TOP.__PVT__co_sim_syn2__DOT__golden__DOT__x1_mul = &TOP__co_sim_syn2__DOT__golden__DOT__x1_mul;
    TOP.__PVT__co_sim_syn2__DOT__golden__DOT__x2_mul = &TOP__co_sim_syn2__DOT__golden__DOT__x2_mul;
    TOP.__PVT__co_sim_syn2__DOT__golden__DOT__x3_mul = &TOP__co_sim_syn2__DOT__golden__DOT__x3_mul;
    TOP.__PVT__co_sim_syn2__DOT__golden__DOT__x4_mul = &TOP__co_sim_syn2__DOT__golden__DOT__x4_mul;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__co_sim_syn2__DOT__golden__DOT__add1_add.__Vconfigure(true);
    TOP__co_sim_syn2__DOT__golden__DOT__add2_add.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__add3_add.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__add4_add.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__add5_add.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__x1_mul.__Vconfigure(true);
    TOP__co_sim_syn2__DOT__golden__DOT__x2_mul.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__x3_mul.__Vconfigure(false);
    TOP__co_sim_syn2__DOT__golden__DOT__x4_mul.__Vconfigure(false);
    // Setup scopes
    __Vscope_co_sim_syn2.configure(this, name(), "co_sim_syn2", "co_sim_syn2", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_syn2__golden__add1_add__u1.configure(this, name(), "co_sim_syn2.golden.add1_add.u1", "u1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_syn2__golden__add2_add__u1.configure(this, name(), "co_sim_syn2.golden.add2_add.u1", "u1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_syn2__golden__add3_add__u1.configure(this, name(), "co_sim_syn2.golden.add3_add.u1", "u1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_syn2__golden__add4_add__u1.configure(this, name(), "co_sim_syn2.golden.add4_add.u1", "u1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_syn2__golden__add5_add__u1.configure(this, name(), "co_sim_syn2.golden.add5_add.u1", "u1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_syn2__route_net__fabric_instance__RS_DSP_MULT_REGIN_REGOUT___024auto_5911__02eB__05b37__05d__genblk1__DSP38_MULT_REGIN_REGOUT.configure(this, name(), "co_sim_syn2.route_net.fabric_instance.RS_DSP_MULT_REGIN_REGOUT_$auto_5911.B[37].genblk1.DSP38_MULT_REGIN_REGOUT", "DSP38_MULT_REGIN_REGOUT", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_syn2__route_net__fabric_instance__RS_DSP_MULT_REGIN_REGOUT___024auto_6180__02eB__05b37__05d__genblk1__DSP38_MULT_REGIN_REGOUT.configure(this, name(), "co_sim_syn2.route_net.fabric_instance.RS_DSP_MULT_REGIN_REGOUT_$auto_6180.B[37].genblk1.DSP38_MULT_REGIN_REGOUT", "DSP38_MULT_REGIN_REGOUT", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_syn2__route_net__fabric_instance__RS_DSP_MULT_REGIN_REGOUT___024auto_6186__02eB__05b37__05d__genblk1__DSP38_MULT_REGIN_REGOUT.configure(this, name(), "co_sim_syn2.route_net.fabric_instance.RS_DSP_MULT_REGIN_REGOUT_$auto_6186.B[37].genblk1.DSP38_MULT_REGIN_REGOUT", "DSP38_MULT_REGIN_REGOUT", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_syn2__route_net__fabric_instance__RS_DSP_MULT_REGIN_REGOUT___024auto_6192__02eB__05b37__05d__genblk1__DSP38_MULT_REGIN_REGOUT.configure(this, name(), "co_sim_syn2.route_net.fabric_instance.RS_DSP_MULT_REGIN_REGOUT_$auto_6192.B[37].genblk1.DSP38_MULT_REGIN_REGOUT", "DSP38_MULT_REGIN_REGOUT", -9, VerilatedScope::SCOPE_OTHER);
}
