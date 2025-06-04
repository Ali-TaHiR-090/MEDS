// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsqrt_binary_search.h for the primary calling header

#include "Vsqrt_binary_search__pch.h"
#include "Vsqrt_binary_search___024root.h"

VL_ATTR_COLD void Vsqrt_binary_search___024root___eval_static(Vsqrt_binary_search___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_binary_search___024root___eval_static\n"); );
    Vsqrt_binary_search__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vsqrt_binary_search___024root___eval_initial__TOP(Vsqrt_binary_search___024root* vlSelf);

VL_ATTR_COLD void Vsqrt_binary_search___024root___eval_initial(Vsqrt_binary_search___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_binary_search___024root___eval_initial\n"); );
    Vsqrt_binary_search__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsqrt_binary_search___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vsqrt_binary_search___024root___eval_initial__TOP(Vsqrt_binary_search___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_binary_search___024root___eval_initial__TOP\n"); );
    Vsqrt_binary_search__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sqrt_binary_search__DOT__state = 0U;
    vlSelfRef.valid = 0U;
    vlSelfRef.busy = 0U;
}

VL_ATTR_COLD void Vsqrt_binary_search___024root___eval_final(Vsqrt_binary_search___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_binary_search___024root___eval_final\n"); );
    Vsqrt_binary_search__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsqrt_binary_search___024root___eval_settle(Vsqrt_binary_search___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_binary_search___024root___eval_settle\n"); );
    Vsqrt_binary_search__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsqrt_binary_search___024root___dump_triggers__act(Vsqrt_binary_search___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_binary_search___024root___dump_triggers__act\n"); );
    Vsqrt_binary_search__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsqrt_binary_search___024root___dump_triggers__nba(Vsqrt_binary_search___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_binary_search___024root___dump_triggers__nba\n"); );
    Vsqrt_binary_search__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsqrt_binary_search___024root___ctor_var_reset(Vsqrt_binary_search___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_binary_search___024root___ctor_var_reset\n"); );
    Vsqrt_binary_search__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->x = VL_RAND_RESET_I(16);
    vlSelf->sqrt = VL_RAND_RESET_I(16);
    vlSelf->busy = VL_RAND_RESET_I(1);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->sqrt_binary_search__DOT__x_reg = VL_RAND_RESET_I(16);
    vlSelf->sqrt_binary_search__DOT__low = VL_RAND_RESET_I(16);
    vlSelf->sqrt_binary_search__DOT__high = VL_RAND_RESET_I(16);
    vlSelf->sqrt_binary_search__DOT__mid = VL_RAND_RESET_I(16);
    vlSelf->sqrt_binary_search__DOT__mid_sq = VL_RAND_RESET_I(32);
    vlSelf->sqrt_binary_search__DOT__iteration = VL_RAND_RESET_I(5);
    vlSelf->sqrt_binary_search__DOT__state = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
