// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsqrt_binary_search__pch.h"

//============================================================
// Constructors

Vsqrt_binary_search::Vsqrt_binary_search(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsqrt_binary_search__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , start{vlSymsp->TOP.start}
    , busy{vlSymsp->TOP.busy}
    , valid{vlSymsp->TOP.valid}
    , x{vlSymsp->TOP.x}
    , sqrt{vlSymsp->TOP.sqrt}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsqrt_binary_search::Vsqrt_binary_search(const char* _vcname__)
    : Vsqrt_binary_search(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsqrt_binary_search::~Vsqrt_binary_search() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsqrt_binary_search___024root___eval_debug_assertions(Vsqrt_binary_search___024root* vlSelf);
#endif  // VL_DEBUG
void Vsqrt_binary_search___024root___eval_static(Vsqrt_binary_search___024root* vlSelf);
void Vsqrt_binary_search___024root___eval_initial(Vsqrt_binary_search___024root* vlSelf);
void Vsqrt_binary_search___024root___eval_settle(Vsqrt_binary_search___024root* vlSelf);
void Vsqrt_binary_search___024root___eval(Vsqrt_binary_search___024root* vlSelf);

void Vsqrt_binary_search::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsqrt_binary_search::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsqrt_binary_search___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsqrt_binary_search___024root___eval_static(&(vlSymsp->TOP));
        Vsqrt_binary_search___024root___eval_initial(&(vlSymsp->TOP));
        Vsqrt_binary_search___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsqrt_binary_search___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsqrt_binary_search::eventsPending() { return false; }

uint64_t Vsqrt_binary_search::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsqrt_binary_search::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsqrt_binary_search___024root___eval_final(Vsqrt_binary_search___024root* vlSelf);

VL_ATTR_COLD void Vsqrt_binary_search::final() {
    Vsqrt_binary_search___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsqrt_binary_search::hierName() const { return vlSymsp->name(); }
const char* Vsqrt_binary_search::modelName() const { return "Vsqrt_binary_search"; }
unsigned Vsqrt_binary_search::threads() const { return 1; }
void Vsqrt_binary_search::prepareClone() const { contextp()->prepareClone(); }
void Vsqrt_binary_search::atClone() const {
    contextp()->threadPoolpOnClone();
}
