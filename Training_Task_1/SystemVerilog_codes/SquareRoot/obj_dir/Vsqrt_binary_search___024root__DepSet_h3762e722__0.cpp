// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsqrt_binary_search.h for the primary calling header

#include "Vsqrt_binary_search__pch.h"
#include "Vsqrt_binary_search___024root.h"

void Vsqrt_binary_search___024root___eval_act(Vsqrt_binary_search___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_binary_search___024root___eval_act\n"); );
    Vsqrt_binary_search__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsqrt_binary_search___024root___nba_sequent__TOP__0(Vsqrt_binary_search___024root* vlSelf);

void Vsqrt_binary_search___024root___eval_nba(Vsqrt_binary_search___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_binary_search___024root___eval_nba\n"); );
    Vsqrt_binary_search__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsqrt_binary_search___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsqrt_binary_search___024root___nba_sequent__TOP__0(Vsqrt_binary_search___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_binary_search___024root___nba_sequent__TOP__0\n"); );
    Vsqrt_binary_search__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_sqrt_binary_search__DOT__fp_mult__0__Vfuncout;
    __Vfunc_sqrt_binary_search__DOT__fp_mult__0__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sqrt_binary_search__DOT__fp_mult__0__a;
    __Vfunc_sqrt_binary_search__DOT__fp_mult__0__a = 0;
    SData/*15:0*/ __Vfunc_sqrt_binary_search__DOT__fp_mult__0__b;
    __Vfunc_sqrt_binary_search__DOT__fp_mult__0__b = 0;
    IData/*31:0*/ __Vdly__sqrt_binary_search__DOT__state;
    __Vdly__sqrt_binary_search__DOT__state = 0;
    SData/*15:0*/ __Vdly__sqrt_binary_search__DOT__x_reg;
    __Vdly__sqrt_binary_search__DOT__x_reg = 0;
    SData/*15:0*/ __Vdly__sqrt_binary_search__DOT__low;
    __Vdly__sqrt_binary_search__DOT__low = 0;
    SData/*15:0*/ __Vdly__sqrt_binary_search__DOT__high;
    __Vdly__sqrt_binary_search__DOT__high = 0;
    CData/*4:0*/ __Vdly__sqrt_binary_search__DOT__iteration;
    __Vdly__sqrt_binary_search__DOT__iteration = 0;
    SData/*15:0*/ __Vdly__sqrt_binary_search__DOT__mid;
    __Vdly__sqrt_binary_search__DOT__mid = 0;
    IData/*31:0*/ __Vdly__sqrt_binary_search__DOT__mid_sq;
    __Vdly__sqrt_binary_search__DOT__mid_sq = 0;
    // Body
    __Vdly__sqrt_binary_search__DOT__state = vlSelfRef.sqrt_binary_search__DOT__state;
    __Vdly__sqrt_binary_search__DOT__x_reg = vlSelfRef.sqrt_binary_search__DOT__x_reg;
    __Vdly__sqrt_binary_search__DOT__low = vlSelfRef.sqrt_binary_search__DOT__low;
    __Vdly__sqrt_binary_search__DOT__high = vlSelfRef.sqrt_binary_search__DOT__high;
    __Vdly__sqrt_binary_search__DOT__iteration = vlSelfRef.sqrt_binary_search__DOT__iteration;
    __Vdly__sqrt_binary_search__DOT__mid = vlSelfRef.sqrt_binary_search__DOT__mid;
    __Vdly__sqrt_binary_search__DOT__mid_sq = vlSelfRef.sqrt_binary_search__DOT__mid_sq;
    if ((0U == vlSelfRef.sqrt_binary_search__DOT__state)) {
        vlSelfRef.valid = 0U;
        vlSelfRef.busy = 0U;
        if (vlSelfRef.start) {
            if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.x)))) {
                vlSelfRef.sqrt = 0U;
                vlSelfRef.valid = 1U;
                __Vdly__sqrt_binary_search__DOT__state = 2U;
            } else {
                __Vdly__sqrt_binary_search__DOT__x_reg 
                    = vlSelfRef.x;
                __Vdly__sqrt_binary_search__DOT__low = 0U;
                __Vdly__sqrt_binary_search__DOT__high 
                    = vlSelfRef.x;
                __Vdly__sqrt_binary_search__DOT__iteration = 0U;
                vlSelfRef.busy = 1U;
                __Vdly__sqrt_binary_search__DOT__state = 1U;
            }
        }
    } else if ((1U == vlSelfRef.sqrt_binary_search__DOT__state)) {
        __Vdly__sqrt_binary_search__DOT__mid = (0xffffU 
                                                & VL_SHIFTR_III(16,16,32, 
                                                                (0xffffU 
                                                                 & ((IData)(vlSelfRef.sqrt_binary_search__DOT__low) 
                                                                    + (IData)(vlSelfRef.sqrt_binary_search__DOT__high))), 1U));
        __Vfunc_sqrt_binary_search__DOT__fp_mult__0__b 
            = vlSelfRef.sqrt_binary_search__DOT__mid;
        __Vfunc_sqrt_binary_search__DOT__fp_mult__0__a 
            = vlSelfRef.sqrt_binary_search__DOT__mid;
        __Vfunc_sqrt_binary_search__DOT__fp_mult__0__Vfuncout 
            = ((IData)(__Vfunc_sqrt_binary_search__DOT__fp_mult__0__a) 
               * (IData)(__Vfunc_sqrt_binary_search__DOT__fp_mult__0__b));
        __Vdly__sqrt_binary_search__DOT__mid_sq = __Vfunc_sqrt_binary_search__DOT__fp_mult__0__Vfuncout;
        if ((VL_SHIFTR_III(32,32,32, vlSelfRef.sqrt_binary_search__DOT__mid_sq, 8U) 
             < (IData)(vlSelfRef.sqrt_binary_search__DOT__x_reg))) {
            __Vdly__sqrt_binary_search__DOT__low = vlSelfRef.sqrt_binary_search__DOT__mid;
        } else {
            __Vdly__sqrt_binary_search__DOT__high = vlSelfRef.sqrt_binary_search__DOT__mid;
        }
        if ((0xfU == (IData)(vlSelfRef.sqrt_binary_search__DOT__iteration))) {
            vlSelfRef.sqrt = vlSelfRef.sqrt_binary_search__DOT__mid;
            vlSelfRef.valid = 1U;
            vlSelfRef.busy = 0U;
            __Vdly__sqrt_binary_search__DOT__state = 2U;
        } else {
            __Vdly__sqrt_binary_search__DOT__iteration 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.sqrt_binary_search__DOT__iteration)));
        }
    } else if ((2U == vlSelfRef.sqrt_binary_search__DOT__state)) {
        vlSelfRef.valid = 0U;
        __Vdly__sqrt_binary_search__DOT__state = 0U;
    }
    vlSelfRef.sqrt_binary_search__DOT__state = __Vdly__sqrt_binary_search__DOT__state;
    vlSelfRef.sqrt_binary_search__DOT__x_reg = __Vdly__sqrt_binary_search__DOT__x_reg;
    vlSelfRef.sqrt_binary_search__DOT__low = __Vdly__sqrt_binary_search__DOT__low;
    vlSelfRef.sqrt_binary_search__DOT__high = __Vdly__sqrt_binary_search__DOT__high;
    vlSelfRef.sqrt_binary_search__DOT__iteration = __Vdly__sqrt_binary_search__DOT__iteration;
    vlSelfRef.sqrt_binary_search__DOT__mid = __Vdly__sqrt_binary_search__DOT__mid;
    vlSelfRef.sqrt_binary_search__DOT__mid_sq = __Vdly__sqrt_binary_search__DOT__mid_sq;
}

void Vsqrt_binary_search___024root___eval_triggers__act(Vsqrt_binary_search___024root* vlSelf);

bool Vsqrt_binary_search___024root___eval_phase__act(Vsqrt_binary_search___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_binary_search___024root___eval_phase__act\n"); );
    Vsqrt_binary_search__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsqrt_binary_search___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsqrt_binary_search___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsqrt_binary_search___024root___eval_phase__nba(Vsqrt_binary_search___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_binary_search___024root___eval_phase__nba\n"); );
    Vsqrt_binary_search__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsqrt_binary_search___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsqrt_binary_search___024root___dump_triggers__nba(Vsqrt_binary_search___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsqrt_binary_search___024root___dump_triggers__act(Vsqrt_binary_search___024root* vlSelf);
#endif  // VL_DEBUG

void Vsqrt_binary_search___024root___eval(Vsqrt_binary_search___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_binary_search___024root___eval\n"); );
    Vsqrt_binary_search__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsqrt_binary_search___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sqrt_binary_search.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsqrt_binary_search___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sqrt_binary_search.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsqrt_binary_search___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsqrt_binary_search___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsqrt_binary_search___024root___eval_debug_assertions(Vsqrt_binary_search___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt_binary_search___024root___eval_debug_assertions\n"); );
    Vsqrt_binary_search__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
