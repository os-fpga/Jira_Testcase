// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms.h"
#include "Vco_sim_sdp_nsplit_ram_1024x36_R4W4.h"
#include "Vco_sim_sdp_nsplit_ram_1024x36_R4W4___024root.h"

// FUNCTIONS
Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms::~Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdSc();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms::Vco_sim_sdp_nsplit_ram_1024x36_R4W4__Syms(VerilatedContext* contextp, const char* namep, Vco_sim_sdp_nsplit_ram_1024x36_R4W4* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
