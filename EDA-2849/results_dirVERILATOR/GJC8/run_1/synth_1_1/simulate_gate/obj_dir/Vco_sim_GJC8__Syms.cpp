// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vco_sim_GJC8__pch.h"
#include "Vco_sim_GJC8.h"
#include "Vco_sim_GJC8___024root.h"

// FUNCTIONS
Vco_sim_GJC8__Syms::~Vco_sim_GJC8__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vco_sim_GJC8__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vco_sim_GJC8__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedFstC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vco_sim_GJC8__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vco_sim_GJC8__Syms::Vco_sim_GJC8__Syms(VerilatedContext* contextp, const char* namep, Vco_sim_GJC8* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(18);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-15);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_co_sim_GJC8__golden__dut.configure(this, name(), "co_sim_GJC8.golden.dut", "dut", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_GJC8__synth_net__dut.configure(this, name(), "co_sim_GJC8.synth_net.dut", "dut", -9, VerilatedScope::SCOPE_OTHER);
}
