// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFFTSPIInterconnectRTL.h for the primary calling header

#include "VFFTSPIInterconnectRTL.h"
#include "VFFTSPIInterconnectRTL__Syms.h"

VL_INLINE_OPT void VFFTSPIInterconnectRTL::_sequent__TOP__24(VFFTSPIInterconnectRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFFTSPIInterconnectRTL::_sequent__TOP__24\n"); );
    VFFTSPIInterconnectRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x38U)) {
        vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary[__Vilp] 
            = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_imaginary
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__butterfly_in_real[__Vilp] 
            = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__butterfly_in_real[__Vilp] 
            = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real[__Vilp] 
            = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real[__Vilp] 
            = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real[__Vilp] 
            = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real[__Vilp] 
            = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__send_real
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__fft_input_xbar_send_msg[0U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT____Vcellout__fft_input_xbar__send_msg
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__fft_input_xbar_send_msg[1U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT____Vcellout__fft_input_xbar__send_msg
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT____Vcellinp__spi_master_xbar__recv_val[0U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__spi_master_xbar_recv_val
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT____Vcellinp__spi_master_xbar__recv_val[1U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__spi_master_xbar_recv_val
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT____Vcellinp__fft_input_xbar__recv_val[0U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__fft_input_xbar_recv_val
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT____Vcellinp__fft_input_xbar__recv_val[1U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__fft_input_xbar_recv_val
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffffeULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | (IData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                             [0U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffffdULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [1U])) << 1U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffffbULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [2U])) << 2U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffff7ULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [3U])) << 3U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffffefULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [4U])) << 4U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffffdfULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [5U])) << 5U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffffbfULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [6U])) << 6U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffff7fULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [7U])) << 7U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffeffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [8U])) << 8U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffdffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [9U])) << 9U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffbffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0xaU])) << 0xaU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffff7ffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0xbU])) << 0xbU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffefffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0xcU])) << 0xcU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffdfffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0xdU])) << 0xdU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffbfffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0xeU])) << 0xeU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffff7fffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0xfU])) << 0xfU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffeffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x10U])) << 0x10U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffdffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x11U])) << 0x11U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffbffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x12U])) << 0x12U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffff7ffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x13U])) << 0x13U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffefffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x14U])) << 0x14U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffdfffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x15U])) << 0x15U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffbfffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x16U])) << 0x16U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffff7fffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x17U])) << 0x17U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffeffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x18U])) << 0x18U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffdffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x19U])) << 0x19U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffbffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x1aU])) << 0x1aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffff7ffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x1bU])) << 0x1bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffefffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x1cU])) << 0x1cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffdfffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x1dU])) << 0x1dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffbfffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x1eU])) << 0x1eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffff7fffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x1fU])) << 0x1fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffeffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x20U])) << 0x20U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffdffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x21U])) << 0x21U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffbffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x22U])) << 0x22U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffff7ffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x23U])) << 0x23U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffefffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x24U])) << 0x24U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffdfffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x25U])) << 0x25U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffbfffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x26U])) << 0x26U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffff7fffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x27U])) << 0x27U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffeffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x28U])) << 0x28U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffdffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x29U])) << 0x29U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffbffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x2aU])) << 0x2aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffff7ffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x2bU])) << 0x2bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffefffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x2cU])) << 0x2cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffdfffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x2dU])) << 0x2dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffbfffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x2eU])) << 0x2eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffff7fffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x2fU])) << 0x2fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffeffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x30U])) << 0x30U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffdffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x31U])) << 0x31U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffbffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x32U])) << 0x32U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfff7ffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x33U])) << 0x33U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffefffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x34U])) << 0x34U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffdfffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x35U])) << 0x35U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffbfffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x36U])) << 0x36U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xff7fffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x37U])) << 0x37U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfeffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x38U])) << 0x38U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfdffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x39U])) << 0x39U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfbffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x3aU])) << 0x3aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xf7ffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x3bU])) << 0x3bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xefffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x3cU])) << 0x3cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xdfffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x3dU])) << 0x3dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0xbfffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x3eU])) << 0x3eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2 
        = ((0x7fffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_out
                              [0x3fU])) << 0x3fU));
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in[__Vilp] 
            = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__recv_rdy
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffffeULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | (IData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                             [0U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffffdULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [1U])) << 1U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffffbULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [2U])) << 2U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffff7ULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [3U])) << 3U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffffefULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [4U])) << 4U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffffdfULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [5U])) << 5U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffffbfULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [6U])) << 6U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffff7fULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [7U])) << 7U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffeffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [8U])) << 8U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffdffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [9U])) << 9U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffbffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0xaU])) << 0xaU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffff7ffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0xbU])) << 0xbU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffefffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0xcU])) << 0xcU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffdfffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0xdU])) << 0xdU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffbfffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0xeU])) << 0xeU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffff7fffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0xfU])) << 0xfU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffeffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x10U])) << 0x10U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffdffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x11U])) << 0x11U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffbffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x12U])) << 0x12U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffff7ffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x13U])) << 0x13U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffefffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x14U])) << 0x14U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffdfffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x15U])) << 0x15U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffbfffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x16U])) << 0x16U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffff7fffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x17U])) << 0x17U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffeffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x18U])) << 0x18U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffdffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x19U])) << 0x19U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffbffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x1aU])) << 0x1aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffff7ffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x1bU])) << 0x1bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffefffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x1cU])) << 0x1cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffdfffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x1dU])) << 0x1dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffbfffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x1eU])) << 0x1eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffff7fffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x1fU])) << 0x1fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffeffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x20U])) << 0x20U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffdffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x21U])) << 0x21U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffbffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x22U])) << 0x22U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffff7ffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x23U])) << 0x23U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffefffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x24U])) << 0x24U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffdfffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x25U])) << 0x25U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffbfffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x26U])) << 0x26U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffff7fffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x27U])) << 0x27U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffeffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x28U])) << 0x28U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffdffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x29U])) << 0x29U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffbffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x2aU])) << 0x2aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffff7ffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x2bU])) << 0x2bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffefffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x2cU])) << 0x2cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffdfffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x2dU])) << 0x2dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffbfffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x2eU])) << 0x2eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffff7fffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x2fU])) << 0x2fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffeffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x30U])) << 0x30U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffdffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x31U])) << 0x31U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffbffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x32U])) << 0x32U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfff7ffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x33U])) << 0x33U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffefffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x34U])) << 0x34U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffdfffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x35U])) << 0x35U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffbfffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x36U])) << 0x36U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xff7fffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x37U])) << 0x37U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfeffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x38U])) << 0x38U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfdffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x39U])) << 0x39U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfbffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x3aU])) << 0x3aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xf7ffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x3bU])) << 0x3bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xefffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x3cU])) << 0x3cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xdfffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x3dU])) << 0x3dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0xbfffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x3eU])) << 0x3eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2 
        = ((0x7fffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_out
                              [0x3fU])) << 0x3fU));
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in[__Vilp] 
            = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__recv_rdy
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffffeULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | (IData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                             [0U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffffdULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [1U])) << 1U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffffbULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [2U])) << 2U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffff7ULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [3U])) << 3U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffffefULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [4U])) << 4U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffffdfULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [5U])) << 5U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffffbfULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [6U])) << 6U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffff7fULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [7U])) << 7U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffeffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [8U])) << 8U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffdffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [9U])) << 9U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffbffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0xaU])) << 0xaU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffff7ffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0xbU])) << 0xbU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffefffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0xcU])) << 0xcU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffdfffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0xdU])) << 0xdU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffbfffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0xeU])) << 0xeU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffff7fffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0xfU])) << 0xfU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffeffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x10U])) << 0x10U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffdffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x11U])) << 0x11U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffbffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x12U])) << 0x12U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffff7ffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x13U])) << 0x13U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffefffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x14U])) << 0x14U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffdfffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x15U])) << 0x15U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffbfffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x16U])) << 0x16U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffff7fffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x17U])) << 0x17U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffeffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x18U])) << 0x18U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffdffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x19U])) << 0x19U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffbffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x1aU])) << 0x1aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffff7ffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x1bU])) << 0x1bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffefffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x1cU])) << 0x1cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffdfffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x1dU])) << 0x1dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffbfffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x1eU])) << 0x1eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffff7fffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x1fU])) << 0x1fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffeffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x20U])) << 0x20U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffdffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x21U])) << 0x21U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffbffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x22U])) << 0x22U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffff7ffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x23U])) << 0x23U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffefffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x24U])) << 0x24U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffdfffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x25U])) << 0x25U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffbfffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x26U])) << 0x26U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffff7fffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x27U])) << 0x27U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffeffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x28U])) << 0x28U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffdffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x29U])) << 0x29U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffbffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x2aU])) << 0x2aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffff7ffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x2bU])) << 0x2bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffefffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x2cU])) << 0x2cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffdfffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x2dU])) << 0x2dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffbfffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x2eU])) << 0x2eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffff7fffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x2fU])) << 0x2fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffeffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x30U])) << 0x30U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffdffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x31U])) << 0x31U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffbffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x32U])) << 0x32U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfff7ffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x33U])) << 0x33U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffefffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x34U])) << 0x34U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffdfffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x35U])) << 0x35U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffbfffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x36U])) << 0x36U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xff7fffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x37U])) << 0x37U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfeffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x38U])) << 0x38U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfdffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x39U])) << 0x39U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfbffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x3aU])) << 0x3aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xf7ffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x3bU])) << 0x3bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xefffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x3cU])) << 0x3cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xdfffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x3dU])) << 0x3dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0xbfffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x3eU])) << 0x3eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2 
        = ((0x7fffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_out
                              [0x3fU])) << 0x3fU));
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in[__Vilp] 
            = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__recv_rdy
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffffeULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | (IData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                             [0U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffffdULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [1U])) << 1U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffffbULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [2U])) << 2U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffff7ULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [3U])) << 3U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffffefULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [4U])) << 4U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffffdfULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [5U])) << 5U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffffbfULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [6U])) << 6U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffff7fULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [7U])) << 7U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffeffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [8U])) << 8U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffdffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [9U])) << 9U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffffbffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0xaU])) << 0xaU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffff7ffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0xbU])) << 0xbU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffefffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0xcU])) << 0xcU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffdfffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0xdU])) << 0xdU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffffbfffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0xeU])) << 0xeU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffff7fffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0xfU])) << 0xfU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffeffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x10U])) << 0x10U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffdffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x11U])) << 0x11U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffffbffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x12U])) << 0x12U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffff7ffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x13U])) << 0x13U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffefffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x14U])) << 0x14U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffdfffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x15U])) << 0x15U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffffbfffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x16U])) << 0x16U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffff7fffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x17U])) << 0x17U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffeffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x18U])) << 0x18U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffdffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x19U])) << 0x19U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffffbffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x1aU])) << 0x1aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffff7ffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x1bU])) << 0x1bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffefffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x1cU])) << 0x1cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffdfffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x1dU])) << 0x1dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffffbfffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x1eU])) << 0x1eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffff7fffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x1fU])) << 0x1fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffeffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x20U])) << 0x20U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffdffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x21U])) << 0x21U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffffbffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x22U])) << 0x22U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffff7ffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x23U])) << 0x23U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffefffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x24U])) << 0x24U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffdfffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x25U])) << 0x25U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffffbfffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x26U])) << 0x26U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffff7fffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x27U])) << 0x27U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffeffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x28U])) << 0x28U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffdffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x29U])) << 0x29U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffffbffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x2aU])) << 0x2aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffff7ffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x2bU])) << 0x2bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffefffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x2cU])) << 0x2cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffdfffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x2dU])) << 0x2dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffffbfffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x2eU])) << 0x2eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffff7fffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x2fU])) << 0x2fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffeffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x30U])) << 0x30U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffdffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x31U])) << 0x31U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfffbffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x32U])) << 0x32U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfff7ffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x33U])) << 0x33U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffefffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x34U])) << 0x34U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffdfffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x35U])) << 0x35U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xffbfffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x36U])) << 0x36U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xff7fffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x37U])) << 0x37U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfeffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x38U])) << 0x38U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfdffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x39U])) << 0x39U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xfbffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x3aU])) << 0x3aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xf7ffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x3bU])) << 0x3bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xefffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x3cU])) << 0x3cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xdfffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x3dU])) << 0x3dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0xbfffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x3eU])) << 0x3eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2 
        = ((0x7fffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_out
                              [0x3fU])) << 0x3fU));
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in[__Vilp] 
            = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT____Vcellout__xbar_in_1__recv_rdy
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [3U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [3U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [7U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [7U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [3U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [3U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [7U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [7U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
           [3U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [3U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
           [7U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [7U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in[3U] 
        = (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfeU & (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm)) 
           | vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
           [0U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfdU & (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm)) 
           | (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
              [1U] << 1U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfbU & (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm)) 
           | (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
              [2U] << 2U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xf7U & (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm)) 
           | (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
              [3U] << 3U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xefU & (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm)) 
           | (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
              [4U] << 4U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xdfU & (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm)) 
           | (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
              [5U] << 5U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xbfU & (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm)) 
           | (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
              [6U] << 6U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0x7fU & (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm)) 
           | (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
              [7U] << 7U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [3U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [3U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [7U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [7U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0xbU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0xbU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0xfU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0xfU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x13U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x13U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x17U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x17U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x1bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x1bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x1fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x1fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x23U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x23U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x27U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x27U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x2bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x2bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x2fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x2fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x33U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x33U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x37U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x37U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x3bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x3bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x3fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x3fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [3U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [3U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [5U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [5U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [7U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [7U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0xbU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0xbU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0xdU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0xdU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0xfU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0xfU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x13U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x13U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x15U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x15U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x17U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x17U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x1bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x1bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x1dU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x1dU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x1fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x1fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x23U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x23U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x25U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x25U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x27U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x27U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x2bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x2bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x2dU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x2dU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x2fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x2fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x33U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x33U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x35U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x35U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x37U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x37U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x3bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x3bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x3dU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x3dU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x3fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x3fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [3U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [3U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [5U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [5U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [7U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [7U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [9U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [9U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0xbU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0xbU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0xdU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0xdU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0xfU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0xfU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x13U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x13U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x15U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x15U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x17U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x17U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x19U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x19U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x1bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x1bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x1dU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x1dU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x1fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x1fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x23U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x23U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x25U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x25U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x27U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x27U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x29U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x29U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x2bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x2bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x2dU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x2dU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x2fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x2fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x33U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x33U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x35U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x35U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x37U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x37U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x39U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x39U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x3bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x3bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x3dU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x3dU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x3fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x3fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [3U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [3U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [5U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [5U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [7U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [7U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [9U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [9U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0xbU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0xbU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0xdU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0xdU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0xfU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0xfU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__8__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x11U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x11U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x13U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x13U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x15U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x15U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x17U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x17U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x19U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x19U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x1bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x1bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x1dU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x1dU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x1fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x1fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x23U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x23U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x25U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x25U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x27U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x27U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x29U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x29U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x2bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x2bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x2dU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x2dU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x2fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x2fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__24__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x31U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x31U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x33U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x33U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x35U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x35U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x37U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x37U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x39U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x39U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x3bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x3bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x3dU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x3dU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                                      [0x3fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
                                        [0x3fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [3U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [3U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [7U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [7U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0xbU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0xbU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0xfU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0xfU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x13U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x13U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x17U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x17U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x1bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x1bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x1fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x1fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x23U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x23U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x27U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x27U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x2bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x2bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x2fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x2fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x33U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x33U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x37U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x37U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x3bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x3bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x3fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x3fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
           [3U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [3U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
           [7U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [7U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0xbU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0xbU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0xfU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0xfU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x13U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x13U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x17U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x17U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x1bU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x1bU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x1fU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x1fU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x23U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x23U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x27U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x27U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x2bU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x2bU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x2fU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x2fU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x33U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x33U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x37U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x37U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x3bU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x3bU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x3fU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x3fU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [3U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [3U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [5U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [5U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [7U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [7U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0xbU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0xbU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0xdU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0xdU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0xfU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0xfU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x13U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x13U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x15U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x15U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x17U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x17U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x1bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x1bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x1dU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x1dU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x1fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x1fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x23U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x23U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x25U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x25U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x27U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x27U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x2bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x2bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x2dU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x2dU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x2fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x2fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x33U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x33U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x35U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x35U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x37U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x37U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x3bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x3bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x3dU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x3dU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x3fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x3fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [3U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [3U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [5U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [5U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [7U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [7U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0xbU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0xbU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0xdU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0xdU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0xfU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0xfU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x13U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x13U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x15U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x15U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x17U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x17U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x1bU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x1bU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x1dU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x1dU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x1fU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x1fU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x23U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x23U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x25U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x25U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x27U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x27U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x2bU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x2bU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x2dU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x2dU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x2fU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x2fU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x33U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x33U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x35U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x35U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x37U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x37U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x3bU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x3bU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x3dU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x3dU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x3fU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x3fU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [3U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [3U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [5U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [5U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [7U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [7U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [9U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [9U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0xbU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0xbU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0xdU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0xdU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0xfU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0xfU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x13U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x13U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x15U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x15U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x17U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x17U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x19U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x19U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x1bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x1bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x1dU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x1dU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x1fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x1fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x23U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x23U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x25U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x25U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x27U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x27U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x29U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x29U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x2bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x2bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x2dU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x2dU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x2fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x2fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x33U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x33U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x35U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x35U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x37U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x37U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x39U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x39U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x3bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x3bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x3dU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x3dU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x3fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x3fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [3U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [3U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [5U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [5U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [7U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [7U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [9U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [9U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0xbU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0xbU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0xdU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0xdU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0xfU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0xfU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x13U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x13U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x15U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x15U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x17U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x17U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x19U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x19U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x1bU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x1bU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x1dU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x1dU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x1fU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x1fU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x23U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x23U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x25U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x25U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x27U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x27U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x29U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x29U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x2bU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x2bU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x2dU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x2dU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x2fU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x2fU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x33U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x33U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x35U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x35U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x37U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x37U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x39U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x39U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x3bU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x3bU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x3dU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x3dU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x3fU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x3fU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [3U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [3U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [5U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [5U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [7U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [7U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [9U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [9U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0xbU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0xbU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0xdU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0xdU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0xfU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0xfU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__8__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x11U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x11U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x13U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x13U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x15U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x15U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x17U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x17U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x19U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x19U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x1bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x1bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x1dU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x1dU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x1fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x1fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x23U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x23U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x25U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x25U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x27U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x27U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x29U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x29U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x2bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x2bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x2dU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x2dU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x2fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x2fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__24__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x31U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x31U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x33U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x33U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x35U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x35U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x37U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x37U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x39U] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x39U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x3bU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x3bU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x3dU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x3dU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                                      [0x3fU] 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
                                        [0x3fU])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [3U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [3U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [5U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [5U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [7U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [7U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [9U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [9U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0xbU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0xbU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0xdU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0xdU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0xfU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0xfU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__8__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x11U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x11U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x13U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x13U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x15U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x15U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x17U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x17U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x19U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x19U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x1bU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x1bU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x1dU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x1dU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x1fU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x1fU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x23U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x23U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x25U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x25U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x27U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x27U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x29U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x29U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x2bU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x2bU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x2dU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x2dU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x2fU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x2fU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__24__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x31U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x31U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x33U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x33U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x35U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x35U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x37U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x37U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x39U] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x39U]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x3bU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x3bU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x3dU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x3dU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_real
           [0x3fU] + vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__butterfly_in_imaginary
           [0x3fU]);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__fft_output_xbar_recv_msg[1U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__fft_input_xbar_send_msg
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__spi_master_recv_val 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT____Vcellinp__spi_master_xbar__recv_val
        [(1U & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__spi_master_xbar__DOT__stored_control 
                >> 0x1fU))];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT____Vcellout__fft_input_xbar__send_val[(1U 
                                                                                & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__fft_input_xbar__DOT__stored_control 
                                                                                >> 0x1eU))] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT____Vcellinp__fft_input_xbar__recv_val
        [(1U & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__fft_input_xbar__DOT__stored_control 
                >> 0x1fU))];
    if ((0x40000000U & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__fft_input_xbar__DOT__stored_control)) {
        vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT____Vcellout__fft_input_xbar__send_val[0U] = 0U;
    }
    if ((1U & (~ (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__fft_input_xbar__DOT__stored_control 
                  >> 0x1eU)))) {
        vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT____Vcellout__fft_input_xbar__send_val[1U] = 0U;
    }
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in[3U] 
        = (0xffffffffffffffffULL == vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffffeULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | (IData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                             [0U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffffdULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [1U])) << 1U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffffbULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [2U])) << 2U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffff7ULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [3U])) << 3U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffffefULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [4U])) << 4U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffffdfULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [5U])) << 5U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffffbfULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [6U])) << 6U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffff7fULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [7U])) << 7U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffeffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [8U])) << 8U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffdffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [9U])) << 9U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffbffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0xaU])) << 0xaU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffff7ffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0xbU])) << 0xbU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffefffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0xcU])) << 0xcU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffdfffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0xdU])) << 0xdU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffbfffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0xeU])) << 0xeU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffff7fffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0xfU])) << 0xfU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffeffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x10U])) << 0x10U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffdffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x11U])) << 0x11U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffbffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x12U])) << 0x12U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffff7ffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x13U])) << 0x13U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffefffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x14U])) << 0x14U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffdfffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x15U])) << 0x15U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffbfffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x16U])) << 0x16U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffff7fffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x17U])) << 0x17U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffeffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x18U])) << 0x18U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffdffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x19U])) << 0x19U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffbffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1aU])) << 0x1aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffff7ffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1bU])) << 0x1bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffefffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1cU])) << 0x1cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffdfffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1dU])) << 0x1dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffbfffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1eU])) << 0x1eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffff7fffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1fU])) << 0x1fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffeffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x20U])) << 0x20U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffdffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x21U])) << 0x21U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffbffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x22U])) << 0x22U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffff7ffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x23U])) << 0x23U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffefffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x24U])) << 0x24U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffdfffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x25U])) << 0x25U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffbfffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x26U])) << 0x26U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffff7fffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x27U])) << 0x27U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffeffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x28U])) << 0x28U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffdffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x29U])) << 0x29U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffbffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2aU])) << 0x2aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffff7ffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2bU])) << 0x2bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffefffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2cU])) << 0x2cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffdfffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2dU])) << 0x2dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffbfffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2eU])) << 0x2eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffff7fffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2fU])) << 0x2fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffeffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x30U])) << 0x30U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffdffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x31U])) << 0x31U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffbffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x32U])) << 0x32U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfff7ffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x33U])) << 0x33U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffefffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x34U])) << 0x34U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffdfffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x35U])) << 0x35U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xffbfffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x36U])) << 0x36U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xff7fffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x37U])) << 0x37U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfeffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x38U])) << 0x38U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfdffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x39U])) << 0x39U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xfbffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3aU])) << 0x3aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xf7ffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3bU])) << 0x3bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xefffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3cU])) << 0x3cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xdfffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3dU])) << 0x3dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0xbfffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3eU])) << 0x3eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm 
        = ((0x7fffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3fU])) << 0x3fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in[4U] 
        = (0xffffffffffffffffULL == vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm2);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffffeULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | (IData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                             [0U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffffdULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [1U])) << 1U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffffbULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [2U])) << 2U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffff7ULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [3U])) << 3U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffffefULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [4U])) << 4U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffffdfULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [5U])) << 5U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffffbfULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [6U])) << 6U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffff7fULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [7U])) << 7U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffeffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [8U])) << 8U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffdffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [9U])) << 9U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffbffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0xaU])) << 0xaU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffff7ffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0xbU])) << 0xbU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffefffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0xcU])) << 0xcU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffdfffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0xdU])) << 0xdU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffbfffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0xeU])) << 0xeU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffff7fffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0xfU])) << 0xfU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffeffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x10U])) << 0x10U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffdffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x11U])) << 0x11U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffbffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x12U])) << 0x12U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffff7ffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x13U])) << 0x13U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffefffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x14U])) << 0x14U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffdfffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x15U])) << 0x15U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffbfffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x16U])) << 0x16U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffff7fffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x17U])) << 0x17U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffeffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x18U])) << 0x18U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffdffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x19U])) << 0x19U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffbffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1aU])) << 0x1aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffff7ffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1bU])) << 0x1bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffefffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1cU])) << 0x1cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffdfffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1dU])) << 0x1dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffbfffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1eU])) << 0x1eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffff7fffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1fU])) << 0x1fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffeffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x20U])) << 0x20U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffdffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x21U])) << 0x21U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffbffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x22U])) << 0x22U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffff7ffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x23U])) << 0x23U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffefffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x24U])) << 0x24U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffdfffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x25U])) << 0x25U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffbfffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x26U])) << 0x26U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffff7fffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x27U])) << 0x27U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffeffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x28U])) << 0x28U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffdffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x29U])) << 0x29U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffbffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2aU])) << 0x2aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffff7ffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2bU])) << 0x2bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffefffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2cU])) << 0x2cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffdfffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2dU])) << 0x2dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffbfffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2eU])) << 0x2eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffff7fffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2fU])) << 0x2fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffeffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x30U])) << 0x30U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffdffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x31U])) << 0x31U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffbffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x32U])) << 0x32U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfff7ffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x33U])) << 0x33U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffefffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x34U])) << 0x34U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffdfffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x35U])) << 0x35U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xffbfffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x36U])) << 0x36U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xff7fffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x37U])) << 0x37U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfeffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x38U])) << 0x38U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfdffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x39U])) << 0x39U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xfbffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3aU])) << 0x3aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xf7ffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3bU])) << 0x3bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xefffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3cU])) << 0x3cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xdfffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3dU])) << 0x3dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0xbfffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3eU])) << 0x3eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm 
        = ((0x7fffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3fU])) << 0x3fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in[5U] 
        = (0xffffffffffffffffULL == vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm2);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffffeULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | (IData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                             [0U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffffdULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [1U])) << 1U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffffbULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [2U])) << 2U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffff7ULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [3U])) << 3U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffffefULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [4U])) << 4U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffffdfULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [5U])) << 5U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffffbfULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [6U])) << 6U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffff7fULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [7U])) << 7U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffeffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [8U])) << 8U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffdffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [9U])) << 9U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffbffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0xaU])) << 0xaU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffff7ffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0xbU])) << 0xbU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffefffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0xcU])) << 0xcU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffdfffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0xdU])) << 0xdU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffbfffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0xeU])) << 0xeU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffff7fffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0xfU])) << 0xfU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffeffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x10U])) << 0x10U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffdffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x11U])) << 0x11U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffbffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x12U])) << 0x12U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffff7ffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x13U])) << 0x13U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffefffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x14U])) << 0x14U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffdfffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x15U])) << 0x15U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffbfffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x16U])) << 0x16U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffff7fffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x17U])) << 0x17U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffeffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x18U])) << 0x18U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffdffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x19U])) << 0x19U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffbffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1aU])) << 0x1aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffff7ffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1bU])) << 0x1bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffefffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1cU])) << 0x1cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffdfffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1dU])) << 0x1dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffbfffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1eU])) << 0x1eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffff7fffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1fU])) << 0x1fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffeffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x20U])) << 0x20U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffdffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x21U])) << 0x21U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffbffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x22U])) << 0x22U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffff7ffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x23U])) << 0x23U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffefffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x24U])) << 0x24U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffdfffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x25U])) << 0x25U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffbfffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x26U])) << 0x26U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffff7fffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x27U])) << 0x27U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffeffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x28U])) << 0x28U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffdffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x29U])) << 0x29U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffbffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2aU])) << 0x2aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffff7ffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2bU])) << 0x2bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffefffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2cU])) << 0x2cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffdfffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2dU])) << 0x2dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffbfffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2eU])) << 0x2eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffff7fffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2fU])) << 0x2fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffeffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x30U])) << 0x30U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffdffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x31U])) << 0x31U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffbffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x32U])) << 0x32U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfff7ffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x33U])) << 0x33U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffefffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x34U])) << 0x34U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffdfffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x35U])) << 0x35U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xffbfffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x36U])) << 0x36U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xff7fffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x37U])) << 0x37U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfeffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x38U])) << 0x38U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfdffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x39U])) << 0x39U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xfbffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3aU])) << 0x3aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xf7ffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3bU])) << 0x3bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xefffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3cU])) << 0x3cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xdfffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3dU])) << 0x3dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0xbfffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3eU])) << 0x3eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm 
        = ((0x7fffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3fU])) << 0x3fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in[6U] 
        = (0xffffffffffffffffULL == vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm2);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffffeULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | (IData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                             [0U])));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffffdULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [1U])) << 1U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffffbULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [2U])) << 2U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffff7ULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [3U])) << 3U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffffefULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [4U])) << 4U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffffdfULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [5U])) << 5U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffffbfULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [6U])) << 6U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffff7fULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [7U])) << 7U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffeffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [8U])) << 8U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffdffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [9U])) << 9U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffffbffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0xaU])) << 0xaU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffff7ffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0xbU])) << 0xbU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffefffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0xcU])) << 0xcU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffdfffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0xdU])) << 0xdU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffffbfffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0xeU])) << 0xeU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffff7fffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0xfU])) << 0xfU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffeffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x10U])) << 0x10U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffdffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x11U])) << 0x11U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffffbffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x12U])) << 0x12U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffff7ffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x13U])) << 0x13U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffefffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x14U])) << 0x14U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffdfffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x15U])) << 0x15U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffffbfffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x16U])) << 0x16U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffff7fffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x17U])) << 0x17U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffeffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x18U])) << 0x18U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffdffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x19U])) << 0x19U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffffbffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1aU])) << 0x1aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffff7ffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1bU])) << 0x1bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffefffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1cU])) << 0x1cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffdfffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1dU])) << 0x1dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffffbfffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1eU])) << 0x1eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffff7fffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x1fU])) << 0x1fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffeffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x20U])) << 0x20U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffdffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x21U])) << 0x21U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffffbffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x22U])) << 0x22U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffff7ffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x23U])) << 0x23U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffefffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x24U])) << 0x24U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffdfffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x25U])) << 0x25U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffffbfffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x26U])) << 0x26U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffff7fffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x27U])) << 0x27U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffeffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x28U])) << 0x28U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffdffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x29U])) << 0x29U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffffbffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2aU])) << 0x2aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffff7ffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2bU])) << 0x2bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffefffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2cU])) << 0x2cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffdfffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2dU])) << 0x2dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffffbfffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2eU])) << 0x2eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffff7fffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x2fU])) << 0x2fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffeffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x30U])) << 0x30U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffdffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x31U])) << 0x31U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfffbffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x32U])) << 0x32U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfff7ffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x33U])) << 0x33U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffefffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x34U])) << 0x34U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffdfffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x35U])) << 0x35U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xffbfffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x36U])) << 0x36U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xff7fffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x37U])) << 0x37U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfeffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x38U])) << 0x38U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfdffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x39U])) << 0x39U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xfbffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3aU])) << 0x3aU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xf7ffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3bU])) << 0x3bU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xefffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3cU])) << 0x3cU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xdfffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3dU])) << 0x3dU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0xbfffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3eU])) << 0x3eU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm 
        = ((0x7fffffffffffffffULL & vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm) 
           | ((QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__rdy_in
                              [0x3fU])) << 0x3fU));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[1U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[2U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[3U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[4U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[5U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[6U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[7U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[1U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[2U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[3U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[4U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[5U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[6U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[7U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[1U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[2U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[3U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[4U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[5U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[6U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[7U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in[2U] 
        = (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__8__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__8__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__8__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__8__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__8__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__24__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__24__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__24__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__24__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__24__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m2__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__8__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__8__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__8__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__8__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__8__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__24__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__24__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__24__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__24__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__24__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m1__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__4__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__8__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__8__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__8__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__12__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__18__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__20__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__22__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__24__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__24__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__24__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__26__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__28__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__30__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__ar_plus_ac)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT____Vcellinp__fft_output_xbar__recv_msg[0U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__fft_output_xbar_recv_msg
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT____Vcellinp__fft_output_xbar__recv_msg[1U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__fft_output_xbar_recv_msg
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__spi_master__DOT____Vcellinp__shreg_out__load_en 
        = ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__spi_master_recv_rdy) 
           & (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__spi_master_recv_val));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__fft_input_xbar_send_val[0U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT____Vcellout__fft_input_xbar__send_val
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__fft_input_xbar_send_val[1U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT____Vcellout__fft_input_xbar__send_val
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__rdy_in[2U] 
        = (0xffffffffffffffffULL == vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__rdy_in[3U] 
        = (0xffffffffffffffffULL == vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__imm);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__rdy_in[4U] 
        = (0xffffffffffffffffULL == vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__imm);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[1U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[2U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[3U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[4U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[5U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[6U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[7U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[8U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[9U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0xaU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0xbU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0xcU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0xdU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0xeU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0xfU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x10U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x11U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x12U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x13U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x14U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x15U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x16U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x17U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x18U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x19U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x1aU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x1bU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x1cU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x1dU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x1eU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x1fU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x20U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x21U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x22U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x23U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x24U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x25U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x26U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x27U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x28U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x29U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x2aU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x2bU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x2cU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x2dU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x2eU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x2fU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x30U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x31U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x32U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x33U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x34U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x35U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x36U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x37U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x38U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x39U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x3aU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x3bU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x3cU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x3dU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x3eU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in[0x3fU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[1U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[2U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[3U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[4U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[5U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[6U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[7U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[8U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[9U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0xaU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0xbU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0xcU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0xdU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0xeU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0xfU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x10U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x11U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x12U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x13U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x14U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x15U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x16U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x17U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x18U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x19U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x1aU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x1bU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x1cU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x1dU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x1eU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x1fU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x20U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x21U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x22U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x23U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x24U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x25U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x26U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x27U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x28U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x29U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x2aU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x2bU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x2cU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x2dU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x2eU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x2fU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x30U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x31U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x32U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x33U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x34U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x35U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x36U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x37U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x38U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x39U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x3aU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x3bU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x3cU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x3dU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x3eU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in[0x3fU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[1U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[2U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[3U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[4U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[5U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[6U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[7U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[8U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[9U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0xaU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0xbU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0xcU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0xdU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0xeU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0xfU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x10U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x11U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x12U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x13U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x14U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x15U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x16U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x17U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x18U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x19U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x1aU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x1bU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x1cU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x1dU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x1eU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x1fU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x20U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x21U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x22U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x23U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x24U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x25U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x26U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x27U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x28U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x29U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x2aU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x2bU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x2cU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x2dU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x2eU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x2fU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x30U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x31U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x32U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x33U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x34U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x35U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x36U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x37U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x38U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x39U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x3aU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x3bU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x3cU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x3dU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x3eU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in[0x3fU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[1U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[2U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[3U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[4U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[5U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[6U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[7U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[8U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[9U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0xaU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0xbU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0xcU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0xdU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0xeU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0xfU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x10U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x11U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x12U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x13U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x14U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x15U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x16U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x17U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x18U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x19U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x1aU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x1bU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x1cU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x1dU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x1eU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x1fU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x20U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x21U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x22U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x23U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x24U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x25U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x26U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x27U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x28U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x29U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x2aU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x2bU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x2cU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x2dU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x2eU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x2fU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x30U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x31U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x32U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x33U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x34U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x35U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x36U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x37U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x38U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x39U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x3aU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x3bU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x3cU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x3dU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x3eU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__val_in[0x3fU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[1U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[2U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[3U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[4U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[5U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[6U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[7U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[8U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[9U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0xaU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0xbU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0xcU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0xdU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0xeU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0xfU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x10U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x11U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x12U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x13U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x14U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x15U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x16U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x17U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x18U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x19U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x1aU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x1bU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x1cU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x1dU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x1eU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x1fU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x20U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x21U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x22U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x23U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x24U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x25U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x26U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x27U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x28U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x29U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x2aU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x2bU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x2cU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x2dU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x2eU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x2fU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x30U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x31U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x32U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x33U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x34U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x35U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x36U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x37U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x38U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x39U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x3aU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x3bU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x3cU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x3dU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x3eU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__4__KET____DOT__fft_stage__DOT__val_in[0x3fU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[1U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[2U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[3U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[4U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[5U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[6U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[7U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[8U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[9U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0xaU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0xbU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0xcU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0xdU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0xeU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0xfU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x10U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x11U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x12U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x13U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x14U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x15U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x16U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x17U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x18U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x19U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x1aU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x1bU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x1cU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x1dU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x1eU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x1fU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x20U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x21U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x22U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x23U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x24U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x25U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x26U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x27U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x28U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x29U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x2aU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x2bU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x2cU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x2dU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x2eU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x2fU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x30U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x31U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x32U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x33U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x34U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x35U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x36U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x37U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x38U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x39U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x3aU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x3bU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x3cU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x3dU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x3eU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__val_in[0x3fU] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__rdy_in[5U] 
        = (0xffffffffffffffffULL == vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__5__KET____DOT__fft_stage__DOT__imm);
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[7U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [7U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[6U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [6U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[5U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[4U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[3U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[2U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[1U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[7U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [7U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[6U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [6U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[5U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[4U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[3U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[2U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[1U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[7U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [7U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[6U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [6U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[5U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [5U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[4U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [4U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[3U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [3U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[2U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [2U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[1U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [1U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT____Vcellinp__xbar_in_1__recv_val[0U] 
        = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__val_in
        [0U];
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__deserializer__DOT__c__DOT__next_state 
        = ((0U == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__deserializer__DOT__c__DOT__state))
            ? ((8U == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__deserializer__DOT__c__DOT__count_next))
                ? 1U : 0U) : ((1U == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__deserializer__DOT__c__DOT__state))
                               ? (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
                                  [0U] ? 0U : 1U) : 0U));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[0U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [1U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[1U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [1U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[2U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [1U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[3U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [1U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[4U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [1U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[5U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [1U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[6U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [1U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__rdy_out[7U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [1U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__0__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[0U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [2U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[1U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [2U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[2U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [2U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[3U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [2U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[4U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [2U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[5U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [2U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[6U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [2U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__rdy_out[7U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [2U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__1__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[0U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [3U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[1U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [3U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[2U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [3U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[3U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [3U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[4U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [3U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[5U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [3U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[6U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [3U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__rdy_out[7U] 
        = (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__rdy_in
           [3U] & (0xffU == (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__imm2)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__17__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__19__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__21__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__23__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__25__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__27__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__29__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__2__KET____DOT__fft_stage__DOT__genblk2__BRA__31__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__1__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__2__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__3__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__5__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__6__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__7__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__9__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__10__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__11__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__13__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__14__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_in 
        = (0xffffffffffffULL & ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                 ? ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__in_wait)
                                     ? vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT____Vcellinp__datapath__a
                                     : 0ULL) : (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__genblk10__BRA__3__KET____DOT__fft_stage__DOT__genblk2__BRA__15__KET____DOT__bfu_in__DOT__genblk5__DOT__mul__DOT__m3__DOT__datapath__DOT__a_reg__DOT__regout 
                                                << 1U)));
}
