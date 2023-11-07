// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1007(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1007\n"); );
    // Body
    vlSelf->top__DOT___2714_ = ((IData)(vlSelf->top__DOT___0696_) 
                                ^ (IData)(vlSelf->top__DOT___0677_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1008(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1008\n"); );
    // Body
    vlSelf->top__DOT___0940_ = (((IData)(vlSelf->top__DOT___0485_) 
                                 + (IData)(vlSelf->top__DOT___2438_)) 
                                & (IData)(vlSelf->top__DOT___1445_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1009(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1009\n"); );
    // Body
    vlSelf->top__DOT___4169_[1U] = ((0x7fffffU & vlSelf->top__DOT___4169_[1U]) 
                                    | (0xff800000U 
                                       & (((IData)(vlSelf->top__DOT___1004_) 
                                           << 0x1fU) 
                                          | (((IData)(vlSelf->top__DOT___3453_) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->top__DOT___0118_) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->top__DOT___0169_) 
                                                    << 0x1cU) 
                                                   | ((0xc000000U 
                                                       & ((IData)(vlSelf->top__DOT___4741_) 
                                                          << 0x19U)) 
                                                      | ((0x1000000U 
                                                          & ((IData)(vlSelf->top__DOT___4741_) 
                                                             << 0x18U)) 
                                                         | ((IData)(vlSelf->top__DOT___0837_) 
                                                            << 0x17U)))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1011(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1011\n"); );
    // Body
    vlSelf->top__DOT___1892_ = (1U & (~ (((IData)(vlSelf->top__DOT___1895_) 
                                          & (IData)(
                                                    (vlSelf->top__DOT___4751_ 
                                                     >> 0x24U))) 
                                         | (IData)(vlSelf->top__DOT___1893_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1013(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1013\n"); );
    // Body
    vlSelf->top__DOT___3610_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT___0419_) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelf->top__DOT___1692_) 
                                                                         << 0x13U) 
                                                                        | (((IData)(vlSelf->top__DOT___0830_) 
                                                                            << 0x12U) 
                                                                           | ((0x20000U 
                                                                               & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 0xeU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0452_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0999_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 9U)) 
                                                                                | ((0xc00U 
                                                                                & (vlSelf->top__DOT___3870_ 
                                                                                >> 0xdU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7025_ 
                                                                                >> 0xaU)) 
                                                                                | (0x1ffU 
                                                                                & (vlSelf->top__DOT___3870_ 
                                                                                >> 0xdU))))))))))))))) 
                                                    << 0xdU) 
                                                   | (QData)((IData)(
                                                                     ((0x1000U 
                                                                       & (vlSelf->top__DOT___7025_ 
                                                                          << 3U)) 
                                                                      | ((0xe00U 
                                                                          & vlSelf->top__DOT___3870_) 
                                                                         | ((0x100U 
                                                                             & (vlSelf->top__DOT___7025_ 
                                                                                << 3U)) 
                                                                            | ((0xf8U 
                                                                                & vlSelf->top__DOT___3870_) 
                                                                               | (((IData)(vlSelf->top__DOT___0168_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0708_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0496_)))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0xc00000U 
                                                                      & (vlSelf->top__DOT___4144_ 
                                                                         >> 1U)) 
                                                                     | (((IData)(vlSelf->top__DOT___3065_) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->top__DOT___3007_) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->top__DOT___3517_) 
                                                                               << 0x13U) 
                                                                              | ((0x60000U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1023_) 
                                                                                << 0x10U) 
                                                                                | ((0xfe00U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___4061_)))))))))) 
                                                    << 0xaU) 
                                                   | (QData)((IData)(
                                                                     ((0x200U 
                                                                       & (vlSelf->top__DOT___4144_ 
                                                                          << 9U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0764_) 
                                                                          << 8U) 
                                                                         | (((IData)(vlSelf->top__DOT___1071_) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT___0265_) 
                                                                                << 6U) 
                                                                               | (((IData)(vlSelf->top__DOT___0552_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1228_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2481_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0560_)))))))))))))) 
                                                 >> 0x21U))));
    vlSelf->top__DOT___3725_ = (1U & (IData)((0x1fULL 
                                              & (((((QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT___0419_) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelf->top__DOT___1692_) 
                                                                         << 0x13U) 
                                                                        | (((IData)(vlSelf->top__DOT___0830_) 
                                                                            << 0x12U) 
                                                                           | ((0x20000U 
                                                                               & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 0xeU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0452_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0999_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 9U)) 
                                                                                | ((0xc00U 
                                                                                & (vlSelf->top__DOT___3870_ 
                                                                                >> 0xdU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7025_ 
                                                                                >> 0xaU)) 
                                                                                | (0x1ffU 
                                                                                & (vlSelf->top__DOT___3870_ 
                                                                                >> 0xdU))))))))))))))) 
                                                    << 0xdU) 
                                                   | (QData)((IData)(
                                                                     ((0x1000U 
                                                                       & (vlSelf->top__DOT___7025_ 
                                                                          << 3U)) 
                                                                      | ((0xe00U 
                                                                          & vlSelf->top__DOT___3870_) 
                                                                         | ((0x100U 
                                                                             & (vlSelf->top__DOT___7025_ 
                                                                                << 3U)) 
                                                                            | ((0xf8U 
                                                                                & vlSelf->top__DOT___3870_) 
                                                                               | (((IData)(vlSelf->top__DOT___0168_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0708_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0496_)))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0xc00000U 
                                                                      & (vlSelf->top__DOT___4144_ 
                                                                         >> 1U)) 
                                                                     | (((IData)(vlSelf->top__DOT___3065_) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->top__DOT___3007_) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->top__DOT___3517_) 
                                                                               << 0x13U) 
                                                                              | ((0x60000U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1023_) 
                                                                                << 0x10U) 
                                                                                | ((0xfe00U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___4061_)))))))))) 
                                                    << 0xaU) 
                                                   | (QData)((IData)(
                                                                     ((0x200U 
                                                                       & (vlSelf->top__DOT___4144_ 
                                                                          << 9U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0764_) 
                                                                          << 8U) 
                                                                         | (((IData)(vlSelf->top__DOT___1071_) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT___0265_) 
                                                                                << 6U) 
                                                                               | (((IData)(vlSelf->top__DOT___0552_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1228_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2481_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0560_)))))))))))))) 
                                                 >> 0x1dU))));
    vlSelf->top__DOT___3131_ = (1U & (IData)((0xffffULL 
                                              & (((((QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT___0419_) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelf->top__DOT___1692_) 
                                                                         << 0x13U) 
                                                                        | (((IData)(vlSelf->top__DOT___0830_) 
                                                                            << 0x12U) 
                                                                           | ((0x20000U 
                                                                               & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 0xeU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0452_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0999_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 9U)) 
                                                                                | ((0xc00U 
                                                                                & (vlSelf->top__DOT___3870_ 
                                                                                >> 0xdU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7025_ 
                                                                                >> 0xaU)) 
                                                                                | (0x1ffU 
                                                                                & (vlSelf->top__DOT___3870_ 
                                                                                >> 0xdU))))))))))))))) 
                                                    << 0xdU) 
                                                   | (QData)((IData)(
                                                                     ((0x1000U 
                                                                       & (vlSelf->top__DOT___7025_ 
                                                                          << 3U)) 
                                                                      | ((0xe00U 
                                                                          & vlSelf->top__DOT___3870_) 
                                                                         | ((0x100U 
                                                                             & (vlSelf->top__DOT___7025_ 
                                                                                << 3U)) 
                                                                            | ((0xf8U 
                                                                                & vlSelf->top__DOT___3870_) 
                                                                               | (((IData)(vlSelf->top__DOT___0168_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0708_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0496_)))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0xc00000U 
                                                                      & (vlSelf->top__DOT___4144_ 
                                                                         >> 1U)) 
                                                                     | (((IData)(vlSelf->top__DOT___3065_) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->top__DOT___3007_) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->top__DOT___3517_) 
                                                                               << 0x13U) 
                                                                              | ((0x60000U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1023_) 
                                                                                << 0x10U) 
                                                                                | ((0xfe00U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___4061_)))))))))) 
                                                    << 0xaU) 
                                                   | (QData)((IData)(
                                                                     ((0x200U 
                                                                       & (vlSelf->top__DOT___4144_ 
                                                                          << 9U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0764_) 
                                                                          << 8U) 
                                                                         | (((IData)(vlSelf->top__DOT___1071_) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT___0265_) 
                                                                                << 6U) 
                                                                               | (((IData)(vlSelf->top__DOT___0552_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1228_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2481_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0560_)))))))))))))) 
                                                 >> 0x12U))));
    vlSelf->top__DOT___2841_ = (1U & (IData)((0x7fffffffULL 
                                              & (((((QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT___0419_) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelf->top__DOT___1692_) 
                                                                         << 0x13U) 
                                                                        | (((IData)(vlSelf->top__DOT___0830_) 
                                                                            << 0x12U) 
                                                                           | ((0x20000U 
                                                                               & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 0xeU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0452_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0999_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 9U)) 
                                                                                | ((0xc00U 
                                                                                & (vlSelf->top__DOT___3870_ 
                                                                                >> 0xdU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7025_ 
                                                                                >> 0xaU)) 
                                                                                | (0x1ffU 
                                                                                & (vlSelf->top__DOT___3870_ 
                                                                                >> 0xdU))))))))))))))) 
                                                    << 0xdU) 
                                                   | (QData)((IData)(
                                                                     ((0x1000U 
                                                                       & (vlSelf->top__DOT___7025_ 
                                                                          << 3U)) 
                                                                      | ((0xe00U 
                                                                          & vlSelf->top__DOT___3870_) 
                                                                         | ((0x100U 
                                                                             & (vlSelf->top__DOT___7025_ 
                                                                                << 3U)) 
                                                                            | ((0xf8U 
                                                                                & vlSelf->top__DOT___3870_) 
                                                                               | (((IData)(vlSelf->top__DOT___0168_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0708_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0496_)))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0xc00000U 
                                                                      & (vlSelf->top__DOT___4144_ 
                                                                         >> 1U)) 
                                                                     | (((IData)(vlSelf->top__DOT___3065_) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->top__DOT___3007_) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->top__DOT___3517_) 
                                                                               << 0x13U) 
                                                                              | ((0x60000U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1023_) 
                                                                                << 0x10U) 
                                                                                | ((0xfe00U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___4061_)))))))))) 
                                                    << 0xaU) 
                                                   | (QData)((IData)(
                                                                     ((0x200U 
                                                                       & (vlSelf->top__DOT___4144_ 
                                                                          << 9U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0764_) 
                                                                          << 8U) 
                                                                         | (((IData)(vlSelf->top__DOT___1071_) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT___0265_) 
                                                                                << 6U) 
                                                                               | (((IData)(vlSelf->top__DOT___0552_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1228_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2481_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0560_)))))))))))))) 
                                                 >> 3U))));
    vlSelf->top__DOT___2000_ = (1U & (IData)((0xffffffffULL 
                                              & (((((QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT___0419_) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelf->top__DOT___1692_) 
                                                                         << 0x13U) 
                                                                        | (((IData)(vlSelf->top__DOT___0830_) 
                                                                            << 0x12U) 
                                                                           | ((0x20000U 
                                                                               & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 0xeU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0452_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0999_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 9U)) 
                                                                                | ((0xc00U 
                                                                                & (vlSelf->top__DOT___3870_ 
                                                                                >> 0xdU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7025_ 
                                                                                >> 0xaU)) 
                                                                                | (0x1ffU 
                                                                                & (vlSelf->top__DOT___3870_ 
                                                                                >> 0xdU))))))))))))))) 
                                                    << 0xdU) 
                                                   | (QData)((IData)(
                                                                     ((0x1000U 
                                                                       & (vlSelf->top__DOT___7025_ 
                                                                          << 3U)) 
                                                                      | ((0xe00U 
                                                                          & vlSelf->top__DOT___3870_) 
                                                                         | ((0x100U 
                                                                             & (vlSelf->top__DOT___7025_ 
                                                                                << 3U)) 
                                                                            | ((0xf8U 
                                                                                & vlSelf->top__DOT___3870_) 
                                                                               | (((IData)(vlSelf->top__DOT___0168_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0708_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0496_)))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0xc00000U 
                                                                      & (vlSelf->top__DOT___4144_ 
                                                                         >> 1U)) 
                                                                     | (((IData)(vlSelf->top__DOT___3065_) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->top__DOT___3007_) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->top__DOT___3517_) 
                                                                               << 0x13U) 
                                                                              | ((0x60000U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1023_) 
                                                                                << 0x10U) 
                                                                                | ((0xfe00U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___4061_)))))))))) 
                                                    << 0xaU) 
                                                   | (QData)((IData)(
                                                                     ((0x200U 
                                                                       & (vlSelf->top__DOT___4144_ 
                                                                          << 9U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0764_) 
                                                                          << 8U) 
                                                                         | (((IData)(vlSelf->top__DOT___1071_) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT___0265_) 
                                                                                << 6U) 
                                                                               | (((IData)(vlSelf->top__DOT___0552_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1228_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2481_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0560_)))))))))))))) 
                                                 >> 2U))));
    vlSelf->top__DOT___1266_ = (1U & (~ (((IData)(vlSelf->top__DOT___1834_) 
                                          & (IData)(vlSelf->top__DOT___3131_)) 
                                         | ((IData)(vlSelf->top__DOT___0390_) 
                                            & (IData)(vlSelf->top__DOT___1829_)))));
    vlSelf->top__DOT___0376_ = (1U & (~ ((IData)(vlSelf->top__DOT___0334_) 
                                         | ((IData)(vlSelf->top__DOT___2000_) 
                                            & ((~ (IData)(vlSelf->top__DOT___0020_)) 
                                               & (IData)(vlSelf->top__DOT___0021_))))));
    vlSelf->top__DOT___3945_ = ((0x1fff8U & ((IData)(
                                                     (0x3fffffffULL 
                                                      & (((((QData)((IData)(
                                                                            (((IData)(vlSelf->top__DOT___0419_) 
                                                                              << 0x14U) 
                                                                             | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0452_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0999_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 9U)) 
                                                                                | ((0xc00U 
                                                                                & (vlSelf->top__DOT___3870_ 
                                                                                >> 0xdU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7025_ 
                                                                                >> 0xaU)) 
                                                                                | (0x1ffU 
                                                                                & (vlSelf->top__DOT___3870_ 
                                                                                >> 0xdU))))))))))))))) 
                                                            << 0xdU) 
                                                           | (QData)((IData)(
                                                                             ((0x1000U 
                                                                               & (vlSelf->top__DOT___7025_ 
                                                                                << 3U)) 
                                                                              | ((0xe00U 
                                                                                & vlSelf->top__DOT___3870_) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7025_ 
                                                                                << 3U)) 
                                                                                | ((0xf8U 
                                                                                & vlSelf->top__DOT___3870_) 
                                                                                | (((IData)(vlSelf->top__DOT___0168_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0708_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0496_)))))))))) 
                                                          + 
                                                          (((QData)((IData)(
                                                                            ((0xc00000U 
                                                                              & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                             | (((IData)(vlSelf->top__DOT___3065_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___3007_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___3517_) 
                                                                                << 0x13U) 
                                                                                | ((0x60000U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1023_) 
                                                                                << 0x10U) 
                                                                                | ((0xfe00U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___4061_)))))))))) 
                                                            << 0xaU) 
                                                           | (QData)((IData)(
                                                                             ((0x200U 
                                                                               & (vlSelf->top__DOT___4144_ 
                                                                                << 9U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0764_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1071_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0265_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0552_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1228_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2481_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0560_)))))))))))))) 
                                                         >> 4U))) 
                                             << 3U)) 
                                | (((IData)(vlSelf->top__DOT___2841_) 
                                    << 2U) | (((IData)(vlSelf->top__DOT___2000_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___1252_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1014(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1014\n"); );
    // Body
    vlSelf->top__DOT___2516_ = (1U & (~ (((IData)(vlSelf->top__DOT___0434_) 
                                          & (IData)(vlSelf->top__DOT___0087_)) 
                                         | (IData)(vlSelf->top__DOT___1734_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1015(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1015\n"); );
    // Body
    vlSelf->top__DOT___1795_ = (1U & (~ (((IData)(vlSelf->top__DOT___1933_) 
                                          & (IData)(vlSelf->top__DOT___1734_)) 
                                         | ((IData)(vlSelf->top__DOT___0135_) 
                                            & (IData)(vlSelf->top__DOT___3141_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1016(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1016\n"); );
    // Body
    vlSelf->__VdfgTmp_h932cc739__0 = ((((IData)(vlSelf->top__DOT___0119_) 
                                        << 8U) | (((IData)(vlSelf->top__DOT___0816_) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->top__DOT___1580_) 
                                                      << 6U) 
                                                     | ((0x20U 
                                                         & ((IData)(vlSelf->top__DOT___7055_) 
                                                            << 5U)) 
                                                        | (0x10U 
                                                           & (vlSelf->top__DOT___7141_ 
                                                              >> 0x12U)))))) 
                                      | (((IData)(vlSelf->top__DOT___0023_) 
                                          << 3U) | 
                                         (((IData)(vlSelf->top__DOT___2043_) 
                                           << 2U) | 
                                          (((IData)(vlSelf->top__DOT___1831_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___0356_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1017(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1017\n"); );
    // Body
    vlSelf->top__DOT___0678_ = (1U & ((IData)(vlSelf->top__DOT___2043_) 
                                      | ((IData)(vlSelf->top__DOT___7142_) 
                                         >> 4U)));
    vlSelf->top__DOT___4395_ = ((0x1fffffffffULL & vlSelf->top__DOT___4395_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___3183_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0678_)))) 
                                   << 0x25U));
    vlSelf->top__DOT___2170_ = ((IData)(vlSelf->top__DOT___3630_) 
                                ^ ((IData)(vlSelf->top__DOT___0678_) 
                                   | (IData)(vlSelf->top__DOT___3057_)));
    vlSelf->top__DOT___4346_[2U] = ((0x1ffff1fU & vlSelf->top__DOT___4346_[2U]) 
                                    | (0x1ffffe0U & 
                                       (((IData)(vlSelf->top__DOT___2170_) 
                                         << 6U) | ((IData)(vlSelf->top__DOT___0223_) 
                                                   << 5U))));
    vlSelf->top__DOT___4306_[2U] = ((0xfffeffffU & 
                                     vlSelf->top__DOT___4306_[2U]) 
                                    | ((IData)(vlSelf->top__DOT___2170_) 
                                       << 0x10U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1018(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1018\n"); );
    // Body
    vlSelf->top__DOT___1622_ = (1U & (~ (((IData)(vlSelf->top__DOT___3167_) 
                                          & (vlSelf->top__DOT___7133_ 
                                             >> 1U)) 
                                         | (IData)(vlSelf->top__DOT___2338_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1019(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1019\n"); );
    // Body
    vlSelf->top__DOT___0500_ = (1U & (~ (((IData)(vlSelf->top__DOT___1925_) 
                                          & (IData)(
                                                    (vlSelf->top__DOT___4754_ 
                                                     >> 0xbU))) 
                                         | (IData)(vlSelf->top__DOT___0928_))));
    vlSelf->top__DOT___4346_[2U] = ((0x1fffff8U & vlSelf->top__DOT___4346_[2U]) 
                                    | (0x1ffffffU & 
                                       (((IData)(vlSelf->top__DOT___0821_) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->top__DOT___0038_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0500_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1021(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1021\n"); );
    // Body
    vlSelf->top__DOT___0946_ = (1U & (IData)((1ULL 
                                              & ((vlSelf->__VdfgTmp_h1ac1e1d2__0 
                                                  + 
                                                  (((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h9e529c86__0)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_h4af0ecc8__0)))) 
                                                 >> 0x3bU))));
    vlSelf->top__DOT___3789_ = (1U & (IData)((1ULL 
                                              & (((0x2000000000000000ULL 
                                                   | vlSelf->top__DOT____VdfgTmp_h4afa8a83__0) 
                                                  + vlSelf->top__DOT____VdfgTmp_h863409ab__0) 
                                                 >> 0x3dU))));
    vlSelf->top__DOT___4288_ = (((QData)((IData)((1U 
                                                  & (IData)(
                                                            (1ULL 
                                                             & (((0x2000000000000000ULL 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___1783_)) 
                                                                      << 0x3eU) 
                                                                     | (((QData)((IData)(vlSelf->top__DOT___1526_)) 
                                                                         << 0x3cU) 
                                                                        | (((QData)((IData)(vlSelf->top__DOT___2054_)) 
                                                                            << 0x3bU) 
                                                                           | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                                               << 0x3aU) 
                                                                              | (((QData)((IData)(vlSelf->top__DOT___0306_)) 
                                                                                << 0x39U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h666a9191__0)) 
                                                                                << 0x38U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1290_)) 
                                                                                << 0x37U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1167_)) 
                                                                                << 0x36U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2342_)) 
                                                                                << 0x35U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2054_)) 
                                                                                << 0x34U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2158_)) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0577_)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0571_)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0070_)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1463_)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0116_)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1aU))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0009_)) 
                                                                                << 0x2cU) 
                                                                                | ((vlSelf->top__DOT___7096_ 
                                                                                << 4U) 
                                                                                | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_h3d101cf7__0)))))))))))))))))))))) 
                                                                 + 
                                                                 (((QData)((IData)(vlSelf->top__DOT___0202_)) 
                                                                   << 0x3eU) 
                                                                  | vlSelf->top__DOT____VdfgTmp_h863409ab__0)) 
                                                                >> 0x3eU)))))) 
                                 << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT___3789_)) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (1ULL 
                                                                              & ((vlSelf->top__DOT____VdfgTmp_h4afa8a83__0 
                                                                                + vlSelf->__VdfgTmp_h1cacfd83__0) 
                                                                                >> 0x3cU)))))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0946_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (0xffULL 
                                                                                & (((((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h5ec20e4e__0)) 
                                                                                << 0x1eU) 
                                                                                | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_hed643286__0))) 
                                                                                + 
                                                                                (((QData)((IData)(vlSelf->top__DOT___1132_)) 
                                                                                << 0x3aU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0300_)) 
                                                                                << 0x39U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0381_)) 
                                                                                << 0x38U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2354_)) 
                                                                                << 0x36U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2054_)) 
                                                                                << 0x35U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1834_)) 
                                                                                << 0x34U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0858_)) 
                                                                                << 0x33U) 
                                                                                | vlSelf->top__DOT____VdfgTmp_h1a1f5d13__0)))))))) 
                                                                                >> 0x33U)))))) 
                                                        << 0x33U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___3167_)) 
                                                           << 0x32U) 
                                                          | (((QData)((IData)(
                                                                              (7U 
                                                                               & (IData)(
                                                                                (7ULL 
                                                                                & (((((QData)((IData)(vlSelf->top__DOT____VdfgTmp_ha2174ae0__0)) 
                                                                                << 0x1eU) 
                                                                                | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_hed643286__0))) 
                                                                                + vlSelf->__VdfgTmp_heb785c59__0) 
                                                                                >> 0x2fU)))))) 
                                                              << 0x2fU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (1ULL 
                                                                                & (((((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h2ea1b517__0)) 
                                                                                << 0x1eU) 
                                                                                | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_hed643286__0))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4089_ 
                                                                                >> 0x23U))))) 
                                                                                << 0x2dU) 
                                                                                | vlSelf->top__DOT____VdfgTmp_hd0dba2db__0)) 
                                                                                >> 0x2eU)))))) 
                                                                 << 0x2eU) 
                                                                | (((QData)((IData)(vlSelf->top__DOT___3326_)) 
                                                                    << 0x2dU) 
                                                                   | (((QData)((IData)(
                                                                                (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT____VdfgTmp_h1315daf4__0 
                                                                                >> 0x21U))))) 
                                                                       << 0x21U) 
                                                                      | (((QData)((IData)(vlSelf->top__DOT___3755_)) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT____VdfgTmp_h1315daf4__0 
                                                                                >> 0x18U)) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0850_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___3353_) 
                                                                                << 0x16U) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT____VdfgTmp_h1315daf4__0 
                                                                                >> 0x15U)) 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3776_) 
                                                                                << 0x14U) 
                                                                                | ((0xfc000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT____VdfgTmp_h1315daf4__0 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((0x3ff0U 
                                                                                & ((IData)(vlSelf->top__DOT___7096_) 
                                                                                << 4U)) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h3d101cf7__0)) 
                                                                                + (IData)(vlSelf->top__DOT____VdfgTmp_hf9f1abcc__0))) 
                                                                                | ((0x1f00U 
                                                                                & (((0x1ff0U 
                                                                                & ((IData)(vlSelf->top__DOT___7096_) 
                                                                                << 4U)) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h3d101cf7__0)) 
                                                                                + (IData)(vlSelf->top__DOT____VdfgTmp_hfb09f799__0))) 
                                                                                | (((IData)(vlSelf->top__DOT___3794_) 
                                                                                << 7U) 
                                                                                | ((0x7eU 
                                                                                & (((0x70U 
                                                                                & ((IData)(vlSelf->top__DOT___7096_) 
                                                                                << 4U)) 
                                                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h3d101cf7__0)) 
                                                                                + (IData)(vlSelf->top__DOT____VdfgTmp_h73e4fea7__0))) 
                                                                                | (IData)(vlSelf->top__DOT___1918_))))))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1022(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1022\n"); );
    // Body
    vlSelf->top__DOT___1025_ = ((IData)(vlSelf->top__DOT___1027_) 
                                & (~ ((IData)(vlSelf->top__DOT___7151_) 
                                      >> 5U)));
    vlSelf->top__DOT___2629_ = ((IData)(vlSelf->top__DOT___1025_) 
                                | (IData)(vlSelf->top__DOT___0547_));
    vlSelf->top__DOT___1958_ = (1U & (~ (((vlSelf->top__DOT___7158_ 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->top__DOT___0295_)) 
                                         | ((IData)(vlSelf->top__DOT___2629_) 
                                            & (IData)(
                                                      (vlSelf->top__DOT___7071_ 
                                                       >> 0x2fU))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1023(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1023\n"); );
    // Body
    vlSelf->top__DOT___4375_ = ((0x7ffff8ffffffffffULL 
                                 & vlSelf->top__DOT___4375_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___0122_) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT___1981_) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT___0642_))))) 
                                   << 0x28U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1028(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1028\n"); );
    // Body
    vlSelf->top__DOT___4232_ = ((0x3ffff8fU & vlSelf->top__DOT___4232_) 
                                | (((IData)(vlSelf->top__DOT___0005_) 
                                    << 6U) | ((IData)(vlSelf->top__DOT___2512_) 
                                              << 4U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1029(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1029\n"); );
    // Body
    vlSelf->top__DOT___2511_ = (1U & (~ (((vlSelf->top__DOT___4776_ 
                                           >> 6U) & (IData)(vlSelf->top__DOT___2513_)) 
                                         | (IData)(vlSelf->top__DOT___2512_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1030(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1030\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h8fe4a24b__0 = (((IData)(vlSelf->top__DOT___0046_) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->top__DOT___0985_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___2512_) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((IData)(vlSelf->top__DOT___7011_) 
                                                             >> 4U)) 
                                                         | (IData)(vlSelf->top__DOT___0880_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1034(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1034\n"); );
    // Body
    vlSelf->top__DOT___2133_ = (1U & (((((IData)(vlSelf->top__DOT___2020_) 
                                         << 4U) | (
                                                   ((IData)(vlSelf->top__DOT___0582_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___1021_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___1193_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___1611_))))) 
                                       + ((0x10U & vlSelf->top__DOT___3885_) 
                                          | ((8U & vlSelf->top__DOT___7066_) 
                                             | (7U 
                                                & vlSelf->top__DOT___3885_)))) 
                                      >> 4U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1036(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1036\n"); );
    // Body
    vlSelf->top__DOT___1396_ = (1U & (((((IData)(vlSelf->top__DOT___1021_) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->top__DOT___1193_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___1611_))) 
                                       + vlSelf->top__DOT___3885_) 
                                      >> 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1038(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1038\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_hf00b4198__0 = ((0x800U 
                                                 & (vlSelf->top__DOT___4054_[0U] 
                                                    >> 0xdU)) 
                                                | ((0x400U 
                                                    & ((IData)(vlSelf->top__DOT___7123_) 
                                                       << 2U)) 
                                                   | ((0x3fcU 
                                                       & (vlSelf->top__DOT___4054_[0U] 
                                                          >> 0xdU)) 
                                                      | (((IData)(vlSelf->top__DOT___2512_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0275_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1043(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1043\n"); );
    // Body
    vlSelf->top__DOT___4321_ = (((QData)((IData)((0x7ffU 
                                                  & (IData)(
                                                            (0x7ffULL 
                                                             & (((((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3215_) 
                                                                                << 0x1fU) 
                                                                                | ((0x70000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 4U)) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3548_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0325_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___1717_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1245_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0639_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0455_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0585_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0419_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0452_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0999_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 9U)) 
                                                                                | ((0xc00U 
                                                                                & (vlSelf->top__DOT___3870_ 
                                                                                >> 0xdU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7025_ 
                                                                                >> 0xaU)) 
                                                                                | (0x1ffU 
                                                                                & (vlSelf->top__DOT___3870_ 
                                                                                >> 0xdU)))))))))))))))))))))))) 
                                                                   << 0xdU) 
                                                                  | (QData)((IData)(
                                                                                ((0x1000U 
                                                                                & (vlSelf->top__DOT___7025_ 
                                                                                << 3U)) 
                                                                                | ((0xe00U 
                                                                                & vlSelf->top__DOT___3870_) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7025_ 
                                                                                << 3U)) 
                                                                                | ((0xf8U 
                                                                                & vlSelf->top__DOT___3870_) 
                                                                                | (((IData)(vlSelf->top__DOT___0168_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0708_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0496_)))))))))) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0xeU)))) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___3617_)) 
                                                                      << 0x2bU) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 0xcU)))) 
                                                                         << 0x2aU) 
                                                                        | (((QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0x11U)) 
                                                                                | ((0x78000000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0x14U)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0165_) 
                                                                                << 0x19U) 
                                                                                | ((0x1c00000U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3065_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___3007_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___3517_) 
                                                                                << 0x13U) 
                                                                                | ((0x60000U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1023_) 
                                                                                << 0x10U) 
                                                                                | ((0xfe00U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___4061_)))))))))))))) 
                                                                            << 0xaU) 
                                                                           | (QData)((IData)(
                                                                                ((0x200U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0764_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1071_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0265_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0552_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1228_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2481_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0560_))))))))))))))))) 
                                                                >> 0x22U)))))) 
                                 << 0x22U) | (((QData)((IData)(vlSelf->top__DOT___3610_)) 
                                               << 0x21U) 
                                              | (((QData)((IData)(
                                                                  (7U 
                                                                   & (IData)(
                                                                             (0xfULL 
                                                                              & (((((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0419_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0452_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0999_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 9U)) 
                                                                                | ((0xc00U 
                                                                                & (vlSelf->top__DOT___3870_ 
                                                                                >> 0xdU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7025_ 
                                                                                >> 0xaU)) 
                                                                                | (0x1ffU 
                                                                                & (vlSelf->top__DOT___3870_ 
                                                                                >> 0xdU))))))))))))))) 
                                                                                << 0xdU) 
                                                                                | (QData)((IData)(
                                                                                ((0x1000U 
                                                                                & (vlSelf->top__DOT___7025_ 
                                                                                << 3U)) 
                                                                                | ((0xe00U 
                                                                                & vlSelf->top__DOT___3870_) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7025_ 
                                                                                << 3U)) 
                                                                                | ((0xf8U 
                                                                                & vlSelf->top__DOT___3870_) 
                                                                                | (((IData)(vlSelf->top__DOT___0168_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0708_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0496_)))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xc00000U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3065_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___3007_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___3517_) 
                                                                                << 0x13U) 
                                                                                | ((0x60000U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1023_) 
                                                                                << 0x10U) 
                                                                                | ((0xfe00U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___4061_)))))))))) 
                                                                                << 0xaU) 
                                                                                | (QData)((IData)(
                                                                                ((0x200U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0764_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1071_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0265_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0552_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1228_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2481_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0560_)))))))))))))) 
                                                                                >> 0x1eU)))))) 
                                                  << 0x1eU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->top__DOT___3725_) 
                                                                     << 0x1dU) 
                                                                    | ((0x1ff80000U 
                                                                        & ((IData)(
                                                                                (0x7fffULL 
                                                                                & (((((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0419_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0452_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0999_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 9U)) 
                                                                                | ((0xc00U 
                                                                                & (vlSelf->top__DOT___3870_ 
                                                                                >> 0xdU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7025_ 
                                                                                >> 0xaU)) 
                                                                                | (0x1ffU 
                                                                                & (vlSelf->top__DOT___3870_ 
                                                                                >> 0xdU))))))))))))))) 
                                                                                << 0xdU) 
                                                                                | (QData)((IData)(
                                                                                ((0x1000U 
                                                                                & (vlSelf->top__DOT___7025_ 
                                                                                << 3U)) 
                                                                                | ((0xe00U 
                                                                                & vlSelf->top__DOT___3870_) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7025_ 
                                                                                << 3U)) 
                                                                                | ((0xf8U 
                                                                                & vlSelf->top__DOT___3870_) 
                                                                                | (((IData)(vlSelf->top__DOT___0168_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0708_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0496_)))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xc00000U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3065_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___3007_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___3517_) 
                                                                                << 0x13U) 
                                                                                | ((0x60000U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1023_) 
                                                                                << 0x10U) 
                                                                                | ((0xfe00U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                >> 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___4061_)))))))))) 
                                                                                << 0xaU) 
                                                                                | (QData)((IData)(
                                                                                ((0x200U 
                                                                                & (vlSelf->top__DOT___4144_ 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0764_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1071_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0265_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0552_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1228_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0204_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2481_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0560_)))))))))))))) 
                                                                                >> 0x13U))) 
                                                                           << 0x13U)) 
                                                                       | (((IData)(vlSelf->top__DOT___3131_) 
                                                                           << 0x12U) 
                                                                          | ((0x3fff0U 
                                                                              & (vlSelf->top__DOT___3945_ 
                                                                                << 1U)) 
                                                                             | (((IData)(vlSelf->top__DOT___2841_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2000_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((((IData)(vlSelf->top__DOT___0708_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0496_)) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___2481_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0560_)))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1044(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1044\n"); );
    // Body
    vlSelf->top__DOT___2171_ = (1U & (~ (((IData)((vlSelf->top__DOT___7215_ 
                                                   >> 0x1bU)) 
                                          & (IData)(vlSelf->top__DOT___2363_)) 
                                         | ((IData)(vlSelf->top__DOT___2516_) 
                                            & (IData)(vlSelf->top__DOT___2728_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1045(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1045\n"); );
    // Body
    vlSelf->top__DOT___4198_ = ((0x1fe7ffffU & vlSelf->top__DOT___4198_) 
                                | (((IData)(vlSelf->top__DOT___2516_) 
                                    << 0x14U) | ((IData)(vlSelf->top__DOT___2049_) 
                                                 << 0x13U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1046(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1046\n"); );
    // Body
    vlSelf->top__DOT___1356_ = (1U & ((IData)(vlSelf->top__DOT___1795_) 
                                      ^ (1U & (((IData)(0x13U) 
                                                + (IData)(vlSelf->top__DOT___4307_)) 
                                               >> 4U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1047(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1047\n"); );
    // Body
    vlSelf->top__DOT___4087_ = (0x1fU & (((0x1eU & 
                                           ((IData)(
                                                    (vlSelf->top__DOT___6968_ 
                                                     >> 0x16U)) 
                                            << 1U)) 
                                          | (IData)(vlSelf->top__DOT___1979_)) 
                                         + (((IData)(vlSelf->top__DOT___3603_) 
                                             << 4U) 
                                            | (((IData)(vlSelf->top__DOT___2640_) 
                                                << 3U) 
                                               | ((4U 
                                                   & (vlSelf->top__DOT___3900_[0U] 
                                                      >> 0x10U)) 
                                                  | (((IData)(vlSelf->top__DOT___0381_) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->top__DOT___0500_)))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1048(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1048\n"); );
    // Body
    vlSelf->top__DOT___1755_ = (1U & (~ (((IData)(vlSelf->top__DOT___0103_) 
                                          & (IData)(vlSelf->top__DOT___1899_)) 
                                         | ((IData)(vlSelf->top__DOT___3789_) 
                                            ^ (IData)(vlSelf->top__DOT___1206_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1052(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1052\n"); );
    // Body
    vlSelf->top__DOT___4407_ = ((0xfULL & vlSelf->top__DOT___4407_) 
                                | (((QData)((IData)(
                                                    (0x3fU 
                                                     & (vlSelf->top__DOT___3824_[1U] 
                                                        >> 0x18U)))) 
                                    << 0x2fU) | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___7089_ 
                                                                              >> 0x15U))))) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(
                                                                     (7U 
                                                                      & (vlSelf->top__DOT___3824_[1U] 
                                                                         >> 0x14U)))) 
                                                     << 0x2bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___7089_ 
                                                                                >> 0x11U))))) 
                                                        << 0x2aU) 
                                                       | (((QData)((IData)(
                                                                           (3U 
                                                                            & (vlSelf->top__DOT___3824_[1U] 
                                                                               >> 0x11U)))) 
                                                           << 0x28U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT___7089_ 
                                                                                >> 0xeU))))) 
                                                              << 0x27U) 
                                                             | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3824_[1U] 
                                                                                >> 0xeU)))) 
                                                                 << 0x25U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7089_ 
                                                                                >> 0xbU))))) 
                                                                    << 0x24U) 
                                                                   | ((QData)((IData)(
                                                                                ((0xfe000000U 
                                                                                & (vlSelf->top__DOT___3824_[1U] 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0370_) 
                                                                                << 0x18U) 
                                                                                | vlSelf->top__DOT___7018_)))) 
                                                                      << 4U))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1053(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1053\n"); );
    // Init
    CData/*0:0*/ top__DOT___1035_;
    top__DOT___1035_ = 0;
    // Body
    vlSelf->top__DOT____VdfgTmp_h7fca931d__0 = ((0x80000U 
                                                 & (((0xffe00U 
                                                      & (vlSelf->top__DOT___3885_ 
                                                         << 2U)) 
                                                     | (((IData)(vlSelf->top__DOT____VdfgTmp_h13af565f__0) 
                                                         << 6U) 
                                                        | (IData)(vlSelf->top__DOT____VdfgTmp_hc785c9fb__0))) 
                                                    + 
                                                    ((0xc0000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___4509_ 
                                                                  >> 0x12U)) 
                                                         << 0x12U)) 
                                                     | vlSelf->top__DOT____VdfgTmp_h9213fb00__0))) 
                                                | ((0x7ff00U 
                                                    & ((vlSelf->top__DOT___3824_[3U] 
                                                        << 9U) 
                                                       | (0x100U 
                                                          & (vlSelf->top__DOT___3824_[2U] 
                                                             >> 0x17U)))) 
                                                   | (0xffU 
                                                      & (((0xc0U 
                                                           & (vlSelf->top__DOT___3885_ 
                                                              << 2U)) 
                                                          | (IData)(vlSelf->top__DOT____VdfgTmp_hc785c9fb__0)) 
                                                         + 
                                                         ((0x80U 
                                                           & ((IData)(vlSelf->top__DOT___4214_) 
                                                              << 3U)) 
                                                          | (IData)(vlSelf->top__DOT____VdfgTmp_ha007d041__0))))));
    vlSelf->top__DOT___2862_ = (1U & ((((0xcU & (vlSelf->top__DOT___3824_[1U] 
                                                 >> 6U)) 
                                        | (((IData)(vlSelf->top__DOT___0866_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___0186_))) 
                                       + (((IData)(vlSelf->top__DOT___0779_) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top__DOT___1692_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0293_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0441_))))) 
                                      >> 3U));
    top__DOT___1035_ = (1U & ((((8U & ((IData)((vlSelf->top__DOT___7089_ 
                                                >> 0x11U)) 
                                       << 3U)) | ((6U 
                                                   & (vlSelf->top__DOT___3824_[1U] 
                                                      >> 0x10U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT___7089_ 
                                                                >> 0xeU))))) 
                               + (((IData)(vlSelf->top__DOT___0483_) 
                                   << 3U) | (IData)(vlSelf->top__DOT___6966_))) 
                              >> 3U));
    vlSelf->top__DOT____VdfgTmp_h64ba03aa__0 = ((0x2000000U 
                                                 & (vlSelf->top__DOT____VdfgTmp_h76d6b53b__0 
                                                    + 
                                                    ((0x3fc0000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___4509_ 
                                                                  >> 0x12U)) 
                                                         << 0x12U)) 
                                                     | vlSelf->top__DOT____VdfgTmp_h9213fb00__0))) 
                                                | ((0x1f00000U 
                                                    & vlSelf->top__DOT____VdfgTmp_h8679a1ce__0) 
                                                   | vlSelf->top__DOT____VdfgTmp_h7fca931d__0));
    vlSelf->top__DOT___0630_ = ((IData)(vlSelf->top__DOT___0439_) 
                                & (~ (IData)(top__DOT___1035_)));
    vlSelf->top__DOT___3829_[2U] = ((0xfffU & vlSelf->top__DOT___3829_[2U]) 
                                    | (0xfffff000U 
                                       & ((0xffffe000U 
                                           & vlSelf->top__DOT___7148_[0U]) 
                                          | ((IData)(vlSelf->top__DOT___0630_) 
                                             << 0xcU))));
    vlSelf->top__DOT___3829_[3U] = (0xfU & ((0xfU & 
                                             vlSelf->top__DOT___7148_[1U]) 
                                            | ((IData)(vlSelf->top__DOT___0630_) 
                                               >> 0x14U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1054(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1054\n"); );
    // Body
    vlSelf->top__DOT___1139_ = (1U & ((((0x1800U & 
                                         (vlSelf->top__DOT___3824_[1U] 
                                          >> 6U)) | 
                                        ((0x400U & 
                                          ((IData)(
                                                   (vlSelf->top__DOT___7089_ 
                                                    >> 0xeU)) 
                                           << 0xaU)) 
                                         | ((0x300U 
                                             & (vlSelf->top__DOT___3824_[1U] 
                                                >> 6U)) 
                                            | ((0x80U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT___7089_ 
                                                            >> 0xbU)) 
                                                   << 7U)) 
                                               | ((0x7cU 
                                                   & (vlSelf->top__DOT___3824_[1U] 
                                                      >> 6U)) 
                                                  | (((IData)(vlSelf->top__DOT___0866_) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->top__DOT___0186_))))))) 
                                       + ((0x1ff0U 
                                           & vlSelf->top__DOT___4261_) 
                                          | (((IData)(vlSelf->top__DOT___0779_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___1692_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0293_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0441_)))))) 
                                      >> 0xcU));
    vlSelf->top__DOT___1436_ = (1U & ((((0x300U & (
                                                   vlSelf->top__DOT___3824_[1U] 
                                                   >> 6U)) 
                                        | ((0x80U & 
                                            ((IData)(
                                                     (vlSelf->top__DOT___7089_ 
                                                      >> 0xbU)) 
                                             << 7U)) 
                                           | ((0x7cU 
                                               & (vlSelf->top__DOT___3824_[1U] 
                                                  >> 6U)) 
                                              | (((IData)(vlSelf->top__DOT___0866_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___0186_))))) 
                                       + ((0x3f0U & vlSelf->top__DOT___4261_) 
                                          | (((IData)(vlSelf->top__DOT___0779_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___1692_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0293_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0441_)))))) 
                                      >> 9U));
    vlSelf->top__DOT___4094_ = ((0x3fffc3U & vlSelf->top__DOT___4094_) 
                                | (((IData)(vlSelf->top__DOT___1436_) 
                                    << 5U) | (((IData)(vlSelf->top__DOT___0629_) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top__DOT___0216_) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->top__DOT___1312_) 
                                                    << 2U)))));
    vlSelf->top__DOT___0777_ = ((IData)(vlSelf->top__DOT___1796_) 
                                & (IData)(vlSelf->top__DOT___1436_));
    vlSelf->top__DOT___3121_ = (1U & (((((IData)(vlSelf->top__DOT___0077_) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT___0830_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___1436_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0585_)))) 
                                       + (((IData)(vlSelf->top__DOT___2465_) 
                                           << 3U) | 
                                          ((4U & (vlSelf->top__DOT___3900_[0U] 
                                                  >> 3U)) 
                                           | (((IData)(vlSelf->top__DOT___2876_) 
                                               << 1U) 
                                              | (1U 
                                                 & (vlSelf->top__DOT___3900_[0U] 
                                                    >> 3U)))))) 
                                      >> 3U));
    vlSelf->top__DOT___0796_ = ((IData)(vlSelf->top__DOT___1436_) 
                                | (IData)(vlSelf->top__DOT___2359_));
    vlSelf->top__DOT___4325_ = ((0x7ffffffffffULL & vlSelf->top__DOT___4325_) 
                                | ((QData)((IData)(
                                                   ((0xffc00U 
                                                     & (vlSelf->top__DOT___7112_ 
                                                        >> 9U)) 
                                                    | ((0x200U 
                                                        & (vlSelf->top__DOT___7112_ 
                                                           >> 9U)) 
                                                       | ((0x180U 
                                                           & (vlSelf->top__DOT___7112_ 
                                                              >> 9U)) 
                                                          | (((IData)(vlSelf->top__DOT___3141_) 
                                                              << 6U) 
                                                             | ((0x3eU 
                                                                 & (vlSelf->top__DOT___7112_ 
                                                                    >> 9U)) 
                                                                | (IData)(vlSelf->top__DOT___0777_)))))))) 
                                   << 0x2bU));
    vlSelf->top__DOT___4631_[3U] = ((0xffffc7ffU & 
                                     vlSelf->top__DOT___4631_[3U]) 
                                    | (0xfffff800U 
                                       & (((IData)(vlSelf->top__DOT___1842_) 
                                           << 0xdU) 
                                          | (((IData)(vlSelf->top__DOT___1350_) 
                                              << 0xcU) 
                                             | ((IData)(vlSelf->top__DOT___0796_) 
                                                << 0xbU)))));
    vlSelf->top__DOT____VdfgTmp_hd24588aa__0 = ((0x100U 
                                                 & (vlSelf->top__DOT___7112_ 
                                                    >> 0xaU)) 
                                                | ((0xc0U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___4325_ 
                                                                >> 0x32U)) 
                                                       << 6U)) 
                                                   | (((IData)(vlSelf->top__DOT___3141_) 
                                                       << 5U) 
                                                      | (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT___4325_ 
                                                                    >> 0x2cU))))));
    vlSelf->top__DOT___4374_ = ((1U & vlSelf->top__DOT___4374_) 
                                | ((0x7e0000U & ((IData)(
                                                         (vlSelf->top__DOT___4325_ 
                                                          >> 0x35U)) 
                                                 << 0x11U)) 
                                   | ((0x10000U & (vlSelf->top__DOT___7112_ 
                                                   >> 2U)) 
                                      | ((0xc000U & 
                                          ((IData)(
                                                   (vlSelf->top__DOT___4325_ 
                                                    >> 0x32U)) 
                                           << 0xeU)) 
                                         | (((IData)(vlSelf->top__DOT___3141_) 
                                             << 0xdU) 
                                            | ((0x1f00U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT___4325_ 
                                                            >> 0x2cU)) 
                                                   << 8U)) 
                                               | (0xfeU 
                                                  & (vlSelf->top__DOT___7112_ 
                                                     >> 2U))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1058(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1058\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0x7fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT___7167_ 
                                                          >> 0x22U))))) 
                              << 0x38U) | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT___7167_ 
                                                                        >> 0x1aU))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0778_)) 
                                               << 0x2fU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0834_)) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(
                                                                     (0x7ffU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x22U))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___3610_)) 
                                                        << 0x22U) 
                                                       | (((QData)((IData)(
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x1eU))))) 
                                                           << 0x1fU) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlSelf->top__DOT___3725_) 
                                                                              << 0x1eU) 
                                                                             | ((0x3ff00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x13U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3131_) 
                                                                                << 0x13U) 
                                                                                | ((0x7ffe0U 
                                                                                & (vlSelf->top__DOT___3945_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2841_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2000_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(vlSelf->top__DOT___4321_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0201_))))))))))))))))));
    __Vtemp_1[1U] = ((0x80000000U & ((IData)(vlSelf->top__DOT___4269_) 
                                     << 0x1dU)) | (IData)(
                                                          ((((QData)((IData)(
                                                                             (0x7fU 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT___7167_ 
                                                                                >> 0x22U))))) 
                                                             << 0x38U) 
                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7167_ 
                                                                                >> 0x1aU))))) 
                                                                << 0x30U) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___0778_)) 
                                                                   << 0x2fU) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___0834_)) 
                                                                      << 0x2eU) 
                                                                     | (((QData)((IData)(
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x22U))))) 
                                                                         << 0x23U) 
                                                                        | (((QData)((IData)(vlSelf->top__DOT___3610_)) 
                                                                            << 0x22U) 
                                                                           | (((QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x1eU))))) 
                                                                               << 0x1fU) 
                                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3725_) 
                                                                                << 0x1eU) 
                                                                                | ((0x3ff00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x13U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3131_) 
                                                                                << 0x13U) 
                                                                                | ((0x7ffe0U 
                                                                                & (vlSelf->top__DOT___3945_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2841_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2000_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(vlSelf->top__DOT___4321_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0201_))))))))))))))))) 
                                                           >> 0x20U)));
    vlSelf->top__DOT___4518_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4518_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4518_[2U] = (1U & ((IData)(vlSelf->top__DOT___4269_) 
                                          >> 3U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1059(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1059\n"); );
    // Body
    vlSelf->top__DOT___2030_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (0x7fffU 
                                                                     & ((vlSelf->top__DOT___4519_[1U] 
                                                                         << 4U) 
                                                                        | (vlSelf->top__DOT___4519_[0U] 
                                                                           >> 0x1cU))))) 
                                                    << 0x1cU) 
                                                   | (QData)((IData)(
                                                                     ((0x8000000U 
                                                                       & (vlSelf->top__DOT___7115_[0U] 
                                                                          >> 3U)) 
                                                                      | ((0x7fffc00U 
                                                                          & vlSelf->top__DOT___4519_[0U]) 
                                                                         | ((0x200U 
                                                                             & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                            | ((0x100U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                               | ((0x80U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x70U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1007_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1132_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0485_))))))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0xff0U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x22U)) 
                                                                         << 4U)) 
                                                                     | (((IData)(vlSelf->top__DOT___3610_) 
                                                                         << 3U) 
                                                                        | (7U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x1eU))))))) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___3725_) 
                                                                       << 0x1eU) 
                                                                      | ((0x3ff00000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x13U)) 
                                                                             << 0x14U)) 
                                                                         | (((IData)(vlSelf->top__DOT___3131_) 
                                                                             << 0x13U) 
                                                                            | ((0x7ffe0U 
                                                                                & (vlSelf->top__DOT___3945_ 
                                                                                << 2U)) 
                                                                               | (((IData)(vlSelf->top__DOT___2841_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2000_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(vlSelf->top__DOT___4321_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0201_)))))))))))) 
                                                 >> 0x2aU))));
    vlSelf->top__DOT___3395_ = (1U & ((((0x3fc00U & 
                                         vlSelf->top__DOT___4519_[0U]) 
                                        | ((0x200U 
                                            & (vlSelf->top__DOT___7115_[0U] 
                                               >> 3U)) 
                                           | ((0x100U 
                                               & (vlSelf->top__DOT___7115_[0U] 
                                                  >> 3U)) 
                                              | ((0x80U 
                                                  & (vlSelf->top__DOT___7115_[0U] 
                                                     >> 3U)) 
                                                 | ((0x70U 
                                                     & vlSelf->top__DOT___4519_[0U]) 
                                                    | (((IData)(vlSelf->top__DOT___1007_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___1132_) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->top__DOT___1692_) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT___0485_))))))))) 
                                       + ((0x3ffe0U 
                                           & (vlSelf->top__DOT___3945_ 
                                              << 2U)) 
                                          | (((IData)(vlSelf->top__DOT___2841_) 
                                              << 4U) 
                                             | (((IData)(vlSelf->top__DOT___2000_) 
                                                 << 3U) 
                                                | ((6U 
                                                    & ((IData)(vlSelf->top__DOT___4321_) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->top__DOT___0201_)))))) 
                                      >> 0x11U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1060(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1060\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelf->top__DOT___3876_ = ((0x1fc000U & ((IData)(
                                                      (0x7fULL 
                                                       & ((((((QData)((IData)(
                                                                              ((0x1000000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                << 2U)) 
                                                                               | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x7c0000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                << 2U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x1ffe0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                >> 2U))))))))))))) 
                                                              << 0x1eU) 
                                                             | ((QData)((IData)(
                                                                                ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3603_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___2640_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1113_) 
                                                                                << 0xbU) 
                                                                                | ((0x780U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1782_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3272_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3413_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2501_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (IData)(vlSelf->top__DOT___2465_))))))))))))))))))))))) 
                                                                << 6U)) 
                                                            | (QData)((IData)(
                                                                              ((0x20U 
                                                                                & vlSelf->top__DOT___3900_[0U]) 
                                                                               | (((IData)(vlSelf->top__DOT___2876_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & vlSelf->top__DOT___3900_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0218_)))))))) 
                                                           + 
                                                           (((QData)((IData)(
                                                                             ((0x1f800U 
                                                                               & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 6U)) 
                                                                              | ((0x400U 
                                                                                & (vlSelf->top__DOT___7237_[0U] 
                                                                                >> 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0781_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0119_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0781_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 4U) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x24U)))))))))))))) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 5U)))) 
                                                                << 0x25U) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___2531_)) 
                                                                   << 0x24U) 
                                                                  | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 2U)))) 
                                                                      << 0x22U) 
                                                                     | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x70000000U 
                                                                                & ((vlSelf->top__DOT___3899_[1U] 
                                                                                << 0x1eU) 
                                                                                | (0x30000000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)))) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x3fc0000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x7c0U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x1eU 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7096_))))))))))))))))) 
                                                                         << 2U) 
                                                                        | (QData)((IData)(
                                                                                ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0699_)))))))))) 
                                                          >> 0x30U))) 
                                              << 0xeU)) 
                                | (((IData)(vlSelf->top__DOT___3213_) 
                                    << 0xdU) | ((0x1f80U 
                                                 & ((IData)(
                                                            (0x3fULL 
                                                             & ((((((QData)((IData)(
                                                                                ((0x1ffe0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                >> 2U))))))))) 
                                                                    << 0x1eU) 
                                                                   | ((QData)((IData)(
                                                                                ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3603_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___2640_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1113_) 
                                                                                << 0xbU) 
                                                                                | ((0x780U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1782_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3272_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3413_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2501_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (IData)(vlSelf->top__DOT___2465_))))))))))))))))))))))) 
                                                                      << 6U)) 
                                                                  | (QData)((IData)(
                                                                                ((0x20U 
                                                                                & vlSelf->top__DOT___3900_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2876_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & vlSelf->top__DOT___3900_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0218_)))))))) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0119_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0781_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 4U) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x24U))))))))))) 
                                                                   << 0x26U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 5U)))) 
                                                                      << 0x25U) 
                                                                     | (((QData)((IData)(vlSelf->top__DOT___2531_)) 
                                                                         << 0x24U) 
                                                                        | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 2U)))) 
                                                                            << 0x22U) 
                                                                           | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x70000000U 
                                                                                & ((vlSelf->top__DOT___3899_[1U] 
                                                                                << 0x1eU) 
                                                                                | (0x30000000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)))) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x3fc0000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x7c0U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x1eU 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7096_))))))))))))))))) 
                                                                               << 2U) 
                                                                              | (QData)((IData)(
                                                                                ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0699_)))))))))) 
                                                                >> 0x29U))) 
                                                    << 7U)) 
                                                | (((IData)(vlSelf->top__DOT___1100_) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->top__DOT___0445_) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->top__DOT___1229_) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->top__DOT___0197_) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->top__DOT___1509_) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->top__DOT___0169_) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->top__DOT___1356_))))))))));
    __Vtemp_2[0U] = (((IData)((((QData)((IData)((0xffU 
                                                 & ((vlSelf->top__DOT___3900_[2U] 
                                                     << 2U) 
                                                    | (vlSelf->top__DOT___3900_[1U] 
                                                       >> 0x1eU))))) 
                                << 0x38U) | (((QData)((IData)(
                                                              (((IData)(
                                                                        (vlSelf->top__DOT___7215_ 
                                                                         >> 0x1bU)) 
                                                                << 0x1fU) 
                                                               | ((0x7f000000U 
                                                                   & (vlSelf->top__DOT___3900_[1U] 
                                                                      << 2U)) 
                                                                  | ((0x800000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                         << 0x17U)) 
                                                                     | ((0x7c0000U 
                                                                         & (vlSelf->top__DOT___3900_[1U] 
                                                                            << 2U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                               << 0x11U)) 
                                                                           | ((0x1ffe0U 
                                                                               & (vlSelf->top__DOT___3900_[1U] 
                                                                                << 2U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                >> 2U)))))))))))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               ((0x800000U 
                                                                 & ((IData)(vlSelf->top__DOT___7092_) 
                                                                    << 0x12U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(vlSelf->top__DOT___7092_) 
                                                                       << 0x12U)) 
                                                                   | ((0x200000U 
                                                                       & ((IData)(vlSelf->top__DOT___7092_) 
                                                                          << 0x12U)) 
                                                                      | ((0x100000U 
                                                                          & ((IData)(vlSelf->top__DOT___7092_) 
                                                                             << 0x12U)) 
                                                                         | ((0x80000U 
                                                                             & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0xaU)) 
                                                                            | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                               | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3603_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___2640_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1113_) 
                                                                                << 0xbU) 
                                                                                | ((0x780U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1782_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3272_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3413_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2501_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (IData)(vlSelf->top__DOT___2465_)))))))))))))))))))))))))) 
                      << 6U) | ((0x20U & vlSelf->top__DOT___3900_[0U]) 
                                | (((IData)(vlSelf->top__DOT___2876_) 
                                    << 4U) | ((8U & 
                                               vlSelf->top__DOT___3900_[0U]) 
                                              | (((IData)(vlSelf->top__DOT___0023_) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->top__DOT___0218_))))));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)((0xffU 
                                                 & ((vlSelf->top__DOT___3900_[2U] 
                                                     << 2U) 
                                                    | (vlSelf->top__DOT___3900_[1U] 
                                                       >> 0x1eU))))) 
                                << 0x38U) | (((QData)((IData)(
                                                              (((IData)(
                                                                        (vlSelf->top__DOT___7215_ 
                                                                         >> 0x1bU)) 
                                                                << 0x1fU) 
                                                               | ((0x7f000000U 
                                                                   & (vlSelf->top__DOT___3900_[1U] 
                                                                      << 2U)) 
                                                                  | ((0x800000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                         << 0x17U)) 
                                                                     | ((0x7c0000U 
                                                                         & (vlSelf->top__DOT___3900_[1U] 
                                                                            << 2U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                               << 0x11U)) 
                                                                           | ((0x1ffe0U 
                                                                               & (vlSelf->top__DOT___3900_[1U] 
                                                                                << 2U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                >> 2U)))))))))))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               ((0x800000U 
                                                                 & ((IData)(vlSelf->top__DOT___7092_) 
                                                                    << 0x12U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(vlSelf->top__DOT___7092_) 
                                                                       << 0x12U)) 
                                                                   | ((0x200000U 
                                                                       & ((IData)(vlSelf->top__DOT___7092_) 
                                                                          << 0x12U)) 
                                                                      | ((0x100000U 
                                                                          & ((IData)(vlSelf->top__DOT___7092_) 
                                                                             << 0x12U)) 
                                                                         | ((0x80000U 
                                                                             & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0xaU)) 
                                                                            | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                               | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3603_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___2640_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1113_) 
                                                                                << 0xbU) 
                                                                                | ((0x780U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1782_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3272_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3413_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2501_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (IData)(vlSelf->top__DOT___2465_)))))))))))))))))))))))))) 
                      >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                              (0xffU 
                                                               & ((vlSelf->top__DOT___3900_[2U] 
                                                                   << 2U) 
                                                                  | (vlSelf->top__DOT___3900_[1U] 
                                                                     >> 0x1eU))))) 
                                              << 0x38U) 
                                             | (((QData)((IData)(
                                                                 (((IData)(
                                                                           (vlSelf->top__DOT___7215_ 
                                                                            >> 0x1bU)) 
                                                                   << 0x1fU) 
                                                                  | ((0x7f000000U 
                                                                      & (vlSelf->top__DOT___3900_[1U] 
                                                                         << 2U)) 
                                                                     | ((0x800000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                            << 0x17U)) 
                                                                        | ((0x7c0000U 
                                                                            & (vlSelf->top__DOT___3900_[1U] 
                                                                               << 2U)) 
                                                                           | ((0x20000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                                << 0x11U)) 
                                                                              | ((0x1ffe0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                >> 2U)))))))))))))) 
                                                 << 0x18U) 
                                                | (QData)((IData)(
                                                                  ((0x800000U 
                                                                    & ((IData)(vlSelf->top__DOT___7092_) 
                                                                       << 0x12U)) 
                                                                   | ((0x400000U 
                                                                       & ((IData)(vlSelf->top__DOT___7092_) 
                                                                          << 0x12U)) 
                                                                      | ((0x200000U 
                                                                          & ((IData)(vlSelf->top__DOT___7092_) 
                                                                             << 0x12U)) 
                                                                         | ((0x100000U 
                                                                             & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                            | ((0x80000U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0xaU)) 
                                                                               | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3603_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___2640_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1113_) 
                                                                                << 0xbU) 
                                                                                | ((0x780U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1782_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3272_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3413_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2501_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (IData)(vlSelf->top__DOT___2465_))))))))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 6U));
    __Vtemp_2[2U] = ((IData)(((((QData)((IData)((0xffU 
                                                 & ((vlSelf->top__DOT___3900_[2U] 
                                                     << 2U) 
                                                    | (vlSelf->top__DOT___3900_[1U] 
                                                       >> 0x1eU))))) 
                                << 0x38U) | (((QData)((IData)(
                                                              (((IData)(
                                                                        (vlSelf->top__DOT___7215_ 
                                                                         >> 0x1bU)) 
                                                                << 0x1fU) 
                                                               | ((0x7f000000U 
                                                                   & (vlSelf->top__DOT___3900_[1U] 
                                                                      << 2U)) 
                                                                  | ((0x800000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                         << 0x17U)) 
                                                                     | ((0x7c0000U 
                                                                         & (vlSelf->top__DOT___3900_[1U] 
                                                                            << 2U)) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                               << 0x11U)) 
                                                                           | ((0x1ffe0U 
                                                                               & (vlSelf->top__DOT___3900_[1U] 
                                                                                << 2U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                >> 2U)))))))))))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               ((0x800000U 
                                                                 & ((IData)(vlSelf->top__DOT___7092_) 
                                                                    << 0x12U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(vlSelf->top__DOT___7092_) 
                                                                       << 0x12U)) 
                                                                   | ((0x200000U 
                                                                       & ((IData)(vlSelf->top__DOT___7092_) 
                                                                          << 0x12U)) 
                                                                      | ((0x100000U 
                                                                          & ((IData)(vlSelf->top__DOT___7092_) 
                                                                             << 0x12U)) 
                                                                         | ((0x80000U 
                                                                             & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0xaU)) 
                                                                            | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                               | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3603_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___2640_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1113_) 
                                                                                << 0xbU) 
                                                                                | ((0x780U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1782_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3272_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3413_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2501_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (IData)(vlSelf->top__DOT___2465_))))))))))))))))))))))))) 
                              >> 0x20U)) >> 0x1aU);
    __Vtemp_3[0U] = (IData)((((QData)((IData)((1U & 
                                               (vlSelf->top__DOT___3899_[1U] 
                                                >> 5U)))) 
                              << 0x25U) | (((QData)((IData)(vlSelf->top__DOT___2531_)) 
                                            << 0x24U) 
                                           | (((QData)((IData)(
                                                               (3U 
                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                   >> 2U)))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (((IData)(
                                                                            (vlSelf->top__DOT___7096_ 
                                                                             >> 0x1fU)) 
                                                                    << 0x1fU) 
                                                                   | ((0x70000000U 
                                                                       & ((vlSelf->top__DOT___3899_[1U] 
                                                                           << 0x1eU) 
                                                                          | (0x30000000U 
                                                                             & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)))) 
                                                                      | ((0x8000000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1bU)) 
                                                                             << 0x1bU)) 
                                                                         | ((0x4000000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                            | ((0x3fc0000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                               | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x7c0U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x1eU 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7096_))))))))))))))))) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   ((2U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                        << 1U)) 
                                                                    | (IData)(vlSelf->top__DOT___0699_)))))))));
    __Vtemp_3[1U] = ((0xffffffc0U & ((0x80000000U & 
                                      vlSelf->top__DOT___3899_[1U]) 
                                     | ((0x40000000U 
                                         & (vlSelf->top__DOT___7237_[1U] 
                                            << 0x17U)) 
                                        | ((0x3ffe0000U 
                                            & vlSelf->top__DOT___3899_[1U]) 
                                           | ((0x10000U 
                                               & (vlSelf->top__DOT___7237_[0U] 
                                                  >> 9U)) 
                                              | (((IData)(vlSelf->top__DOT___0781_) 
                                                  << 0xfU) 
                                                 | (((IData)(vlSelf->top__DOT___0119_) 
                                                     << 0xeU) 
                                                    | (((IData)(vlSelf->top__DOT___0781_) 
                                                        << 0xdU) 
                                                       | (((IData)(vlSelf->top__DOT___0218_) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelf->top__DOT___0069_) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelf->top__DOT___0116_) 
                                                                 << 0xaU) 
                                                                | ((0x380U 
                                                                    & vlSelf->top__DOT___3899_[1U]) 
                                                                   | (0x40U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x24U)) 
                                                                         << 6U)))))))))))))) 
                     | (IData)(((((QData)((IData)((1U 
                                                   & (vlSelf->top__DOT___3899_[1U] 
                                                      >> 5U)))) 
                                  << 0x25U) | (((QData)((IData)(vlSelf->top__DOT___2531_)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   (3U 
                                                                    & (vlSelf->top__DOT___3899_[1U] 
                                                                       >> 2U)))) 
                                                   << 0x22U) 
                                                  | (((QData)((IData)(
                                                                      (((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1fU)) 
                                                                        << 0x1fU) 
                                                                       | ((0x70000000U 
                                                                           & ((vlSelf->top__DOT___3899_[1U] 
                                                                               << 0x1eU) 
                                                                              | (0x30000000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)))) 
                                                                          | ((0x8000000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                             | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x3fc0000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x7c0U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x1eU 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7096_))))))))))))))))) 
                                                      << 2U) 
                                                     | (QData)((IData)(
                                                                       ((2U 
                                                                         & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                            << 1U)) 
                                                                        | (IData)(vlSelf->top__DOT___0699_)))))))) 
                                >> 0x20U)));
    __Vtemp_3[2U] = (0x3fU & (vlSelf->top__DOT___3899_[2U] 
                              | (((IData)(vlSelf->top__DOT___0781_) 
                                  >> 0x11U) | (((IData)(vlSelf->top__DOT___0119_) 
                                                >> 0x12U) 
                                               | (((IData)(vlSelf->top__DOT___0781_) 
                                                   >> 0x13U) 
                                                  | (((IData)(vlSelf->top__DOT___0218_) 
                                                      >> 0x14U) 
                                                     | (((IData)(vlSelf->top__DOT___0069_) 
                                                         >> 0x15U) 
                                                        | ((IData)(vlSelf->top__DOT___0116_) 
                                                           >> 0x16U))))))));
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    __Vtemp_6[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___1862_)) 
                              << 0x3aU) | (((QData)((IData)(vlSelf->top__DOT___1265_)) 
                                            << 0x39U) 
                                           | (((QData)((IData)(
                                                               (3U 
                                                                & (IData)(
                                                                          (3ULL 
                                                                           & ((((((QData)((IData)(
                                                                                ((0x7000000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                << 2U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x7c0000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                << 2U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x1ffe0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                >> 2U))))))))))))) 
                                                                                << 0x1eU) 
                                                                                | ((QData)((IData)(
                                                                                ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3603_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___2640_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1113_) 
                                                                                << 0xbU) 
                                                                                | ((0x780U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1782_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3272_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3413_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2501_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (IData)(vlSelf->top__DOT___2465_))))))))))))))))))))))) 
                                                                                << 6U)) 
                                                                                | (QData)((IData)(
                                                                                ((0x20U 
                                                                                & vlSelf->top__DOT___3900_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2876_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & vlSelf->top__DOT___3900_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0218_)))))))) 
                                                                               + 
                                                                               (((QData)((IData)(
                                                                                ((0x7f800U 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7237_[0U] 
                                                                                >> 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0781_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0119_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0781_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 4U) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x24U)))))))))))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 5U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2531_)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 2U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x70000000U 
                                                                                & ((vlSelf->top__DOT___3899_[1U] 
                                                                                << 0x1eU) 
                                                                                | (0x30000000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)))) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x3fc0000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x7c0U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x1eU 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7096_))))))))))))))))) 
                                                                                << 2U) 
                                                                                | (QData)((IData)(
                                                                                ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0699_)))))))))) 
                                                                              >> 0x37U)))))) 
                                               << 0x37U) 
                                              | (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & (vlSelf->top__DOT___3876_ 
                                                                      >> 0xeU)))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___3213_)) 
                                                     << 0x2fU) 
                                                    | (((QData)((IData)(
                                                                        (0x3fU 
                                                                         & (vlSelf->top__DOT___3876_ 
                                                                            >> 7U)))) 
                                                        << 0x29U) 
                                                       | ((0x1fffffffffcULL 
                                                           & (((((QData)((IData)(
                                                                                ((0x7e0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                >> 2U))))))))) 
                                                                 << 0x1eU) 
                                                                | ((QData)((IData)(
                                                                                ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3603_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___2640_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1113_) 
                                                                                << 0xbU) 
                                                                                | ((0x780U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1782_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3272_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3413_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2501_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (IData)(vlSelf->top__DOT___2465_))))))))))))))))))))))) 
                                                                   << 6U)) 
                                                               | (QData)((IData)(
                                                                                ((0x20U 
                                                                                & vlSelf->top__DOT___3900_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2876_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & vlSelf->top__DOT___3900_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0218_)))))))) 
                                                              + 
                                                              (((QData)((IData)(
                                                                                ((6U 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x24U)))))) 
                                                                << 0x26U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 5U)))) 
                                                                   << 0x25U) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___2531_)) 
                                                                      << 0x24U) 
                                                                     | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 2U)))) 
                                                                         << 0x22U) 
                                                                        | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x70000000U 
                                                                                & ((vlSelf->top__DOT___3899_[1U] 
                                                                                << 0x1eU) 
                                                                                | (0x30000000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)))) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x3fc0000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x7c0U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x1eU 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7096_))))))))))))))))) 
                                                                            << 2U) 
                                                                           | (QData)((IData)(
                                                                                ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlSelf->top__DOT___2627_) 
                                                                              << 1U) 
                                                                             | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___0218_) 
                                                                                + (IData)(vlSelf->top__DOT___0699_))))))))))))));
    __Vtemp_6[1U] = ((0xf8000000U & __Vtemp_4[1U]) 
                     | (IData)(((((QData)((IData)(vlSelf->top__DOT___1862_)) 
                                  << 0x3aU) | (((QData)((IData)(vlSelf->top__DOT___1265_)) 
                                                << 0x39U) 
                                               | (((QData)((IData)(
                                                                   (3U 
                                                                    & (IData)(
                                                                              (3ULL 
                                                                               & ((((((QData)((IData)(
                                                                                ((0x7000000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                << 2U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x7c0000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                << 2U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x1ffe0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                >> 2U))))))))))))) 
                                                                                << 0x1eU) 
                                                                                | ((QData)((IData)(
                                                                                ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3603_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___2640_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1113_) 
                                                                                << 0xbU) 
                                                                                | ((0x780U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1782_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3272_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3413_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2501_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (IData)(vlSelf->top__DOT___2465_))))))))))))))))))))))) 
                                                                                << 6U)) 
                                                                                | (QData)((IData)(
                                                                                ((0x20U 
                                                                                & vlSelf->top__DOT___3900_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2876_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & vlSelf->top__DOT___3900_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0218_)))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0x7f800U 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7237_[0U] 
                                                                                >> 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0781_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0119_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0781_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 4U) 
                                                                                | ((0xeU 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x24U)))))))))))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 5U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2531_)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 2U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x70000000U 
                                                                                & ((vlSelf->top__DOT___3899_[1U] 
                                                                                << 0x1eU) 
                                                                                | (0x30000000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)))) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x3fc0000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x7c0U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x1eU 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7096_))))))))))))))))) 
                                                                                << 2U) 
                                                                                | (QData)((IData)(
                                                                                ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0699_)))))))))) 
                                                                                >> 0x37U)))))) 
                                                   << 0x37U) 
                                                  | (((QData)((IData)(
                                                                      (0x7fU 
                                                                       & (vlSelf->top__DOT___3876_ 
                                                                          >> 0xeU)))) 
                                                      << 0x30U) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___3213_)) 
                                                         << 0x2fU) 
                                                        | (((QData)((IData)(
                                                                            (0x3fU 
                                                                             & (vlSelf->top__DOT___3876_ 
                                                                                >> 7U)))) 
                                                            << 0x29U) 
                                                           | ((0x1fffffffffcULL 
                                                               & (((((QData)((IData)(
                                                                                ((0x7e0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                >> 2U))))))))) 
                                                                     << 0x1eU) 
                                                                    | ((QData)((IData)(
                                                                                ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3603_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___2640_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1113_) 
                                                                                << 0xbU) 
                                                                                | ((0x780U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1782_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3272_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3413_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2501_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 6U)) 
                                                                                | (IData)(vlSelf->top__DOT___2465_))))))))))))))))))))))) 
                                                                       << 6U)) 
                                                                   | (QData)((IData)(
                                                                                ((0x20U 
                                                                                & vlSelf->top__DOT___3900_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2876_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & vlSelf->top__DOT___3900_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0218_)))))))) 
                                                                  + 
                                                                  (((QData)((IData)(
                                                                                ((6U 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x24U)))))) 
                                                                    << 0x26U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 5U)))) 
                                                                       << 0x25U) 
                                                                      | (((QData)((IData)(vlSelf->top__DOT___2531_)) 
                                                                          << 0x24U) 
                                                                         | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___3899_[1U] 
                                                                                >> 2U)))) 
                                                                             << 0x22U) 
                                                                            | (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x70000000U 
                                                                                & ((vlSelf->top__DOT___3899_[1U] 
                                                                                << 0x1eU) 
                                                                                | (0x30000000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)))) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x3fc0000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7000U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x7c0U 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x1eU 
                                                                                & (vlSelf->top__DOT___3899_[0U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7096_))))))))))))))))) 
                                                                                << 2U) 
                                                                               | (QData)((IData)(
                                                                                ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0699_))))))))))) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2627_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___0218_) 
                                                                                + (IData)(vlSelf->top__DOT___0699_))))))))))))) 
                                >> 0x20U)));
    vlSelf->top__DOT___3895_[0U] = __Vtemp_6[0U];
    vlSelf->top__DOT___3895_[1U] = __Vtemp_6[1U];
    vlSelf->top__DOT___3895_[2U] = (0x3fU & __Vtemp_4[2U]);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1062(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1062\n"); );
    // Body
    vlSelf->top__DOT___0825_ = ((IData)(vlSelf->top__DOT___0630_) 
                                & (vlSelf->top__DOT___7154_[0U] 
                                   >> 0xbU));
    vlSelf->top__DOT___0902_ = ((IData)(vlSelf->top__DOT___0825_) 
                                ^ (IData)(vlSelf->top__DOT___0741_));
    vlSelf->top__DOT___2106_ = ((IData)(vlSelf->top__DOT___2624_) 
                                | (IData)(vlSelf->top__DOT___0825_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1064(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1064\n"); );
    // Body
    vlSelf->top__DOT___2220_ = (1U & (((((IData)(vlSelf->top__DOT___1071_) 
                                         << 0xaU) | 
                                        (((IData)(vlSelf->top__DOT___0290_) 
                                          << 9U) | 
                                         (((IData)(vlSelf->top__DOT___0293_) 
                                           << 8U) | 
                                          (((IData)(vlSelf->top__DOT___0195_) 
                                            << 7U) 
                                           | (((IData)(vlSelf->top__DOT___0445_) 
                                               << 6U) 
                                              | (((IData)(vlSelf->top__DOT___1910_) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->top__DOT___0582_) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->top__DOT___0077_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___0830_) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->top__DOT___1436_) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT___0585_))))))))))) 
                                       + ((0x400U & 
                                           (vlSelf->top__DOT___3900_[0U] 
                                            >> 3U)) 
                                          | (((IData)(vlSelf->top__DOT___1782_) 
                                              << 9U) 
                                             | (((IData)(vlSelf->top__DOT___3272_) 
                                                 << 8U) 
                                                | ((0x80U 
                                                    & (vlSelf->top__DOT___3900_[0U] 
                                                       >> 3U)) 
                                                   | (((IData)(vlSelf->top__DOT___3413_) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->top__DOT___2501_) 
                                                          << 5U) 
                                                         | ((0x10U 
                                                             & (vlSelf->top__DOT___3900_[0U] 
                                                                >> 3U)) 
                                                            | (((IData)(vlSelf->top__DOT___2465_) 
                                                                << 3U) 
                                                               | ((4U 
                                                                   & (vlSelf->top__DOT___3900_[0U] 
                                                                      >> 3U)) 
                                                                  | (((IData)(vlSelf->top__DOT___2876_) 
                                                                      << 1U) 
                                                                     | (1U 
                                                                        & (vlSelf->top__DOT___3900_[0U] 
                                                                           >> 3U))))))))))))) 
                                      >> 0xaU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1065(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1065\n"); );
    // Body
    vlSelf->top__DOT___2013_ = (1U & (~ ((IData)(vlSelf->top__DOT___2014_) 
                                         | (~ (IData)(vlSelf->top__DOT___1436_)))));
    vlSelf->top__DOT___4233_[0U] = ((0xfffffff8U & 
                                     vlSelf->top__DOT___4233_[0U]) 
                                    | (((IData)(vlSelf->top__DOT___2013_) 
                                        << 2U) | (IData)(vlSelf->top__DOT___0880_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1068(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1068\n"); );
    // Body
    vlSelf->top__DOT___0463_ = (1U & ((IData)(vlSelf->top__DOT___7181_) 
                                      & (~ (((IData)(vlSelf->top__DOT___0992_) 
                                             & (~ (IData)(vlSelf->top__DOT___1436_))) 
                                            | (IData)(vlSelf->top__DOT___0372_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1069(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1069\n"); );
    // Body
    vlSelf->top__DOT___1339_ = (1U & ((IData)(vlSelf->top__DOT___2460_) 
                                      | (~ (IData)(vlSelf->top__DOT___1436_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1070(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1070\n"); );
    // Body
    vlSelf->top__DOT___0626_ = (1U & (~ (((IData)(vlSelf->top__DOT___0410_) 
                                          & (IData)(vlSelf->top__DOT___0177_)) 
                                         | ((IData)(vlSelf->top__DOT___3121_) 
                                            & (IData)(vlSelf->top__DOT___0992_)))));
    vlSelf->top__DOT___4324_ = ((0x7ffffffffffffffcULL 
                                 & vlSelf->top__DOT___4324_) 
                                | (IData)((IData)((
                                                   ((IData)(vlSelf->top__DOT___0626_) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSelf->top__DOT___7184_ 
                                                         >> 0xfU))))));
    vlSelf->top__DOT___0813_ = ((IData)(vlSelf->top__DOT___0626_) 
                                | (IData)(vlSelf->top__DOT___0102_));
    vlSelf->top__DOT___1008_ = ((~ (IData)(vlSelf->top__DOT___0626_)) 
                                & (IData)(vlSelf->top__DOT___1009_));
    vlSelf->top__DOT___4343_[2U] = ((0x7fffff83U & 
                                     vlSelf->top__DOT___4343_[2U]) 
                                    | (0x7ffffffcU 
                                       & (((IData)(vlSelf->top__DOT___0359_) 
                                           << 6U) | 
                                          (((IData)(vlSelf->top__DOT___0080_) 
                                            << 5U) 
                                           | (((IData)(vlSelf->top__DOT___0923_) 
                                               << 4U) 
                                              | ((IData)(vlSelf->top__DOT___0626_) 
                                                 << 2U))))));
    vlSelf->top__DOT___4450_ = ((0x7fffffff9fULL & vlSelf->top__DOT___4450_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___0183_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0626_)))) 
                                   << 5U));
    vlSelf->top__DOT___1644_ = ((IData)(vlSelf->top__DOT___1097_) 
                                & (IData)(vlSelf->top__DOT___1008_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1072(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1072\n"); );
    // Body
    vlSelf->top__DOT___2789_ = (1U & (((((IData)(vlSelf->top__DOT___0300_) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT___0001_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0495_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___1762_)))) 
                                       + ((0x18U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT___4325_ 
                                                     >> 0x32U)) 
                                            << 3U)) 
                                          | (((IData)(vlSelf->top__DOT___3141_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___2314_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0280_))))) 
                                      >> 4U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1073(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1073\n"); );
    // Body
    vlSelf->top__DOT___3243_ = (1U & ((((0x3e00U & vlSelf->top__DOT___3857_) 
                                        | (((IData)(vlSelf->top__DOT___3473_) 
                                            << 8U) 
                                           | ((0xc0U 
                                               & vlSelf->top__DOT___3857_) 
                                              | (((IData)(vlSelf->top__DOT___3515_) 
                                                  << 5U) 
                                                 | (0x1fU 
                                                    & vlSelf->top__DOT___3857_))))) 
                                       + ((0x3e00U 
                                           & ((IData)(
                                                      (vlSelf->top__DOT___4325_ 
                                                       >> 0x35U)) 
                                              << 9U)) 
                                          | ((0x100U 
                                              & (vlSelf->top__DOT___7112_ 
                                                 >> 0xaU)) 
                                             | ((0xc0U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___4325_ 
                                                             >> 0x32U)) 
                                                    << 6U)) 
                                                | (((IData)(vlSelf->top__DOT___3141_) 
                                                    << 5U) 
                                                   | ((0x1cU 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___4325_ 
                                                                   >> 0x2eU)) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelf->top__DOT___1611_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0527_)))))))) 
                                      >> 0xdU));
    vlSelf->top__DOT___3055_ = (1U & (((((IData)(vlSelf->top__DOT___3515_) 
                                         << 5U) | (0x1fU 
                                                   & vlSelf->top__DOT___3857_)) 
                                       + (((IData)(vlSelf->top__DOT___3141_) 
                                           << 5U) | 
                                          ((0x1cU & 
                                            ((IData)(
                                                     (vlSelf->top__DOT___4325_ 
                                                      >> 0x2eU)) 
                                             << 2U)) 
                                           | (((IData)(vlSelf->top__DOT___1611_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0527_))))) 
                                      >> 5U));
    vlSelf->top__DOT___4332_ = ((0x40U & (((0x40U & vlSelf->top__DOT___3857_) 
                                           | (((IData)(vlSelf->top__DOT___3515_) 
                                               << 5U) 
                                              | (0x1fU 
                                                 & vlSelf->top__DOT___3857_))) 
                                          + ((0x40U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT___4325_ 
                                                          >> 0x32U)) 
                                                 << 6U)) 
                                             | (((IData)(vlSelf->top__DOT___3141_) 
                                                 << 5U) 
                                                | ((0x1cU 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___4325_ 
                                                                >> 0x2eU)) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->top__DOT___1611_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0527_))))))) 
                                | (((IData)(vlSelf->top__DOT___3055_) 
                                    << 5U) | ((0x1cU 
                                               & (vlSelf->top__DOT___3857_ 
                                                  + 
                                                  ((0x1cU 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___4325_ 
                                                                >> 0x2eU)) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->top__DOT___1611_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0527_))))) 
                                              | (((IData)(vlSelf->top__DOT___2001_) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (vlSelf->top__DOT___3857_ 
                                                       + (IData)(vlSelf->top__DOT___0527_)))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1075(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1075\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vtemp_2[0U] = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelf->top__DOT___4519_[2U])) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->top__DOT___4519_[1U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->top__DOT___4519_[0U])) 
                                                        >> 0x1cU))))) 
                      << 0x1cU) | ((0x8000000U & (vlSelf->top__DOT___7115_[0U] 
                                                  >> 3U)) 
                                   | ((0x7fffc00U & 
                                       vlSelf->top__DOT___4519_[0U]) 
                                      | ((0x380U & 
                                          (vlSelf->top__DOT___7115_[0U] 
                                           >> 3U)) 
                                         | ((0x70U 
                                             & vlSelf->top__DOT___4519_[0U]) 
                                            | (((IData)(vlSelf->top__DOT___1007_) 
                                                << 3U) 
                                               | (((IData)(vlSelf->top__DOT___1132_) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->top__DOT___1692_) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->top__DOT___0485_)))))))));
    __Vtemp_2[1U] = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelf->top__DOT___4519_[2U])) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->top__DOT___4519_[1U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->top__DOT___4519_[0U])) 
                                                        >> 0x1cU))))) 
                      >> 4U) | ((IData)(((0x1fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->top__DOT___4519_[2U])) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->top__DOT___4519_[1U])) 
                                                 << 4U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->top__DOT___4519_[0U])) 
                                                   >> 0x1cU)))) 
                                         >> 0x20U)) 
                                << 0x1cU));
    __Vtemp_2[2U] = ((IData)(((0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelf->top__DOT___4519_[2U])) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->top__DOT___4519_[1U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->top__DOT___4519_[0U])) 
                                                        >> 0x1cU)))) 
                              >> 0x20U)) >> 4U);
    __Vtemp_3[0U] = (IData)((((QData)((IData)((0x7fU 
                                               & (vlSelf->top__DOT___4518_[1U] 
                                                  >> 0x18U)))) 
                              << 0x38U) | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT___7167_ 
                                                                        >> 0x1aU))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0778_)) 
                                               << 0x2fU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0834_)) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(
                                                                     (0x7ffU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x22U))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___3610_)) 
                                                        << 0x22U) 
                                                       | (((QData)((IData)(
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x1eU))))) 
                                                           << 0x1fU) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlSelf->top__DOT___3725_) 
                                                                              << 0x1eU) 
                                                                             | ((0x3ff00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x13U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3131_) 
                                                                                << 0x13U) 
                                                                                | ((0x7ffe0U 
                                                                                & (vlSelf->top__DOT___3945_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2841_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2000_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(vlSelf->top__DOT___4321_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0201_))))))))))))))))));
    __Vtemp_3[1U] = ((0x80000000U & ((IData)(vlSelf->top__DOT___4269_) 
                                     << 0x1dU)) | (IData)(
                                                          ((((QData)((IData)(
                                                                             (0x7fU 
                                                                              & (vlSelf->top__DOT___4518_[1U] 
                                                                                >> 0x18U)))) 
                                                             << 0x38U) 
                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7167_ 
                                                                                >> 0x1aU))))) 
                                                                << 0x30U) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___0778_)) 
                                                                   << 0x2fU) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___0834_)) 
                                                                      << 0x2eU) 
                                                                     | (((QData)((IData)(
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x22U))))) 
                                                                         << 0x23U) 
                                                                        | (((QData)((IData)(vlSelf->top__DOT___3610_)) 
                                                                            << 0x22U) 
                                                                           | (((QData)((IData)(
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x1eU))))) 
                                                                               << 0x1fU) 
                                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3725_) 
                                                                                << 0x1eU) 
                                                                                | ((0x3ff00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x13U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3131_) 
                                                                                << 0x13U) 
                                                                                | ((0x7ffe0U 
                                                                                & (vlSelf->top__DOT___3945_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2841_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2000_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(vlSelf->top__DOT___4321_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0201_))))))))))))))))) 
                                                           >> 0x20U)));
    __Vtemp_3[2U] = (1U & ((IData)(vlSelf->top__DOT___4269_) 
                           >> 3U));
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelf->top__DOT____VdfgTmp_hc0bc0f68__0 = (1U 
                                                & __Vtemp_4[2U]);
    vlSelf->top__DOT___4240_[0U] = ((0x1ffffU & vlSelf->top__DOT___4240_[0U]) 
                                    | ((IData)((((QData)((IData)(
                                                                 (0x1fffffU 
                                                                  & (IData)(
                                                                            ((((0xfffffffff0000000ULL 
                                                                                & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4519_[1U])) 
                                                                                << 0x20U) 
                                                                                | (0xfffffffff0000000ULL 
                                                                                & (QData)((IData)(
                                                                                vlSelf->top__DOT___4519_[0U]))))) 
                                                                               | (QData)((IData)(
                                                                                ((0x8000000U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x7fffc00U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x70U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1007_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1132_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0485_))))))))))))) 
                                                                              + 
                                                                              (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4269_) 
                                                                                >> 2U)))) 
                                                                                << 0x3fU) 
                                                                               | (((QData)((IData)(
                                                                                ((0xfe000000U 
                                                                                & (vlSelf->top__DOT___4518_[1U] 
                                                                                << 1U)) 
                                                                                | ((0x1fe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7167_ 
                                                                                >> 0x1aU)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0778_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0xfU) 
                                                                                | ((0x7ff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x22U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3610_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x1eU))))))))))) 
                                                                                << 0x1fU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3725_) 
                                                                                << 0x1eU) 
                                                                                | ((0x3ff00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x13U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3131_) 
                                                                                << 0x13U) 
                                                                                | ((0x7ffe0U 
                                                                                & (vlSelf->top__DOT___3945_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2841_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2000_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(vlSelf->top__DOT___4321_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0201_))))))))))))) 
                                                                             >> 0x2bU))))) 
                                                 << 0x2bU) 
                                                | (((QData)((IData)(vlSelf->top__DOT___2030_)) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(
                                                                       (0xffffffU 
                                                                        & (IData)(
                                                                                (0xffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                (0x3fffU 
                                                                                & ((vlSelf->top__DOT___4519_[1U] 
                                                                                << 4U) 
                                                                                | (vlSelf->top__DOT___4519_[0U] 
                                                                                >> 0x1cU))))) 
                                                                                << 0x1cU) 
                                                                                | (QData)((IData)(
                                                                                ((0x8000000U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x7fffc00U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x70U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1007_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1132_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0485_))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0x7f0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x22U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3610_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x1eU))))))) 
                                                                                << 0x1fU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3725_) 
                                                                                << 0x1eU) 
                                                                                | ((0x3ff00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x13U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3131_) 
                                                                                << 0x13U) 
                                                                                | ((0x7ffe0U 
                                                                                & (vlSelf->top__DOT___3945_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2841_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2000_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(vlSelf->top__DOT___4321_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0201_)))))))))))) 
                                                                                >> 0x12U)))))) 
                                                       << 0x12U) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->top__DOT___3395_) 
                                                                          << 0x11U) 
                                                                         | (0x1ffffU 
                                                                            & (((0x1fc00U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x70U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1007_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1132_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0485_))))))))) 
                                                                               + 
                                                                               ((0x1ffe0U 
                                                                                & (vlSelf->top__DOT___3945_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2841_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2000_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(vlSelf->top__DOT___4321_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0201_)))))))))))))) 
                                       << 0x11U));
    vlSelf->top__DOT___4240_[1U] = (((IData)((((QData)((IData)(
                                                               (0x1fffffU 
                                                                & (IData)(
                                                                          ((((0xfffffffff0000000ULL 
                                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4519_[1U])) 
                                                                                << 0x20U) 
                                                                                | (0xfffffffff0000000ULL 
                                                                                & (QData)((IData)(
                                                                                vlSelf->top__DOT___4519_[0U]))))) 
                                                                             | (QData)((IData)(
                                                                                ((0x8000000U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x7fffc00U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x70U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1007_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1132_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0485_))))))))))))) 
                                                                            + 
                                                                            (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4269_) 
                                                                                >> 2U)))) 
                                                                              << 0x3fU) 
                                                                             | (((QData)((IData)(
                                                                                ((0xfe000000U 
                                                                                & (vlSelf->top__DOT___4518_[1U] 
                                                                                << 1U)) 
                                                                                | ((0x1fe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7167_ 
                                                                                >> 0x1aU)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0778_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0xfU) 
                                                                                | ((0x7ff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x22U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3610_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x1eU))))))))))) 
                                                                                << 0x1fU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3725_) 
                                                                                << 0x1eU) 
                                                                                | ((0x3ff00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x13U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3131_) 
                                                                                << 0x13U) 
                                                                                | ((0x7ffe0U 
                                                                                & (vlSelf->top__DOT___3945_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2841_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2000_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(vlSelf->top__DOT___4321_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0201_))))))))))))) 
                                                                           >> 0x2bU))))) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___2030_)) 
                                                  << 0x2aU) 
                                                 | (((QData)((IData)(
                                                                     (0xffffffU 
                                                                      & (IData)(
                                                                                (0xffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                (0x3fffU 
                                                                                & ((vlSelf->top__DOT___4519_[1U] 
                                                                                << 4U) 
                                                                                | (vlSelf->top__DOT___4519_[0U] 
                                                                                >> 0x1cU))))) 
                                                                                << 0x1cU) 
                                                                                | (QData)((IData)(
                                                                                ((0x8000000U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x7fffc00U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x70U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1007_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1132_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0485_))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0x7f0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x22U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3610_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x1eU))))))) 
                                                                                << 0x1fU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3725_) 
                                                                                << 0x1eU) 
                                                                                | ((0x3ff00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x13U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3131_) 
                                                                                << 0x13U) 
                                                                                | ((0x7ffe0U 
                                                                                & (vlSelf->top__DOT___3945_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2841_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2000_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(vlSelf->top__DOT___4321_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0201_)))))))))))) 
                                                                                >> 0x12U)))))) 
                                                     << 0x12U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->top__DOT___3395_) 
                                                                        << 0x11U) 
                                                                       | (0x1ffffU 
                                                                          & (((0x1fc00U 
                                                                               & vlSelf->top__DOT___4519_[0U]) 
                                                                              | ((0x200U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x70U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1007_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1132_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0485_))))))))) 
                                                                             + 
                                                                             ((0x1ffe0U 
                                                                               & (vlSelf->top__DOT___3945_ 
                                                                                << 2U)) 
                                                                              | (((IData)(vlSelf->top__DOT___2841_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2000_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(vlSelf->top__DOT___4321_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0201_)))))))))))))) 
                                     >> 0xfU) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            (0x1fffffU 
                                                                             & (IData)(
                                                                                ((((0xfffffffff0000000ULL 
                                                                                & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4519_[1U])) 
                                                                                << 0x20U) 
                                                                                | (0xfffffffff0000000ULL 
                                                                                & (QData)((IData)(
                                                                                vlSelf->top__DOT___4519_[0U]))))) 
                                                                                | (QData)((IData)(
                                                                                ((0x8000000U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x7fffc00U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x70U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1007_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1132_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0485_))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4269_) 
                                                                                >> 2U)))) 
                                                                                << 0x3fU) 
                                                                                | (((QData)((IData)(
                                                                                ((0xfe000000U 
                                                                                & (vlSelf->top__DOT___4518_[1U] 
                                                                                << 1U)) 
                                                                                | ((0x1fe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7167_ 
                                                                                >> 0x1aU)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0778_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0xfU) 
                                                                                | ((0x7ff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x22U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3610_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x1eU))))))))))) 
                                                                                << 0x1fU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3725_) 
                                                                                << 0x1eU) 
                                                                                | ((0x3ff00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x13U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3131_) 
                                                                                << 0x13U) 
                                                                                | ((0x7ffe0U 
                                                                                & (vlSelf->top__DOT___3945_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2841_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2000_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(vlSelf->top__DOT___4321_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0201_))))))))))))) 
                                                                                >> 0x2bU))))) 
                                                            << 0x2bU) 
                                                           | (((QData)((IData)(vlSelf->top__DOT___2030_)) 
                                                               << 0x2aU) 
                                                              | (((QData)((IData)(
                                                                                (0xffffffU 
                                                                                & (IData)(
                                                                                (0xffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                (0x3fffU 
                                                                                & ((vlSelf->top__DOT___4519_[1U] 
                                                                                << 4U) 
                                                                                | (vlSelf->top__DOT___4519_[0U] 
                                                                                >> 0x1cU))))) 
                                                                                << 0x1cU) 
                                                                                | (QData)((IData)(
                                                                                ((0x8000000U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x7fffc00U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x70U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1007_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1132_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0485_))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0x7f0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x22U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3610_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x1eU))))))) 
                                                                                << 0x1fU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3725_) 
                                                                                << 0x1eU) 
                                                                                | ((0x3ff00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x13U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3131_) 
                                                                                << 0x13U) 
                                                                                | ((0x7ffe0U 
                                                                                & (vlSelf->top__DOT___3945_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2841_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2000_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(vlSelf->top__DOT___4321_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0201_)))))))))))) 
                                                                                >> 0x12U)))))) 
                                                                  << 0x12U) 
                                                                 | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3395_) 
                                                                                << 0x11U) 
                                                                                | (0x1ffffU 
                                                                                & (((0x1fc00U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x70U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1007_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1132_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0485_))))))))) 
                                                                                + 
                                                                                ((0x1ffe0U 
                                                                                & (vlSelf->top__DOT___3945_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2841_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2000_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(vlSelf->top__DOT___4321_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0201_))))))))))))) 
                                                          >> 0x20U)) 
                                                 << 0x11U));
    vlSelf->top__DOT___4240_[2U] = ((IData)(((((QData)((IData)(
                                                               (0x1fffffU 
                                                                & (IData)(
                                                                          ((((0xfffffffff0000000ULL 
                                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4519_[1U])) 
                                                                                << 0x20U) 
                                                                                | (0xfffffffff0000000ULL 
                                                                                & (QData)((IData)(
                                                                                vlSelf->top__DOT___4519_[0U]))))) 
                                                                             | (QData)((IData)(
                                                                                ((0x8000000U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x7fffc00U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x70U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1007_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1132_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0485_))))))))))))) 
                                                                            + 
                                                                            (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4269_) 
                                                                                >> 2U)))) 
                                                                              << 0x3fU) 
                                                                             | (((QData)((IData)(
                                                                                ((0xfe000000U 
                                                                                & (vlSelf->top__DOT___4518_[1U] 
                                                                                << 1U)) 
                                                                                | ((0x1fe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7167_ 
                                                                                >> 0x1aU)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0778_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0xfU) 
                                                                                | ((0x7ff0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x22U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3610_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x1eU))))))))))) 
                                                                                << 0x1fU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3725_) 
                                                                                << 0x1eU) 
                                                                                | ((0x3ff00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x13U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3131_) 
                                                                                << 0x13U) 
                                                                                | ((0x7ffe0U 
                                                                                & (vlSelf->top__DOT___3945_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2841_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2000_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(vlSelf->top__DOT___4321_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0201_))))))))))))) 
                                                                           >> 0x2bU))))) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___2030_)) 
                                                  << 0x2aU) 
                                                 | (((QData)((IData)(
                                                                     (0xffffffU 
                                                                      & (IData)(
                                                                                (0xffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                (0x3fffU 
                                                                                & ((vlSelf->top__DOT___4519_[1U] 
                                                                                << 4U) 
                                                                                | (vlSelf->top__DOT___4519_[0U] 
                                                                                >> 0x1cU))))) 
                                                                                << 0x1cU) 
                                                                                | (QData)((IData)(
                                                                                ((0x8000000U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x7fffc00U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x70U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1007_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1132_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0485_))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0x7f0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x22U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3610_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x1eU))))))) 
                                                                                << 0x1fU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3725_) 
                                                                                << 0x1eU) 
                                                                                | ((0x3ff00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4321_ 
                                                                                >> 0x13U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3131_) 
                                                                                << 0x13U) 
                                                                                | ((0x7ffe0U 
                                                                                & (vlSelf->top__DOT___3945_ 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2841_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2000_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(vlSelf->top__DOT___4321_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0201_)))))))))))) 
                                                                                >> 0x12U)))))) 
                                                     << 0x12U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->top__DOT___3395_) 
                                                                        << 0x11U) 
                                                                       | (0x1ffffU 
                                                                          & (((0x1fc00U 
                                                                               & vlSelf->top__DOT___4519_[0U]) 
                                                                              | ((0x200U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___7115_[0U] 
                                                                                >> 3U)) 
                                                                                | ((0x70U 
                                                                                & vlSelf->top__DOT___4519_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___1007_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1132_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0485_))))))))) 
                                                                             + 
                                                                             ((0x1ffe0U 
                                                                               & (vlSelf->top__DOT___3945_ 
                                                                                << 2U)) 
                                                                              | (((IData)(vlSelf->top__DOT___2841_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2000_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(vlSelf->top__DOT___4321_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0201_))))))))))))) 
                                             >> 0x20U)) 
                                    >> 0xfU);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1076(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1076\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelf->top__DOT____VdfgTmp_h747837e2__0 = (((QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___2627_) 
                                                                   << 5U) 
                                                                  | ((0x10U 
                                                                      & (vlSelf->top__DOT___3895_[0U] 
                                                                         << 4U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1021_) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSelf->top__DOT___0748_) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSelf->top__DOT___2187_) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelf->top__DOT___0514_)))))))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (0x2dd2fa0U 
                                                                   | (((IData)(vlSelf->top__DOT___0067_) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelf->top__DOT___0479_) 
                                                                          << 3U) 
                                                                         | (((IData)(vlSelf->top__DOT___0260_) 
                                                                             << 2U) 
                                                                            | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->top__DOT___2471_)))))))));
    __Vtemp_6[2U] = (((IData)(vlSelf->top__DOT___1265_) 
                      << 0x1bU) | ((0x6000000U & (vlSelf->top__DOT___3895_[1U] 
                                                  << 2U)) 
                                   | ((0x1fc0000U & 
                                       (vlSelf->top__DOT___3876_ 
                                        << 4U)) | (
                                                   ((IData)(vlSelf->top__DOT___3213_) 
                                                    << 0x11U) 
                                                   | ((0x1f800U 
                                                       & (vlSelf->top__DOT___3876_ 
                                                          << 4U)) 
                                                      | (((IData)(
                                                                  (0x7fffffffffULL 
                                                                   & (((QData)((IData)(
                                                                                vlSelf->top__DOT___3895_[1U])) 
                                                                       << 0x1eU) 
                                                                      | ((QData)((IData)(
                                                                                vlSelf->top__DOT___3895_[0U])) 
                                                                         >> 2U)))) 
                                                          >> 0x1cU) 
                                                         | ((IData)(
                                                                    ((0x7fffffffffULL 
                                                                      & (((QData)((IData)(
                                                                                vlSelf->top__DOT___3895_[1U])) 
                                                                          << 0x1eU) 
                                                                         | ((QData)((IData)(
                                                                                vlSelf->top__DOT___3895_[0U])) 
                                                                            >> 2U))) 
                                                                     >> 0x20U)) 
                                                            << 4U)))))));
    vlSelf->top__DOT____VdfgTmp_h7a1c4ce6__0[0U] = (IData)(vlSelf->top__DOT____VdfgTmp_h747837e2__0);
    vlSelf->top__DOT____VdfgTmp_h7a1c4ce6__0[1U] = 
        (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                       vlSelf->top__DOT___3895_[1U])) 
                                       << 0x1eU) | 
                                      ((QData)((IData)(
                                                       vlSelf->top__DOT___3895_[0U])) 
                                       >> 2U)))) << 4U) 
         | (IData)((vlSelf->top__DOT____VdfgTmp_h747837e2__0 
                    >> 0x20U)));
    vlSelf->top__DOT____VdfgTmp_h7a1c4ce6__0[2U] = 
        (((IData)(vlSelf->top__DOT___1862_) << 0x1cU) 
         | __Vtemp_6[2U]);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1077(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1077\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_18;
    // Body
    __Vtemp_1[1U] = (((IData)((0x7fffffffffULL & (((QData)((IData)(
                                                                   vlSelf->top__DOT___3895_[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT___3895_[0U])) 
                                                     >> 2U)))) 
                      << 4U) | (IData)(((((QData)((IData)(vlSelf->top__DOT___2627_)) 
                                          << 0x23U) 
                                         | (((QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT___3895_[0U]))) 
                                             << 0x22U) 
                                            | (((QData)((IData)(vlSelf->top__DOT___1021_)) 
                                                << 0x21U) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0748_)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (0x2dd2fa0U 
                                                                     | (((IData)(vlSelf->top__DOT___2187_) 
                                                                         << 0x1fU) 
                                                                        | (((IData)(vlSelf->top__DOT___0514_) 
                                                                            << 0x1eU) 
                                                                           | (((IData)(vlSelf->top__DOT___0067_) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->top__DOT___0479_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0260_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2471_)))))))))))))) 
                                        >> 0x20U)));
    __Vtemp_6[2U] = (((IData)(vlSelf->top__DOT___1265_) 
                      << 0x1bU) | ((0x6000000U & (vlSelf->top__DOT___3895_[1U] 
                                                  << 2U)) 
                                   | ((0x1fc0000U & 
                                       (vlSelf->top__DOT___3876_ 
                                        << 4U)) | (
                                                   ((IData)(vlSelf->top__DOT___3213_) 
                                                    << 0x11U) 
                                                   | ((0x1f800U 
                                                       & (vlSelf->top__DOT___3876_ 
                                                          << 4U)) 
                                                      | (((IData)(
                                                                  (0x7fffffffffULL 
                                                                   & (((QData)((IData)(
                                                                                vlSelf->top__DOT___3895_[1U])) 
                                                                       << 0x1eU) 
                                                                      | ((QData)((IData)(
                                                                                vlSelf->top__DOT___3895_[0U])) 
                                                                         >> 2U)))) 
                                                          >> 0x1cU) 
                                                         | ((IData)(
                                                                    ((0x7fffffffffULL 
                                                                      & (((QData)((IData)(
                                                                                vlSelf->top__DOT___3895_[1U])) 
                                                                          << 0x1eU) 
                                                                         | ((QData)((IData)(
                                                                                vlSelf->top__DOT___3895_[0U])) 
                                                                            >> 2U))) 
                                                                     >> 0x20U)) 
                                                            << 4U)))))));
    __Vtemp_18[3U] = ((0x80000U & (((IData)(vlSelf->top__DOT___0699_) 
                                    + (IData)(vlSelf->top__DOT___0056_)) 
                                   << 0x13U)) | (((IData)(vlSelf->top__DOT___2199_) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->top__DOT___3214_) 
                                                     << 0x11U) 
                                                    | ((0x10000U 
                                                        & ((IData)(vlSelf->top__DOT___7195_) 
                                                           << 8U)) 
                                                       | ((0x8000U 
                                                           & (vlSelf->top__DOT___3883_[0U] 
                                                              << 2U)) 
                                                          | ((0x4000U 
                                                              & ((IData)(vlSelf->top__DOT___7195_) 
                                                                 << 8U)) 
                                                             | (((IData)(vlSelf->top__DOT___0122_) 
                                                                 << 0xdU) 
                                                                | ((0x1c00U 
                                                                    & (vlSelf->top__DOT___3883_[0U] 
                                                                       << 2U)) 
                                                                   | ((0x200U 
                                                                       & ((IData)(vlSelf->top__DOT___7195_) 
                                                                          << 8U)) 
                                                                      | ((0x100U 
                                                                          & ((IData)(vlSelf->top__DOT___7195_) 
                                                                             << 8U)) 
                                                                         | (0xffU 
                                                                            & ((0x1ffffffcU 
                                                                                & (vlSelf->top__DOT___3895_[2U] 
                                                                                << 2U)) 
                                                                               | (vlSelf->top__DOT___3895_[1U] 
                                                                                >> 0x1eU)))))))))))));
    vlSelf->top__DOT___3906_[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___2627_)) 
                                             << 0x23U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT___3895_[0U]))) 
                                                << 0x22U) 
                                               | (((QData)((IData)(vlSelf->top__DOT___1021_)) 
                                                   << 0x21U) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0748_)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (0x2dd2fa0U 
                                                                        | (((IData)(vlSelf->top__DOT___2187_) 
                                                                            << 0x1fU) 
                                                                           | (((IData)(vlSelf->top__DOT___0514_) 
                                                                               << 0x1eU) 
                                                                              | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0479_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0260_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0597_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2471_)))))))))))))));
    vlSelf->top__DOT___3906_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___3906_[2U] = ((0xe0000000U & 
                                     (vlSelf->top__DOT___3895_[1U] 
                                      << 2U)) | (((IData)(vlSelf->top__DOT___1862_) 
                                                  << 0x1cU) 
                                                 | __Vtemp_6[2U]));
    vlSelf->top__DOT___3906_[3U] = (0x21000000U | (
                                                   (0xe000000U 
                                                    & (vlSelf->top__DOT___4747_ 
                                                       << 0x11U)) 
                                                   | ((0x800000U 
                                                       & (vlSelf->top__DOT___4747_ 
                                                          << 0x10U)) 
                                                      | (((IData)(vlSelf->top__DOT___1705_) 
                                                          << 0x16U) 
                                                         | ((0x200000U 
                                                             & (((((IData)(vlSelf->top__DOT___0640_) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->top__DOT___0800_) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top__DOT___0699_))) 
                                                                 + 
                                                                 (((IData)(vlSelf->top__DOT___0445_) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->top__DOT___0195_) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top__DOT___0056_)))) 
                                                                << 0x13U)) 
                                                            | (((IData)(vlSelf->top__DOT___3239_) 
                                                                << 0x14U) 
                                                               | __Vtemp_18[3U]))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1078(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1078\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h97f02410__0 = (((IData)(vlSelf->top__DOT___7072_) 
                                                 & (IData)(vlSelf->top__DOT___1726_)) 
                                                | ((IData)(vlSelf->top__DOT___0758_) 
                                                   & ((IData)(vlSelf->top__DOT___0230_) 
                                                      & (IData)(vlSelf->top__DOT___0825_))));
    vlSelf->top__DOT____VdfgTmp_h28f671c1__0 = ((2U 
                                                 & ((~ (IData)(vlSelf->top__DOT____VdfgTmp_h97f02410__0)) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->top__DOT___0547_));
    vlSelf->top__DOT____VdfgTmp_h090c5c0e__0 = (((IData)(vlSelf->top__DOT___0438_) 
                                                 << 2U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h28f671c1__0));
    vlSelf->top__DOT____VdfgTmp_h148e9adf__0 = (((IData)(vlSelf->top__DOT___0102_) 
                                                 << 3U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h090c5c0e__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1080(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1080\n"); );
    // Body
    vlSelf->top__DOT___3932_ = (((QData)((IData)(vlSelf->top__DOT___1262_)) 
                                 << 0x26U) | (((QData)((IData)(vlSelf->top__DOT___2106_)) 
                                               << 0x25U) 
                                              | (((QData)((IData)(vlSelf->top__DOT___3232_)) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___1091_)) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0508_)) 
                                                        << 0x22U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1102_)) 
                                                           << 0x21U) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___2270_)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___0809_) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 0xfU)) 
                                                                                | ((0x3f000000U 
                                                                                & (((8U 
                                                                                | ((0x1fffff0U 
                                                                                & vlSelf->top__DOT___4251_) 
                                                                                | (((IData)(vlSelf->top__DOT___1688_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1071_))))) 
                                                                                + 
                                                                                ((0x1800000U 
                                                                                & (vlSelf->top__DOT___4246_[2U] 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2978_) 
                                                                                << 0x16U) 
                                                                                | ((0x3f8000U 
                                                                                & (vlSelf->top__DOT___4246_[2U] 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3118_) 
                                                                                << 0xeU) 
                                                                                | ((0x3ff8U 
                                                                                & ((vlSelf->top__DOT___4246_[2U] 
                                                                                << 8U) 
                                                                                | (0xf8U 
                                                                                & (vlSelf->top__DOT___4246_[1U] 
                                                                                >> 0x18U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1642_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0834_)))))))) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3677_) 
                                                                                << 0x17U) 
                                                                                | ((0x7f0000U 
                                                                                & (((8U 
                                                                                | ((0x3fff0U 
                                                                                & vlSelf->top__DOT___4251_) 
                                                                                | (((IData)(vlSelf->top__DOT___1688_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1071_))))) 
                                                                                + 
                                                                                ((0x38000U 
                                                                                & (vlSelf->top__DOT___4246_[2U] 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3118_) 
                                                                                << 0xeU) 
                                                                                | ((0x3ff8U 
                                                                                & ((vlSelf->top__DOT___4246_[2U] 
                                                                                << 8U) 
                                                                                | (0xf8U 
                                                                                & (vlSelf->top__DOT___4246_[1U] 
                                                                                >> 0x18U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1642_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0834_)))))) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1765_) 
                                                                                << 0xfU) 
                                                                                | ((0x7000U 
                                                                                & (((8U 
                                                                                | ((0x3f0U 
                                                                                & vlSelf->top__DOT___4251_) 
                                                                                | (((IData)(vlSelf->top__DOT___1688_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1071_))))) 
                                                                                + 
                                                                                ((0x3f8U 
                                                                                & ((vlSelf->top__DOT___4246_[2U] 
                                                                                << 8U) 
                                                                                | (0xf8U 
                                                                                & (vlSelf->top__DOT___4246_[1U] 
                                                                                >> 0x18U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___1642_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0834_)))) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1189_) 
                                                                                << 0xbU) 
                                                                                | ((0x400U 
                                                                                & (((8U 
                                                                                | ((0x30U 
                                                                                & vlSelf->top__DOT___4251_) 
                                                                                | (((IData)(vlSelf->top__DOT___1688_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1071_))))) 
                                                                                + 
                                                                                ((0x38U 
                                                                                & (vlSelf->top__DOT___4246_[1U] 
                                                                                >> 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1642_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0834_)))) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3736_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & (((8U 
                                                                                | (((IData)(vlSelf->top__DOT___1688_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1071_)))) 
                                                                                + 
                                                                                ((8U 
                                                                                & (vlSelf->top__DOT___4246_[1U] 
                                                                                >> 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1642_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0834_)))) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1670_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0758_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0487_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_)))))))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1081(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1081\n"); );
    // Body
    vlSelf->top__DOT___2250_ = (1U & (~ (((IData)(vlSelf->top__DOT___1954_) 
                                          & ((~ (IData)(vlSelf->top__DOT___0206_)) 
                                             & (IData)(vlSelf->top__DOT___0207_))) 
                                         | ((IData)(vlSelf->top__DOT___2013_) 
                                            & (IData)(vlSelf->top__DOT___1672_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1087(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1087\n"); );
    // Body
    vlSelf->top__DOT___3042_ = (1U & ((((0xf00000U 
                                         & vlSelf->top__DOT___4396_) 
                                        | ((0x80000U 
                                            & (vlSelf->top__DOT___6979_[2U] 
                                               << 0x13U)) 
                                           | ((0x70000U 
                                               & vlSelf->top__DOT___4396_) 
                                              | (((IData)(vlSelf->top__DOT___1887_) 
                                                  << 0xfU) 
                                                 | (((IData)(vlSelf->top__DOT___0445_) 
                                                     << 0xeU) 
                                                    | (((IData)(vlSelf->top__DOT___1182_) 
                                                        << 0xdU) 
                                                       | (((IData)(vlSelf->top__DOT___0866_) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelf->top__DOT___0234_) 
                                                              << 0xbU) 
                                                             | ((0x400U 
                                                                 & ((~ (IData)(
                                                                               (vlSelf->top__DOT___7059_ 
                                                                                >> 0x17U))) 
                                                                    << 0xaU)) 
                                                                | (((IData)(vlSelf->top__DOT___1084_) 
                                                                    << 9U) 
                                                                   | (((IData)(vlSelf->top__DOT___0842_) 
                                                                       << 8U) 
                                                                      | (((IData)(vlSelf->top__DOT___0723_) 
                                                                          << 7U) 
                                                                         | (((IData)(vlSelf->top__DOT___0621_) 
                                                                             << 6U) 
                                                                            | (((IData)(vlSelf->top__DOT___0100_) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->top__DOT___2420_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1610_)))))))))))))))))) 
                                       + ((0xfffff0U 
                                           & ((vlSelf->top__DOT___4048_[2U] 
                                               << 5U) 
                                              | (0x10U 
                                                 & (vlSelf->top__DOT___4048_[1U] 
                                                    >> 0x1bU)))) 
                                          | (((IData)(vlSelf->top__DOT___0840_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___2287_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___1663_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0476_)))))) 
                                      >> 0x17U));
    vlSelf->top__DOT___3280_ = (1U & (((((IData)(vlSelf->top__DOT___1887_) 
                                         << 0xfU) | 
                                        (((IData)(vlSelf->top__DOT___0445_) 
                                          << 0xeU) 
                                         | (((IData)(vlSelf->top__DOT___1182_) 
                                             << 0xdU) 
                                            | (((IData)(vlSelf->top__DOT___0866_) 
                                                << 0xcU) 
                                               | (((IData)(vlSelf->top__DOT___0234_) 
                                                   << 0xbU) 
                                                  | ((0x400U 
                                                      & ((~ (IData)(
                                                                    (vlSelf->top__DOT___7059_ 
                                                                     >> 0x17U))) 
                                                         << 0xaU)) 
                                                     | (((IData)(vlSelf->top__DOT___1084_) 
                                                         << 9U) 
                                                        | (((IData)(vlSelf->top__DOT___0842_) 
                                                            << 8U) 
                                                           | (((IData)(vlSelf->top__DOT___0723_) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->top__DOT___0621_) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSelf->top__DOT___0100_) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->top__DOT___2420_) 
                                                                        << 3U) 
                                                                       | ((4U 
                                                                           & (vlSelf->top__DOT___4749_[2U] 
                                                                              >> 0x14U)) 
                                                                          | (((IData)(vlSelf->top__DOT___0154_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___1610_))))))))))))))) 
                                       + ((0xfff0U 
                                           & ((vlSelf->top__DOT___4048_[2U] 
                                               << 5U) 
                                              | (0x10U 
                                                 & (vlSelf->top__DOT___4048_[1U] 
                                                    >> 0x1bU)))) 
                                          | (((IData)(vlSelf->top__DOT___0840_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___2287_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___1663_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0476_)))))) 
                                      >> 0xfU));
    vlSelf->top__DOT___3107_ = (1U & ((((0x80000U & 
                                         (vlSelf->top__DOT___6979_[2U] 
                                          << 0x13U)) 
                                        | ((0x70000U 
                                            & vlSelf->top__DOT___4396_) 
                                           | (((IData)(vlSelf->top__DOT___1887_) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->top__DOT___0445_) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->top__DOT___1182_) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->top__DOT___0866_) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->top__DOT___0234_) 
                                                           << 0xbU) 
                                                          | ((0x400U 
                                                              & ((~ (IData)(
                                                                            (vlSelf->top__DOT___7059_ 
                                                                             >> 0x17U))) 
                                                                 << 0xaU)) 
                                                             | (((IData)(vlSelf->top__DOT___1084_) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->top__DOT___0842_) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->top__DOT___0723_) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->top__DOT___0621_) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT___0100_) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSelf->top__DOT___2420_) 
                                                                                << 3U) 
                                                                               | ((4U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1610_))))))))))))))))) 
                                       + ((0xffff0U 
                                           & ((vlSelf->top__DOT___4048_[2U] 
                                               << 5U) 
                                              | (0x10U 
                                                 & (vlSelf->top__DOT___4048_[1U] 
                                                    >> 0x1bU)))) 
                                          | (((IData)(vlSelf->top__DOT___0840_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___2287_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___1663_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0476_)))))) 
                                      >> 0x13U));
    vlSelf->top__DOT___3541_ = (1U & ((((0x1ff00000U 
                                         & vlSelf->top__DOT___4396_) 
                                        | ((0x80000U 
                                            & (vlSelf->top__DOT___6979_[2U] 
                                               << 0x13U)) 
                                           | ((0x70000U 
                                               & vlSelf->top__DOT___4396_) 
                                              | (((IData)(vlSelf->top__DOT___1887_) 
                                                  << 0xfU) 
                                                 | (((IData)(vlSelf->top__DOT___0445_) 
                                                     << 0xeU) 
                                                    | (((IData)(vlSelf->top__DOT___1182_) 
                                                        << 0xdU) 
                                                       | (((IData)(vlSelf->top__DOT___0866_) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelf->top__DOT___0234_) 
                                                              << 0xbU) 
                                                             | ((0x400U 
                                                                 & ((~ (IData)(
                                                                               (vlSelf->top__DOT___7059_ 
                                                                                >> 0x17U))) 
                                                                    << 0xaU)) 
                                                                | (((IData)(vlSelf->top__DOT___1084_) 
                                                                    << 9U) 
                                                                   | (((IData)(vlSelf->top__DOT___0842_) 
                                                                       << 8U) 
                                                                      | (((IData)(vlSelf->top__DOT___0723_) 
                                                                          << 7U) 
                                                                         | (((IData)(vlSelf->top__DOT___0621_) 
                                                                             << 6U) 
                                                                            | (((IData)(vlSelf->top__DOT___0100_) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->top__DOT___2420_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1610_)))))))))))))))))) 
                                       + ((0x1ffffff0U 
                                           & ((vlSelf->top__DOT___4048_[2U] 
                                               << 5U) 
                                              | (0x10U 
                                                 & (vlSelf->top__DOT___4048_[1U] 
                                                    >> 0x1bU)))) 
                                          | (((IData)(vlSelf->top__DOT___0840_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___2287_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___1663_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0476_)))))) 
                                      >> 0x1cU));
    vlSelf->top__DOT___1565_ = ((IData)(vlSelf->top__DOT___3541_) 
                                | (IData)(vlSelf->top__DOT___0816_));
    vlSelf->top__DOT___1816_ = (1U & ((((2U & (vlSelf->top__DOT___3883_[1U] 
                                               >> 0x1cU)) 
                                        | (1U & (IData)(vlSelf->top__DOT___7092_))) 
                                       + (IData)((QData)((IData)(vlSelf->top__DOT___1565_)))) 
                                      >> 1U));
    vlSelf->top__DOT___1815_ = ((IData)(vlSelf->top__DOT___1816_) 
                                & (IData)(vlSelf->top__DOT___1693_));
    vlSelf->top__DOT___2339_ = (1U & ((IData)(vlSelf->top__DOT___0885_) 
                                      + (IData)(vlSelf->top__DOT___1815_)));
    vlSelf->top__DOT___2590_ = ((IData)(vlSelf->top__DOT___1074_) 
                                ^ (IData)(vlSelf->top__DOT___1815_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1088(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1088\n"); );
    // Body
    vlSelf->top__DOT___1191_ = (1U & (((((IData)(vlSelf->top__DOT___0723_) 
                                         << 7U) | (
                                                   ((IData)(vlSelf->top__DOT___0621_) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->top__DOT___0100_) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT___2420_) 
                                                          << 3U) 
                                                         | ((4U 
                                                             & (vlSelf->top__DOT___4749_[2U] 
                                                                >> 0x14U)) 
                                                            | (((IData)(vlSelf->top__DOT___0154_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___1610_))))))) 
                                       + ((0xf0U & 
                                           ((vlSelf->top__DOT___4048_[2U] 
                                             << 5U) 
                                            | (0x10U 
                                               & (vlSelf->top__DOT___4048_[1U] 
                                                  >> 0x1bU)))) 
                                          | (((IData)(vlSelf->top__DOT___0840_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___2287_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___1663_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0476_)))))) 
                                      >> 7U));
    vlSelf->top__DOT___1190_ = ((IData)(vlSelf->top__DOT___1037_) 
                                & (IData)(vlSelf->top__DOT___1191_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1089(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1089\n"); );
    // Body
    vlSelf->top__DOT___4382_[0U] = ((0x8000001fU & 
                                     vlSelf->top__DOT___4382_[0U]) 
                                    | (0xffffffe0U 
                                       & ((0x40000000U 
                                           & ((IData)(vlSelf->top__DOT___7091_) 
                                              << 0x16U)) 
                                          | ((0x20000000U 
                                              & ((((0x7e00U 
                                                    & vlSelf->top__DOT___3857_) 
                                                   | (((IData)(vlSelf->top__DOT___3473_) 
                                                       << 8U) 
                                                      | ((0xc0U 
                                                          & vlSelf->top__DOT___3857_) 
                                                         | (((IData)(vlSelf->top__DOT___3515_) 
                                                             << 5U) 
                                                            | (0x1fU 
                                                               & vlSelf->top__DOT___3857_))))) 
                                                  + 
                                                  ((0x7e00U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___4325_ 
                                                                >> 0x35U)) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (vlSelf->top__DOT___7112_ 
                                                          >> 0xaU)) 
                                                      | ((0xc0U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___4325_ 
                                                                      >> 0x32U)) 
                                                             << 6U)) 
                                                         | (((IData)(vlSelf->top__DOT___3141_) 
                                                             << 5U) 
                                                            | ((0x1cU 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___4325_ 
                                                                            >> 0x2eU)) 
                                                                   << 2U)) 
                                                               | (((IData)(vlSelf->top__DOT___1611_) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->top__DOT___0527_)))))))) 
                                                 << 0xfU)) 
                                             | (((IData)(vlSelf->top__DOT___3243_) 
                                                 << 0x1cU) 
                                                | ((0xfc00000U 
                                                    & ((((0x1e00U 
                                                          & vlSelf->top__DOT___3857_) 
                                                         | (((IData)(vlSelf->top__DOT___3473_) 
                                                             << 8U) 
                                                            | ((0xc0U 
                                                                & vlSelf->top__DOT___3857_) 
                                                               | (((IData)(vlSelf->top__DOT___3515_) 
                                                                   << 5U) 
                                                                  | (0x1fU 
                                                                     & vlSelf->top__DOT___3857_))))) 
                                                        + 
                                                        ((0x1e00U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___4325_ 
                                                                      >> 0x35U)) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & (vlSelf->top__DOT___7112_ 
                                                                >> 0xaU)) 
                                                            | ((0xc0U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___4325_ 
                                                                            >> 0x32U)) 
                                                                   << 6U)) 
                                                               | (((IData)(vlSelf->top__DOT___3141_) 
                                                                   << 5U) 
                                                                  | ((0x1cU 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___4325_ 
                                                                                >> 0x2eU)) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1611_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___0527_)))))))) 
                                                       << 0xfU)) 
                                                   | ((0x200000U 
                                                       & ((IData)(vlSelf->top__DOT___4332_) 
                                                          << 0xfU)) 
                                                      | (((IData)(vlSelf->top__DOT___3055_) 
                                                          << 0x14U) 
                                                         | ((0xe0000U 
                                                             & ((IData)(vlSelf->top__DOT___4332_) 
                                                                << 0xfU)) 
                                                            | (((IData)(vlSelf->top__DOT___2001_) 
                                                                << 0x10U) 
                                                               | ((0x8000U 
                                                                   & ((IData)(vlSelf->top__DOT___4332_) 
                                                                      << 0xfU)) 
                                                                  | ((0x7c00U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___4221_ 
                                                                                >> 5U)) 
                                                                         << 0xaU)) 
                                                                     | (((IData)(vlSelf->top__DOT___2930_) 
                                                                         << 9U) 
                                                                        | (0x1e0U 
                                                                           & ((IData)(vlSelf->top__DOT___4221_) 
                                                                              << 5U)))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1091(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1091\n"); );
    // Body
    vlSelf->top__DOT___1443_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_h28f671c1__0) 
                                       + ((2U & ((IData)(
                                                         (vlSelf->top__DOT___4754_ 
                                                          >> 0x27U)) 
                                                 << 1U)) 
                                          | (IData)(vlSelf->top__DOT___2230_))) 
                                      >> 1U));
    vlSelf->top__DOT____VdfgTmp_h71761298__0 = (1U 
                                                & (((IData)(vlSelf->top__DOT____VdfgTmp_h090c5c0e__0) 
                                                    + 
                                                    ((6U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___4754_ 
                                                                  >> 0x27U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->top__DOT___2230_))) 
                                                   >> 2U));
    vlSelf->top__DOT___1542_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_h148e9adf__0) 
                                       + ((0xeU & ((IData)(
                                                           (vlSelf->top__DOT___4754_ 
                                                            >> 0x27U)) 
                                                   << 1U)) 
                                          | (IData)(vlSelf->top__DOT___2230_))) 
                                      >> 3U));
    vlSelf->top__DOT____VdfgTmp_hf406bdac__0 = (3U 
                                                & (((((IData)(vlSelf->top__DOT___3537_) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->top__DOT___1933_) 
                                                         << 4U) 
                                                        | (IData)(vlSelf->top__DOT____VdfgTmp_h148e9adf__0))) 
                                                    + 
                                                    ((0x3eU 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___4754_ 
                                                                  >> 0x27U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->top__DOT___2230_))) 
                                                   >> 4U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1092(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1092\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h95ecfc59__0 = (((IData)(vlSelf->top__DOT___1765_) 
                                                 << 8U) 
                                                | ((0xc0U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3932_ 
                                                                >> 0xdU)) 
                                                       << 6U)) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_h8da2c907__0)));
    vlSelf->top__DOT___3641_ = (1U & ((((0x40U & ((IData)(
                                                          (vlSelf->top__DOT___3932_ 
                                                           >> 0xdU)) 
                                                  << 6U)) 
                                        | (((IData)(vlSelf->top__DOT___1728_) 
                                            << 5U) 
                                           | (((IData)(vlSelf->top__DOT___1642_) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top__DOT___1678_) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT___1929_) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & ((~ (IData)(
                                                                      (vlSelf->top__DOT___7106_ 
                                                                       >> 4U))) 
                                                           << 1U)) 
                                                       | (IData)(vlSelf->top__DOT___0119_))))))) 
                                       + ((0x40U & 
                                           (vlSelf->top__DOT___3885_ 
                                            << 2U)) 
                                          | ((0x20U 
                                              & (vlSelf->top__DOT___7066_ 
                                                 << 2U)) 
                                             | ((0x18U 
                                                 & (vlSelf->top__DOT___3885_ 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->top__DOT___0861_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0548_)))))) 
                                      >> 6U));
    vlSelf->top__DOT____VdfgTmp_h6c970684__0 = (((IData)(vlSelf->top__DOT___3677_) 
                                                 << 0x10U) 
                                                | ((0xfe00U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3932_ 
                                                                >> 0x10U)) 
                                                       << 9U)) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_h95ecfc59__0)));
    vlSelf->top__DOT___1301_ = (1U & ((((0xe00U & ((IData)(
                                                           (vlSelf->top__DOT___3932_ 
                                                            >> 0x10U)) 
                                                   << 9U)) 
                                        | (IData)(vlSelf->top__DOT____VdfgTmp_h95ecfc59__0)) 
                                       + ((0xe00U & 
                                           (vlSelf->top__DOT___3885_ 
                                            << 2U)) 
                                          | (IData)(vlSelf->top__DOT____VdfgTmp_h560fc4cd__0))) 
                                      >> 0xbU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1093(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1093\n"); );
    // Body
    vlSelf->top__DOT___3219_ = (1U & (((((IData)(vlSelf->top__DOT___3736_) 
                                         << 3U) | (7U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT___3932_ 
                                                              >> 6U)))) 
                                       + (((IData)(vlSelf->top__DOT___0400_) 
                                           << 0xcU) 
                                          | (((IData)(vlSelf->top__DOT___0592_) 
                                              << 0xbU) 
                                             | (((IData)(vlSelf->top__DOT___0084_) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->top__DOT___2232_) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->top__DOT___1228_) 
                                                       << 8U) 
                                                      | (((IData)(vlSelf->top__DOT___0694_) 
                                                          << 7U) 
                                                         | (((IData)(vlSelf->top__DOT___0069_) 
                                                             << 6U) 
                                                            | (((IData)(vlSelf->top__DOT___0534_) 
                                                                << 5U) 
                                                               | (((IData)(vlSelf->top__DOT___0638_) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelf->top__DOT___0067_) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->top__DOT___1610_) 
                                                                         << 2U) 
                                                                        | (IData)(vlSelf->top__DOT___1310_))))))))))))) 
                                      >> 3U));
    vlSelf->top__DOT___3609_ = (1U & (((((IData)(vlSelf->top__DOT___3677_) 
                                         << 0x11U) 
                                        | ((0x1fc00U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT___3932_ 
                                                        >> 0x10U)) 
                                               << 0xaU)) 
                                           | (((IData)(vlSelf->top__DOT___1765_) 
                                               << 9U) 
                                              | ((0x1c0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3932_ 
                                                              >> 0xcU)) 
                                                     << 6U)) 
                                                 | (((IData)(vlSelf->top__DOT___1189_) 
                                                     << 5U) 
                                                    | ((0x10U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___3932_ 
                                                                    >> 0xaU)) 
                                                           << 4U)) 
                                                       | (((IData)(vlSelf->top__DOT___3736_) 
                                                           << 3U) 
                                                          | (7U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT___3932_ 
                                                                        >> 6U)))))))))) 
                                       + ((0x20000U 
                                           & (vlSelf->top__DOT___3883_[0U] 
                                              << 4U)) 
                                          | ((0x10000U 
                                              & ((IData)(vlSelf->top__DOT___7195_) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSelf->top__DOT___0122_) 
                                                 << 0xfU) 
                                                | ((0x4000U 
                                                    & (vlSelf->top__DOT___3883_[0U] 
                                                       << 4U)) 
                                                   | (((IData)(vlSelf->top__DOT___0400_) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->top__DOT___0592_) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->top__DOT___0084_) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->top__DOT___2232_) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->top__DOT___1228_) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->top__DOT___0694_) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->top__DOT___0069_) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->top__DOT___0534_) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->top__DOT___0638_) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1610_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___1310_))))))))))))))))) 
                                      >> 0x11U));
    vlSelf->top__DOT___3139_ = (1U & ((((0x40000U & 
                                         ((IData)((vlSelf->top__DOT___3932_ 
                                                   >> 0x18U)) 
                                          << 0x12U)) 
                                        | (((IData)(vlSelf->top__DOT___3677_) 
                                            << 0x11U) 
                                           | ((0x1fc00U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___3932_ 
                                                           >> 0x10U)) 
                                                  << 0xaU)) 
                                              | (((IData)(vlSelf->top__DOT___1765_) 
                                                  << 9U) 
                                                 | ((0x1c0U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___3932_ 
                                                                 >> 0xcU)) 
                                                        << 6U)) 
                                                    | (((IData)(vlSelf->top__DOT___1189_) 
                                                        << 5U) 
                                                       | ((0x10U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___3932_ 
                                                                       >> 0xaU)) 
                                                              << 4U)) 
                                                          | (((IData)(vlSelf->top__DOT___3736_) 
                                                              << 3U) 
                                                             | (7U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3932_ 
                                                                           >> 6U))))))))))) 
                                       + ((0x40000U 
                                           & ((IData)(vlSelf->top__DOT___7195_) 
                                              << 0xaU)) 
                                          | ((0x20000U 
                                              & (vlSelf->top__DOT___3883_[0U] 
                                                 << 4U)) 
                                             | ((0x10000U 
                                                 & ((IData)(vlSelf->top__DOT___7195_) 
                                                    << 0xaU)) 
                                                | (((IData)(vlSelf->top__DOT___0122_) 
                                                    << 0xfU) 
                                                   | ((0x4000U 
                                                       & (vlSelf->top__DOT___3883_[0U] 
                                                          << 4U)) 
                                                      | (((IData)(vlSelf->top__DOT___0400_) 
                                                          << 0xcU) 
                                                         | (((IData)(vlSelf->top__DOT___0592_) 
                                                             << 0xbU) 
                                                            | (((IData)(vlSelf->top__DOT___0084_) 
                                                                << 0xaU) 
                                                               | (((IData)(vlSelf->top__DOT___2232_) 
                                                                   << 9U) 
                                                                  | (((IData)(vlSelf->top__DOT___1228_) 
                                                                      << 8U) 
                                                                     | (((IData)(vlSelf->top__DOT___0694_) 
                                                                         << 7U) 
                                                                        | (((IData)(vlSelf->top__DOT___0069_) 
                                                                            << 6U) 
                                                                           | (((IData)(vlSelf->top__DOT___0534_) 
                                                                               << 5U) 
                                                                              | (((IData)(vlSelf->top__DOT___0638_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1610_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___1310_)))))))))))))))))) 
                                      >> 0x12U));
    vlSelf->top__DOT___0292_ = (1U & ((((0x1c0U & ((IData)(
                                                           (vlSelf->top__DOT___3932_ 
                                                            >> 0xcU)) 
                                                   << 6U)) 
                                        | (((IData)(vlSelf->top__DOT___1189_) 
                                            << 5U) 
                                           | ((0x10U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___3932_ 
                                                           >> 0xaU)) 
                                                  << 4U)) 
                                              | (((IData)(vlSelf->top__DOT___3736_) 
                                                  << 3U) 
                                                 | (7U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT___3932_ 
                                                               >> 6U))))))) 
                                       + (((IData)(vlSelf->top__DOT___0400_) 
                                           << 0xcU) 
                                          | (((IData)(vlSelf->top__DOT___0592_) 
                                              << 0xbU) 
                                             | (((IData)(vlSelf->top__DOT___0084_) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->top__DOT___2232_) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->top__DOT___1228_) 
                                                       << 8U) 
                                                      | (((IData)(vlSelf->top__DOT___0694_) 
                                                          << 7U) 
                                                         | (((IData)(vlSelf->top__DOT___0069_) 
                                                             << 6U) 
                                                            | (((IData)(vlSelf->top__DOT___0534_) 
                                                                << 5U) 
                                                               | (((IData)(vlSelf->top__DOT___0638_) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelf->top__DOT___0067_) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->top__DOT___1610_) 
                                                                         << 2U) 
                                                                        | (IData)(vlSelf->top__DOT___1310_))))))))))))) 
                                      >> 8U));
    vlSelf->top__DOT___2812_ = (1U & ((((0x40U & ((IData)(
                                                          (vlSelf->top__DOT___3932_ 
                                                           >> 0xcU)) 
                                                  << 6U)) 
                                        | (((IData)(vlSelf->top__DOT___1189_) 
                                            << 5U) 
                                           | ((0x10U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___3932_ 
                                                           >> 0xaU)) 
                                                  << 4U)) 
                                              | (((IData)(vlSelf->top__DOT___3736_) 
                                                  << 3U) 
                                                 | (7U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT___3932_ 
                                                               >> 6U))))))) 
                                       + (((IData)(vlSelf->top__DOT___0400_) 
                                           << 0xcU) 
                                          | (((IData)(vlSelf->top__DOT___0592_) 
                                              << 0xbU) 
                                             | (((IData)(vlSelf->top__DOT___0084_) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->top__DOT___2232_) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->top__DOT___1228_) 
                                                       << 8U) 
                                                      | (((IData)(vlSelf->top__DOT___0694_) 
                                                          << 7U) 
                                                         | (((IData)(vlSelf->top__DOT___0069_) 
                                                             << 6U) 
                                                            | (((IData)(vlSelf->top__DOT___0534_) 
                                                                << 5U) 
                                                               | (((IData)(vlSelf->top__DOT___0638_) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelf->top__DOT___0067_) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->top__DOT___1610_) 
                                                                         << 2U) 
                                                                        | (IData)(vlSelf->top__DOT___1310_))))))))))))) 
                                      >> 6U));
    vlSelf->top__DOT___4311_ = ((0x80000U & (((0xc0000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___3932_ 
                                                           >> 0x18U)) 
                                                  << 0x12U)) 
                                              | (((IData)(vlSelf->top__DOT___3677_) 
                                                  << 0x11U) 
                                                 | ((0x1fc00U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___3932_ 
                                                                 >> 0x10U)) 
                                                        << 0xaU)) 
                                                    | (((IData)(vlSelf->top__DOT___1765_) 
                                                        << 9U) 
                                                       | ((0x1c0U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___3932_ 
                                                                       >> 0xcU)) 
                                                              << 6U)) 
                                                          | (((IData)(vlSelf->top__DOT___1189_) 
                                                              << 5U) 
                                                             | ((0x10U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3932_ 
                                                                             >> 0xaU)) 
                                                                    << 4U)) 
                                                                | (((IData)(vlSelf->top__DOT___3736_) 
                                                                    << 3U) 
                                                                   | (7U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3932_ 
                                                                                >> 6U))))))))))) 
                                             + (((IData)(vlSelf->top__DOT___3214_) 
                                                 << 0x13U) 
                                                | ((0x40000U 
                                                    & ((IData)(vlSelf->top__DOT___7195_) 
                                                       << 0xaU)) 
                                                   | ((0x20000U 
                                                       & (vlSelf->top__DOT___3883_[0U] 
                                                          << 4U)) 
                                                      | ((0x10000U 
                                                          & ((IData)(vlSelf->top__DOT___7195_) 
                                                             << 0xaU)) 
                                                         | (((IData)(vlSelf->top__DOT___0122_) 
                                                             << 0xfU) 
                                                            | ((0x4000U 
                                                                & (vlSelf->top__DOT___3883_[0U] 
                                                                   << 4U)) 
                                                               | (((IData)(vlSelf->top__DOT___0400_) 
                                                                   << 0xcU) 
                                                                  | (((IData)(vlSelf->top__DOT___0592_) 
                                                                      << 0xbU) 
                                                                     | (((IData)(vlSelf->top__DOT___0084_) 
                                                                         << 0xaU) 
                                                                        | (((IData)(vlSelf->top__DOT___2232_) 
                                                                            << 9U) 
                                                                           | (((IData)(vlSelf->top__DOT___1228_) 
                                                                               << 8U) 
                                                                              | (((IData)(vlSelf->top__DOT___0694_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0534_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0638_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1610_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___1310_)))))))))))))))))))) 
                                | (((IData)(vlSelf->top__DOT___3139_) 
                                    << 0x12U) | (((IData)(vlSelf->top__DOT___3609_) 
                                                  << 0x11U) 
                                                 | ((0x1fe00U 
                                                     & (((0x1fc00U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___3932_ 
                                                                      >> 0x10U)) 
                                                             << 0xaU)) 
                                                         | (((IData)(vlSelf->top__DOT___1765_) 
                                                             << 9U) 
                                                            | ((0x1c0U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3932_ 
                                                                            >> 0xcU)) 
                                                                   << 6U)) 
                                                               | (((IData)(vlSelf->top__DOT___1189_) 
                                                                   << 5U) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3932_ 
                                                                                >> 0xaU)) 
                                                                         << 4U)) 
                                                                     | (((IData)(vlSelf->top__DOT___3736_) 
                                                                         << 3U) 
                                                                        | (7U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___3932_ 
                                                                                >> 6U))))))))) 
                                                        + 
                                                        ((0x10000U 
                                                          & ((IData)(vlSelf->top__DOT___7195_) 
                                                             << 0xaU)) 
                                                         | (((IData)(vlSelf->top__DOT___0122_) 
                                                             << 0xfU) 
                                                            | ((0x4000U 
                                                                & (vlSelf->top__DOT___3883_[0U] 
                                                                   << 4U)) 
                                                               | (((IData)(vlSelf->top__DOT___0400_) 
                                                                   << 0xcU) 
                                                                  | (((IData)(vlSelf->top__DOT___0592_) 
                                                                      << 0xbU) 
                                                                     | (((IData)(vlSelf->top__DOT___0084_) 
                                                                         << 0xaU) 
                                                                        | (((IData)(vlSelf->top__DOT___2232_) 
                                                                            << 9U) 
                                                                           | (((IData)(vlSelf->top__DOT___1228_) 
                                                                               << 8U) 
                                                                              | (((IData)(vlSelf->top__DOT___0694_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0534_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0638_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1610_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___1310_))))))))))))))))) 
                                                    | (((IData)(vlSelf->top__DOT___0292_) 
                                                        << 8U) 
                                                       | ((0x80U 
                                                           & (((0xc0U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3932_ 
                                                                            >> 0xcU)) 
                                                                   << 6U)) 
                                                               | (((IData)(vlSelf->top__DOT___1189_) 
                                                                   << 5U) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3932_ 
                                                                                >> 0xaU)) 
                                                                         << 4U)) 
                                                                     | (((IData)(vlSelf->top__DOT___3736_) 
                                                                         << 3U) 
                                                                        | (7U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___3932_ 
                                                                                >> 6U))))))) 
                                                              + 
                                                              (((IData)(vlSelf->top__DOT___0400_) 
                                                                << 0xcU) 
                                                               | (((IData)(vlSelf->top__DOT___0592_) 
                                                                   << 0xbU) 
                                                                  | (((IData)(vlSelf->top__DOT___0084_) 
                                                                      << 0xaU) 
                                                                     | (((IData)(vlSelf->top__DOT___2232_) 
                                                                         << 9U) 
                                                                        | (((IData)(vlSelf->top__DOT___1228_) 
                                                                            << 8U) 
                                                                           | (((IData)(vlSelf->top__DOT___0694_) 
                                                                               << 7U) 
                                                                              | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0534_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0638_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1610_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___1310_)))))))))))))) 
                                                          | (((IData)(vlSelf->top__DOT___2812_) 
                                                              << 6U) 
                                                             | ((0x30U 
                                                                 & ((((IData)(vlSelf->top__DOT___1189_) 
                                                                      << 5U) 
                                                                     | ((0x10U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3932_ 
                                                                                >> 0xaU)) 
                                                                            << 4U)) 
                                                                        | (((IData)(vlSelf->top__DOT___3736_) 
                                                                            << 3U) 
                                                                           | (7U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT___3932_ 
                                                                                >> 6U)))))) 
                                                                    + 
                                                                    (((IData)(vlSelf->top__DOT___0400_) 
                                                                      << 0xcU) 
                                                                     | (((IData)(vlSelf->top__DOT___0592_) 
                                                                         << 0xbU) 
                                                                        | (((IData)(vlSelf->top__DOT___0084_) 
                                                                            << 0xaU) 
                                                                           | (((IData)(vlSelf->top__DOT___2232_) 
                                                                               << 9U) 
                                                                              | (((IData)(vlSelf->top__DOT___1228_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0694_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0534_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0638_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1610_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___1310_)))))))))))))) 
                                                                | (((IData)(vlSelf->top__DOT___3219_) 
                                                                    << 3U) 
                                                                   | (7U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3932_ 
                                                                                >> 6U)) 
                                                                         + 
                                                                         (((IData)(vlSelf->top__DOT___0400_) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->top__DOT___0592_) 
                                                                              << 0xbU) 
                                                                             | (((IData)(vlSelf->top__DOT___0084_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___2232_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1228_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0694_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0069_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0534_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0638_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1610_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___1310_)))))))))))))))))))))));
    vlSelf->top__DOT___1081_ = (1U & ((vlSelf->top__DOT___4311_ 
                                       >> 4U) + (IData)(vlSelf->top__DOT___7055_)));
    vlSelf->top__DOT___1781_ = (1U & (((((IData)(vlSelf->top__DOT___2812_) 
                                         << 2U) | (3U 
                                                   & (vlSelf->top__DOT___4311_ 
                                                      >> 4U))) 
                                       + ((4U & ((IData)(vlSelf->top__DOT___4073_) 
                                                 >> 1U)) 
                                          | (3U & (IData)(vlSelf->top__DOT___7055_)))) 
                                      >> 2U));
    vlSelf->top__DOT___0512_ = (1U & ((IData)(vlSelf->top__DOT___1781_) 
                                      | (vlSelf->top__DOT___7112_ 
                                         >> 2U)));
    vlSelf->top__DOT___1780_ = ((IData)(vlSelf->top__DOT___1781_) 
                                & (IData)(vlSelf->top__DOT___1512_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1096(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1096\n"); );
    // Body
    vlSelf->top__DOT___3909_ = ((0xf80U & ((((IData)(vlSelf->top__DOT___3107_) 
                                             << 0xbU) 
                                            | ((0x700U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT___3854_ 
                                                            >> 0x27U)) 
                                                   << 8U)) 
                                               | (((IData)(vlSelf->top__DOT___3280_) 
                                                   << 7U) 
                                                  | ((0x7eU 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___3854_ 
                                                                  >> 0x20U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->top__DOT___1309_))))) 
                                           + (((IData)(vlSelf->top__DOT___2842_) 
                                               << 0xaU) 
                                              | (((IData)(vlSelf->top__DOT___1846_) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->top__DOT___0891_) 
                                                     << 8U) 
                                                    | (((IData)(vlSelf->top__DOT___2287_) 
                                                        << 7U) 
                                                       | (((IData)(vlSelf->top__DOT___2202_) 
                                                           << 5U) 
                                                          | (((IData)(vlSelf->top__DOT___0016_) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT___0927_) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelf->top__DOT___1281_) 
                                                                    << 2U) 
                                                                   | ((IData)(vlSelf->top__DOT___0428_) 
                                                                      << 1U))))))))))) 
                                | (((IData)(vlSelf->top__DOT___0145_) 
                                    << 6U) | (0x3fU 
                                              & (((0x3eU 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___3854_ 
                                                               >> 0x20U)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->top__DOT___1309_)) 
                                                 + 
                                                 (((IData)(vlSelf->top__DOT___2202_) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->top__DOT___0016_) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->top__DOT___0927_) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->top__DOT___1281_) 
                                                            << 2U) 
                                                           | ((IData)(vlSelf->top__DOT___0428_) 
                                                              << 1U)))))))));
    vlSelf->top__DOT___3344_ = (1U & (((IData)(vlSelf->top__DOT___3909_) 
                                       >> 0xaU) + (IData)(vlSelf->top__DOT___0615_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1097(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1097\n"); );
    // Body
    vlSelf->top__DOT___1904_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (0x1ffffU 
                                                                     & (vlSelf->top__DOT___3857_ 
                                                                        >> 9U)))) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___3473_) 
                                                                       << 0x1eU) 
                                                                      | ((0x30000000U 
                                                                          & (vlSelf->top__DOT___3857_ 
                                                                             << 0x16U)) 
                                                                         | (((IData)(vlSelf->top__DOT___3515_) 
                                                                             << 0x1bU) 
                                                                            | ((0x7000000U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                << 0x16U)) 
                                                                               | ((0xc00000U 
                                                                                & (vlSelf->top__DOT___4054_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7123_) 
                                                                                << 0xbU)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___4054_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___7123_) 
                                                                                << 0xbU)) 
                                                                                | ((0x7f800U 
                                                                                & (vlSelf->top__DOT___4054_[0U] 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0398_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x100U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x80U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((4U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x1cU)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7092_)))))))))))))))))))))))) 
                                                  + (QData)((IData)(vlSelf->top__DOT___1565_))) 
                                                 >> 0x2fU))));
    vlSelf->top__DOT___3901_[2U] = ((0xfU & vlSelf->top__DOT___3901_[2U]) 
                                    | ((IData)((0x7ffffffffffULL 
                                                & ((QData)((IData)(vlSelf->top__DOT___1904_)) 
                                                   >> 1U))) 
                                       << 4U));
    vlSelf->top__DOT___3901_[3U] = (0x7fffU & (((IData)(
                                                        (0x7ffffffffffULL 
                                                         & ((QData)((IData)(vlSelf->top__DOT___1904_)) 
                                                            >> 1U))) 
                                                >> 0x1cU) 
                                               | ((IData)(
                                                          ((0x7ffffffffffULL 
                                                            & ((QData)((IData)(vlSelf->top__DOT___1904_)) 
                                                               >> 1U)) 
                                                           >> 0x20U)) 
                                                  << 4U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1098(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1098\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_hdc35411d__0 = (((IData)(vlSelf->top__DOT___0361_) 
                                                 << 0x13U) 
                                                | (((IData)(vlSelf->top__DOT___1526_) 
                                                    << 0x12U) 
                                                   | (((IData)(vlSelf->top__DOT___0652_) 
                                                       << 0x11U) 
                                                      | (((IData)(vlSelf->top__DOT___2590_) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->top__DOT___0073_) 
                                                             << 0xfU) 
                                                            | ((0x4000U 
                                                                & (vlSelf->top__DOT___4085_ 
                                                                   >> 1U)) 
                                                               | (((IData)(vlSelf->top__DOT___2434_) 
                                                                   << 0xdU) 
                                                                  | (0x1fffU 
                                                                     & (vlSelf->top__DOT___4085_ 
                                                                        >> 1U)))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1099(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1099\n"); );
    // Body
    vlSelf->top__DOT___4580_ = ((0x20000000U & ((IData)(vlSelf->top__DOT___0640_) 
                                                << 0x1aU)) 
                                | ((0x1e000000U & ((IData)(vlSelf->top__DOT___4780_) 
                                                   << 0x12U)) 
                                   | ((0x1000000U & 
                                       ((IData)(vlSelf->top__DOT___0640_) 
                                        << 0x16U)) 
                                      | ((0x800000U 
                                          & ((IData)(vlSelf->top__DOT___4780_) 
                                             << 0x11U)) 
                                         | ((0x400000U 
                                             & ((IData)(vlSelf->top__DOT___0640_) 
                                                << 0x15U)) 
                                            | ((0x200000U 
                                                & ((IData)(vlSelf->top__DOT___4780_) 
                                                   << 0x10U)) 
                                               | (((IData)(vlSelf->top__DOT___0640_) 
                                                   << 0x14U) 
                                                  | (((IData)(vlSelf->top__DOT___0361_) 
                                                      << 0x13U) 
                                                     | (((IData)(vlSelf->top__DOT___1526_) 
                                                         << 0x12U) 
                                                        | (((IData)(vlSelf->top__DOT___0652_) 
                                                            << 0x11U) 
                                                           | (((IData)(vlSelf->top__DOT___2590_) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->top__DOT___0073_) 
                                                                  << 0xfU) 
                                                                 | ((0x4000U 
                                                                     & (vlSelf->top__DOT___4085_ 
                                                                        >> 1U)) 
                                                                    | (((IData)(vlSelf->top__DOT___2434_) 
                                                                        << 0xdU) 
                                                                       | (0x1fffU 
                                                                          & (vlSelf->top__DOT___4085_ 
                                                                             >> 1U))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1100(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1100\n"); );
    // Body
    vlSelf->top__DOT___4079_ = ((0x1fe000U & ((IData)(
                                                      (vlSelf->top__DOT___7182_ 
                                                       >> 0x24U)) 
                                              << 0xdU)) 
                                | ((0x1000U & ((IData)(
                                                       (vlSelf->top__DOT___7182_ 
                                                        >> 0x23U)) 
                                               << 0xcU)) 
                                   | ((0x800U & ((IData)(
                                                         (vlSelf->top__DOT___7182_ 
                                                          >> 0x22U)) 
                                                 << 0xbU)) 
                                      | ((0x7f8U & 
                                          ((IData)(
                                                   (vlSelf->top__DOT___7182_ 
                                                    >> 0x1aU)) 
                                           << 3U)) 
                                         | ((4U & ((IData)(
                                                           (vlSelf->top__DOT___7182_ 
                                                            >> 0x19U)) 
                                                   << 2U)) 
                                            | (((IData)(vlSelf->top__DOT___1662_) 
                                                << 1U) 
                                               | (IData)(vlSelf->top__DOT___1190_)))))));
    vlSelf->top__DOT___4371_ = ((0x7fffU & vlSelf->top__DOT___4371_) 
                                | ((0x20000000U & (vlSelf->top__DOT___4079_ 
                                                   << 0x1aU)) 
                                   | (0x1fff8000U & 
                                      ((IData)((vlSelf->top__DOT___7182_ 
                                                >> 0xcU)) 
                                       << 0xfU))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1101(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1101\n"); );
    // Body
    vlSelf->top__DOT___1425_ = (1U & ((((0x200U & ((IData)(
                                                           (vlSelf->top__DOT___3969_ 
                                                            >> 0x11U)) 
                                                   << 9U)) 
                                        | (((IData)(vlSelf->top__DOT___1252_) 
                                            << 8U) 
                                           | (((IData)(vlSelf->top__DOT___1783_) 
                                               << 7U) 
                                              | (((IData)(vlSelf->top__DOT___0899_) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->top__DOT___0571_) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->top__DOT___0038_) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT___1343_) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->top__DOT___1060_) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->top__DOT___0781_) 
                                                                 << 1U) 
                                                                | (1U 
                                                                   & (vlSelf->top__DOT___4749_[2U] 
                                                                      >> 0x16U))))))))))) 
                                       + ((0x3f8U & 
                                           ((IData)(vlSelf->top__DOT___3862_) 
                                            << 3U)) 
                                          | (((IData)(vlSelf->top__DOT___1322_) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT___0997_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0226_))))) 
                                      >> 9U));
    vlSelf->top__DOT___3263_ = (1U & ((((0x400000U 
                                         & ((IData)(
                                                    (vlSelf->top__DOT___3969_ 
                                                     >> 0x1eU)) 
                                            << 0x16U)) 
                                        | ((0x200000U 
                                            & ((IData)(vlSelf->top__DOT___7024_) 
                                               << 9U)) 
                                           | ((0x100000U 
                                               & ((IData)(vlSelf->top__DOT___7024_) 
                                                  << 9U)) 
                                              | ((0x80000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3969_ 
                                                              >> 0x1bU)) 
                                                     << 0x13U)) 
                                                 | ((0x40000U 
                                                     & ((IData)(vlSelf->top__DOT___7024_) 
                                                        << 9U)) 
                                                    | ((0x30000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___3969_ 
                                                                    >> 0x18U)) 
                                                           << 0x10U)) 
                                                       | ((0x8000U 
                                                           & ((IData)(vlSelf->top__DOT___7024_) 
                                                              << 9U)) 
                                                          | ((0x4000U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___3969_ 
                                                                          >> 0x16U)) 
                                                                 << 0xeU)) 
                                                             | ((0x2000U 
                                                                 & ((IData)(vlSelf->top__DOT___7024_) 
                                                                    << 9U)) 
                                                                | ((0x1000U 
                                                                    & ((IData)(vlSelf->top__DOT___7024_) 
                                                                       << 9U)) 
                                                                   | ((0x800U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3969_ 
                                                                                >> 0x13U)) 
                                                                          << 0xbU)) 
                                                                      | (((IData)(vlSelf->top__DOT___3759_) 
                                                                          << 0xaU) 
                                                                         | ((0x200U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3969_ 
                                                                                >> 0x11U)) 
                                                                                << 9U)) 
                                                                            | (((IData)(vlSelf->top__DOT___1252_) 
                                                                                << 8U) 
                                                                               | (((IData)(vlSelf->top__DOT___1783_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0899_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0038_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1343_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0781_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4749_[2U] 
                                                                                >> 0x16U))))))))))))))))))))))) 
                                       + (((IData)(vlSelf->top__DOT___0629_) 
                                           << 0x16U) 
                                          | (((IData)(vlSelf->top__DOT___0132_) 
                                              << 0x15U) 
                                             | (((IData)(vlSelf->top__DOT___0727_) 
                                                 << 0x14U) 
                                                | ((0xc0000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3862_ 
                                                                >> 0xfU)) 
                                                       << 0x12U)) 
                                                   | (((IData)(vlSelf->top__DOT___0421_) 
                                                       << 0x11U) 
                                                      | (((IData)(vlSelf->top__DOT___1641_) 
                                                          << 0x10U) 
                                                         | ((0xc000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___3862_ 
                                                                         >> 0xbU)) 
                                                                << 0xeU)) 
                                                            | (((IData)(vlSelf->top__DOT___0143_) 
                                                                << 0xdU) 
                                                               | ((0x1800U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___3862_ 
                                                                               >> 8U)) 
                                                                      << 0xbU)) 
                                                                  | (((IData)(vlSelf->top__DOT___2252_) 
                                                                      << 0xaU) 
                                                                     | ((0x3f8U 
                                                                         & ((IData)(vlSelf->top__DOT___3862_) 
                                                                            << 3U)) 
                                                                        | (((IData)(vlSelf->top__DOT___1322_) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSelf->top__DOT___0997_) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelf->top__DOT___0226_))))))))))))))) 
                                      >> 0x16U));
    vlSelf->top__DOT___1029_ = ((IData)(vlSelf->top__DOT___1425_) 
                                & (IData)(vlSelf->top__DOT___0141_));
    vlSelf->top__DOT___4044_[2U] = ((0xfffeffffU & 
                                     vlSelf->top__DOT___4044_[2U]) 
                                    | ((IData)(vlSelf->top__DOT___3263_) 
                                       << 0x10U));
    vlSelf->top__DOT____VdfgTmp_h118dffa7__0 = (((IData)(vlSelf->top__DOT___2230_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1029_));
    vlSelf->top__DOT___1174_ = (1U & (~ (((IData)(vlSelf->top__DOT___1762_) 
                                          & (IData)(vlSelf->top__DOT___0452_)) 
                                         | (IData)(vlSelf->top__DOT___1029_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1104(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1104\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___1690_)) 
                              << 0x3bU) | (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (0x7ffffffULL 
                                                                        & (((((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___3014_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 0x17U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3652_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 0xaU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3038_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 8U)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3215_) 
                                                                                << 8U) 
                                                                                | ((0xf0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2731_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0489_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0119_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1071_))))))))))))))) 
                                                                              << 9U) 
                                                                             | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0147_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0493_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0450_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0942_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0582_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0723_)))))))))))) 
                                                                            + 
                                                                            (((QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___3879_[1U] 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1947_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___3388_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7800000U 
                                                                                & (vlSelf->top__DOT___3879_[1U] 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2482_) 
                                                                                << 0x16U) 
                                                                                | ((0x3fe000U 
                                                                                & (vlSelf->top__DOT___3879_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2947_) 
                                                                                << 0xcU) 
                                                                                | ((0xffcU 
                                                                                & (vlSelf->top__DOT___3879_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3480_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2042_)))))))))))) 
                                                                              << 9U) 
                                                                             | (QData)((IData)(
                                                                                (0x1ffU 
                                                                                & vlSelf->top__DOT___3879_[0U]))))) 
                                                                           >> 0xeU)))))) 
                                            << 0x3aU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0116_)) 
                                               << 0x39U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT___4774_) 
                                                                      >> 0xbU)))) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(
                                                                     (3U 
                                                                      & ((IData)(vlSelf->top__DOT___4774_) 
                                                                         >> 9U)))) 
                                                     << 0x36U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->top__DOT___4774_) 
                                                                            >> 8U)))) 
                                                        << 0x35U) 
                                                       | (((QData)((IData)(
                                                                           (3U 
                                                                            & ((1U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                >> 7U)) 
                                                                               | (0x3fU 
                                                                                & (((IData)(vlSelf->top__DOT___1909_) 
                                                                                >> 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1006_) 
                                                                                >> 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1339_) 
                                                                                >> 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0903_) 
                                                                                >> 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0849_) 
                                                                                >> 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0826_) 
                                                                                >> 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___2590_) 
                                                                                >> 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___2582_) 
                                                                                >> 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0635_) 
                                                                                >> 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                >> 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___1212_) 
                                                                                >> 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                >> 0x13U) 
                                                                                | ((IData)(vlSelf->top__DOT___3689_) 
                                                                                >> 0x15U)))))))))))))))))) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                >> 6U)))) 
                                                              << 0x32U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->top__DOT___4774_) 
                                                                                >> 5U) 
                                                                                | (2U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                >> 6U)))))) 
                                                                 << 0x31U) 
                                                                | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                >> 1U)))) 
                                                                    << 0x2dU) 
                                                                   | (((QData)((IData)(
                                                                                (0x1ffffffU 
                                                                                & ((0x4000000U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 0x13U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 0x14U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1909_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___1006_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___1339_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0903_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0849_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0826_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7067_) 
                                                                                << 0xfU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7067_) 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->top__DOT___7067_) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2590_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___2582_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0635_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___1212_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0x14U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3689_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xeU))))))))))))))))))))))))))) 
                                                                       << 0x14U) 
                                                                      | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2091_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___3242_) 
                                                                                << 0x12U) 
                                                                                | ((0x30000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xaU)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0727_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___1055_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___2137_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1722_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0495_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0607_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 8U) 
                                                                                | ((0xf8U 
                                                                                & (((IData)(vlSelf->top__DOT___2935_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___2535_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0503_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0861_) 
                                                                                << 3U) 
                                                                                | (0xfffffff8U 
                                                                                & (((IData)(vlSelf->top__DOT___2098_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0842_) 
                                                                                << 1U)))))))) 
                                                                                | ((4U 
                                                                                & (((((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1188_)) 
                                                                                + 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->top__DOT___4160_)) 
                                                                                | (IData)(vlSelf->top__DOT___0116_))) 
                                                                                << 1U)) 
                                                                                | (3U 
                                                                                & (((IData)(vlSelf->top__DOT___0861_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2098_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0842_)))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (((IData)((0x1ffffffULL & (((((QData)((IData)(
                                                                  (((IData)(
                                                                            (vlSelf->top__DOT___4132_ 
                                                                             >> 0x1bU)) 
                                                                    << 0x1cU) 
                                                                   | (((IData)(vlSelf->top__DOT___3014_) 
                                                                       << 0x1bU) 
                                                                      | ((0x7000000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 0x17U)) 
                                                                             << 0x18U)) 
                                                                         | (((IData)(vlSelf->top__DOT___3652_) 
                                                                             << 0x17U) 
                                                                            | ((0x7ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 0xaU)) 
                                                                                << 0xbU)) 
                                                                               | (((IData)(vlSelf->top__DOT___3038_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 8U)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3215_) 
                                                                                << 8U) 
                                                                                | ((0xf0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2731_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0489_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0119_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1071_))))))))))))))) 
                                                  << 9U) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->top__DOT___0147_) 
                                                                     << 8U) 
                                                                    | (((IData)(vlSelf->top__DOT___0493_) 
                                                                        << 7U) 
                                                                       | (((IData)(vlSelf->top__DOT___2094_) 
                                                                           << 6U) 
                                                                          | (((IData)(vlSelf->top__DOT___0450_) 
                                                                              << 5U) 
                                                                             | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0942_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0582_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0723_)))))))))))) 
                                                + (
                                                   ((QData)((IData)(
                                                                    ((0xe0000000U 
                                                                      & (vlSelf->top__DOT___3879_[1U] 
                                                                         << 0x17U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1947_) 
                                                                         << 0x1cU) 
                                                                        | (((IData)(vlSelf->top__DOT___3388_) 
                                                                            << 0x1bU) 
                                                                           | ((0x7800000U 
                                                                               & (vlSelf->top__DOT___3879_[1U] 
                                                                                << 0x17U)) 
                                                                              | (((IData)(vlSelf->top__DOT___2482_) 
                                                                                << 0x16U) 
                                                                                | ((0x3fe000U 
                                                                                & (vlSelf->top__DOT___3879_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2947_) 
                                                                                << 0xcU) 
                                                                                | ((0xffcU 
                                                                                & (vlSelf->top__DOT___3879_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3480_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2042_)))))))))))) 
                                                    << 9U) 
                                                   | (QData)((IData)(
                                                                     (0x1ffU 
                                                                      & vlSelf->top__DOT___3879_[0U]))))) 
                                               >> 0x10U))) 
                      << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->top__DOT___1690_)) 
                                             << 0x3bU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (0x7ffffffULL 
                                                                            & (((((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___3014_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 0x17U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3652_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 0xaU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3038_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 8U)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3215_) 
                                                                                << 8U) 
                                                                                | ((0xf0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2731_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0489_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0119_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1071_))))))))))))))) 
                                                                                << 9U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0147_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0493_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0450_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0942_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0582_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0723_)))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___3879_[1U] 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1947_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___3388_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7800000U 
                                                                                & (vlSelf->top__DOT___3879_[1U] 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2482_) 
                                                                                << 0x16U) 
                                                                                | ((0x3fe000U 
                                                                                & (vlSelf->top__DOT___3879_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2947_) 
                                                                                << 0xcU) 
                                                                                | ((0xffcU 
                                                                                & (vlSelf->top__DOT___3879_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3480_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2042_)))))))))))) 
                                                                                << 9U) 
                                                                                | (QData)((IData)(
                                                                                (0x1ffU 
                                                                                & vlSelf->top__DOT___3879_[0U]))))) 
                                                                               >> 0xeU)))))) 
                                                << 0x3aU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0116_)) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->top__DOT___4774_) 
                                                                          >> 0xbU)))) 
                                                      << 0x38U) 
                                                     | (((QData)((IData)(
                                                                         (3U 
                                                                          & ((IData)(vlSelf->top__DOT___4774_) 
                                                                             >> 9U)))) 
                                                         << 0x36U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                >> 8U)))) 
                                                            << 0x35U) 
                                                           | (((QData)((IData)(
                                                                               (3U 
                                                                                & ((1U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                >> 7U)) 
                                                                                | (0x3fU 
                                                                                & (((IData)(vlSelf->top__DOT___1909_) 
                                                                                >> 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1006_) 
                                                                                >> 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1339_) 
                                                                                >> 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0903_) 
                                                                                >> 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0849_) 
                                                                                >> 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0826_) 
                                                                                >> 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___2590_) 
                                                                                >> 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___2582_) 
                                                                                >> 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0635_) 
                                                                                >> 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                >> 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___1212_) 
                                                                                >> 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                >> 0x13U) 
                                                                                | ((IData)(vlSelf->top__DOT___3689_) 
                                                                                >> 0x15U)))))))))))))))))) 
                                                               << 0x33U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                >> 6U)))) 
                                                                  << 0x32U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->top__DOT___4774_) 
                                                                                >> 5U) 
                                                                                | (2U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                >> 6U)))))) 
                                                                     << 0x31U) 
                                                                    | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                >> 1U)))) 
                                                                        << 0x2dU) 
                                                                       | (((QData)((IData)(
                                                                                (0x1ffffffU 
                                                                                & ((0x4000000U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 0x13U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 0x14U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1909_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___1006_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___1339_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0903_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0849_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0826_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7067_) 
                                                                                << 0xfU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7067_) 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->top__DOT___7067_) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2590_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___2582_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0635_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___1212_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0x14U)) 
                                                                                << 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3689_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xeU))))))))))))))))))))))))))) 
                                                                           << 0x14U) 
                                                                          | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2091_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___3242_) 
                                                                                << 0x12U) 
                                                                                | ((0x30000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xaU)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0727_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___1055_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___2137_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1722_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0495_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0607_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 8U) 
                                                                                | ((0xf8U 
                                                                                & (((IData)(vlSelf->top__DOT___2935_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___2535_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0503_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0861_) 
                                                                                << 3U) 
                                                                                | (0xfffffff8U 
                                                                                & (((IData)(vlSelf->top__DOT___2098_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0842_) 
                                                                                << 1U)))))))) 
                                                                                | ((4U 
                                                                                & (((((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1188_)) 
                                                                                + 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->top__DOT___4160_)) 
                                                                                | (IData)(vlSelf->top__DOT___0116_))) 
                                                                                << 1U)) 
                                                                                | (3U 
                                                                                & (((IData)(vlSelf->top__DOT___0503_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0861_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2098_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0842_))))))))))))))))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_1[2U] = (0x7fU & ((IData)((0x1ffffffULL 
                                       & (((((QData)((IData)(
                                                             (((IData)(
                                                                       (vlSelf->top__DOT___4132_ 
                                                                        >> 0x1bU)) 
                                                               << 0x1cU) 
                                                              | (((IData)(vlSelf->top__DOT___3014_) 
                                                                  << 0x1bU) 
                                                                 | ((0x7000000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 0x17U)) 
                                                                        << 0x18U)) 
                                                                    | (((IData)(vlSelf->top__DOT___3652_) 
                                                                        << 0x17U) 
                                                                       | ((0x7ff800U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 0xaU)) 
                                                                              << 0xbU)) 
                                                                          | (((IData)(vlSelf->top__DOT___3038_) 
                                                                              << 0xaU) 
                                                                             | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 8U)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3215_) 
                                                                                << 8U) 
                                                                                | ((0xf0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2731_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0489_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0119_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1071_))))))))))))))) 
                                             << 9U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT___0147_) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->top__DOT___0493_) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->top__DOT___2094_) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->top__DOT___0450_) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->top__DOT___0056_) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->top__DOT___0942_) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0582_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0723_)))))))))))) 
                                           + (((QData)((IData)(
                                                               ((0xe0000000U 
                                                                 & (vlSelf->top__DOT___3879_[1U] 
                                                                    << 0x17U)) 
                                                                | (((IData)(vlSelf->top__DOT___1947_) 
                                                                    << 0x1cU) 
                                                                   | (((IData)(vlSelf->top__DOT___3388_) 
                                                                       << 0x1bU) 
                                                                      | ((0x7800000U 
                                                                          & (vlSelf->top__DOT___3879_[1U] 
                                                                             << 0x17U)) 
                                                                         | (((IData)(vlSelf->top__DOT___2482_) 
                                                                             << 0x16U) 
                                                                            | ((0x3fe000U 
                                                                                & (vlSelf->top__DOT___3879_[0U] 
                                                                                >> 9U)) 
                                                                               | (((IData)(vlSelf->top__DOT___2947_) 
                                                                                << 0xcU) 
                                                                                | ((0xffcU 
                                                                                & (vlSelf->top__DOT___3879_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3480_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2042_)))))))))))) 
                                               << 9U) 
                                              | (QData)((IData)(
                                                                (0x1ffU 
                                                                 & vlSelf->top__DOT___3879_[0U]))))) 
                                          >> 0x10U))) 
                              >> 4U));
    vlSelf->top__DOT___3841_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___3841_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___3841_[2U] = __Vtemp_1[2U];
    vlSelf->top__DOT____VdfgTmp_h2412ffe5__0 = ((0x80U 
                                                 & (IData)(vlSelf->top__DOT___4774_)) 
                                                | ((0x40U 
                                                    & (vlSelf->top__DOT___3841_[1U] 
                                                       >> 0xcU)) 
                                                   | ((0x20U 
                                                       & (IData)(vlSelf->top__DOT___4774_)) 
                                                      | ((0x1eU 
                                                          & (vlSelf->top__DOT___3841_[1U] 
                                                             >> 0xcU)) 
                                                         | (IData)(vlSelf->top__DOT___0866_)))));
    vlSelf->top__DOT___4244_ = ((0xfU & vlSelf->top__DOT___4244_) 
                                | ((0x6000000U & ((IData)(
                                                          (0x1fffULL 
                                                           & (((((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___3014_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 0x17U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3652_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 0xaU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3038_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 8U)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3215_) 
                                                                                << 8U) 
                                                                                | ((0xf0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2731_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0489_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0119_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1071_))))))))))))))) 
                                                                 << 9U) 
                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0147_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0493_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0450_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0942_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0582_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0723_)))))))))))) 
                                                               + 
                                                               (((QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___3879_[1U] 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1947_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___3388_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7800000U 
                                                                                & (vlSelf->top__DOT___3879_[1U] 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2482_) 
                                                                                << 0x16U) 
                                                                                | ((0x3fe000U 
                                                                                & (vlSelf->top__DOT___3879_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2947_) 
                                                                                << 0xcU) 
                                                                                | ((0xffcU 
                                                                                & (vlSelf->top__DOT___3879_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3480_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2042_)))))))))))) 
                                                                 << 9U) 
                                                                | (QData)((IData)(
                                                                                (0x1ffU 
                                                                                & vlSelf->top__DOT___3879_[0U]))))) 
                                                              >> 0x1cU))) 
                                                  << 0x19U)) 
                                   | (((IData)(vlSelf->top__DOT___3770_) 
                                       << 0x18U) | 
                                      ((0xffe000U & 
                                        ((vlSelf->top__DOT___3841_[2U] 
                                          << 0x11U) 
                                         | (0x1e000U 
                                            & (vlSelf->top__DOT___3841_[1U] 
                                               >> 0xfU)))) 
                                       | (((IData)(vlSelf->top__DOT___1690_) 
                                           << 0xcU) 
                                          | ((0x800U 
                                              & (vlSelf->top__DOT___3841_[1U] 
                                                 >> 0xfU)) 
                                             | ((0x7c0U 
                                                 & ((IData)(
                                                            (0xffffffffULL 
                                                             & (((((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___3014_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 0x17U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3652_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 0xaU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3038_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 8U)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3215_) 
                                                                                << 8U) 
                                                                                | ((0xf0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4132_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2731_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0489_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0119_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1071_))))))))))))))) 
                                                                   << 9U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0147_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0493_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0450_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0942_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0485_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0582_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0723_)))))))))))) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                ((0xe0000000U 
                                                                                & (vlSelf->top__DOT___3879_[1U] 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1947_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___3388_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7800000U 
                                                                                & (vlSelf->top__DOT___3879_[1U] 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2482_) 
                                                                                << 0x16U) 
                                                                                | ((0x3fe000U 
                                                                                & (vlSelf->top__DOT___3879_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2947_) 
                                                                                << 0xcU) 
                                                                                | ((0xffcU 
                                                                                & (vlSelf->top__DOT___3879_[0U] 
                                                                                >> 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3480_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___2042_)))))))))))) 
                                                                   << 9U) 
                                                                  | (QData)((IData)(
                                                                                (0x1ffU 
                                                                                & vlSelf->top__DOT___3879_[0U]))))) 
                                                                >> 9U))) 
                                                    << 6U)) 
                                                | (((IData)(vlSelf->top__DOT___0251_) 
                                                    << 5U) 
                                                   | (0x10U 
                                                      & ((~ (IData)(vlSelf->top__DOT___1322_)) 
                                                         << 4U))))))))));
    vlSelf->top__DOT___1333_ = (1U & ((((0x400U & ((IData)(vlSelf->top__DOT___4774_) 
                                                   << 3U)) 
                                        | ((0x200U 
                                            & (vlSelf->top__DOT___3841_[1U] 
                                               >> 9U)) 
                                           | ((0x100U 
                                               & ((IData)(vlSelf->top__DOT___4774_) 
                                                  << 3U)) 
                                              | ((0xf0U 
                                                  & (vlSelf->top__DOT___3841_[1U] 
                                                     >> 9U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelf->top__DOT___4774_) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelf->top__DOT___0441_) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->top__DOT___0102_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___0997_)))))))) 
                                       + (((IData)(vlSelf->top__DOT___1762_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___1460_))) 
                                      >> 1U));
    vlSelf->top__DOT___2741_ = (1U & (IData)((1ULL 
                                              & ((((0x7fffffffffc0ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->top__DOT___3842_[1U])) 
                                                        << 0x20U) 
                                                       | (0xffffffffffffffc0ULL 
                                                          & (QData)((IData)(
                                                                            vlSelf->top__DOT___3842_[0U]))))) 
                                                   | (QData)((IData)(
                                                                     ((0x20U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 3U)) 
                                                                          << 5U)) 
                                                                      | ((0x1cU 
                                                                          & vlSelf->top__DOT___3842_[0U]) 
                                                                         | (((IData)(vlSelf->top__DOT___0905_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___1856_))))))) 
                                                  + 
                                                  ((((QData)((IData)(
                                                                     (0xffU 
                                                                      & ((0x1000U 
                                                                          & ((IData)(vlSelf->top__DOT___4774_) 
                                                                             << 5U)) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->top__DOT___3841_[1U] 
                                                                                >> 7U)) 
                                                                            | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 5U)) 
                                                                               | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3841_[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1909_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1006_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1339_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0903_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0849_))))))))))))) 
                                                     << 0x27U) 
                                                    | ((QData)((IData)(
                                                                       (((IData)(vlSelf->top__DOT___0826_) 
                                                                         << 0x1fU) 
                                                                        | ((0x40000000U 
                                                                            & ((IData)(vlSelf->top__DOT___7067_) 
                                                                               << 0x1cU)) 
                                                                           | ((0x20000000U 
                                                                               & ((IData)(vlSelf->top__DOT___7067_) 
                                                                                << 0x1cU)) 
                                                                              | ((0x10000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7067_) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2590_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___2582_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0635_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___1212_) 
                                                                                << 0x16U) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0x14U)) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3689_) 
                                                                                << 0x12U) 
                                                                                | ((0x3e000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2091_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___3242_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xaU)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0727_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1055_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2137_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1722_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0495_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0607_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 1U))))))))))))))))))))))))))) 
                                                       << 7U)) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___2935_) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT___2535_) 
                                                                          << 5U) 
                                                                         | (((IData)(vlSelf->top__DOT___0503_) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSelf->top__DOT___0861_) 
                                                                                << 3U) 
                                                                               | ((4U 
                                                                                & vlSelf->top__DOT___3841_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2098_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0842_))))))))))) 
                                                 >> 0x2eU))));
    vlSelf->top__DOT___1332_ = ((IData)(vlSelf->top__DOT___1333_) 
                                & (IData)(vlSelf->top__DOT___1266_));
    __Vtemp_3[0U] = (((IData)((((QData)((IData)((1U 
                                                 & ((IData)(vlSelf->top__DOT___7180_) 
                                                    >> 9U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0xfU 
                                                               & (vlSelf->top__DOT___3842_[2U] 
                                                                  >> 1U)))) 
                                              << 0x3bU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->top__DOT___7180_) 
                                                                     >> 4U)))) 
                                                 << 0x3aU) 
                                                | (((QData)((IData)(
                                                                    (vlSelf->top__DOT___3842_[1U] 
                                                                     >> 0x1aU))) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 0x37U))))) 
                                                       << 0x33U) 
                                                      | (((QData)((IData)(
                                                                          (0x7fU 
                                                                           & (vlSelf->top__DOT___3842_[1U] 
                                                                              >> 0x12U)))) 
                                                          << 0x2cU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 0x2fU))))) 
                                                             << 0x2bU) 
                                                            | (0x7ffffffffffULL 
                                                               & (((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[1U])) 
                                                                   << 0x1aU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[0U])) 
                                                                     >> 6U))))))))))) 
                      << 6U) | ((0x20U & ((IData)((vlSelf->top__DOT___7071_ 
                                                   >> 3U)) 
                                          << 5U)) | 
                                ((0x1cU & vlSelf->top__DOT___3842_[0U]) 
                                 | (((IData)(vlSelf->top__DOT___0905_) 
                                     << 1U) | (IData)(vlSelf->top__DOT___1856_)))));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)((1U 
                                                 & ((IData)(vlSelf->top__DOT___7180_) 
                                                    >> 9U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0xfU 
                                                               & (vlSelf->top__DOT___3842_[2U] 
                                                                  >> 1U)))) 
                                              << 0x3bU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->top__DOT___7180_) 
                                                                     >> 4U)))) 
                                                 << 0x3aU) 
                                                | (((QData)((IData)(
                                                                    (vlSelf->top__DOT___3842_[1U] 
                                                                     >> 0x1aU))) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 0x37U))))) 
                                                       << 0x33U) 
                                                      | (((QData)((IData)(
                                                                          (0x7fU 
                                                                           & (vlSelf->top__DOT___3842_[1U] 
                                                                              >> 0x12U)))) 
                                                          << 0x2cU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 0x2fU))))) 
                                                             << 0x2bU) 
                                                            | (0x7ffffffffffULL 
                                                               & (((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[1U])) 
                                                                   << 0x1aU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[0U])) 
                                                                     >> 6U))))))))))) 
                      >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->top__DOT___7180_) 
                                                                  >> 9U)))) 
                                              << 0x3fU) 
                                             | (((QData)((IData)(
                                                                 (0xfU 
                                                                  & (vlSelf->top__DOT___3842_[2U] 
                                                                     >> 1U)))) 
                                                 << 0x3bU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->top__DOT___7180_) 
                                                                        >> 4U)))) 
                                                    << 0x3aU) 
                                                   | (((QData)((IData)(
                                                                       (vlSelf->top__DOT___3842_[1U] 
                                                                        >> 0x1aU))) 
                                                       << 0x34U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 0x37U))))) 
                                                          << 0x33U) 
                                                         | (((QData)((IData)(
                                                                             (0x7fU 
                                                                              & (vlSelf->top__DOT___3842_[1U] 
                                                                                >> 0x12U)))) 
                                                             << 0x2cU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 0x2fU))))) 
                                                                << 0x2bU) 
                                                               | (0x7ffffffffffULL 
                                                                  & (((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[1U])) 
                                                                      << 0x1aU) 
                                                                     | ((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[0U])) 
                                                                        >> 6U)))))))))) 
                                            >> 0x20U)) 
                                   << 6U));
    __Vtemp_3[2U] = ((IData)(((((QData)((IData)((1U 
                                                 & ((IData)(vlSelf->top__DOT___7180_) 
                                                    >> 9U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0xfU 
                                                               & (vlSelf->top__DOT___3842_[2U] 
                                                                  >> 1U)))) 
                                              << 0x3bU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->top__DOT___7180_) 
                                                                     >> 4U)))) 
                                                 << 0x3aU) 
                                                | (((QData)((IData)(
                                                                    (vlSelf->top__DOT___3842_[1U] 
                                                                     >> 0x1aU))) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 0x37U))))) 
                                                       << 0x33U) 
                                                      | (((QData)((IData)(
                                                                          (0x7fU 
                                                                           & (vlSelf->top__DOT___3842_[1U] 
                                                                              >> 0x12U)))) 
                                                          << 0x2cU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 0x2fU))))) 
                                                             << 0x2bU) 
                                                            | (0x7ffffffffffULL 
                                                               & (((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[1U])) 
                                                                   << 0x1aU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->top__DOT___3842_[0U])) 
                                                                     >> 6U)))))))))) 
                              >> 0x20U)) >> 0x1aU);
    __Vtemp_4[0U] = __Vtemp_3[0U];
    __Vtemp_4[1U] = __Vtemp_3[1U];
    __Vtemp_4[2U] = ((0x40U & vlSelf->top__DOT___3842_[2U]) 
                     | __Vtemp_3[2U]);
    __Vtemp_5[0U] = (((IData)((((QData)((IData)(((0xffe00000U 
                                                  & ((vlSelf->top__DOT___3841_[2U] 
                                                      << 0x19U) 
                                                     | (0x1e00000U 
                                                        & (vlSelf->top__DOT___3841_[1U] 
                                                           >> 7U)))) 
                                                 | (((IData)(vlSelf->top__DOT___1690_) 
                                                     << 0x14U) 
                                                    | ((0x80000U 
                                                        & (vlSelf->top__DOT___3841_[1U] 
                                                           >> 7U)) 
                                                       | (((IData)(vlSelf->top__DOT___0116_) 
                                                           << 0x12U) 
                                                          | ((0x20000U 
                                                              & ((IData)(vlSelf->top__DOT___4774_) 
                                                                 << 6U)) 
                                                             | ((0x18000U 
                                                                 & (vlSelf->top__DOT___3841_[1U] 
                                                                    >> 7U)) 
                                                                | ((0x4000U 
                                                                    & ((IData)(vlSelf->top__DOT___4774_) 
                                                                       << 6U)) 
                                                                   | ((0x1000U 
                                                                       & ((IData)(vlSelf->top__DOT___4774_) 
                                                                          << 5U)) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->top__DOT___3841_[1U] 
                                                                             >> 7U)) 
                                                                         | ((0x400U 
                                                                             & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 5U)) 
                                                                            | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3841_[1U] 
                                                                                >> 7U)) 
                                                                               | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1909_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1006_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1339_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0903_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0849_))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___0826_) 
                                                              << 0x1fU) 
                                                             | ((0x40000000U 
                                                                 & ((IData)(vlSelf->top__DOT___7067_) 
                                                                    << 0x1cU)) 
                                                                | ((0x20000000U 
                                                                    & ((IData)(vlSelf->top__DOT___7067_) 
                                                                       << 0x1cU)) 
                                                                   | ((0x10000000U 
                                                                       & ((IData)(vlSelf->top__DOT___7067_) 
                                                                          << 0x1cU)) 
                                                                      | (((IData)(vlSelf->top__DOT___2590_) 
                                                                          << 0x1bU) 
                                                                         | (((IData)(vlSelf->top__DOT___2582_) 
                                                                             << 0x1aU) 
                                                                            | (((IData)(vlSelf->top__DOT___0635_) 
                                                                                << 0x19U) 
                                                                               | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___1212_) 
                                                                                << 0x16U) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0x14U)) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3689_) 
                                                                                << 0x12U) 
                                                                                | ((0x3e000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2091_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___3242_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xaU)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0727_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1055_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2137_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1722_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0495_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0607_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 1U))))))))))))))))))))))))))))) 
                      << 7U) | (((IData)(vlSelf->top__DOT___2935_) 
                                 << 6U) | (((IData)(vlSelf->top__DOT___2535_) 
                                            << 5U) 
                                           | (((IData)(vlSelf->top__DOT___0503_) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top__DOT___0861_) 
                                                  << 3U) 
                                                 | ((4U 
                                                     & vlSelf->top__DOT___3841_[0U]) 
                                                    | (((IData)(vlSelf->top__DOT___2098_) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT___0842_))))))));
    __Vtemp_5[1U] = (((IData)((((QData)((IData)(((0xffe00000U 
                                                  & ((vlSelf->top__DOT___3841_[2U] 
                                                      << 0x19U) 
                                                     | (0x1e00000U 
                                                        & (vlSelf->top__DOT___3841_[1U] 
                                                           >> 7U)))) 
                                                 | (((IData)(vlSelf->top__DOT___1690_) 
                                                     << 0x14U) 
                                                    | ((0x80000U 
                                                        & (vlSelf->top__DOT___3841_[1U] 
                                                           >> 7U)) 
                                                       | (((IData)(vlSelf->top__DOT___0116_) 
                                                           << 0x12U) 
                                                          | ((0x20000U 
                                                              & ((IData)(vlSelf->top__DOT___4774_) 
                                                                 << 6U)) 
                                                             | ((0x18000U 
                                                                 & (vlSelf->top__DOT___3841_[1U] 
                                                                    >> 7U)) 
                                                                | ((0x4000U 
                                                                    & ((IData)(vlSelf->top__DOT___4774_) 
                                                                       << 6U)) 
                                                                   | ((0x1000U 
                                                                       & ((IData)(vlSelf->top__DOT___4774_) 
                                                                          << 5U)) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->top__DOT___3841_[1U] 
                                                                             >> 7U)) 
                                                                         | ((0x400U 
                                                                             & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 5U)) 
                                                                            | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3841_[1U] 
                                                                                >> 7U)) 
                                                                               | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1909_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1006_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1339_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0903_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0849_))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___0826_) 
                                                              << 0x1fU) 
                                                             | ((0x40000000U 
                                                                 & ((IData)(vlSelf->top__DOT___7067_) 
                                                                    << 0x1cU)) 
                                                                | ((0x20000000U 
                                                                    & ((IData)(vlSelf->top__DOT___7067_) 
                                                                       << 0x1cU)) 
                                                                   | ((0x10000000U 
                                                                       & ((IData)(vlSelf->top__DOT___7067_) 
                                                                          << 0x1cU)) 
                                                                      | (((IData)(vlSelf->top__DOT___2590_) 
                                                                          << 0x1bU) 
                                                                         | (((IData)(vlSelf->top__DOT___2582_) 
                                                                             << 0x1aU) 
                                                                            | (((IData)(vlSelf->top__DOT___0635_) 
                                                                                << 0x19U) 
                                                                               | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___1212_) 
                                                                                << 0x16U) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0x14U)) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3689_) 
                                                                                << 0x12U) 
                                                                                | ((0x3e000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2091_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___3242_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xaU)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0727_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1055_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2137_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1722_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0495_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0607_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 1U))))))))))))))))))))))))))))) 
                      >> 0x19U) | ((IData)(((((QData)((IData)(
                                                              ((0xffe00000U 
                                                                & ((vlSelf->top__DOT___3841_[2U] 
                                                                    << 0x19U) 
                                                                   | (0x1e00000U 
                                                                      & (vlSelf->top__DOT___3841_[1U] 
                                                                         >> 7U)))) 
                                                               | (((IData)(vlSelf->top__DOT___1690_) 
                                                                   << 0x14U) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->top__DOT___3841_[1U] 
                                                                         >> 7U)) 
                                                                     | (((IData)(vlSelf->top__DOT___0116_) 
                                                                         << 0x12U) 
                                                                        | ((0x20000U 
                                                                            & ((IData)(vlSelf->top__DOT___4774_) 
                                                                               << 6U)) 
                                                                           | ((0x18000U 
                                                                               & (vlSelf->top__DOT___3841_[1U] 
                                                                                >> 7U)) 
                                                                              | ((0x4000U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 6U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3841_[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 5U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3841_[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1909_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1006_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1339_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0903_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0849_))))))))))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0826_) 
                                                                 << 0x1fU) 
                                                                | ((0x40000000U 
                                                                    & ((IData)(vlSelf->top__DOT___7067_) 
                                                                       << 0x1cU)) 
                                                                   | ((0x20000000U 
                                                                       & ((IData)(vlSelf->top__DOT___7067_) 
                                                                          << 0x1cU)) 
                                                                      | ((0x10000000U 
                                                                          & ((IData)(vlSelf->top__DOT___7067_) 
                                                                             << 0x1cU)) 
                                                                         | (((IData)(vlSelf->top__DOT___2590_) 
                                                                             << 0x1bU) 
                                                                            | (((IData)(vlSelf->top__DOT___2582_) 
                                                                                << 0x1aU) 
                                                                               | (((IData)(vlSelf->top__DOT___0635_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___1212_) 
                                                                                << 0x16U) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0x14U)) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3689_) 
                                                                                << 0x12U) 
                                                                                | ((0x3e000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2091_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___3242_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xaU)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0727_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1055_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2137_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1722_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0495_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0607_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 1U)))))))))))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 7U));
    __Vtemp_5[2U] = ((IData)(((((QData)((IData)(((0xffe00000U 
                                                  & ((vlSelf->top__DOT___3841_[2U] 
                                                      << 0x19U) 
                                                     | (0x1e00000U 
                                                        & (vlSelf->top__DOT___3841_[1U] 
                                                           >> 7U)))) 
                                                 | (((IData)(vlSelf->top__DOT___1690_) 
                                                     << 0x14U) 
                                                    | ((0x80000U 
                                                        & (vlSelf->top__DOT___3841_[1U] 
                                                           >> 7U)) 
                                                       | (((IData)(vlSelf->top__DOT___0116_) 
                                                           << 0x12U) 
                                                          | ((0x20000U 
                                                              & ((IData)(vlSelf->top__DOT___4774_) 
                                                                 << 6U)) 
                                                             | ((0x18000U 
                                                                 & (vlSelf->top__DOT___3841_[1U] 
                                                                    >> 7U)) 
                                                                | ((0x4000U 
                                                                    & ((IData)(vlSelf->top__DOT___4774_) 
                                                                       << 6U)) 
                                                                   | ((0x1000U 
                                                                       & ((IData)(vlSelf->top__DOT___4774_) 
                                                                          << 5U)) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->top__DOT___3841_[1U] 
                                                                             >> 7U)) 
                                                                         | ((0x400U 
                                                                             & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 5U)) 
                                                                            | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3841_[1U] 
                                                                                >> 7U)) 
                                                                               | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1909_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1006_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1339_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0903_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0849_))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___0826_) 
                                                              << 0x1fU) 
                                                             | ((0x40000000U 
                                                                 & ((IData)(vlSelf->top__DOT___7067_) 
                                                                    << 0x1cU)) 
                                                                | ((0x20000000U 
                                                                    & ((IData)(vlSelf->top__DOT___7067_) 
                                                                       << 0x1cU)) 
                                                                   | ((0x10000000U 
                                                                       & ((IData)(vlSelf->top__DOT___7067_) 
                                                                          << 0x1cU)) 
                                                                      | (((IData)(vlSelf->top__DOT___2590_) 
                                                                          << 0x1bU) 
                                                                         | (((IData)(vlSelf->top__DOT___2582_) 
                                                                             << 0x1aU) 
                                                                            | (((IData)(vlSelf->top__DOT___0635_) 
                                                                                << 0x19U) 
                                                                               | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___1212_) 
                                                                                << 0x16U) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0x14U)) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3689_) 
                                                                                << 0x12U) 
                                                                                | ((0x3e000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2091_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___3242_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xaU)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0727_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1055_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2137_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1722_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0495_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0607_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 1U)))))))))))))))))))))))))))) 
                              >> 0x20U)) >> 0x19U);
    VL_ADD_W(3, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    __Vtemp_8[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___2741_)) 
                              << 0x2eU) | (0x3fffffffffffULL 
                                           & (((0x3fffffffffc0ULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->top__DOT___3842_[1U])) 
                                                    << 0x20U) 
                                                   | (0xffffffffffffffc0ULL 
                                                      & (QData)((IData)(
                                                                        vlSelf->top__DOT___3842_[0U]))))) 
                                               | (QData)((IData)(
                                                                 ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___7071_ 
                                                                               >> 3U)) 
                                                                      << 5U)) 
                                                                  | ((0x1cU 
                                                                      & vlSelf->top__DOT___3842_[0U]) 
                                                                     | (((IData)(vlSelf->top__DOT___0905_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___1856_))))))) 
                                              + ((((QData)((IData)(
                                                                   (0x7fU 
                                                                    & ((0x1000U 
                                                                        & ((IData)(vlSelf->top__DOT___4774_) 
                                                                           << 5U)) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->top__DOT___3841_[1U] 
                                                                              >> 7U)) 
                                                                          | ((0x400U 
                                                                              & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 5U)) 
                                                                             | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3841_[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1909_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1006_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1339_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0903_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0849_))))))))))))) 
                                                   << 0x27U) 
                                                  | ((QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0826_) 
                                                                       << 0x1fU) 
                                                                      | ((0x40000000U 
                                                                          & ((IData)(vlSelf->top__DOT___7067_) 
                                                                             << 0x1cU)) 
                                                                         | ((0x20000000U 
                                                                             & ((IData)(vlSelf->top__DOT___7067_) 
                                                                                << 0x1cU)) 
                                                                            | ((0x10000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7067_) 
                                                                                << 0x1cU)) 
                                                                               | (((IData)(vlSelf->top__DOT___2590_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___2582_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0635_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___1212_) 
                                                                                << 0x16U) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0x14U)) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3689_) 
                                                                                << 0x12U) 
                                                                                | ((0x3e000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2091_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___3242_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xaU)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0727_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1055_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2137_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1722_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0495_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0607_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 1U))))))))))))))))))))))))))) 
                                                     << 7U)) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->top__DOT___2935_) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->top__DOT___2535_) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->top__DOT___0503_) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->top__DOT___0861_) 
                                                                              << 3U) 
                                                                             | ((4U 
                                                                                & vlSelf->top__DOT___3841_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2098_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0842_))))))))))))));
    __Vtemp_8[1U] = ((0xffff8000U & __Vtemp_6[1U]) 
                     | (IData)(((((QData)((IData)(vlSelf->top__DOT___2741_)) 
                                  << 0x2eU) | (0x3fffffffffffULL 
                                               & (((0x3fffffffffc0ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->top__DOT___3842_[1U])) 
                                                        << 0x20U) 
                                                       | (0xffffffffffffffc0ULL 
                                                          & (QData)((IData)(
                                                                            vlSelf->top__DOT___3842_[0U]))))) 
                                                   | (QData)((IData)(
                                                                     ((0x20U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___7071_ 
                                                                                >> 3U)) 
                                                                          << 5U)) 
                                                                      | ((0x1cU 
                                                                          & vlSelf->top__DOT___3842_[0U]) 
                                                                         | (((IData)(vlSelf->top__DOT___0905_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___1856_))))))) 
                                                  + 
                                                  ((((QData)((IData)(
                                                                     (0x7fU 
                                                                      & ((0x1000U 
                                                                          & ((IData)(vlSelf->top__DOT___4774_) 
                                                                             << 5U)) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->top__DOT___3841_[1U] 
                                                                                >> 7U)) 
                                                                            | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 5U)) 
                                                                               | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3841_[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___4774_) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1909_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1006_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1339_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0903_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0849_))))))))))))) 
                                                     << 0x27U) 
                                                    | ((QData)((IData)(
                                                                       (((IData)(vlSelf->top__DOT___0826_) 
                                                                         << 0x1fU) 
                                                                        | ((0x40000000U 
                                                                            & ((IData)(vlSelf->top__DOT___7067_) 
                                                                               << 0x1cU)) 
                                                                           | ((0x20000000U 
                                                                               & ((IData)(vlSelf->top__DOT___7067_) 
                                                                                << 0x1cU)) 
                                                                              | ((0x10000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7067_) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2590_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___2582_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0635_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___1212_) 
                                                                                << 0x16U) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7034_) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1655_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0x14U)) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3689_) 
                                                                                << 0x12U) 
                                                                                | ((0x3e000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2091_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___3242_) 
                                                                                << 0xbU) 
                                                                                | ((0x600U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3814_ 
                                                                                >> 0xaU)) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0727_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1055_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___2137_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0785_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1722_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0495_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0607_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 1U))))))))))))))))))))))))))) 
                                                       << 7U)) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___2935_) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT___2535_) 
                                                                          << 5U) 
                                                                         | (((IData)(vlSelf->top__DOT___0503_) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSelf->top__DOT___0861_) 
                                                                                << 3U) 
                                                                               | ((4U 
                                                                                & vlSelf->top__DOT___3841_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2098_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0842_))))))))))))) 
                                >> 0x20U)));
    vlSelf->top__DOT___3840_[0U] = __Vtemp_8[0U];
    vlSelf->top__DOT___3840_[1U] = __Vtemp_8[1U];
    vlSelf->top__DOT___3840_[2U] = (0x7fU & __Vtemp_6[2U]);
    vlSelf->top__DOT___4291_[0U] = ((0xfffeffffU & 
                                     vlSelf->top__DOT___4291_[0U]) 
                                    | ((IData)(vlSelf->top__DOT___1332_) 
                                       << 0x10U));
}
