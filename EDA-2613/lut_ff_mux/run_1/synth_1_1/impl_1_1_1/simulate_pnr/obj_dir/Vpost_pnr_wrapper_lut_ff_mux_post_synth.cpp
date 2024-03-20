// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpost_pnr_wrapper_lut_ff_mux_post_synth__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vpost_pnr_wrapper_lut_ff_mux_post_synth::Vpost_pnr_wrapper_lut_ff_mux_post_synth(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , in{vlSymsp->TOP.in}
    , rst{vlSymsp->TOP.rst}
    , Q{vlSymsp->TOP.Q}
    , mux_sel{vlSymsp->TOP.mux_sel}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpost_pnr_wrapper_lut_ff_mux_post_synth::Vpost_pnr_wrapper_lut_ff_mux_post_synth(const char* _vcname__)
    : Vpost_pnr_wrapper_lut_ff_mux_post_synth(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpost_pnr_wrapper_lut_ff_mux_post_synth::~Vpost_pnr_wrapper_lut_ff_mux_post_synth() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_debug_assertions(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf);
#endif  // VL_DEBUG
void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_static(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf);
void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_initial(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf);
void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_settle(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf);
void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf);

void Vpost_pnr_wrapper_lut_ff_mux_post_synth::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpost_pnr_wrapper_lut_ff_mux_post_synth::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_static(&(vlSymsp->TOP));
        Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_initial(&(vlSymsp->TOP));
        Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpost_pnr_wrapper_lut_ff_mux_post_synth::eventsPending() { return false; }

uint64_t Vpost_pnr_wrapper_lut_ff_mux_post_synth::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpost_pnr_wrapper_lut_ff_mux_post_synth::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_final(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf);

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth::final() {
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpost_pnr_wrapper_lut_ff_mux_post_synth::hierName() const { return vlSymsp->name(); }
const char* Vpost_pnr_wrapper_lut_ff_mux_post_synth::modelName() const { return "Vpost_pnr_wrapper_lut_ff_mux_post_synth"; }
unsigned Vpost_pnr_wrapper_lut_ff_mux_post_synth::threads() const { return 1; }
void Vpost_pnr_wrapper_lut_ff_mux_post_synth::prepareClone() const { contextp()->prepareClone(); }
void Vpost_pnr_wrapper_lut_ff_mux_post_synth::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vpost_pnr_wrapper_lut_ff_mux_post_synth::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_decl_types(VerilatedFst* tracep);

void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_init_top(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root*>(voidSelf);
    Vpost_pnr_wrapper_lut_ff_mux_post_synth__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_decl_types(tracep);
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_register(Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vpost_pnr_wrapper_lut_ff_mux_post_synth::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpost_pnr_wrapper_lut_ff_mux_post_synth::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpost_pnr_wrapper_lut_ff_mux_post_synth___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
