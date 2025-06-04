// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsqrt_binary_search.h for the primary calling header

#ifndef VERILATED_VSQRT_BINARY_SEARCH___024ROOT_H_
#define VERILATED_VSQRT_BINARY_SEARCH___024ROOT_H_  // guard

#include "verilated.h"


class Vsqrt_binary_search__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsqrt_binary_search___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(busy,0,0);
    VL_OUT8(valid,0,0);
    CData/*4:0*/ sqrt_binary_search__DOT__iteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(x,15,0);
    VL_OUT16(sqrt,15,0);
    SData/*15:0*/ sqrt_binary_search__DOT__x_reg;
    SData/*15:0*/ sqrt_binary_search__DOT__low;
    SData/*15:0*/ sqrt_binary_search__DOT__high;
    SData/*15:0*/ sqrt_binary_search__DOT__mid;
    IData/*31:0*/ sqrt_binary_search__DOT__mid_sq;
    IData/*31:0*/ sqrt_binary_search__DOT__state;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsqrt_binary_search__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsqrt_binary_search___024root(Vsqrt_binary_search__Syms* symsp, const char* v__name);
    ~Vsqrt_binary_search___024root();
    VL_UNCOPYABLE(Vsqrt_binary_search___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
