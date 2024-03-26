// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vco_sim_mac_32__pch.h"
#include "Vco_sim_mac_32.h"
#include "Vco_sim_mac_32___024root.h"

// FUNCTIONS
Vco_sim_mac_32__Syms::~Vco_sim_mac_32__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vco_sim_mac_32__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vco_sim_mac_32__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedFstC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vco_sim_mac_32__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vco_sim_mac_32__Syms::Vco_sim_mac_32__Syms(VerilatedContext* contextp, const char* namep, Vco_sim_mac_32* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(384);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-15);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_co_sim_mac_32__netlist____024flatten__05cgenblk1__05b0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5.configure(this, name(), "co_sim_mac_32.netlist.$flatten\\genblk1[0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5", "$flatten\\genblk1[0____Vhsh707viSFBO9pV8wDujE1ZWOPJQVKoNV579uQU3eS5", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_mac_32__netlist____024flatten__05cgenblk1__05b1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE.configure(this, name(), "co_sim_mac_32.netlist.$flatten\\genblk1[1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE", "$flatten\\genblk1[1____VhshNdMqWIjhft0qp9NFB3U3WLfeKakHJU66ZePOHoWE", -9, VerilatedScope::SCOPE_OTHER);
}
