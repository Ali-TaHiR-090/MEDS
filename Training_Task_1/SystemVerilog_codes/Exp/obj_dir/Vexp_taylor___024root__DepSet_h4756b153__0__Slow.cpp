// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexp_taylor.h for the primary calling header

#include "Vexp_taylor__pch.h"
#include "Vexp_taylor___024root.h"

VL_ATTR_COLD void Vexp_taylor___024root___eval_static(Vexp_taylor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp_taylor___024root___eval_static\n"); );
    Vexp_taylor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vexp_taylor___024root___eval_initial__TOP(Vexp_taylor___024root* vlSelf);

VL_ATTR_COLD void Vexp_taylor___024root___eval_initial(Vexp_taylor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp_taylor___024root___eval_initial\n"); );
    Vexp_taylor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vexp_taylor___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vexp_taylor___024root___eval_initial__TOP(Vexp_taylor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp_taylor___024root___eval_initial__TOP\n"); );
    Vexp_taylor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.exp_taylor__DOT__factorial[0U] = 0x100U;
    vlSelfRef.exp_taylor__DOT__factorial[1U] = 0x100U;
    vlSelfRef.exp_taylor__DOT__factorial[2U] = 0x200U;
    vlSelfRef.exp_taylor__DOT__factorial[3U] = 0x600U;
    vlSelfRef.exp_taylor__DOT__factorial[4U] = 0x1800U;
    vlSelfRef.exp_taylor__DOT__factorial[5U] = 0x7800U;
    vlSelfRef.exp_taylor__DOT__factorial[6U] = 0xd000U;
    vlSelfRef.exp_taylor__DOT__factorial[7U] = 0xb000U;
}

VL_ATTR_COLD void Vexp_taylor___024root___eval_final(Vexp_taylor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp_taylor___024root___eval_final\n"); );
    Vexp_taylor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexp_taylor___024root___dump_triggers__stl(Vexp_taylor___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vexp_taylor___024root___eval_phase__stl(Vexp_taylor___024root* vlSelf);

VL_ATTR_COLD void Vexp_taylor___024root___eval_settle(Vexp_taylor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp_taylor___024root___eval_settle\n"); );
    Vexp_taylor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vexp_taylor___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("exp_taylor.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vexp_taylor___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexp_taylor___024root___dump_triggers__stl(Vexp_taylor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp_taylor___024root___dump_triggers__stl\n"); );
    Vexp_taylor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vexp_taylor___024root___ico_sequent__TOP__0(Vexp_taylor___024root* vlSelf);

VL_ATTR_COLD void Vexp_taylor___024root___eval_stl(Vexp_taylor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp_taylor___024root___eval_stl\n"); );
    Vexp_taylor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vexp_taylor___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vexp_taylor___024root___eval_triggers__stl(Vexp_taylor___024root* vlSelf);

VL_ATTR_COLD bool Vexp_taylor___024root___eval_phase__stl(Vexp_taylor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp_taylor___024root___eval_phase__stl\n"); );
    Vexp_taylor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vexp_taylor___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vexp_taylor___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexp_taylor___024root___dump_triggers__ico(Vexp_taylor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp_taylor___024root___dump_triggers__ico\n"); );
    Vexp_taylor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexp_taylor___024root___dump_triggers__act(Vexp_taylor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp_taylor___024root___dump_triggers__act\n"); );
    Vexp_taylor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexp_taylor___024root___dump_triggers__nba(Vexp_taylor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp_taylor___024root___dump_triggers__nba\n"); );
    Vexp_taylor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vexp_taylor___024root___ctor_var_reset(Vexp_taylor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp_taylor___024root___ctor_var_reset\n"); );
    Vexp_taylor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->x = VL_RAND_RESET_I(16);
    vlSelf->result = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->exp_taylor__DOT__term[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->exp_taylor__DOT__factorial[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->exp_taylor__DOT__x_power[__Vi0] = VL_RAND_RESET_I(16);
    }
}
