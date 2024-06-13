// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vco_sim_DSP_MULTACC_TEST__pch.h"
#include "Vco_sim_DSP_MULTACC_TEST.h"
#include "Vco_sim_DSP_MULTACC_TEST___024root.h"

// FUNCTIONS
Vco_sim_DSP_MULTACC_TEST__Syms::~Vco_sim_DSP_MULTACC_TEST__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vco_sim_DSP_MULTACC_TEST__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vco_sim_DSP_MULTACC_TEST__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedFstC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vco_sim_DSP_MULTACC_TEST__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vco_sim_DSP_MULTACC_TEST__Syms::Vco_sim_DSP_MULTACC_TEST__Syms(VerilatedContext* contextp, const char* namep, Vco_sim_DSP_MULTACC_TEST* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(26);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-15);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_co_sim_DSP_MULTACC_TEST__golden__dut_multacc.configure(this, name(), "co_sim_DSP_MULTACC_TEST.golden.dut_multacc", "dut_multacc", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_DSP_MULTACC_TEST__golden__dut_multadd.configure(this, name(), "co_sim_DSP_MULTACC_TEST.golden.dut_multadd", "dut_multadd", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_DSP_MULTACC_TEST__route_net____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__RS_DSP_MULTACC___024iopadmap__024z_multacc__05b37__05d__genblk1__DSP38_MULTACC.configure(this, name(), "co_sim_DSP_MULTACC_TEST.route_net.$auto$rs_design_edit.cc:1291:execute$598.RS_DSP_MULTACC_$iopadmap$z_multacc[37].genblk1.DSP38_MULTACC", "DSP38_MULTACC", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_co_sim_DSP_MULTACC_TEST__route_net____024auto__024rs_design_edit__02ecc__03a1291__03aexecute__024598__RS_DSP_MULTADD___024iopadmap__024z_multadd__05b37__05d__genblk1__DSP38_MULTADD.configure(this, name(), "co_sim_DSP_MULTACC_TEST.route_net.$auto$rs_design_edit.cc:1291:execute$598.RS_DSP_MULTADD_$iopadmap$z_multadd[37].genblk1.DSP38_MULTADD", "DSP38_MULTADD", -9, VerilatedScope::SCOPE_OTHER);
}
