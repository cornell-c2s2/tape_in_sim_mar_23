// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFFTSPIInterconnectRTL.h for the primary calling header

#include "VFFTSPIInterconnectRTL.h"
#include "VFFTSPIInterconnectRTL__Syms.h"

VL_INLINE_OPT void VFFTSPIInterconnectRTL::_combo__TOP__27(VFFTSPIInterconnectRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFFTSPIInterconnectRTL::_combo__TOP__27\n"); );
    VFFTSPIInterconnectRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__deserializer_reset 
        = ((IData)(vlTOPp->reset) | vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__module_interconnect_src_val
           [9U]);
    if (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__serializer__DOT__ctrl__DOT__state) {
        vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__serializer__DOT__ctrl__DOT__next_state 
            = ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__serializer__DOT__ctrl__DOT__state) 
               & (8U != (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__serializer__DOT__ctrl__DOT__mux_sel_next)));
    } else {
        if (vlTOPp->reset) {
            vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__serializer__DOT__ctrl__DOT__next_state = 0U;
        }
        vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__serializer__DOT__ctrl__DOT__next_state 
            = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__tape_in_one_model__DOT__FFT__DOT__val_in
            [3U];
    }
    if (vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__serializer__DOT__ctrl__DOT__state) {
        vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__serializer__DOT__ctrl__DOT__next_state 
            = ((IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__serializer__DOT__ctrl__DOT__state) 
               & (0x40U != (IData)(vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__serializer__DOT__ctrl__DOT__mux_sel_next)));
    } else {
        if (vlTOPp->reset) {
            vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__serializer__DOT__ctrl__DOT__next_state = 0U;
        }
        vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__serializer__DOT__ctrl__DOT__next_state 
            = vlTOPp->FFTSPIInterconnectRTL__DOT__v__DOT__FFT__DOT__val_in
            [6U];
    }
}

void VFFTSPIInterconnectRTL::_eval(VFFTSPIInterconnectRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFFTSPIInterconnectRTL::_eval\n"); );
    VFFTSPIInterconnectRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->_sequent__TOP__15(vlSymsp);
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->_sequent__TOP__17(vlSymsp);
        vlTOPp->_sequent__TOP__18(vlSymsp);
        vlTOPp->_sequent__TOP__19(vlSymsp);
        vlTOPp->_sequent__TOP__20(vlSymsp);
        vlTOPp->_sequent__TOP__21(vlSymsp);
        vlTOPp->_sequent__TOP__22(vlSymsp);
        vlTOPp->_sequent__TOP__23(vlSymsp);
        vlTOPp->_sequent__TOP__24(vlSymsp);
        vlTOPp->_sequent__TOP__25(vlSymsp);
        vlTOPp->_sequent__TOP__26(vlSymsp);
    }
    vlTOPp->_combo__TOP__27(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VFFTSPIInterconnectRTL::_change_request(VFFTSPIInterconnectRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFFTSPIInterconnectRTL::_change_request\n"); );
    VFFTSPIInterconnectRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VFFTSPIInterconnectRTL::_change_request_1(VFFTSPIInterconnectRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFFTSPIInterconnectRTL::_change_request_1\n"); );
    VFFTSPIInterconnectRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VFFTSPIInterconnectRTL::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFFTSPIInterconnectRTL::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((minion_cs & 0xfeU))) {
        Verilated::overWidthError("minion_cs");}
    if (VL_UNLIKELY((minion_cs_2 & 0xfeU))) {
        Verilated::overWidthError("minion_cs_2");}
    if (VL_UNLIKELY((minion_cs_3 & 0xfeU))) {
        Verilated::overWidthError("minion_cs_3");}
    if (VL_UNLIKELY((minion_mosi & 0xfeU))) {
        Verilated::overWidthError("minion_mosi");}
    if (VL_UNLIKELY((minion_mosi_2 & 0xfeU))) {
        Verilated::overWidthError("minion_mosi_2");}
    if (VL_UNLIKELY((minion_mosi_3 & 0xfeU))) {
        Verilated::overWidthError("minion_mosi_3");}
    if (VL_UNLIKELY((master_miso & 0xfeU))) {
        Verilated::overWidthError("master_miso");}
    if (VL_UNLIKELY((minion_sclk & 0xfeU))) {
        Verilated::overWidthError("minion_sclk");}
    if (VL_UNLIKELY((minion_sclk_2 & 0xfeU))) {
        Verilated::overWidthError("minion_sclk_2");}
    if (VL_UNLIKELY((minion_sclk_3 & 0xfeU))) {
        Verilated::overWidthError("minion_sclk_3");}
}
#endif  // VL_DEBUG
