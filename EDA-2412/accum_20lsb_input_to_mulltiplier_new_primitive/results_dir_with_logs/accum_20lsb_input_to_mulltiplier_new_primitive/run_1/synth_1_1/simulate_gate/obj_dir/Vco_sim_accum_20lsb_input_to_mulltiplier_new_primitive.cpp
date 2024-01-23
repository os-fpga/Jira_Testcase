// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive.h"
#include "Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive__Syms.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive::Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive::Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive(const char* _vcname__)
    : Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive::~Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root___eval_debug_assertions(Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root* vlSelf);
#endif  // VL_DEBUG
void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root___eval_static(Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root* vlSelf);
void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root___eval_initial(Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root* vlSelf);
void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root___eval_settle(Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root* vlSelf);
void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root___eval(Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root* vlSelf);

void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root___eval_static(&(vlSymsp->TOP));
        Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root___eval_initial(&(vlSymsp->TOP));
        Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root___eval_final(Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root* vlSelf);

VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive::final() {
    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive::hierName() const { return vlSymsp->name(); }
const char* Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive::modelName() const { return "Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive"; }
unsigned Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_init_top(Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root*>(voidSelf);
    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_register(Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vco_sim_accum_20lsb_input_to_mulltiplier_new_primitive___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
