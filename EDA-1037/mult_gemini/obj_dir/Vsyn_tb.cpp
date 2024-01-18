// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsyn_tb.h"
#include "Vsyn_tb__Syms.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vsyn_tb::Vsyn_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsyn_tb__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rstn{vlSymsp->TOP.rstn}
    , rtl_q{vlSymsp->TOP.rtl_q}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsyn_tb::Vsyn_tb(const char* _vcname__)
    : Vsyn_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsyn_tb::~Vsyn_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsyn_tb___024root___eval_debug_assertions(Vsyn_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vsyn_tb___024root___eval_static(Vsyn_tb___024root* vlSelf);
void Vsyn_tb___024root___eval_initial(Vsyn_tb___024root* vlSelf);
void Vsyn_tb___024root___eval_settle(Vsyn_tb___024root* vlSelf);
void Vsyn_tb___024root___eval(Vsyn_tb___024root* vlSelf);

void Vsyn_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsyn_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsyn_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsyn_tb___024root___eval_static(&(vlSymsp->TOP));
        Vsyn_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vsyn_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsyn_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
}

//============================================================
// Events and timing
bool Vsyn_tb::eventsPending() { return false; }

uint64_t Vsyn_tb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsyn_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsyn_tb___024root___eval_final(Vsyn_tb___024root* vlSelf);

VL_ATTR_COLD void Vsyn_tb::final() {
    Vsyn_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsyn_tb::hierName() const { return vlSymsp->name(); }
const char* Vsyn_tb::modelName() const { return "Vsyn_tb"; }
unsigned Vsyn_tb::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vsyn_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsyn_tb___024root__trace_init_top(Vsyn_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsyn_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsyn_tb___024root*>(voidSelf);
    Vsyn_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vsyn_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vsyn_tb___024root__trace_register(Vsyn_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vsyn_tb::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsyn_tb::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsyn_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
