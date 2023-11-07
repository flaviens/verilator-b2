// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__162(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__162\n"); );
    // Body
    vlSelf->top__DOT___3686_ = ((IData)(vlSelf->top__DOT___0320_)
                                 ? ((4U & vlSelf->top__DOT___1981_) 
                                    | ((2U & ((IData)(vlSelf->top__DOT___3775_) 
                                              << 1U)) 
                                       | (IData)(vlSelf->top__DOT___0385_)))
                                 : 6U);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__163(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__163\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = (((IData)((((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT___3818_ 
                                                            >> 0x20U))))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              ((0xc0000000U 
                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                   << 0xfU)) 
                                                               | ((0x38000000U 
                                                                   & ((IData)(vlSelf->top__DOT___2005_) 
                                                                      << 0x13U)) 
                                                                  | ((0x4000000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x1aU)) 
                                                                         << 0x1aU)) 
                                                                     | ((0x3800000U 
                                                                         & ((IData)(vlSelf->top__DOT___2005_) 
                                                                            << 0x13U)) 
                                                                        | ((0x600000U 
                                                                            & (vlSelf->top__DOT___2048_[1U] 
                                                                               << 0xfU)) 
                                                                           | ((0x100000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                              | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | (0x3ffffU 
                                                                                & ((vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->top__DOT___2048_[0U] 
                                                                                >> 0x11U))))))))))))) 
                                              << 0x1fU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___1368_) 
                                                                 << 0x1eU) 
                                                                | (((IData)(vlSelf->top__DOT___1627_) 
                                                                    << 0x1dU) 
                                                                   | ((0x8000000U 
                                                                       & ((~ (IData)(vlSelf->top__DOT___0191_)) 
                                                                          << 0x1bU)) 
                                                                      | (((IData)(vlSelf->top__DOT___0193_) 
                                                                          << 0x1aU) 
                                                                         | (((IData)(vlSelf->top__DOT___1470_) 
                                                                             << 0x19U) 
                                                                            | (((IData)(vlSelf->top__DOT___0730_) 
                                                                                << 0x18U) 
                                                                               | (((IData)(vlSelf->top__DOT___0669_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3635_ 
                                                                                >> 0x39U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0868_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0436_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0241_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0283_) 
                                                                                << 0x12U) 
                                                                                | (0x3ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___2065_ 
                                                                                >> 0x28U)))))))))))))))))))) 
                      << 0xcU) | (IData)(((((QData)((IData)(vlSelf->top__DOT___1400_)) 
                                            << 0x2bU) 
                                           | (((QData)((IData)(
                                                               (0xfffU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___2065_ 
                                                                           >> 0x1bU))))) 
                                               << 0x1fU) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT___1430_) 
                                                                  << 0x1eU) 
                                                                 | ((0x3ffffff0U 
                                                                     & ((IData)(vlSelf->top__DOT___2065_) 
                                                                        << 4U)) 
                                                                    | (((IData)(vlSelf->top__DOT___0039_) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelf->top__DOT___0226_) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelf->top__DOT___0269_) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->top__DOT___0076_)))))))))) 
                                          >> 0x20U)));
    __Vtemp_1[2U] = (((IData)((((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT___3818_ 
                                                            >> 0x20U))))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              ((0xc0000000U 
                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                   << 0xfU)) 
                                                               | ((0x38000000U 
                                                                   & ((IData)(vlSelf->top__DOT___2005_) 
                                                                      << 0x13U)) 
                                                                  | ((0x4000000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x1aU)) 
                                                                         << 0x1aU)) 
                                                                     | ((0x3800000U 
                                                                         & ((IData)(vlSelf->top__DOT___2005_) 
                                                                            << 0x13U)) 
                                                                        | ((0x600000U 
                                                                            & (vlSelf->top__DOT___2048_[1U] 
                                                                               << 0xfU)) 
                                                                           | ((0x100000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                              | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | (0x3ffffU 
                                                                                & ((vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->top__DOT___2048_[0U] 
                                                                                >> 0x11U))))))))))))) 
                                              << 0x1fU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___1368_) 
                                                                 << 0x1eU) 
                                                                | (((IData)(vlSelf->top__DOT___1627_) 
                                                                    << 0x1dU) 
                                                                   | ((0x8000000U 
                                                                       & ((~ (IData)(vlSelf->top__DOT___0191_)) 
                                                                          << 0x1bU)) 
                                                                      | (((IData)(vlSelf->top__DOT___0193_) 
                                                                          << 0x1aU) 
                                                                         | (((IData)(vlSelf->top__DOT___1470_) 
                                                                             << 0x19U) 
                                                                            | (((IData)(vlSelf->top__DOT___0730_) 
                                                                                << 0x18U) 
                                                                               | (((IData)(vlSelf->top__DOT___0669_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3635_ 
                                                                                >> 0x39U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0868_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0436_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0241_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0283_) 
                                                                                << 0x12U) 
                                                                                | (0x3ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___2065_ 
                                                                                >> 0x28U)))))))))))))))))))) 
                      >> 0x14U) | ((IData)(((((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT___3818_ 
                                                                          >> 0x20U))))) 
                                              << 0x3fU) 
                                             | (((QData)((IData)(
                                                                 ((0xc0000000U 
                                                                   & (vlSelf->top__DOT___2048_[1U] 
                                                                      << 0xfU)) 
                                                                  | ((0x38000000U 
                                                                      & ((IData)(vlSelf->top__DOT___2005_) 
                                                                         << 0x13U)) 
                                                                     | ((0x4000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x1aU)) 
                                                                            << 0x1aU)) 
                                                                        | ((0x3800000U 
                                                                            & ((IData)(vlSelf->top__DOT___2005_) 
                                                                               << 0x13U)) 
                                                                           | ((0x600000U 
                                                                               & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                              | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | (0x3ffffU 
                                                                                & ((vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->top__DOT___2048_[0U] 
                                                                                >> 0x11U))))))))))))) 
                                                 << 0x1fU) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->top__DOT___1368_) 
                                                                    << 0x1eU) 
                                                                   | (((IData)(vlSelf->top__DOT___1627_) 
                                                                       << 0x1dU) 
                                                                      | ((0x8000000U 
                                                                          & ((~ (IData)(vlSelf->top__DOT___0191_)) 
                                                                             << 0x1bU)) 
                                                                         | (((IData)(vlSelf->top__DOT___0193_) 
                                                                             << 0x1aU) 
                                                                            | (((IData)(vlSelf->top__DOT___1470_) 
                                                                                << 0x19U) 
                                                                               | (((IData)(vlSelf->top__DOT___0730_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0669_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3635_ 
                                                                                >> 0x39U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0868_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0436_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0241_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0283_) 
                                                                                << 0x12U) 
                                                                                | (0x3ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___2065_ 
                                                                                >> 0x28U))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 0xcU));
    __Vtemp_1[3U] = ((IData)(((((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT___3818_ 
                                                            >> 0x20U))))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              ((0xc0000000U 
                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                   << 0xfU)) 
                                                               | ((0x38000000U 
                                                                   & ((IData)(vlSelf->top__DOT___2005_) 
                                                                      << 0x13U)) 
                                                                  | ((0x4000000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x1aU)) 
                                                                         << 0x1aU)) 
                                                                     | ((0x3800000U 
                                                                         & ((IData)(vlSelf->top__DOT___2005_) 
                                                                            << 0x13U)) 
                                                                        | ((0x600000U 
                                                                            & (vlSelf->top__DOT___2048_[1U] 
                                                                               << 0xfU)) 
                                                                           | ((0x100000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                              | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | (0x3ffffU 
                                                                                & ((vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->top__DOT___2048_[0U] 
                                                                                >> 0x11U))))))))))))) 
                                              << 0x1fU) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___1368_) 
                                                                 << 0x1eU) 
                                                                | (((IData)(vlSelf->top__DOT___1627_) 
                                                                    << 0x1dU) 
                                                                   | ((0x8000000U 
                                                                       & ((~ (IData)(vlSelf->top__DOT___0191_)) 
                                                                          << 0x1bU)) 
                                                                      | (((IData)(vlSelf->top__DOT___0193_) 
                                                                          << 0x1aU) 
                                                                         | (((IData)(vlSelf->top__DOT___1470_) 
                                                                             << 0x19U) 
                                                                            | (((IData)(vlSelf->top__DOT___0730_) 
                                                                                << 0x18U) 
                                                                               | (((IData)(vlSelf->top__DOT___0669_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3635_ 
                                                                                >> 0x39U)) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0868_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0436_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0241_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0283_) 
                                                                                << 0x12U) 
                                                                                | (0x3ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___2065_ 
                                                                                >> 0x28U))))))))))))))))))) 
                              >> 0x20U)) >> 0x14U);
    vlSelf->top__DOT___3717_[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___1400_)) 
                                             << 0x2bU) 
                                            | (((QData)((IData)(
                                                                (0xfffU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___2065_ 
                                                                            >> 0x1bU))))) 
                                                << 0x1fU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___1430_) 
                                                                   << 0x1eU) 
                                                                  | ((0x3ffffff0U 
                                                                      & ((IData)(vlSelf->top__DOT___2065_) 
                                                                         << 4U)) 
                                                                     | (((IData)(vlSelf->top__DOT___0039_) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSelf->top__DOT___0226_) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSelf->top__DOT___0269_) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelf->top__DOT___0076_)))))))))));
    vlSelf->top__DOT___3717_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___3717_[2U] = __Vtemp_1[2U];
    vlSelf->top__DOT___3717_[3U] = (((IData)(vlSelf->top__DOT___0133_) 
                                     << 0x18U) | (((IData)(vlSelf->top__DOT___0283_) 
                                                   << 0x17U) 
                                                  | ((0x3c0000U 
                                                      & ((IData)(vlSelf->top__DOT___1994_) 
                                                         << 0xcU)) 
                                                     | ((0x20000U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___3818_ 
                                                                     >> 0x26U)) 
                                                            << 0x11U)) 
                                                        | ((0x18000U 
                                                            & ((IData)(vlSelf->top__DOT___1994_) 
                                                               << 0xcU)) 
                                                           | ((0x4000U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT___3818_ 
                                                                           >> 0x23U)) 
                                                                  << 0xeU)) 
                                                              | ((0x3000U 
                                                                  & (vlSelf->top__DOT___2048_[1U] 
                                                                     >> 6U)) 
                                                                 | __Vtemp_1[3U])))))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__164(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__164\n"); );
    // Body
    vlSelf->top__DOT___3768_ = ((IData)(vlSelf->top__DOT___0408_)
                                 ? 0x1ffffffffccb8119ULL
                                 : (((QData)((IData)(
                                                     (((IData)(
                                                               (vlSelf->top__DOT___2165_ 
                                                                >> 0xbU)) 
                                                       << 0x1fU) 
                                                      | (((IData)(vlSelf->top__DOT___0816_) 
                                                          << 0x1eU) 
                                                         | (((IData)(vlSelf->top__DOT___0157_) 
                                                             << 0x1dU) 
                                                            | (((IData)(vlSelf->top__DOT___1831_) 
                                                                << 0x1cU) 
                                                               | (((IData)(vlSelf->top__DOT___0166_) 
                                                                   << 0x1bU) 
                                                                  | (((IData)(vlSelf->top__DOT___1424_) 
                                                                      << 0x1aU) 
                                                                     | (((IData)(vlSelf->top__DOT___1399_) 
                                                                         << 0x19U) 
                                                                        | ((0x1c00000U 
                                                                            & vlSelf->top__DOT___2262_[1U]) 
                                                                           | ((0x200000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x25U)) 
                                                                                << 0x15U)) 
                                                                              | ((0x100000U 
                                                                                & vlSelf->top__DOT___2262_[1U]) 
                                                                                | ((0xf0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x28U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0320_) 
                                                                                << 0xfU) 
                                                                                | ((0x7c00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x22U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x19U)) 
                                                                                << 9U)) 
                                                                                | ((0x1f8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x1bU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x12U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x19U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x10U)))))))))))))))))))))) 
                                     << 0x1dU) | (QData)((IData)(
                                                                 ((0x10000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___3799_ 
                                                                               >> 0xfU)) 
                                                                      << 0x1cU)) 
                                                                  | ((0x8000000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xeU)) 
                                                                         << 0x1bU)) 
                                                                     | ((0x6000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x1fU)) 
                                                                            << 0x19U)) 
                                                                        | (((IData)(vlSelf->top__DOT___0152_) 
                                                                            << 0x18U) 
                                                                           | ((0xfc0000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x18U)) 
                                                                                << 0x12U)) 
                                                                              | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 4U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 3U)) 
                                                                                << 0x10U)) 
                                                                                | ((0xe000U 
                                                                                & (vlSelf->top__DOT___2114_ 
                                                                                >> 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xbU) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0229_) 
                                                                                << 7U) 
                                                                                | ((0x60U 
                                                                                & (vlSelf->top__DOT___1935_[0U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___3673_) 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___1935_[0U] 
                                                                                >> 0xcU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->out_data[0x2aU] 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0321_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0175_))))))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__165(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__165\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0408_)) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelf->top__DOT___0191_))))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0xfU 
                                                                & (vlSelf->top__DOT___1956_ 
                                                                   >> 0xfU)))) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0506_)) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(
                                                                     (3U 
                                                                      & (vlSelf->top__DOT___1956_ 
                                                                         >> 0xcU)))) 
                                                     << 0x37U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0591_)) 
                                                        << 0x36U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___0795_)) 
                                                           << 0x35U) 
                                                          | (((QData)((IData)(
                                                                              (((IData)(vlSelf->top__DOT___0275_) 
                                                                                << 0x1fU) 
                                                                               | (((IData)(vlSelf->top__DOT___0887_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___0110_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___0334_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0926_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0674_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0610_) 
                                                                                << 0x19U) 
                                                                                | ((0x1800000U 
                                                                                & ((IData)(vlSelf->top__DOT___2067_) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0775_) 
                                                                                << 0x16U) 
                                                                                | ((0x380000U 
                                                                                & (vlSelf->top__DOT___2262_[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x25U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___2262_[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x1e000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x28U)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0320_) 
                                                                                << 0xcU) 
                                                                                | ((0xf80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x22U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x1bU))))))))))))))))))))) 
                                                              << 0x15U) 
                                                             | (QData)((IData)(
                                                                               ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x12U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x19U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x10U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xfU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xeU)) 
                                                                                << 0x10U)) 
                                                                                | ((0xc000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x1fU)) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 0xdU) 
                                                                                | ((0x1f80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 4U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 3U)) 
                                                                                << 5U)) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->top__DOT___2114_ 
                                                                                >> 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___1964_[2U] 
                                                                                >> 3U)))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSelf->top__DOT___0408_)) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelf->top__DOT___0191_))))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0xfU 
                                                                 & (vlSelf->top__DOT___1956_ 
                                                                    >> 0xfU)))) 
                                                << 0x3aU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0506_)) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(
                                                                      (3U 
                                                                       & (vlSelf->top__DOT___1956_ 
                                                                          >> 0xcU)))) 
                                                      << 0x37U) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___0591_)) 
                                                         << 0x36U) 
                                                        | (((QData)((IData)(vlSelf->top__DOT___0795_)) 
                                                            << 0x35U) 
                                                           | (((QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___0275_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0887_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___0110_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___0334_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0926_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0674_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0610_) 
                                                                                << 0x19U) 
                                                                                | ((0x1800000U 
                                                                                & ((IData)(vlSelf->top__DOT___2067_) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0775_) 
                                                                                << 0x16U) 
                                                                                | ((0x380000U 
                                                                                & (vlSelf->top__DOT___2262_[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x25U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___2262_[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x1e000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x28U)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0320_) 
                                                                                << 0xcU) 
                                                                                | ((0xf80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x22U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x1bU))))))))))))))))))))) 
                                                               << 0x15U) 
                                                              | (QData)((IData)(
                                                                                ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x12U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2025_ 
                                                                                >> 0x19U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0x10U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xfU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xeU)) 
                                                                                << 0x10U)) 
                                                                                | ((0xc000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x1fU)) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 0xdU) 
                                                                                | ((0x1f80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 4U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 3U)) 
                                                                                << 5U)) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->top__DOT___2114_ 
                                                                                >> 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___1964_[2U] 
                                                                                >> 3U)))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_1[2U] = (((IData)((vlSelf->top__DOT___3818_ 
                               >> 0x23U)) << 0x1fU) 
                     | ((0x60000000U & (vlSelf->top__DOT___2048_[1U] 
                                        << 0xbU)) | 
                        ((0x10000000U & ((IData)((vlSelf->top__DOT___3818_ 
                                                  >> 0x20U)) 
                                         << 0x1cU)) 
                         | ((0xc000000U & (vlSelf->top__DOT___2048_[1U] 
                                           << 0xbU)) 
                            | ((0x3800000U & ((IData)(vlSelf->top__DOT___2005_) 
                                              << 0xfU)) 
                               | ((0x400000U & ((IData)(
                                                        (vlSelf->top__DOT___3818_ 
                                                         >> 0x1aU)) 
                                                << 0x16U)) 
                                  | ((0x380000U & ((IData)(vlSelf->top__DOT___2005_) 
                                                   << 0xfU)) 
                                     | ((0x60000U & 
                                         (vlSelf->top__DOT___2048_[1U] 
                                          << 0xbU)) 
                                        | ((0x10000U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT___3818_ 
                                                        >> 0x14U)) 
                                               << 0x10U)) 
                                           | ((0x8000U 
                                               & (vlSelf->top__DOT___2048_[1U] 
                                                  << 0xbU)) 
                                              | ((0x4000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3818_ 
                                                              >> 0x12U)) 
                                                     << 0xeU)) 
                                                 | ((0x3f80U 
                                                     & ((vlSelf->top__DOT___2048_[1U] 
                                                         << 0xbU) 
                                                        | (0x780U 
                                                           & (vlSelf->top__DOT___2048_[0U] 
                                                              >> 0x15U)))) 
                                                    | (((IData)(vlSelf->top__DOT___0477_) 
                                                        << 6U) 
                                                       | (((IData)(vlSelf->top__DOT___0651_) 
                                                           << 5U) 
                                                          | (((IData)(vlSelf->top__DOT___0163_) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT___1203_) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelf->top__DOT___0522_) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSelf->top__DOT___1206_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___1113_)))))))))))))))))));
    if (vlSelf->top__DOT___1302_) {
        vlSelf->top__DOT___3653_[0U] = ((__Vtemp_1[0U] 
                                         << 0xeU) | 
                                        ((0x2000U & 
                                          ((IData)(vlSelf->top__DOT___3707_) 
                                           << 1U)) 
                                         | ((0x1000U 
                                             & ((IData)(vlSelf->top__DOT___1888_) 
                                                >> 1U)) 
                                            | ((0x800U 
                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                   << 1U)) 
                                               | ((0x400U 
                                                   & ((IData)(vlSelf->top__DOT___3707_) 
                                                      << 1U)) 
                                                  | ((0x3f0U 
                                                      & ((IData)(vlSelf->top__DOT___1888_) 
                                                         >> 1U)) 
                                                     | ((8U 
                                                         & ((IData)(vlSelf->top__DOT___3707_) 
                                                            << 1U)) 
                                                        | ((4U 
                                                            & (vlSelf->top__DOT___1964_[1U] 
                                                               >> 0x15U)) 
                                                           | ((2U 
                                                               & ((IData)(vlSelf->top__DOT___3707_) 
                                                                  << 1U)) 
                                                              | (IData)(vlSelf->top__DOT___1311_))))))))));
        vlSelf->top__DOT___3653_[1U] = ((__Vtemp_1[0U] 
                                         >> 0x12U) 
                                        | (__Vtemp_1[1U] 
                                           << 0xeU));
        vlSelf->top__DOT___3653_[2U] = ((__Vtemp_1[1U] 
                                         >> 0x12U) 
                                        | (__Vtemp_1[2U] 
                                           << 0xeU));
        vlSelf->top__DOT___3653_[3U] = (__Vtemp_1[2U] 
                                        >> 0x12U);
    } else {
        vlSelf->top__DOT___3653_[0U] = 0U;
        vlSelf->top__DOT___3653_[1U] = 0U;
        vlSelf->top__DOT___3653_[2U] = 0U;
        vlSelf->top__DOT___3653_[3U] = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__166(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__166\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((1U & 
                                               (vlSelf->top__DOT___3664_[1U] 
                                                >> 0xaU)))) 
                              << 0x2dU) | (((QData)((IData)(
                                                            (0xfffffU 
                                                             & ((vlSelf->top__DOT___2183_[1U] 
                                                                 << 3U) 
                                                                | (vlSelf->top__DOT___2183_[0U] 
                                                                   >> 0x1dU))))) 
                                            << 0x19U) 
                                           | (QData)((IData)(
                                                             ((0x1ffff00U 
                                                               & (vlSelf->top__DOT___2079_ 
                                                                  << 3U)) 
                                                              | (((IData)(vlSelf->top__DOT___0247_) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->top__DOT___1381_) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->top__DOT___0241_) 
                                                                        << 5U) 
                                                                       | ((0x10U 
                                                                           & ((IData)(vlSelf->top__DOT___3623_) 
                                                                              << 1U)) 
                                                                          | ((8U 
                                                                              & ((IData)(vlSelf->top__DOT___3623_) 
                                                                                << 1U)) 
                                                                             | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___1932_) 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0595_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0565_))))))))))))));
    __Vtemp_2[1U] = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelf->top__DOT___2183_[2U])) 
                                                   << 0xeU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT___2183_[1U])) 
                                                     >> 0x12U)))) 
                      << 0xeU) | (IData)(((((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT___3664_[1U] 
                                                                >> 0xaU)))) 
                                            << 0x2dU) 
                                           | (((QData)((IData)(
                                                               (0xfffffU 
                                                                & ((vlSelf->top__DOT___2183_[1U] 
                                                                    << 3U) 
                                                                   | (vlSelf->top__DOT___2183_[0U] 
                                                                      >> 0x1dU))))) 
                                               << 0x19U) 
                                              | (QData)((IData)(
                                                                ((0x1ffff00U 
                                                                  & (vlSelf->top__DOT___2079_ 
                                                                     << 3U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0247_) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->top__DOT___1381_) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->top__DOT___0241_) 
                                                                           << 5U) 
                                                                          | ((0x10U 
                                                                              & ((IData)(vlSelf->top__DOT___3623_) 
                                                                                << 1U)) 
                                                                             | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___3623_) 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___1932_) 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0595_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0565_))))))))))))) 
                                          >> 0x20U)));
    if (vlSelf->top__DOT___0191_) {
        vlSelf->top__DOT___3706_[0U] = 0U;
        vlSelf->top__DOT___3706_[1U] = 0U;
        vlSelf->top__DOT___3706_[2U] = 0U;
    } else {
        vlSelf->top__DOT___3706_[0U] = __Vtemp_2[0U];
        vlSelf->top__DOT___3706_[1U] = __Vtemp_2[1U];
        vlSelf->top__DOT___3706_[2U] = (((IData)((0x1fffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->top__DOT___2183_[2U])) 
                                                      << 0xeU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->top__DOT___2183_[1U])) 
                                                        >> 0x12U)))) 
                                         >> 0x12U) 
                                        | ((IData)(
                                                   ((0x1fffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->top__DOT___2183_[2U])) 
                                                         << 0xeU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT___2183_[1U])) 
                                                           >> 0x12U))) 
                                                    >> 0x20U)) 
                                           << 0xeU));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__167(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__167\n"); );
    // Body
    vlSelf->top__DOT___3823_ = (0x3fU & (vlSelf->top__DOT___2035_ 
                                         >> 6U));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__168(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__168\n"); );
    // Body
    vlSelf->top__DOT___3732_ = ((IData)(vlSelf->top__DOT___0232_)
                                 ? ((0x1c0U & (vlSelf->top__DOT___2170_[2U] 
                                               >> 0xaU)) 
                                    | ((0x30U & (vlSelf->top__DOT___1977_[0U] 
                                                 >> 0x14U)) 
                                       | (0xfU & (IData)(vlSelf->top__DOT___3704_))))
                                 : 0x43U);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    // Body
    vlSelf->top__DOT___0994_ = (1U & ((IData)(vlSelf->top__DOT___1790_) 
                                      ^ (IData)((vlSelf->top__DOT___3814_ 
                                                 >> 0xeU))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__169(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__169\n"); );
    // Body
    vlSelf->top__DOT___3748_ = ((IData)(vlSelf->top__DOT___0320_)
                                 ? (((IData)(vlSelf->top__DOT___0237_) 
                                     << 0x1fU) | (((IData)(vlSelf->top__DOT___0127_) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSelf->top__DOT___0304_) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->top__DOT___0320_) 
                                                         << 0x1bU) 
                                                        | (((IData)(vlSelf->top__DOT___0095_) 
                                                            << 0x1aU) 
                                                           | ((0x1000000U 
                                                               & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                  << 0x18U)) 
                                                              | (((IData)(vlSelf->top__DOT___0197_) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->top__DOT___1716_) 
                                                                     << 0x16U) 
                                                                    | ((0x200000U 
                                                                        & (vlSelf->top__DOT___1996_ 
                                                                           << 0x11U)) 
                                                                       | (((IData)(vlSelf->top__DOT___1365_) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->top__DOT___0154_) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->top__DOT___0690_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0237_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0106_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0287_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___1254_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0468_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___2006_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0404_) 
                                                                                << 7U) 
                                                                                | ((0x60U 
                                                                                & ((IData)(vlSelf->top__DOT___2006_) 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___1931_) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1308_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (~ (IData)(vlSelf->top__DOT___0320_))) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0306_))))))))))))))))))))))))))
                                 : 0xcf815a11U);
    vlSelf->top__DOT___1376_ = (1U & (vlSelf->top__DOT___3748_ 
                                      >> 0xcU));
    vlSelf->top__DOT___1911_ = ((0x1fU & (IData)(vlSelf->top__DOT___1911_)) 
                                | (0x7fc0U & (vlSelf->top__DOT___3748_ 
                                              >> 0xbU)));
    vlSelf->top__DOT___0477_ = (1U & (vlSelf->top__DOT___3748_ 
                                      >> 9U));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__170(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__170\n"); );
    // Body
    vlSelf->top__DOT___3738_ = ((0x100U & vlSelf->top__DOT___1951_[5U])
                                 ? ((0x800000U & (vlSelf->top__DOT___1975_[1U] 
                                                  << 1U)) 
                                    | (((IData)(vlSelf->top__DOT___1790_) 
                                        << 0x16U) | 
                                       (((IData)(vlSelf->top__DOT___1339_) 
                                         << 0x15U) 
                                        | ((0x100000U 
                                            & ((IData)(vlSelf->top__DOT___3662_) 
                                               << 0x13U)) 
                                           | ((0x80000U 
                                               & (vlSelf->top__DOT___2229_[0U] 
                                                  >> 6U)) 
                                              | (((IData)(vlSelf->top__DOT___0704_) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->top__DOT___1402_) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSelf->top__DOT___0216_) 
                                                        << 0x10U) 
                                                       | (((IData)(vlSelf->top__DOT___0225_) 
                                                           << 0xfU) 
                                                          | (((IData)(vlSelf->top__DOT___0210_) 
                                                              << 0xeU) 
                                                             | (((IData)(vlSelf->top__DOT___0287_) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlSelf->top__DOT___1750_) 
                                                                    << 0xcU) 
                                                                   | ((0xc00U 
                                                                       & ((IData)(vlSelf->top__DOT___2003_) 
                                                                          << 1U)) 
                                                                      | (((IData)(vlSelf->top__DOT___1126_) 
                                                                          << 9U) 
                                                                         | (((IData)(vlSelf->top__DOT___1631_) 
                                                                             << 8U) 
                                                                            | ((0xf0U 
                                                                                & ((IData)(vlSelf->top__DOT___2003_) 
                                                                                << 1U)) 
                                                                               | (((IData)(vlSelf->top__DOT___1372_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1217_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___2003_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0540_))))))))))))))))))))
                                 : 0x6cab26U);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    // Body
    vlSelf->top__DOT___0872_ = (1U & ((IData)((vlSelf->top__DOT___3699_ 
                                               >> 5U)) 
                                      ^ ((IData)(vlSelf->top__DOT___3767_) 
                                         >> 9U)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__171(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__171\n"); );
    // Body
    vlSelf->top__DOT___3622_ = ((IData)(vlSelf->top__DOT___0069_)
                                 ? ((0x3f0000U & ((IData)(
                                                          (vlSelf->top__DOT___1979_ 
                                                           >> 0x24U)) 
                                                  << 0x10U)) 
                                    | (((IData)(vlSelf->top__DOT___0084_) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->top__DOT___0383_) 
                                         << 0xeU) | 
                                        ((0x2000U & 
                                          ((IData)(vlSelf->top__DOT___3618_) 
                                           << 1U)) 
                                         | ((0x1f00U 
                                             & ((IData)(vlSelf->top__DOT___2004_) 
                                                << 2U)) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->top__DOT___3618_) 
                                                   << 1U)) 
                                               | ((0x70U 
                                                   & (vlSelf->top__DOT___2018_[1U] 
                                                      >> 0x14U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->top__DOT___3618_) 
                                                         << 1U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->top__DOT___3618_) 
                                                            << 1U)) 
                                                        | ((2U 
                                                            & (vlSelf->top__DOT___2018_[1U] 
                                                               >> 0x14U)) 
                                                           | (IData)(vlSelf->top__DOT___0521_)))))))))))
                                 : 0x25ff3aU);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__172(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__172\n"); );
    // Body
    vlSelf->top__DOT___3654_ = ((IData)(vlSelf->top__DOT___0185_)
                                 ? 0x32fU : ((0x380U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT___1991_ 
                                                          >> 0x2fU)) 
                                                 << 7U)) 
                                             | (((IData)(vlSelf->top__DOT___1193_) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->top__DOT___1553_) 
                                                    << 5U) 
                                                   | ((0x18U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___1991_ 
                                                                   >> 0x2bU)) 
                                                          << 3U)) 
                                                      | (7U 
                                                         & ((vlSelf->top__DOT___2031_[1U] 
                                                             << 1U) 
                                                            | (vlSelf->top__DOT___2031_[0U] 
                                                               >> 0x1fU))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__173(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__173\n"); );
    // Body
    vlSelf->top__DOT___0380_ = ((IData)(vlSelf->top__DOT___0748_) 
                                & ((IData)(vlSelf->top__DOT___3647_) 
                                   >> 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__174(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__174\n"); );
    // Body
    vlSelf->top__DOT___3663_ = ((IData)(vlSelf->top__DOT___0320_)
                                 ? 3U : ((0x1e0U & 
                                          (vlSelf->in_data[0x3aU] 
                                           >> 0x12U)) 
                                         | (((IData)(vlSelf->top__DOT___0907_) 
                                             << 4U) 
                                            | (((IData)(vlSelf->top__DOT___0854_) 
                                                << 3U) 
                                               | (((IData)(vlSelf->top__DOT___0149_) 
                                                   << 2U) 
                                                  | ((IData)(vlSelf->top__DOT___0071_) 
                                                     << 1U))))));
    vlSelf->top__DOT___1751_ = (1U & ((IData)(vlSelf->top__DOT___3663_) 
                                      >> 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__175(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__175\n"); );
    // Body
    vlSelf->top__DOT___1912_ = ((0xfdffffffffULL & vlSelf->top__DOT___1912_) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->top__DOT___3620_) 
                                                       >> 5U)))) 
                                   << 0x21U));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__176(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__176\n"); );
    // Body
    vlSelf->top__DOT___3658_ = ((IData)(vlSelf->top__DOT___0253_)
                                 ? 0x110U : ((0x180U 
                                              & (vlSelf->top__DOT___2059_[0U] 
                                                 >> 2U)) 
                                             | (((IData)(vlSelf->top__DOT___0059_) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->top__DOT___0633_) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->top__DOT___0162_) 
                                                       << 4U) 
                                                      | ((8U 
                                                          & ((IData)(vlSelf->top__DOT___1959_) 
                                                             >> 4U)) 
                                                         | (((IData)(vlSelf->top__DOT___1202_) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->top__DOT___0016_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___0226_)))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__177(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__177\n"); );
    // Body
    vlSelf->top__DOT___3641_ = ((IData)(vlSelf->top__DOT___0099_)
                                 ? 0x3fffffb5342b63ULL
                                 : (((QData)((IData)(vlSelf->top__DOT___0058_)) 
                                     << 0x34U) | (((QData)((IData)(vlSelf->top__DOT___0197_)) 
                                                   << 0x33U) 
                                                  | (((QData)((IData)(
                                                                      (0xfU 
                                                                       & ((IData)(vlSelf->top__DOT___1994_) 
                                                                          >> 6U)))) 
                                                      << 0x2fU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x26U))))) 
                                                         << 0x2eU) 
                                                        | (((QData)((IData)(
                                                                            (3U 
                                                                             & ((IData)(vlSelf->top__DOT___1994_) 
                                                                                >> 3U)))) 
                                                            << 0x2cU) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x23U))))) 
                                                               << 0x2bU) 
                                                              | (((QData)((IData)(
                                                                                (3U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                >> 0x12U)))) 
                                                                  << 0x29U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x20U))))) 
                                                                     << 0x28U) 
                                                                    | (((QData)((IData)(
                                                                                ((0xc0000000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x38000000U 
                                                                                & ((IData)(vlSelf->top__DOT___2005_) 
                                                                                << 0x13U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x3800000U 
                                                                                & ((IData)(vlSelf->top__DOT___2005_) 
                                                                                << 0x13U)) 
                                                                                | ((0x600000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | (0x3ffffU 
                                                                                & ((vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->top__DOT___2048_[0U] 
                                                                                >> 0x11U))))))))))))) 
                                                                        << 8U) 
                                                                       | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0134_) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___3794_)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___1952_[4U] 
                                                                                >> 9U)) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->top__DOT___3794_)) 
                                                                                | ((4U 
                                                                                & (IData)(vlSelf->top__DOT___3794_)) 
                                                                                | ((2U 
                                                                                & (IData)(vlSelf->top__DOT___3794_)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___1952_[4U] 
                                                                                >> 9U))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__178(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__178\n"); );
    // Body
    vlSelf->top__DOT___0988_ = (1U & (vlSelf->top__DOT___3639_ 
                                      >> 0xcU));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__179(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__179\n"); );
    // Body
    vlSelf->top__DOT___3721_ = ((0x40000U & vlSelf->top__DOT___1900_[2U])
                                 ? 0x7dU : ((0x7cU 
                                             & ((IData)(vlSelf->top__DOT___1888_) 
                                                >> 4U)) 
                                            | (((IData)(vlSelf->top__DOT___1013_) 
                                                << 1U) 
                                               | (IData)(vlSelf->top__DOT___0873_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__8\n"); );
    // Body
    vlSelf->top__DOT___1090_ = (1U & (((IData)(vlSelf->top__DOT___3644_) 
                                       >> 8U) ^ (IData)(
                                                        (vlSelf->top__DOT___3650_ 
                                                         >> 0x10U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    // Body
    vlSelf->top__DOT___1708_ = (1U & ((~ (IData)(vlSelf->top__DOT___1064_)) 
                                      | ((IData)(vlSelf->top__DOT___3739_) 
                                         >> 1U)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__180(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__180\n"); );
    // Body
    vlSelf->top__DOT___0343_ = ((~ (vlSelf->top__DOT___3723_[0U] 
                                    >> 0x15U)) & (IData)(vlSelf->top__DOT___0154_));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__181(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__181\n"); );
    // Body
    vlSelf->top__DOT___3676_ = ((1U & (IData)((vlSelf->top__DOT___1909_ 
                                               >> 0xcU)))
                                 ? 0x1cU : ((0x10U 
                                             & (vlSelf->top__DOT___1976_[0U] 
                                                >> 0xcU)) 
                                            | (((IData)(vlSelf->top__DOT___1335_) 
                                                << 3U) 
                                               | ((4U 
                                                   & (vlSelf->top__DOT___1976_[0U] 
                                                      >> 0xcU)) 
                                                  | (((IData)(vlSelf->top__DOT___0172_) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->top__DOT___0120_))))));
    vlSelf->top__DOT___2220_[0U] = ((0xfffc1fffU & 
                                     vlSelf->top__DOT___2220_[0U]) 
                                    | ((IData)(vlSelf->top__DOT___3676_) 
                                       << 0xdU));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__182(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__182\n"); );
    // Body
    vlSelf->top__DOT___3667_ = ((IData)(vlSelf->top__DOT___0320_)
                                 ? ((0x7f8U & ((IData)(
                                                       (vlSelf->top__DOT___1990_ 
                                                        >> 1U)) 
                                               << 3U)) 
                                    | (((IData)(vlSelf->top__DOT___0018_) 
                                        << 2U) | (((IData)(vlSelf->top__DOT___0593_) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (vlSelf->top__DOT___3751_ 
                                                        >> 0x11U)))))
                                 : 0x7c5U);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__10\n"); );
    // Body
    vlSelf->top__DOT___0561_ = (1U & (((IData)(vlSelf->top__DOT___3678_) 
                                       >> 5U) ^ ((IData)(vlSelf->top__DOT___3620_) 
                                                 >> 2U)));
    vlSelf->top__DOT___1909_ = ((0xffffffbfffULL & vlSelf->top__DOT___1909_) 
                                | ((QData)((IData)(vlSelf->top__DOT___0561_)) 
                                   << 0xeU));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__183(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__183\n"); );
    // Body
    vlSelf->top__DOT___3749_ = 0xeU;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__184(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__184\n"); );
    // Body
    vlSelf->top__DOT___3726_ = ((IData)(vlSelf->top__DOT___0152_)
                                 ? (1U | (((IData)(vlSelf->top__DOT___1812_) 
                                           << 5U) | 
                                          (((IData)(vlSelf->top__DOT___0041_) 
                                            << 4U) 
                                           | (((IData)(vlSelf->top__DOT___0287_) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT___0586_) 
                                                  << 2U) 
                                                 | ((IData)(vlSelf->top__DOT___0055_) 
                                                    << 1U))))))
                                 : 0x35U);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__185(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__185\n"); );
    // Body
    vlSelf->top__DOT___0787_ = (1U & ((vlSelf->top__DOT___3713_ 
                                       >> 0xdU) ^ (IData)(vlSelf->top__DOT___0154_)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__186(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__186\n"); );
    // Body
    vlSelf->top__DOT___3746_ = ((0x100000U & vlSelf->top__DOT___1972_)
                                 ? 0x1bdU : (((IData)(vlSelf->top__DOT___1053_) 
                                              << 8U) 
                                             | (((IData)(vlSelf->top__DOT___0032_) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->top__DOT___1055_) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->top__DOT___0625_) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->top__DOT___0386_) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->top__DOT___1283_) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->top__DOT___0419_) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->top__DOT___0801_) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->top__DOT___0270_))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__187(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__187\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (((IData)((((QData)((IData)((0x800U 
                                                 | (((IData)(vlSelf->top__DOT___1441_) 
                                                     << 0x1fU) 
                                                    | ((0x7fe00000U 
                                                        & (vlSelf->top__DOT___2095_[3U] 
                                                           << 9U)) 
                                                       | ((0x1e0000U 
                                                           & (vlSelf->top__DOT___1972_ 
                                                              >> 5U)) 
                                                          | (((IData)(vlSelf->top__DOT___1687_) 
                                                              << 0x10U) 
                                                             | ((0xc000U 
                                                                 & (vlSelf->top__DOT___1972_ 
                                                                    >> 5U)) 
                                                                | (((IData)(vlSelf->top__DOT___0018_) 
                                                                    << 0xdU) 
                                                                   | (((IData)(vlSelf->top__DOT___0232_) 
                                                                       << 0xcU) 
                                                                      | ((0x780U 
                                                                          & ((IData)(vlSelf->top__DOT___1994_) 
                                                                             << 1U)) 
                                                                         | ((0x40U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x26U)) 
                                                                                << 6U)) 
                                                                            | ((0x30U 
                                                                                & ((IData)(vlSelf->top__DOT___1994_) 
                                                                                << 1U)) 
                                                                               | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x23U)) 
                                                                                << 3U)) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                >> 0x11U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x20U)))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0xc0000000U 
                                                              & (vlSelf->top__DOT___2048_[1U] 
                                                                 << 0xfU)) 
                                                             | ((0x38000000U 
                                                                 & ((IData)(vlSelf->top__DOT___2005_) 
                                                                    << 0x13U)) 
                                                                | ((0x4000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3818_ 
                                                                                >> 0x1aU)) 
                                                                       << 0x1aU)) 
                                                                   | ((0x3800000U 
                                                                       & ((IData)(vlSelf->top__DOT___2005_) 
                                                                          << 0x13U)) 
                                                                      | ((0x600000U 
                                                                          & (vlSelf->top__DOT___2048_[1U] 
                                                                             << 0xfU)) 
                                                                         | ((0x100000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                            | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                               | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | (0x3ffffU 
                                                                                & ((vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->top__DOT___2048_[0U] 
                                                                                >> 0x11U))))))))))))))) 
                      << 2U) | (((IData)(vlSelf->top__DOT___0226_) 
                                 << 1U) | (IData)(vlSelf->top__DOT___0277_)));
    __Vtemp_1[1U] = (((IData)((((QData)((IData)((0x800U 
                                                 | (((IData)(vlSelf->top__DOT___1441_) 
                                                     << 0x1fU) 
                                                    | ((0x7fe00000U 
                                                        & (vlSelf->top__DOT___2095_[3U] 
                                                           << 9U)) 
                                                       | ((0x1e0000U 
                                                           & (vlSelf->top__DOT___1972_ 
                                                              >> 5U)) 
                                                          | (((IData)(vlSelf->top__DOT___1687_) 
                                                              << 0x10U) 
                                                             | ((0xc000U 
                                                                 & (vlSelf->top__DOT___1972_ 
                                                                    >> 5U)) 
                                                                | (((IData)(vlSelf->top__DOT___0018_) 
                                                                    << 0xdU) 
                                                                   | (((IData)(vlSelf->top__DOT___0232_) 
                                                                       << 0xcU) 
                                                                      | ((0x780U 
                                                                          & ((IData)(vlSelf->top__DOT___1994_) 
                                                                             << 1U)) 
                                                                         | ((0x40U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x26U)) 
                                                                                << 6U)) 
                                                                            | ((0x30U 
                                                                                & ((IData)(vlSelf->top__DOT___1994_) 
                                                                                << 1U)) 
                                                                               | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x23U)) 
                                                                                << 3U)) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                >> 0x11U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x20U)))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0xc0000000U 
                                                              & (vlSelf->top__DOT___2048_[1U] 
                                                                 << 0xfU)) 
                                                             | ((0x38000000U 
                                                                 & ((IData)(vlSelf->top__DOT___2005_) 
                                                                    << 0x13U)) 
                                                                | ((0x4000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3818_ 
                                                                                >> 0x1aU)) 
                                                                       << 0x1aU)) 
                                                                   | ((0x3800000U 
                                                                       & ((IData)(vlSelf->top__DOT___2005_) 
                                                                          << 0x13U)) 
                                                                      | ((0x600000U 
                                                                          & (vlSelf->top__DOT___2048_[1U] 
                                                                             << 0xfU)) 
                                                                         | ((0x100000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                            | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                               | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | (0x3ffffU 
                                                                                & ((vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->top__DOT___2048_[0U] 
                                                                                >> 0x11U))))))))))))))) 
                      >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                              (0x800U 
                                                               | (((IData)(vlSelf->top__DOT___1441_) 
                                                                   << 0x1fU) 
                                                                  | ((0x7fe00000U 
                                                                      & (vlSelf->top__DOT___2095_[3U] 
                                                                         << 9U)) 
                                                                     | ((0x1e0000U 
                                                                         & (vlSelf->top__DOT___1972_ 
                                                                            >> 5U)) 
                                                                        | (((IData)(vlSelf->top__DOT___1687_) 
                                                                            << 0x10U) 
                                                                           | ((0xc000U 
                                                                               & (vlSelf->top__DOT___1972_ 
                                                                                >> 5U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0018_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0232_) 
                                                                                << 0xcU) 
                                                                                | ((0x780U 
                                                                                & ((IData)(vlSelf->top__DOT___1994_) 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x26U)) 
                                                                                << 6U)) 
                                                                                | ((0x30U 
                                                                                & ((IData)(vlSelf->top__DOT___1994_) 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x23U)) 
                                                                                << 3U)) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                >> 0x11U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x20U)))))))))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((0xc0000000U 
                                                                 & (vlSelf->top__DOT___2048_[1U] 
                                                                    << 0xfU)) 
                                                                | ((0x38000000U 
                                                                    & ((IData)(vlSelf->top__DOT___2005_) 
                                                                       << 0x13U)) 
                                                                   | ((0x4000000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x1aU)) 
                                                                          << 0x1aU)) 
                                                                      | ((0x3800000U 
                                                                          & ((IData)(vlSelf->top__DOT___2005_) 
                                                                             << 0x13U)) 
                                                                         | ((0x600000U 
                                                                             & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                            | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                               | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | (0x3ffffU 
                                                                                & ((vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->top__DOT___2048_[0U] 
                                                                                >> 0x11U)))))))))))))) 
                                            >> 0x20U)) 
                                   << 2U));
    __Vtemp_1[2U] = ((IData)(((((QData)((IData)((0x800U 
                                                 | (((IData)(vlSelf->top__DOT___1441_) 
                                                     << 0x1fU) 
                                                    | ((0x7fe00000U 
                                                        & (vlSelf->top__DOT___2095_[3U] 
                                                           << 9U)) 
                                                       | ((0x1e0000U 
                                                           & (vlSelf->top__DOT___1972_ 
                                                              >> 5U)) 
                                                          | (((IData)(vlSelf->top__DOT___1687_) 
                                                              << 0x10U) 
                                                             | ((0xc000U 
                                                                 & (vlSelf->top__DOT___1972_ 
                                                                    >> 5U)) 
                                                                | (((IData)(vlSelf->top__DOT___0018_) 
                                                                    << 0xdU) 
                                                                   | (((IData)(vlSelf->top__DOT___0232_) 
                                                                       << 0xcU) 
                                                                      | ((0x780U 
                                                                          & ((IData)(vlSelf->top__DOT___1994_) 
                                                                             << 1U)) 
                                                                         | ((0x40U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x26U)) 
                                                                                << 6U)) 
                                                                            | ((0x30U 
                                                                                & ((IData)(vlSelf->top__DOT___1994_) 
                                                                                << 1U)) 
                                                                               | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x23U)) 
                                                                                << 3U)) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                >> 0x11U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x20U)))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0xc0000000U 
                                                              & (vlSelf->top__DOT___2048_[1U] 
                                                                 << 0xfU)) 
                                                             | ((0x38000000U 
                                                                 & ((IData)(vlSelf->top__DOT___2005_) 
                                                                    << 0x13U)) 
                                                                | ((0x4000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3818_ 
                                                                                >> 0x1aU)) 
                                                                       << 0x1aU)) 
                                                                   | ((0x3800000U 
                                                                       & ((IData)(vlSelf->top__DOT___2005_) 
                                                                          << 0x13U)) 
                                                                      | ((0x600000U 
                                                                          & (vlSelf->top__DOT___2048_[1U] 
                                                                             << 0xfU)) 
                                                                         | ((0x100000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                            | ((0x80000U 
                                                                                & (vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU)) 
                                                                               | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3818_ 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | (0x3ffffU 
                                                                                & ((vlSelf->top__DOT___2048_[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->top__DOT___2048_[0U] 
                                                                                >> 0x11U)))))))))))))) 
                              >> 0x20U)) >> 0x1eU);
    if (vlSelf->top__DOT___0018_) {
        vlSelf->top__DOT___3633_[0U] = __Vtemp_1[0U];
        vlSelf->top__DOT___3633_[1U] = __Vtemp_1[1U];
        vlSelf->top__DOT___3633_[2U] = __Vtemp_1[2U];
    } else {
        vlSelf->top__DOT___3633_[0U] = 0U;
        vlSelf->top__DOT___3633_[1U] = 0U;
        vlSelf->top__DOT___3633_[2U] = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__188(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__188\n"); );
    // Body
    vlSelf->top__DOT___3655_ = ((IData)(vlSelf->top__DOT___0391_)
                                 ? (((QData)((IData)(
                                                     (0x1fffU 
                                                      & (vlSelf->top__DOT___2019_[1U] 
                                                         >> 6U)))) 
                                     << 0x2fU) | (((QData)((IData)(vlSelf->top__DOT___0203_)) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0586_)) 
                                                      << 0x2cU) 
                                                     | (((QData)((IData)(
                                                                         (0x7ffU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT___1998_ 
                                                                                >> 0x1eU))))) 
                                                         << 0x21U) 
                                                        | (((QData)((IData)(
                                                                            (((IData)(vlSelf->top__DOT___1325_) 
                                                                              << 0x1fU) 
                                                                             | ((0x7ffffffcU 
                                                                                & ((IData)(vlSelf->top__DOT___1998_) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0098_)))))) 
                                                            << 1U) 
                                                           | (QData)((IData)(vlSelf->top__DOT___0272_)))))))
                                 : 0xfffffffa0b72fedULL);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__189(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__189\n"); );
    // Body
    vlSelf->top__DOT___1470_ = ((IData)(vlSelf->top__DOT___0151_) 
                                | (IData)(vlSelf->top__DOT___1550_));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__190(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__190\n"); );
    // Body
    vlSelf->top__DOT___3635_ = ((IData)(vlSelf->top__DOT___0922_)
                                 ? (((QData)((IData)(
                                                     ((0xc0000000U 
                                                       & ((vlSelf->top__DOT___2170_[1U] 
                                                           << 0x1fU) 
                                                          | (0x40000000U 
                                                             & (vlSelf->top__DOT___2170_[0U] 
                                                                >> 1U)))) 
                                                      | ((0x20000000U 
                                                          & (vlSelf->top__DOT___3701_[0U] 
                                                             << 3U)) 
                                                         | ((0x1e000000U 
                                                             & (vlSelf->top__DOT___2170_[0U] 
                                                                >> 1U)) 
                                                            | ((0x1000000U 
                                                                & (vlSelf->top__DOT___3701_[0U] 
                                                                   << 3U)) 
                                                               | ((0xfc0000U 
                                                                   & (vlSelf->top__DOT___2170_[0U] 
                                                                      >> 1U)) 
                                                                  | ((0x20000U 
                                                                      & ((IData)(vlSelf->top__DOT___3647_) 
                                                                         << 0xeU)) 
                                                                     | (((IData)(vlSelf->top__DOT___1266_) 
                                                                         << 0x10U) 
                                                                        | (0xffffU 
                                                                           & (vlSelf->top__DOT___2000_[3U] 
                                                                              >> 0xcU))))))))))) 
                                     << 0x1cU) | (QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___1361_) 
                                                                   << 0x1bU) 
                                                                  | ((0x7f00000U 
                                                                      & (vlSelf->top__DOT___2000_[3U] 
                                                                         << 0x10U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1506_) 
                                                                         << 0x13U) 
                                                                        | ((0x40000U 
                                                                            & (vlSelf->top__DOT___2000_[3U] 
                                                                               << 0x10U)) 
                                                                           | (((IData)(vlSelf->top__DOT___0113_) 
                                                                               << 0x11U) 
                                                                              | ((0x1f000U 
                                                                                & ((vlSelf->top__DOT___2000_[3U] 
                                                                                << 0x10U) 
                                                                                | (0xf000U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0x10U)))) 
                                                                                | (((IData)(vlSelf->top__DOT___0313_) 
                                                                                << 0xbU) 
                                                                                | ((0x7c0U 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0737_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___2000_[2U] 
                                                                                >> 0x10U))))))))))))))
                                 : 0xfffffffda06d234ULL);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__191(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__191\n"); );
    // Body
    vlSelf->out_data[0xbU] = ((0xffffff80U & vlSelf->out_data[0xbU]) 
                              | (IData)(vlSelf->top__DOT___3632_));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__192(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__192\n"); );
    // Body
    vlSelf->out_data[0x1fU] = ((0xff800000U & vlSelf->out_data[0x1fU]) 
                               | vlSelf->top__DOT___3631_);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__193(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__193\n"); );
    // Body
    vlSelf->out_data[0x24U] = ((0xff800000U & vlSelf->out_data[0x24U]) 
                               | vlSelf->top__DOT___3630_);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__194(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__194\n"); );
    // Body
    vlSelf->out_data[0x32U] = ((0xfffffffeU & vlSelf->out_data[0x32U]) 
                               | (1U & (IData)((vlSelf->top__DOT___3700_ 
                                                >> 0x1fU))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__195(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__195\n"); );
    // Body
    vlSelf->out_data[0x3dU] = ((0xfffffffeU & vlSelf->out_data[0x3dU]) 
                               | (1U & (vlSelf->top__DOT___3756_ 
                                        >> 9U)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__196(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__196\n"); );
    // Body
    vlSelf->top__DOT___3673_ = ((IData)(vlSelf->top__DOT___0253_)
                                 ? ((8U & (vlSelf->top__DOT___1995_ 
                                           >> 3U)) 
                                    | (((IData)(vlSelf->top__DOT___1242_) 
                                        << 2U) | (((IData)(vlSelf->top__DOT___1086_) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->top__DOT___0678_))))
                                 : 0xaU);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__197(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__197\n"); );
    // Body
    vlSelf->top__DOT___3799_ = 0x1ffc3f35d63ULL;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__198(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__198\n"); );
    // Body
    vlSelf->top__DOT___3623_ = ((0x10000000U & vlSelf->top__DOT___2000_[0U])
                                 ? ((8U & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                           << 3U)) 
                                    | (((IData)(vlSelf->top__DOT___0565_) 
                                        << 2U) | ((2U 
                                                   & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->top__DOT___0197_))))
                                 : 9U);
    vlSelf->top__DOT___0595_ = (1U & (IData)(vlSelf->top__DOT___3623_));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__199(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__199\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0733_)) 
                              << 0x2bU) | (((QData)((IData)(vlSelf->top__DOT___0140_)) 
                                            << 0x2aU) 
                                           | (((QData)((IData)(
                                                               ((0x80000000U 
                                                                 & ((IData)(vlSelf->top__DOT___3794_) 
                                                                    << 0x1aU)) 
                                                                | ((0x40000000U 
                                                                    & (vlSelf->top__DOT___1952_[4U] 
                                                                       << 0x11U)) 
                                                                   | ((0x20000000U 
                                                                       & ((IData)(vlSelf->top__DOT___3794_) 
                                                                          << 0x1aU)) 
                                                                      | ((0x10000000U 
                                                                          & ((IData)(vlSelf->top__DOT___3794_) 
                                                                             << 0x1aU)) 
                                                                         | ((0x8000000U 
                                                                             & ((IData)(vlSelf->top__DOT___3794_) 
                                                                                << 0x1aU)) 
                                                                            | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___1952_[4U] 
                                                                                << 0x11U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0270_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0565_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3791_ 
                                                                                >> 0x15U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x7e0000U 
                                                                                & (vlSelf->top__DOT___2164_ 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0601_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & (vlSelf->top__DOT___2164_ 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1997_) 
                                                                                << 0xaU) 
                                                                                | ((0x3e0U 
                                                                                & (vlSelf->top__DOT___2164_ 
                                                                                >> 7U)) 
                                                                                | (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___2154_ 
                                                                                >> 0x23U))))))))))))))))))) 
                                               << 0xaU) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT___1080_) 
                                                                  << 9U) 
                                                                 | ((0x180U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___2154_ 
                                                                                >> 0x20U)) 
                                                                        << 7U)) 
                                                                    | (((IData)(vlSelf->top__DOT___1338_) 
                                                                        << 6U) 
                                                                       | ((0x38U 
                                                                           & (vlSelf->top__DOT___2164_ 
                                                                              << 3U)) 
                                                                          | (7U 
                                                                             & (vlSelf->top__DOT___1981_ 
                                                                                >> 9U))))))))))));
    __Vtemp_2[1U] = (((IData)((0xfffffffffffffULL & 
                               (((QData)((IData)(vlSelf->in_data[0x38U])) 
                                 << 0x2eU) | (((QData)((IData)(
                                                               vlSelf->in_data[0x37U])) 
                                               << 0xeU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->in_data[0x36U])) 
                                                 >> 0x12U))))) 
                      << 0xcU) | (IData)(((((QData)((IData)(vlSelf->top__DOT___0733_)) 
                                            << 0x2bU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0140_)) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  ((0x80000000U 
                                                                    & ((IData)(vlSelf->top__DOT___3794_) 
                                                                       << 0x1aU)) 
                                                                   | ((0x40000000U 
                                                                       & (vlSelf->top__DOT___1952_[4U] 
                                                                          << 0x11U)) 
                                                                      | ((0x20000000U 
                                                                          & ((IData)(vlSelf->top__DOT___3794_) 
                                                                             << 0x1aU)) 
                                                                         | ((0x10000000U 
                                                                             & ((IData)(vlSelf->top__DOT___3794_) 
                                                                                << 0x1aU)) 
                                                                            | ((0x8000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3794_) 
                                                                                << 0x1aU)) 
                                                                               | ((0x4000000U 
                                                                                & (vlSelf->top__DOT___1952_[4U] 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0270_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0565_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3791_ 
                                                                                >> 0x15U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x7e0000U 
                                                                                & (vlSelf->top__DOT___2164_ 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0601_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & (vlSelf->top__DOT___2164_ 
                                                                                >> 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1997_) 
                                                                                << 0xaU) 
                                                                                | ((0x3e0U 
                                                                                & (vlSelf->top__DOT___2164_ 
                                                                                >> 7U)) 
                                                                                | (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___2154_ 
                                                                                >> 0x23U))))))))))))))))))) 
                                                  << 0xaU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->top__DOT___1080_) 
                                                                     << 9U) 
                                                                    | ((0x180U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___2154_ 
                                                                                >> 0x20U)) 
                                                                           << 7U)) 
                                                                       | (((IData)(vlSelf->top__DOT___1338_) 
                                                                           << 6U) 
                                                                          | ((0x38U 
                                                                              & (vlSelf->top__DOT___2164_ 
                                                                                << 3U)) 
                                                                             | (7U 
                                                                                & (vlSelf->top__DOT___1981_ 
                                                                                >> 9U))))))))))) 
                                          >> 0x20U)));
    if (vlSelf->top__DOT___0146_) {
        vlSelf->top__DOT___3664_[0U] = 0U;
        vlSelf->top__DOT___3664_[1U] = 0U;
        vlSelf->top__DOT___3664_[2U] = 0U;
        vlSelf->top__DOT___3664_[3U] = 0U;
    } else {
        vlSelf->top__DOT___3664_[0U] = ((__Vtemp_2[0U] 
                                         << 9U) | (
                                                   (0x100U 
                                                    & ((IData)(vlSelf->top__DOT___3775_) 
                                                       << 1U)) 
                                                   | ((0x80U 
                                                       & ((IData)(vlSelf->top__DOT___3775_) 
                                                          << 1U)) 
                                                      | ((0x7cU 
                                                          & vlSelf->top__DOT___1981_) 
                                                         | ((2U 
                                                             & ((IData)(vlSelf->top__DOT___3775_) 
                                                                << 1U)) 
                                                            | (IData)(vlSelf->top__DOT___0140_))))));
        vlSelf->top__DOT___3664_[1U] = ((__Vtemp_2[0U] 
                                         >> 0x17U) 
                                        | (__Vtemp_2[1U] 
                                           << 9U));
        vlSelf->top__DOT___3664_[2U] = ((__Vtemp_2[1U] 
                                         >> 0x17U) 
                                        | ((0x1ffe00U 
                                            & ((IData)(
                                                       (0xfffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelf->in_data[0x38U])) 
                                                            << 0x2eU) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->in_data[0x37U])) 
                                                               << 0xeU) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->in_data[0x36U])) 
                                                                 >> 0x12U))))) 
                                               >> 0xbU)) 
                                           | ((IData)(
                                                      ((0xfffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelf->in_data[0x38U])) 
                                                            << 0x2eU) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->in_data[0x37U])) 
                                                               << 0xeU) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->in_data[0x36U])) 
                                                                 >> 0x12U)))) 
                                                       >> 0x20U)) 
                                              << 0x15U)));
        vlSelf->top__DOT___3664_[3U] = (0x1ffU & ((IData)(
                                                          ((0xfffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->in_data[0x38U])) 
                                                                << 0x2eU) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->in_data[0x37U])) 
                                                                   << 0xeU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->in_data[0x36U])) 
                                                                     >> 0x12U)))) 
                                                           >> 0x20U)) 
                                                  >> 0xbU));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__13(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__13\n"); );
    // Body
    vlSelf->top__DOT___0662_ = (((IData)(vlSelf->top__DOT___3823_) 
                                 >> 4U) & (IData)(vlSelf->top__DOT___0469_));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__200(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__200\n"); );
    // Body
    vlSelf->top__DOT___3704_ = ((IData)(vlSelf->top__DOT___0154_)
                                 ? ((0x38U & (vlSelf->top__DOT___2121_[0U] 
                                              >> 0x1aU)) 
                                    | ((IData)(vlSelf->top__DOT___0134_) 
                                       << 1U)) : 0xcU);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__14(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__14\n"); );
    // Body
    vlSelf->top__DOT___0290_ = (1U & ((~ (IData)((vlSelf->top__DOT___3670_ 
                                                  >> 7U))) 
                                      & (IData)(vlSelf->top__DOT___3732_)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__201(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__201\n"); );
    // Body
    vlSelf->top__DOT___3662_ = ((IData)(vlSelf->top__DOT___0989_)
                                 ? 3U : (3U & ((IData)(vlSelf->top__DOT___2006_) 
                                               >> 3U)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__202(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__202\n"); );
    // Body
    vlSelf->top__DOT___3618_ = ((IData)(vlSelf->top__DOT___1225_)
                                 ? 0x128fU : (((IData)(vlSelf->top__DOT___0120_) 
                                               << 0xcU) 
                                              | (((IData)(vlSelf->top__DOT___1568_) 
                                                  << 0xbU) 
                                                 | ((0x600U 
                                                     & vlSelf->top__DOT___1976_[0U]) 
                                                    | (((IData)(vlSelf->top__DOT___0604_) 
                                                        << 8U) 
                                                       | ((0x80U 
                                                           & vlSelf->top__DOT___1976_[0U]) 
                                                          | (((IData)(vlSelf->top__DOT___0945_) 
                                                              << 6U) 
                                                             | ((0x20U 
                                                                 & vlSelf->top__DOT___1976_[0U]) 
                                                                | (((IData)(vlSelf->top__DOT___0602_) 
                                                                    << 4U) 
                                                                   | ((8U 
                                                                       & vlSelf->top__DOT___1976_[0U]) 
                                                                      | (((IData)(vlSelf->top__DOT___0383_) 
                                                                          << 2U) 
                                                                         | (((IData)(vlSelf->top__DOT___0134_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___1170_)))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__15(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__15\n"); );
    // Body
    vlSelf->top__DOT___0868_ = ((IData)(vlSelf->top__DOT___0135_) 
                                | (IData)(vlSelf->top__DOT___0988_));
    vlSelf->top__DOT___1026_ = ((IData)(vlSelf->top__DOT___0135_) 
                                | (IData)(vlSelf->top__DOT___0868_));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__203(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__203\n"); );
    // Body
    vlSelf->top__DOT___3751_ = ((IData)(vlSelf->top__DOT___0690_)
                                 ? ((0x80000U & (vlSelf->top__DOT___2001_[3U] 
                                                 << 4U)) 
                                    | (((IData)(vlSelf->top__DOT___1323_) 
                                        << 0x12U) | 
                                       ((0x20000U & 
                                         (vlSelf->top__DOT___2001_[3U] 
                                          << 4U)) | 
                                        (((IData)(vlSelf->top__DOT___1309_) 
                                          << 0x10U) 
                                         | (((IData)(vlSelf->top__DOT___1081_) 
                                             << 0xfU) 
                                            | ((0x7800U 
                                                & (vlSelf->top__DOT___2001_[3U] 
                                                   << 4U)) 
                                               | (((IData)(vlSelf->top__DOT___1351_) 
                                                   << 0xaU) 
                                                  | ((0x380U 
                                                      & (vlSelf->top__DOT___2001_[3U] 
                                                         << 4U)) 
                                                     | (((IData)(vlSelf->top__DOT___1353_) 
                                                         << 6U) 
                                                        | ((0x20U 
                                                            & (vlSelf->top__DOT___2001_[3U] 
                                                               << 4U)) 
                                                           | (((IData)(vlSelf->top__DOT___1359_) 
                                                               << 4U) 
                                                              | (((IData)(vlSelf->top__DOT___0277_) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelf->top__DOT___0134_) 
                                                                     << 2U) 
                                                                    | (((IData)(vlSelf->top__DOT___0043_) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelf->top__DOT___0150_)))))))))))))))
                                 : 0xdd489U);
    vlSelf->top__DOT___1084_ = (1U & (~ ((IData)(vlSelf->top__DOT___0134_) 
                                         | (vlSelf->top__DOT___3751_ 
                                            >> 0xeU))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__16(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__16\n"); );
    // Body
    vlSelf->top__DOT___1395_ = (1U & (~ (((IData)(vlSelf->top__DOT___3749_) 
                                          >> 2U) & 
                                         ((IData)(vlSelf->top__DOT___3656_) 
                                          >> 1U))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__204(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__204\n"); );
    // Body
    vlSelf->top__DOT___3818_ = ((IData)(vlSelf->top__DOT___0586_)
                                 ? (((QData)((IData)(
                                                     ((0xfe000000U 
                                                       & (vlSelf->top__DOT___1951_[4U] 
                                                          << 2U)) 
                                                      | (((IData)(vlSelf->top__DOT___1276_) 
                                                          << 0x18U) 
                                                         | ((0xfc0000U 
                                                             & (vlSelf->top__DOT___1951_[4U] 
                                                                << 2U)) 
                                                            | (((IData)(vlSelf->top__DOT___1042_) 
                                                                << 0x11U) 
                                                               | ((0x1e000U 
                                                                   & (vlSelf->top__DOT___1951_[4U] 
                                                                      << 2U)) 
                                                                  | (((IData)(vlSelf->top__DOT___0857_) 
                                                                      << 0xbU) 
                                                                     | (((IData)(vlSelf->top__DOT___0311_) 
                                                                         << 0xaU) 
                                                                        | (((IData)(vlSelf->top__DOT___0226_) 
                                                                            << 9U) 
                                                                           | (((IData)(vlSelf->top__DOT___0633_) 
                                                                               << 8U) 
                                                                              | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___1959_) 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1202_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___1964_[2U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___3707_) 
                                                                                >> 0xbU)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___1888_) 
                                                                                >> 0xdU)))))))))))))))))))) 
                                     << 0xbU) | (QData)((IData)(
                                                                ((0x400U 
                                                                  & (IData)(vlSelf->top__DOT___3707_)) 
                                                                 | ((0x200U 
                                                                     & (IData)(vlSelf->top__DOT___3707_)) 
                                                                    | ((0x1f8U 
                                                                        & ((IData)(vlSelf->top__DOT___1888_) 
                                                                           >> 2U)) 
                                                                       | ((4U 
                                                                           & (IData)(vlSelf->top__DOT___3707_)) 
                                                                          | ((2U 
                                                                              & (vlSelf->top__DOT___1964_[1U] 
                                                                                >> 0x16U)) 
                                                                             | (1U 
                                                                                & (IData)(vlSelf->top__DOT___3707_))))))))))
                                 : 0x7fff4886388ULL);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__17(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__17\n"); );
    // Body
    vlSelf->top__DOT___0675_ = (1U & (vlSelf->top__DOT___3633_[1U] 
                                      & ((IData)(vlSelf->top__DOT___3690_) 
                                         >> 2U)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__205(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__205\n"); );
    // Body
    vlSelf->top__DOT___0391_ = (1U & (IData)((vlSelf->top__DOT___3769_ 
                                              >> 0x11U)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__206(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__206\n"); );
    // Body
    vlSelf->top__DOT___3647_ = 0x653U;
    vlSelf->top__DOT___0125_ = ((~ ((IData)(vlSelf->top__DOT___3647_) 
                                    >> 1U)) & (IData)(vlSelf->top__DOT___0127_));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__207(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__207\n"); );
    // Body
    vlSelf->top__DOT___0253_ = (1U & (IData)((vlSelf->top__DOT___3814_ 
                                              >> 0x2eU)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__18(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__18\n"); );
    // Body
    vlSelf->top__DOT___0453_ = (1U & ((IData)(vlSelf->top__DOT___1768_) 
                                      ^ (IData)((vlSelf->top__DOT___3799_ 
                                                 >> 0x25U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__19(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__19\n"); );
    // Body
    vlSelf->top__DOT___0016_ = (1U & (((IData)(vlSelf->top__DOT___3623_) 
                                       >> 2U) | (IData)(vlSelf->top__DOT___0343_)));
    vlSelf->top__DOT___0133_ = ((~ (IData)(vlSelf->top__DOT___0016_)) 
                                & (IData)(vlSelf->top__DOT___0134_));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__208(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__208\n"); );
    // Body
    vlSelf->top__DOT___3775_ = ((2U & (IData)(vlSelf->top__DOT___1922_))
                                 ? 0x792U : ((0x400U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT___3747_ 
                                                          >> 0x22U)) 
                                                 << 0xaU)) 
                                             | ((0x3f0U 
                                                 & ((vlSelf->top__DOT___2121_[1U] 
                                                     << 8U) 
                                                    | (0xf0U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 0x18U)))) 
                                                | ((8U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3747_ 
                                                                >> 0x1bU)) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (vlSelf->top__DOT___2121_[0U] 
                                                          >> 0x18U)) 
                                                      | ((IData)(vlSelf->top__DOT___1046_) 
                                                         << 1U))))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__209(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__209\n"); );
    // Body
    vlSelf->top__DOT___3794_ = ((IData)(vlSelf->top__DOT___0690_)
                                 ? 0x37U : ((0x30U 
                                             & ((vlSelf->top__DOT___2170_[1U] 
                                                 << 5U) 
                                                | (0x10U 
                                                   & (vlSelf->top__DOT___2170_[0U] 
                                                      >> 0x1bU)))) 
                                            | ((8U 
                                                & (vlSelf->top__DOT___3701_[0U] 
                                                   >> 0x17U)) 
                                               | ((6U 
                                                   & (vlSelf->top__DOT___2170_[0U] 
                                                      >> 0x1bU)) 
                                                  | (IData)(vlSelf->top__DOT___1206_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__210(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__210\n"); );
    // Body
    vlSelf->top__DOT___3791_ = ((IData)(vlSelf->top__DOT___1677_)
                                 ? (((QData)((IData)(
                                                     (0x7ffU 
                                                      & (vlSelf->top__DOT___2170_[2U] 
                                                         >> 6U)))) 
                                     << 0x21U) | (((QData)((IData)(
                                                                   (((IData)(
                                                                             (vlSelf->top__DOT___2070_ 
                                                                              >> 0x12U)) 
                                                                     << 0x11U) 
                                                                    | ((0x10000U 
                                                                        & (vlSelf->top__DOT___3701_[1U] 
                                                                           >> 2U)) 
                                                                       | ((0xfc00U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___2070_ 
                                                                                >> 0xbU)) 
                                                                              << 0xaU)) 
                                                                          | ((0x200U 
                                                                              & (vlSelf->top__DOT___3701_[1U] 
                                                                                >> 2U)) 
                                                                             | ((0x1f0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2070_ 
                                                                                >> 5U)) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0165_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___2070_ 
                                                                                >> 1U))))))))))) 
                                                   << 1U) 
                                                  | (QData)((IData)(vlSelf->top__DOT___0438_))))
                                 : 0x5d3dafd0ULL);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__20(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__20\n"); );
    // Body
    vlSelf->top__DOT___0717_ = ((IData)((vlSelf->top__DOT___3628_ 
                                         >> 1U)) & (IData)(vlSelf->top__DOT___0662_));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__211(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__211\n"); );
    // Body
    vlSelf->top__DOT___1225_ = (1U & ((IData)(vlSelf->top__DOT___3820_) 
                                      >> 3U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__21(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__21\n"); );
    // Body
    vlSelf->top__DOT___0736_ = (1U & ((IData)((vlSelf->top__DOT___3680_ 
                                               >> 0x25U)) 
                                      | (vlSelf->top__DOT___3751_ 
                                         >> 2U)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__212(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__212\n"); );
    // Body
    vlSelf->top__DOT___1888_ = ((0x3ffeU & (IData)(vlSelf->top__DOT___1888_)) 
                                | (IData)(vlSelf->top__DOT___0479_));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__213(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__213\n"); );
    // Body
    vlSelf->top__DOT___3707_ = 0x22a5U;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__23(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__23\n"); );
    // Body
    vlSelf->top__DOT___0259_ = ((IData)((vlSelf->top__DOT___3818_ 
                                         >> 0x23U)) 
                                & (IData)(vlSelf->top__DOT___0596_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__24\n"); );
    // Body
    vlSelf->top__DOT___0322_ = (1U & (~ ((((IData)(vlSelf->top__DOT___3647_) 
                                           >> 6U) & (IData)(vlSelf->top__DOT___0613_)) 
                                         | (IData)(vlSelf->top__DOT___0469_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__26(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__26\n"); );
    // Body
    vlSelf->top__DOT___0009_ = (1U & (((IData)(vlSelf->top__DOT___3810_) 
                                       >> 9U) ^ (IData)(vlSelf->top__DOT___0016_)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__214(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__214\n"); );
    // Body
    vlSelf->top__DOT___1922_ = (7U & (IData)((vlSelf->top__DOT___3670_ 
                                              >> 0x1bU)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__27(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__27\n"); );
    // Body
    vlSelf->top__DOT___1920_ = (((IData)((vlSelf->top__DOT___3643_ 
                                          >> 0x15U)) 
                                 << 0x16U) | ((0x200000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___3643_ 
                                                           >> 0x14U)) 
                                                  << 0x15U)) 
                                              | ((0x180000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3643_ 
                                                              >> 0x12U)) 
                                                     << 0x13U)) 
                                                 | ((0x40000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___3643_ 
                                                                 >> 0x11U)) 
                                                        << 0x12U)) 
                                                    | ((0x30000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___3643_ 
                                                                    >> 0xfU)) 
                                                           << 0x10U)) 
                                                       | ((0x8000U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___3643_ 
                                                                       >> 0xeU)) 
                                                              << 0xfU)) 
                                                          | ((0x7ffcU 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___3643_ 
                                                                          >> 1U)) 
                                                                 << 2U)) 
                                                             | (1U 
                                                                & ((IData)(vlSelf->top__DOT___3775_) 
                                                                   >> 7U)))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__28(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__28\n"); );
    // Body
    vlSelf->top__DOT___1483_ = (1U & ((IData)(vlSelf->top__DOT___0129_) 
                                      ^ (IData)(vlSelf->top__DOT___3775_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__29(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__29\n"); );
    // Body
    vlSelf->top__DOT___0953_ = (1U & ((IData)(vlSelf->top__DOT___0488_) 
                                      | ((IData)(vlSelf->top__DOT___3775_) 
                                         >> 7U)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__215(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__215\n"); );
    // Body
    vlSelf->top__DOT___0690_ = (1U & (((IData)(vlSelf->top__DOT___3647_) 
                                       >> 2U) ^ (IData)(vlSelf->top__DOT___0226_)));
    vlSelf->top__DOT____VdfgTmp_h24ff8132__0 = (((IData)(vlSelf->top__DOT___0690_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0154_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__30(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__30\n"); );
    // Body
    vlSelf->top__DOT___1936_[1U] = ((0x3fffffU & vlSelf->top__DOT___1936_[1U]) 
                                    | (0xffc00000U 
                                       & (((IData)(
                                                   (vlSelf->top__DOT___3661_ 
                                                    >> 0xcU)) 
                                           << 0x17U) 
                                          | (0x400000U 
                                             & ((IData)(vlSelf->top__DOT___3794_) 
                                                << 0x13U)))));
    vlSelf->top__DOT___1936_[2U] = (0xffffU & ((IData)(
                                                       (vlSelf->top__DOT___3661_ 
                                                        >> 0xcU)) 
                                               >> 9U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__31(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__31\n"); );
    // Body
    vlSelf->top__DOT___0332_ = (1U & (~ (((IData)(vlSelf->top__DOT___0469_) 
                                          & (IData)(vlSelf->top__DOT___0343_)) 
                                         | (((IData)(vlSelf->top__DOT___3794_) 
                                             >> 1U) 
                                            & (vlSelf->top__DOT___3624_[2U] 
                                               >> 2U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__216(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__216\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & 
                                               (~ (IData)(vlSelf->top__DOT___0014_))))) 
                              << 0x30U) | (((QData)((IData)(vlSelf->top__DOT___0084_)) 
                                            << 0x2eU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0149_)) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->top__DOT___2121_[1U] 
                                                                      >> 7U)))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (((IData)(
                                                                               (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                       << 0x1fU) 
                                                                      | (((IData)(vlSelf->top__DOT___1346_) 
                                                                          << 0x1eU) 
                                                                         | ((0x30000000U 
                                                                             & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0x19U)) 
                                                                            | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0x1bU)) 
                                                                               | ((0x7e00000U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0x19U) 
                                                                                | (0x1e00000U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 7U)))) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x14U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x3f8U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (IData)(vlSelf->top__DOT___0206_)))))))))))))))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      ((0x80U 
                                                                        & (vlSelf->top__DOT___2031_[1U] 
                                                                           >> 0xcU)) 
                                                                       | ((0x40U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                              << 6U)) 
                                                                          | ((0x38U 
                                                                              & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xcU)) 
                                                                             | ((6U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0306_)))))))))))));
    __Vtemp_1[1U] = ((0xfffe0000U & ((0xff800000U & 
                                      (vlSelf->top__DOT___2169_[1U] 
                                       << 0xaU)) | 
                                     (((IData)(vlSelf->top__DOT___0132_) 
                                       << 0x16U) | 
                                      (((IData)(vlSelf->top__DOT___0106_) 
                                        << 0x15U) | 
                                       (((IData)(vlSelf->top__DOT___1235_) 
                                         << 0x13U) 
                                        | (((IData)(vlSelf->top__DOT___0152_) 
                                            << 0x12U) 
                                           | ((IData)(vlSelf->top__DOT___0154_) 
                                              << 0x11U))))))) 
                     | (IData)(((((QData)((IData)((1U 
                                                   & (~ (IData)(vlSelf->top__DOT___0014_))))) 
                                  << 0x30U) | (((QData)((IData)(vlSelf->top__DOT___0084_)) 
                                                << 0x2eU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0149_)) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & (vlSelf->top__DOT___2121_[1U] 
                                                                          >> 7U)))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x26U)) 
                                                                           << 0x1fU) 
                                                                          | (((IData)(vlSelf->top__DOT___1346_) 
                                                                              << 0x1eU) 
                                                                             | ((0x30000000U 
                                                                                & (vlSelf->top__DOT___2121_[1U] 
                                                                                << 0x19U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x22U)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x7e00000U 
                                                                                & ((vlSelf->top__DOT___2121_[1U] 
                                                                                << 0x19U) 
                                                                                | (0x1e00000U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 7U)))) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x14U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___2031_[2U] 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x12U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 0x11U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x3f8U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 9U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (IData)(vlSelf->top__DOT___0206_)))))))))))))))))) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          ((0x80U 
                                                                            & (vlSelf->top__DOT___2031_[1U] 
                                                                               >> 0xcU)) 
                                                                           | ((0x40U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3747_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                              | ((0x38U 
                                                                                & (vlSelf->top__DOT___2031_[1U] 
                                                                                >> 0xcU)) 
                                                                                | ((6U 
                                                                                & (vlSelf->top__DOT___2121_[0U] 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0306_)))))))))))) 
                                >> 0x20U)));
    __Vtemp_1[2U] = (0x1ffffU & ((0x18000U & (vlSelf->top__DOT___2082_ 
                                              >> 0xcU)) 
                                 | ((0x4000U & (vlSelf->top__DOT___3651_[1U] 
                                                << 0xdU)) 
                                    | ((0x3000U & (vlSelf->top__DOT___2082_ 
                                                   >> 0xcU)) 
                                       | ((0x800U & 
                                           (vlSelf->top__DOT___3651_[0U] 
                                            >> 0x13U)) 
                                          | ((0x780U 
                                              & (vlSelf->top__DOT___2082_ 
                                                 >> 0xcU)) 
                                             | ((0x40U 
                                                 & (vlSelf->top__DOT___3651_[0U] 
                                                    >> 0x13U)) 
                                                | ((0x38U 
                                                    & (vlSelf->top__DOT___2082_ 
                                                       >> 0xcU)) 
                                                   | ((6U 
                                                       & (vlSelf->top__DOT___2169_[1U] 
                                                          >> 0x16U)) 
                                                      | ((1U 
                                                          & (vlSelf->top__DOT___3651_[0U] 
                                                             >> 0x13U)) 
                                                         | ((0x1ffffU 
                                                             & ((IData)(vlSelf->top__DOT___0132_) 
                                                                >> 0xaU)) 
                                                            | ((0x1ffffU 
                                                                & ((IData)(vlSelf->top__DOT___0106_) 
                                                                   >> 0xbU)) 
                                                               | ((0x1ffffU 
                                                                   & ((IData)(vlSelf->top__DOT___1235_) 
                                                                      >> 0xdU)) 
                                                                  | ((0x1ffffU 
                                                                      & ((IData)(vlSelf->top__DOT___0152_) 
                                                                         >> 0xeU)) 
                                                                     | ((IData)(vlSelf->top__DOT___0154_) 
                                                                        >> 0xfU)))))))))))))));
    if (vlSelf->top__DOT___0320_) {
        vlSelf->top__DOT___3701_[0U] = __Vtemp_1[0U];
        vlSelf->top__DOT___3701_[1U] = __Vtemp_1[1U];
        vlSelf->top__DOT___3701_[2U] = __Vtemp_1[2U];
    } else {
        vlSelf->top__DOT___3701_[0U] = 0U;
        vlSelf->top__DOT___3701_[1U] = 0U;
        vlSelf->top__DOT___3701_[2U] = 0U;
    }
    vlSelf->top__DOT___0165_ = (1U & (vlSelf->top__DOT___3701_[1U] 
                                      >> 5U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__32\n"); );
    // Body
    vlSelf->top__DOT___0466_ = (1U & (((IData)(vlSelf->top__DOT___3707_) 
                                       >> 0xcU) | (IData)(vlSelf->top__DOT___0404_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__33(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__33\n"); );
    // Body
    vlSelf->top__DOT___0580_ = (1U & ((IData)((vlSelf->top__DOT___3643_ 
                                               >> 0x11U)) 
                                      ^ (IData)(vlSelf->top__DOT___0259_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__35(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__35\n"); );
    // Body
    vlSelf->top__DOT___1391_ = (1U & ((IData)((vlSelf->top__DOT___3814_ 
                                               >> 0x23U)) 
                                      | (IData)(vlSelf->top__DOT___1483_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__36(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__36\n"); );
    // Body
    vlSelf->top__DOT___0689_ = ((vlSelf->top__DOT___3708_ 
                                 >> 0x14U) & (IData)(vlSelf->top__DOT___0690_));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__217(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__217\n"); );
    // Body
    vlSelf->top__DOT___0152_ = (1U & (IData)((vlSelf->top__DOT___3799_ 
                                              >> 0xbU)));
    vlSelf->top__DOT___0320_ = (1U & (IData)((vlSelf->top__DOT___3799_ 
                                              >> 0x1fU)));
    vlSelf->top__DOT____VdfgTmp_hfd4b7ddf__0 = ((IData)(vlSelf->top__DOT___0154_) 
                                                | (IData)(vlSelf->top__DOT___0152_));
    vlSelf->top__DOT___0769_ = ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                & (IData)(vlSelf->top__DOT___0226_));
    vlSelf->top__DOT___0318_ = ((~ (IData)((vlSelf->top__DOT___3799_ 
                                            >> 0xeU))) 
                                & (IData)(vlSelf->top__DOT___0320_));
    vlSelf->top__DOT___0014_ = (1U & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                      | (IData)(vlSelf->top__DOT___0128_)));
    vlSelf->top__DOT___0082_ = (1U & (~ (IData)(vlSelf->top__DOT____VdfgTmp_hfd4b7ddf__0)));
    vlSelf->top__DOT___1527_ = (1U & (~ ((IData)(vlSelf->top__DOT___0769_) 
                                         & (IData)(vlSelf->top__DOT___0152_))));
    vlSelf->top__DOT___1235_ = ((IData)(vlSelf->top__DOT___0152_) 
                                | (IData)(vlSelf->top__DOT___0014_));
    vlSelf->top__DOT___0775_ = (1U & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                      + (IData)(vlSelf->top__DOT___0127_)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__218(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__218\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    if ((vlSelf->in_data[0x17U] >> 0x1fU)) {
        __Vtemp_4[1U] = 0U;
        vlSelf->top__DOT___3651_[0U] = 0x35c378dbU;
        vlSelf->top__DOT___3651_[1U] = __Vtemp_4[1U];
        vlSelf->top__DOT___3651_[2U] = 0U;
    } else {
        __Vtemp_4[1U] = (((IData)(((0xfffffffffffffffeULL 
                                    & (((QData)((IData)(
                                                        vlSelf->in_data[0x13U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->in_data[0x12U])) 
                                         << 0x1eU) 
                                        | (0x3ffffffffffffffeULL 
                                           & ((QData)((IData)(
                                                              vlSelf->in_data[0x11U])) 
                                              >> 2U))))) 
                                   | (QData)((IData)(vlSelf->top__DOT___0127_)))) 
                          >> 0x1dU) | ((IData)((((0xfffffffffffffffeULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->in_data[0x13U])) 
                                                      << 0x3eU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->in_data[0x12U])) 
                                                         << 0x1eU) 
                                                        | (0x3ffffffffffffffeULL 
                                                           & ((QData)((IData)(
                                                                              vlSelf->in_data[0x11U])) 
                                                              >> 2U))))) 
                                                 | (QData)((IData)(vlSelf->top__DOT___0127_))) 
                                                >> 0x20U)) 
                                       << 3U));
        vlSelf->top__DOT___3651_[0U] = (((IData)(((0xfffffffffffffffeULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->in_data[0x13U])) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->in_data[0x12U])) 
                                                          << 0x1eU) 
                                                         | (0x3ffffffffffffffeULL 
                                                            & ((QData)((IData)(
                                                                               vlSelf->in_data[0x11U])) 
                                                               >> 2U))))) 
                                                  | (QData)((IData)(vlSelf->top__DOT___0127_)))) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT___0043_) 
                                                    << 2U) 
                                                   | (IData)(vlSelf->top__DOT___0132_)));
        vlSelf->top__DOT___3651_[1U] = __Vtemp_4[1U];
        vlSelf->top__DOT___3651_[2U] = ((IData)((((0xfffffffffffffffeULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->in_data[0x13U])) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->in_data[0x12U])) 
                                                          << 0x1eU) 
                                                         | (0x3ffffffffffffffeULL 
                                                            & ((QData)((IData)(
                                                                               vlSelf->in_data[0x11U])) 
                                                               >> 2U))))) 
                                                  | (QData)((IData)(vlSelf->top__DOT___0127_))) 
                                                 >> 0x20U)) 
                                        >> 0x1dU);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__219(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__219\n"); );
    // Body
    vlSelf->top__DOT___3747_ = ((IData)(vlSelf->top__DOT___0241_)
                                 ? (((QData)((IData)(
                                                     (0xfffffffeU 
                                                      & ((vlSelf->in_data[0x22U] 
                                                          << 0x11U) 
                                                         | (0x1fffeU 
                                                            & (vlSelf->in_data[0x21U] 
                                                               >> 0xfU)))))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT___1716_) 
                                                                  << 7U) 
                                                                 | ((0x40U 
                                                                     & (vlSelf->top__DOT___1996_ 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSelf->top__DOT___1365_) 
                                                                        << 5U) 
                                                                       | ((IData)(vlSelf->top__DOT___0154_) 
                                                                          << 4U)))))))
                                 : 0x1ac52f25ULL);
    vlSelf->top__DOT___1346_ = (1U & (IData)((vlSelf->top__DOT___3747_ 
                                              >> 0x25U)));
    vlSelf->top__DOT___0206_ = (1U & (IData)((vlSelf->top__DOT___3747_ 
                                              >> 7U)));
    vlSelf->top__DOT___1046_ = (1U & (~ ((IData)(vlSelf->top__DOT___0134_) 
                                         & (IData)(vlSelf->top__DOT___1346_))));
    vlSelf->top__DOT___1359_ = (1U & ((IData)(vlSelf->top__DOT___0206_) 
                                      + (vlSelf->in_data[0x36U] 
                                         >> 0x12U)));
    vlSelf->top__DOT___0438_ = ((IData)(vlSelf->top__DOT___0206_) 
                                & (IData)(vlSelf->top__DOT___0277_));
    vlSelf->top__DOT___1928_ = ((0x1ffffdfU & vlSelf->top__DOT___1928_) 
                                | (((IData)(vlSelf->top__DOT___0438_) 
                                    & (IData)(vlSelf->top__DOT___0690_)) 
                                   << 5U));
    vlSelf->top__DOT___0593_ = ((IData)(vlSelf->top__DOT___0127_) 
                                & (IData)(vlSelf->top__DOT___0438_));
    vlSelf->top__DOT___0354_ = ((IData)(vlSelf->top__DOT___0438_) 
                                & (IData)(vlSelf->top__DOT___0690_));
    vlSelf->top__DOT___0235_ = ((IData)(vlSelf->top__DOT___0438_) 
                                ^ (IData)(vlSelf->top__DOT___0134_));
    vlSelf->top__DOT___0106_ = ((IData)(vlSelf->top__DOT___0438_) 
                                ^ (IData)(vlSelf->top__DOT___0125_));
    vlSelf->top__DOT___0270_ = (1U & (~ ((IData)(vlSelf->top__DOT___0134_) 
                                         | ((IData)(vlSelf->top__DOT___0438_) 
                                            & (IData)(vlSelf->top__DOT___0018_)))));
    vlSelf->top__DOT___0524_ = (1U & (~ (((IData)(vlSelf->top__DOT___0438_) 
                                          & vlSelf->in_data[0x1dU]) 
                                         | ((~ (IData)(vlSelf->top__DOT___0438_)) 
                                            & (vlSelf->in_data[0x41U] 
                                               >> 0x10U)))));
    vlSelf->top__DOT___1935_[1U] = ((0xf3ffffffU & 
                                     vlSelf->top__DOT___1935_[1U]) 
                                    | (0xfc000000U 
                                       & (0x8000000U 
                                          | ((IData)(vlSelf->top__DOT___0270_) 
                                             << 0x1aU))));
    vlSelf->top__DOT___0383_ = ((IData)(vlSelf->top__DOT___0524_) 
                                | (IData)(vlSelf->top__DOT___0226_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__37(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__37\n"); );
    // Body
    vlSelf->top__DOT___0168_ = (1U & ((~ (IData)(vlSelf->top__DOT___0135_)) 
                                      & (vlSelf->top__DOT___3701_[0U] 
                                         >> 4U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__38(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__38\n"); );
    // Body
    vlSelf->top__DOT___0656_ = (1U & ((IData)((vlSelf->top__DOT___3636_ 
                                               >> 0x22U)) 
                                      ^ (vlSelf->top__DOT___3701_[1U] 
                                         >> 0xbU)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__39(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__39\n"); );
    // Body
    vlSelf->top__DOT___0723_ = ((IData)(vlSelf->top__DOT___0595_) 
                                & (IData)(vlSelf->top__DOT___0165_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__40(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__40\n"); );
    // Body
    vlSelf->out_data[0x15U] = ((0xfffffffeU & vlSelf->out_data[0x15U]) 
                               | ((IData)(vlSelf->top__DOT___0580_) 
                                  & (vlSelf->top__DOT___3751_ 
                                     >> 0xeU)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__41(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__41\n"); );
    // Body
    vlSelf->top__DOT___0034_ = (1U & ((IData)(vlSelf->top__DOT___0152_) 
                                      | ((IData)(vlSelf->top__DOT___3658_) 
                                         >> 2U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__42(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__42\n"); );
    // Body
    vlSelf->top__DOT___0854_ = ((IData)(vlSelf->top__DOT___0152_) 
                                | (IData)(vlSelf->top__DOT___0988_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__43(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__43\n"); );
    // Body
    vlSelf->top__DOT___0150_ = ((~ (IData)(vlSelf->top__DOT___0152_)) 
                                & (IData)(vlSelf->top__DOT___0125_));
    vlSelf->top__DOT___1663_ = (1U & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                      | (IData)(vlSelf->top__DOT___0690_)));
    vlSelf->top__DOT____VdfgTmp_h3a18c6cc__0 = (1U 
                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                   | ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->top__DOT___0320_)))));
    vlSelf->top__DOT____VdfgTmp_he22cdd9f__0 = (1U 
                                                & (((IData)(vlSelf->top__DOT___3647_) 
                                                    >> 6U) 
                                                   | ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                      & (IData)(vlSelf->top__DOT___0152_))));
    vlSelf->top__DOT___0275_ = (1U & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                      ^ (IData)((vlSelf->top__DOT___3747_ 
                                                 >> 5U))));
    vlSelf->top__DOT___0485_ = ((~ (IData)(vlSelf->top__DOT___0438_)) 
                                & (IData)(vlSelf->top__DOT___0152_));
    vlSelf->top__DOT___0608_ = (1U & (~ (((IData)(vlSelf->top__DOT___0082_) 
                                          & (IData)(vlSelf->top__DOT___0014_)) 
                                         | ((IData)(vlSelf->top__DOT___0438_) 
                                            & (IData)(vlSelf->top__DOT___0152_)))));
    vlSelf->top__DOT___0315_ = ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                & (IData)(vlSelf->top__DOT___0438_));
    vlSelf->top__DOT___0237_ = (1U & (~ ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                         & (IData)(vlSelf->top__DOT___0438_))));
    vlSelf->top__DOT___0334_ = (1U ^ ((IData)(vlSelf->top__DOT___0320_) 
                                      ^ (IData)(vlSelf->top__DOT___0524_)));
    vlSelf->top__DOT___0379_ = ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                & (IData)(vlSelf->top__DOT___0150_));
    vlSelf->top__DOT___0401_ = (1U & (~ (IData)(vlSelf->top__DOT____VdfgTmp_h3a18c6cc__0)));
    vlSelf->top__DOT___0640_ = ((~ (IData)(vlSelf->top__DOT____VdfgTmp_he22cdd9f__0)) 
                                & (IData)(vlSelf->top__DOT___0082_));
    vlSelf->top__DOT___1750_ = ((IData)(vlSelf->top__DOT___0318_) 
                                ^ (IData)(vlSelf->top__DOT___0315_));
    vlSelf->top__DOT___0232_ = ((IData)(vlSelf->top__DOT___0237_) 
                                & (~ (IData)((vlSelf->top__DOT___3799_ 
                                              >> 4U))));
    vlSelf->top__DOT___0118_ = (1U & ((IData)(vlSelf->top__DOT___0401_) 
                                      | (vlSelf->in_data[0x34U] 
                                         >> 7U)));
    vlSelf->top__DOT___1935_[0U] = ((0xff3fffffU & 
                                     vlSelf->top__DOT___1935_[0U]) 
                                    | (0xffc00000U 
                                       & (((IData)(vlSelf->top__DOT___0206_) 
                                           << 0x17U) 
                                          | ((IData)(vlSelf->top__DOT___0401_) 
                                             << 0x16U))));
    vlSelf->top__DOT___0625_ = ((IData)(vlSelf->top__DOT___0270_) 
                                ^ (IData)(vlSelf->top__DOT___0401_));
    vlSelf->top__DOT___0506_ = (1U & (((((IData)(vlSelf->top__DOT___0118_) 
                                         << 2U) | (IData)(vlSelf->top__DOT___3659_)) 
                                       + ((4U & (vlSelf->in_data[0x2aU] 
                                                 >> 3U)) 
                                          | ((2U & 
                                              ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                               << 1U)) 
                                             | (IData)(vlSelf->top__DOT___0320_)))) 
                                      >> 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__45(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__45\n"); );
    // Body
    vlSelf->top__DOT___0678_ = (1U & ((IData)(vlSelf->top__DOT___0130_) 
                                      | (~ (IData)(vlSelf->top__DOT___0320_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__47(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__47\n"); );
    // Body
    vlSelf->top__DOT___0505_ = (1U & ((IData)(vlSelf->top__DOT___0769_) 
                                      | (IData)((vlSelf->top__DOT___3655_ 
                                                 >> 0x1eU))));
    vlSelf->top__DOT___2012_ = ((0xffffffffffeULL & 
                                 (vlSelf->top__DOT___3655_ 
                                  >> 9U)) | (QData)((IData)(vlSelf->top__DOT___0082_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__48(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__48\n"); );
    // Body
    vlSelf->top__DOT___0795_ = ((IData)(vlSelf->top__DOT___0769_) 
                                | (IData)(vlSelf->top__DOT___0453_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__49(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__49\n"); );
    // Body
    vlSelf->top__DOT___0281_ = (1U & ((IData)(vlSelf->top__DOT___0318_) 
                                      ^ (IData)(vlSelf->top__DOT___3732_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__50(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__50\n"); );
    // Body
    vlSelf->top__DOT___1627_ = (1U & ((IData)(vlSelf->top__DOT___0994_) 
                                      | (~ (IData)(vlSelf->top__DOT___0014_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__51(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__51\n"); );
    // Body
    vlSelf->top__DOT___0261_ = ((IData)(vlSelf->top__DOT___0262_) 
                                & (~ (IData)(vlSelf->top__DOT___0014_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__52(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__52\n"); );
    // Body
    vlSelf->top__DOT___1386_ = (1U & (((0x2000000U 
                                        | (((IData)(vlSelf->top__DOT___0226_) 
                                            << 0x1bU) 
                                           | ((0x1000000U 
                                               & ((IData)(vlSelf->top__DOT___3647_) 
                                                  << 0xdU)) 
                                              | ((0xf00000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___1893_ 
                                                              >> 7U)) 
                                                     << 0x14U)) 
                                                 | ((0x80000U 
                                                     & ((IData)(vlSelf->top__DOT___3647_) 
                                                        << 0xdU)) 
                                                    | ((0x60000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___1893_ 
                                                                    >> 4U)) 
                                                           << 0x11U)) 
                                                       | ((0x10000U 
                                                           & ((IData)(vlSelf->top__DOT___3647_) 
                                                              << 0xdU)) 
                                                          | ((0x8000U 
                                                              & ((IData)(vlSelf->top__DOT___3647_) 
                                                                 << 0xdU)) 
                                                             | ((0x4000U 
                                                                 & ((IData)(vlSelf->top__DOT___3647_) 
                                                                    << 0xdU)) 
                                                                | ((0x2000U 
                                                                    & ((IData)(vlSelf->top__DOT___3647_) 
                                                                       << 0xdU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0241_) 
                                                                       << 0xcU) 
                                                                      | ((0x800U 
                                                                          & (IData)(vlSelf->top__DOT___3647_)) 
                                                                         | ((0x780U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___1893_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                            | ((0x40U 
                                                                                & (IData)(vlSelf->top__DOT___3647_)) 
                                                                               | ((0x30U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1893_ 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (IData)(vlSelf->top__DOT___3647_))))))))))))))))) 
                                       + ((0x1ff80000U 
                                           & (vlSelf->in_data[0x2eU] 
                                              << 0x12U)) 
                                          | ((0x40000U 
                                              & ((IData)(vlSelf->top__DOT___3647_) 
                                                 << 7U)) 
                                             | ((0x3c000U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___1893_ 
                                                             >> 7U)) 
                                                    << 0xeU)) 
                                                | ((0x2000U 
                                                    & ((IData)(vlSelf->top__DOT___3647_) 
                                                       << 7U)) 
                                                   | ((0x1800U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___1893_ 
                                                                   >> 4U)) 
                                                          << 0xbU)) 
                                                      | ((0x400U 
                                                          & ((IData)(vlSelf->top__DOT___3647_) 
                                                             << 7U)) 
                                                         | ((0x200U 
                                                             & ((IData)(vlSelf->top__DOT___3647_) 
                                                                << 7U)) 
                                                            | ((0x100U 
                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                   << 7U)) 
                                                               | ((0x80U 
                                                                   & ((IData)(vlSelf->top__DOT___3647_) 
                                                                      << 7U)) 
                                                                  | (((IData)(vlSelf->top__DOT___0128_) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->top__DOT___0277_) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->top__DOT___0127_) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->top__DOT___0128_) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U)))))))))))))))) 
                                      >> 0x1cU));
    vlSelf->top__DOT___1287_ = (1U & ((((0x80U & ((IData)(
                                                          (vlSelf->top__DOT___1893_ 
                                                           >> 7U)) 
                                                  << 7U)) 
                                        | ((0x40U & (IData)(vlSelf->top__DOT___3647_)) 
                                           | ((0x30U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___1893_ 
                                                           >> 4U)) 
                                                  << 4U)) 
                                              | (0xfU 
                                                 & (IData)(vlSelf->top__DOT___3647_))))) 
                                       + ((0x80U & 
                                           ((IData)(vlSelf->top__DOT___3647_) 
                                            << 7U)) 
                                          | (((IData)(vlSelf->top__DOT___0128_) 
                                              << 6U) 
                                             | (((IData)(vlSelf->top__DOT___0277_) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->top__DOT___0127_) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top__DOT___0128_) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top__DOT___0082_) 
                                                          << 2U) 
                                                         | ((IData)(vlSelf->top__DOT___0226_) 
                                                            << 1U)))))))) 
                                      >> 7U));
    vlSelf->top__DOT___1534_ = (1U & ((((0x20000U & 
                                         ((IData)((vlSelf->top__DOT___1893_ 
                                                   >> 4U)) 
                                          << 0x11U)) 
                                        | ((0x10000U 
                                            & ((IData)(vlSelf->top__DOT___3647_) 
                                               << 0xdU)) 
                                           | ((0x8000U 
                                               & ((IData)(vlSelf->top__DOT___3647_) 
                                                  << 0xdU)) 
                                              | ((0x4000U 
                                                  & ((IData)(vlSelf->top__DOT___3647_) 
                                                     << 0xdU)) 
                                                 | ((0x2000U 
                                                     & ((IData)(vlSelf->top__DOT___3647_) 
                                                        << 0xdU)) 
                                                    | (((IData)(vlSelf->top__DOT___0241_) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & (IData)(vlSelf->top__DOT___3647_)) 
                                                          | ((0x780U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___1893_ 
                                                                          >> 7U)) 
                                                                 << 7U)) 
                                                             | ((0x40U 
                                                                 & (IData)(vlSelf->top__DOT___3647_)) 
                                                                | ((0x30U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___1893_ 
                                                                                >> 4U)) 
                                                                       << 4U)) 
                                                                   | (0xfU 
                                                                      & (IData)(vlSelf->top__DOT___3647_)))))))))))) 
                                       + ((0x3c000U 
                                           & ((IData)(
                                                      (vlSelf->top__DOT___1893_ 
                                                       >> 7U)) 
                                              << 0xeU)) 
                                          | ((0x2000U 
                                              & ((IData)(vlSelf->top__DOT___3647_) 
                                                 << 7U)) 
                                             | ((0x1800U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___1893_ 
                                                             >> 4U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(vlSelf->top__DOT___3647_) 
                                                       << 7U)) 
                                                   | ((0x200U 
                                                       & ((IData)(vlSelf->top__DOT___3647_) 
                                                          << 7U)) 
                                                      | ((0x100U 
                                                          & ((IData)(vlSelf->top__DOT___3647_) 
                                                             << 7U)) 
                                                         | ((0x80U 
                                                             & ((IData)(vlSelf->top__DOT___3647_) 
                                                                << 7U)) 
                                                            | (((IData)(vlSelf->top__DOT___0128_) 
                                                                << 6U) 
                                                               | (((IData)(vlSelf->top__DOT___0277_) 
                                                                   << 5U) 
                                                                  | (((IData)(vlSelf->top__DOT___0127_) 
                                                                      << 4U) 
                                                                     | (((IData)(vlSelf->top__DOT___0128_) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSelf->top__DOT___0082_) 
                                                                            << 2U) 
                                                                           | ((IData)(vlSelf->top__DOT___0226_) 
                                                                              << 1U)))))))))))))) 
                                      >> 0x11U));
    vlSelf->top__DOT___1381_ = (1U & (((0x2000000U 
                                        | ((0x1000000U 
                                            & ((IData)(vlSelf->top__DOT___3647_) 
                                               << 0xdU)) 
                                           | ((0xf00000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___1893_ 
                                                           >> 7U)) 
                                                  << 0x14U)) 
                                              | ((0x80000U 
                                                  & ((IData)(vlSelf->top__DOT___3647_) 
                                                     << 0xdU)) 
                                                 | ((0x60000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___1893_ 
                                                                 >> 4U)) 
                                                        << 0x11U)) 
                                                    | ((0x10000U 
                                                        & ((IData)(vlSelf->top__DOT___3647_) 
                                                           << 0xdU)) 
                                                       | ((0x8000U 
                                                           & ((IData)(vlSelf->top__DOT___3647_) 
                                                              << 0xdU)) 
                                                          | ((0x4000U 
                                                              & ((IData)(vlSelf->top__DOT___3647_) 
                                                                 << 0xdU)) 
                                                             | ((0x2000U 
                                                                 & ((IData)(vlSelf->top__DOT___3647_) 
                                                                    << 0xdU)) 
                                                                | (((IData)(vlSelf->top__DOT___0241_) 
                                                                    << 0xcU) 
                                                                   | ((0x800U 
                                                                       & (IData)(vlSelf->top__DOT___3647_)) 
                                                                      | ((0x780U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___1893_ 
                                                                                >> 7U)) 
                                                                             << 7U)) 
                                                                         | ((0x40U 
                                                                             & (IData)(vlSelf->top__DOT___3647_)) 
                                                                            | ((0x30U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1893_ 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                               | (0xfU 
                                                                                & (IData)(vlSelf->top__DOT___3647_)))))))))))))))) 
                                       + ((0x3f80000U 
                                           & (vlSelf->in_data[0x2eU] 
                                              << 0x12U)) 
                                          | ((0x40000U 
                                              & ((IData)(vlSelf->top__DOT___3647_) 
                                                 << 7U)) 
                                             | ((0x3c000U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___1893_ 
                                                             >> 7U)) 
                                                    << 0xeU)) 
                                                | ((0x2000U 
                                                    & ((IData)(vlSelf->top__DOT___3647_) 
                                                       << 7U)) 
                                                   | ((0x1800U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___1893_ 
                                                                   >> 4U)) 
                                                          << 0xbU)) 
                                                      | ((0x400U 
                                                          & ((IData)(vlSelf->top__DOT___3647_) 
                                                             << 7U)) 
                                                         | ((0x200U 
                                                             & ((IData)(vlSelf->top__DOT___3647_) 
                                                                << 7U)) 
                                                            | ((0x100U 
                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                   << 7U)) 
                                                               | ((0x80U 
                                                                   & ((IData)(vlSelf->top__DOT___3647_) 
                                                                      << 7U)) 
                                                                  | (((IData)(vlSelf->top__DOT___0128_) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->top__DOT___0277_) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->top__DOT___0127_) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->top__DOT___0128_) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U)))))))))))))))) 
                                      >> 0x19U));
    vlSelf->top__DOT___1520_ = (1U & ((((0x1000000U 
                                         & ((IData)(vlSelf->top__DOT___3647_) 
                                            << 0xdU)) 
                                        | ((0xf00000U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT___1893_ 
                                                        >> 7U)) 
                                               << 0x14U)) 
                                           | ((0x80000U 
                                               & ((IData)(vlSelf->top__DOT___3647_) 
                                                  << 0xdU)) 
                                              | ((0x60000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___1893_ 
                                                              >> 4U)) 
                                                     << 0x11U)) 
                                                 | ((0x10000U 
                                                     & ((IData)(vlSelf->top__DOT___3647_) 
                                                        << 0xdU)) 
                                                    | ((0x8000U 
                                                        & ((IData)(vlSelf->top__DOT___3647_) 
                                                           << 0xdU)) 
                                                       | ((0x4000U 
                                                           & ((IData)(vlSelf->top__DOT___3647_) 
                                                              << 0xdU)) 
                                                          | ((0x2000U 
                                                              & ((IData)(vlSelf->top__DOT___3647_) 
                                                                 << 0xdU)) 
                                                             | (((IData)(vlSelf->top__DOT___0241_) 
                                                                 << 0xcU) 
                                                                | ((0x800U 
                                                                    & (IData)(vlSelf->top__DOT___3647_)) 
                                                                   | ((0x780U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___1893_ 
                                                                                >> 7U)) 
                                                                          << 7U)) 
                                                                      | ((0x40U 
                                                                          & (IData)(vlSelf->top__DOT___3647_)) 
                                                                         | ((0x30U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___1893_ 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                            | (0xfU 
                                                                               & (IData)(vlSelf->top__DOT___3647_))))))))))))))) 
                                       + ((0x1f80000U 
                                           & (vlSelf->in_data[0x2eU] 
                                              << 0x12U)) 
                                          | ((0x40000U 
                                              & ((IData)(vlSelf->top__DOT___3647_) 
                                                 << 7U)) 
                                             | ((0x3c000U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___1893_ 
                                                             >> 7U)) 
                                                    << 0xeU)) 
                                                | ((0x2000U 
                                                    & ((IData)(vlSelf->top__DOT___3647_) 
                                                       << 7U)) 
                                                   | ((0x1800U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___1893_ 
                                                                   >> 4U)) 
                                                          << 0xbU)) 
                                                      | ((0x400U 
                                                          & ((IData)(vlSelf->top__DOT___3647_) 
                                                             << 7U)) 
                                                         | ((0x200U 
                                                             & ((IData)(vlSelf->top__DOT___3647_) 
                                                                << 7U)) 
                                                            | ((0x100U 
                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                   << 7U)) 
                                                               | ((0x80U 
                                                                   & ((IData)(vlSelf->top__DOT___3647_) 
                                                                      << 7U)) 
                                                                  | (((IData)(vlSelf->top__DOT___0128_) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->top__DOT___0277_) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->top__DOT___0127_) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->top__DOT___0128_) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U)))))))))))))))) 
                                      >> 0x18U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__53(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__53\n"); );
    // Body
    vlSelf->top__DOT___0692_ = ((IData)(vlSelf->top__DOT___1666_) 
                                | (IData)(vlSelf->top__DOT___0082_));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__220(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__220\n"); );
    // Init
    CData/*0:0*/ top__DOT____VdfgTmp_hf07abe06__0;
    top__DOT____VdfgTmp_hf07abe06__0 = 0;
    // Body
    vlSelf->top__DOT___0043_ = (1U & (~ ((IData)((vlSelf->top__DOT___3799_ 
                                                  >> 0xeU)) 
                                         & (IData)(vlSelf->top__DOT___0127_))));
    top__DOT____VdfgTmp_hf07abe06__0 = ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                        & (IData)(vlSelf->top__DOT___0043_));
    vlSelf->top__DOT___0084_ = (1U & (~ (IData)(top__DOT____VdfgTmp_hf07abe06__0)));
    vlSelf->top__DOT___0265_ = ((IData)(top__DOT____VdfgTmp_hf07abe06__0) 
                                & (IData)(vlSelf->top__DOT___0154_));
    vlSelf->top__DOT___0080_ = ((IData)(vlSelf->top__DOT___0084_) 
                                & (IData)(vlSelf->top__DOT____VdfgTmp_hfd4b7ddf__0));
    vlSelf->top__DOT___0174_ = ((IData)(vlSelf->top__DOT___0320_) 
                                | (IData)(vlSelf->top__DOT___0265_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__54(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__54\n"); );
    // Body
    vlSelf->top__DOT___0476_ = ((~ (vlSelf->top__DOT___3651_[0U] 
                                    >> 0x13U)) & (IData)(vlSelf->top__DOT___0477_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__55(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__55\n"); );
    // Body
    vlSelf->top__DOT___0639_ = (1U & (~ (((IData)(vlSelf->top__DOT___0132_) 
                                          & (IData)(vlSelf->top__DOT___0320_)) 
                                         | (vlSelf->top__DOT___3651_[1U] 
                                            >> 0x15U))));
    vlSelf->top__DOT___0149_ = (1U & ((IData)(vlSelf->top__DOT___0082_) 
                                      ^ (vlSelf->top__DOT___3651_[0U] 
                                         >> 9U)));
    vlSelf->top__DOT___0733_ = (1U & (~ (((~ (IData)(vlSelf->top__DOT___0320_)) 
                                          & (vlSelf->in_data[3U] 
                                             >> 7U)) 
                                         | ((IData)(vlSelf->top__DOT___0149_) 
                                            & (IData)(vlSelf->top__DOT___0127_)))));
    vlSelf->top__DOT___1913_ = ((0xffffffffefULL & vlSelf->top__DOT___1913_) 
                                | ((QData)((IData)(vlSelf->top__DOT___0733_)) 
                                   << 4U));
    vlSelf->top__DOT___0058_ = (1U & (~ ((IData)(vlSelf->top__DOT___0084_) 
                                         | ((IData)(vlSelf->top__DOT___0733_) 
                                            & (IData)(vlSelf->top__DOT___0318_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__56(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__56\n"); );
    // Body
    vlSelf->top__DOT___0030_ = (1U & ((~ (IData)((vlSelf->top__DOT___3747_ 
                                                  >> 0x14U))) 
                                      & ((IData)(vlSelf->top__DOT___3678_) 
                                         >> 6U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__58(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__58\n"); );
    // Body
    vlSelf->top__DOT___1351_ = (1U & ((((0x40U & ((IData)(
                                                          (vlSelf->top__DOT___3670_ 
                                                           >> 7U)) 
                                                  << 6U)) 
                                        | ((0x20U & 
                                            ((IData)(
                                                     (vlSelf->top__DOT___1988_ 
                                                      >> 0x31U)) 
                                             << 5U)) 
                                           | ((0x10U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___3670_ 
                                                           >> 5U)) 
                                                  << 4U)) 
                                              | ((0xcU 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___1988_ 
                                                              >> 0x2eU)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___3670_ 
                                                                 >> 2U)) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->top__DOT___0206_)))))) 
                                       + ((vlSelf->in_data[0x36U] 
                                           << 0xeU) 
                                          | (vlSelf->in_data[0x36U] 
                                             >> 0x12U))) 
                                      >> 6U));
    vlSelf->top__DOT___1353_ = (1U & ((((4U & ((IData)(
                                                       (vlSelf->top__DOT___1988_ 
                                                        >> 0x2eU)) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          (vlSelf->top__DOT___3670_ 
                                                           >> 2U)) 
                                                  << 1U)) 
                                           | (IData)(vlSelf->top__DOT___0206_))) 
                                       + ((vlSelf->in_data[0x36U] 
                                           << 0xeU) 
                                          | (vlSelf->in_data[0x36U] 
                                             >> 0x12U))) 
                                      >> 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__59(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__59\n"); );
    // Body
    vlSelf->top__DOT___0929_ = (1U & (((((IData)(vlSelf->top__DOT___1359_) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT___0152_) 
                                                    << 2U) 
                                                   | ((IData)(vlSelf->top__DOT___0320_) 
                                                      << 1U))) 
                                       + ((8U & (vlSelf->top__DOT___3660_ 
                                                 << 3U)) 
                                          | (IData)(vlSelf->top__DOT____VdfgTmp_h24ff8132__0))) 
                                      >> 3U));
    vlSelf->top__DOT___2040_ = (((QData)((IData)((0x3ffU 
                                                  & (vlSelf->in_data[0x29U] 
                                                     >> 0x15U)))) 
                                 << 0x1aU) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0043_) 
                                                               << 0x19U) 
                                                              | (((IData)(vlSelf->top__DOT___0275_) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->top__DOT___0043_) 
                                                                     << 0x17U) 
                                                                    | (((IData)(vlSelf->top__DOT___0082_) 
                                                                        << 0x16U) 
                                                                       | ((0x200000U 
                                                                           & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                              << 0x15U)) 
                                                                          | ((vlSelf->top__DOT___3660_ 
                                                                              << 3U) 
                                                                             | (IData)(vlSelf->top__DOT____VdfgTmp_h24ff8132__0))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__60(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__60\n"); );
    // Body
    vlSelf->top__DOT___0991_ = (1U & (~ (((IData)(vlSelf->top__DOT___0994_) 
                                          & (IData)(vlSelf->top__DOT___0438_)) 
                                         | (vlSelf->top__DOT___3624_[1U] 
                                            >> 0x10U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__61(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__61\n"); );
    // Body
    vlSelf->top__DOT___0997_ = (1U & (~ ((~ (IData)(vlSelf->top__DOT___0438_)) 
                                         | (vlSelf->top__DOT___3637_ 
                                            >> 0xeU))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__62(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__62\n"); );
    // Body
    vlSelf->top__DOT___0636_ = ((IData)(vlSelf->top__DOT___0438_) 
                                & (vlSelf->top__DOT___3723_[2U] 
                                   >> 0x14U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__64(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__64\n"); );
    // Body
    vlSelf->top__DOT___0234_ = ((IData)(vlSelf->top__DOT___0236_) 
                                & (~ (IData)(vlSelf->top__DOT___0235_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__65(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__65\n"); );
    // Body
    vlSelf->top__DOT___1799_ = (1U ^ ((IData)(vlSelf->top__DOT___0524_) 
                                      ^ (IData)(vlSelf->top__DOT___1064_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__66(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__66\n"); );
    // Body
    vlSelf->top__DOT___2045_ = ((0x1feU & ((IData)(
                                                   (vlSelf->top__DOT___3655_ 
                                                    >> 0x31U)) 
                                           << 1U)) 
                                | (IData)(vlSelf->top__DOT___0524_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__67(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__67\n"); );
    // Body
    vlSelf->top__DOT___0400_ = ((IData)(vlSelf->top__DOT____VdfgTmp_h3a18c6cc__0) 
                                & ((IData)(vlSelf->top__DOT___3749_) 
                                   >> 3U));
    vlSelf->top__DOT___0158_ = ((IData)(vlSelf->top__DOT___0334_) 
                                ^ ((IData)(vlSelf->top__DOT___3749_) 
                                   >> 4U));
    vlSelf->top__DOT___1935_[1U] = ((0xdfffffffU & 
                                     vlSelf->top__DOT___1935_[1U]) 
                                    | ((IData)(vlSelf->top__DOT___0400_) 
                                       << 0x1dU));
    vlSelf->top__DOT___0722_ = ((IData)(vlSelf->top__DOT___0014_) 
                                ^ (IData)(vlSelf->top__DOT___0158_));
    vlSelf->top__DOT___0721_ = ((IData)(vlSelf->top__DOT___0401_) 
                                & (IData)(vlSelf->top__DOT___0722_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__68(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__68\n"); );
    // Body
    vlSelf->top__DOT___0137_ = ((IData)(vlSelf->top__DOT___0139_) 
                                & (IData)(vlSelf->top__DOT____VdfgTmp_he22cdd9f__0));
    vlSelf->top__DOT___0454_ = (1U & (~ (((IData)(vlSelf->top__DOT___0383_) 
                                          & (IData)(vlSelf->top__DOT___0137_)) 
                                         | (IData)(vlSelf->top__DOT___0206_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__69(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__69\n"); );
    // Body
    vlSelf->top__DOT___0166_ = ((IData)(vlSelf->top__DOT____VdfgTmp_he22cdd9f__0) 
                                & (IData)((vlSelf->top__DOT___3628_ 
                                           >> 1U)));
    vlSelf->top__DOT___0182_ = ((IData)(vlSelf->top__DOT___0277_) 
                                & (IData)(vlSelf->top__DOT___0166_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__70(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__70\n"); );
    // Body
    vlSelf->top__DOT___1283_ = (1U & (~ ((((IData)(vlSelf->top__DOT___3704_) 
                                           >> 2U) & (IData)(vlSelf->top__DOT___0127_)) 
                                         | ((IData)(vlSelf->top__DOT___0275_) 
                                            & (IData)(
                                                      (vlSelf->top__DOT___3670_ 
                                                       >> 5U))))));
    vlSelf->top__DOT___0193_ = (1U & (~ ((IData)(vlSelf->top__DOT___0154_) 
                                         & (IData)(vlSelf->top__DOT___1283_))));
    vlSelf->top__DOT___0983_ = ((IData)(vlSelf->top__DOT___0193_) 
                                ^ (IData)(vlSelf->top__DOT___0134_));
    vlSelf->top__DOT___0192_ = ((IData)(vlSelf->top__DOT___0154_) 
                                & (~ (IData)(vlSelf->top__DOT___0193_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__72(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__72\n"); );
    // Body
    vlSelf->top__DOT___0607_ = ((IData)(vlSelf->top__DOT___0608_) 
                                & (IData)(vlSelf->top__DOT___0477_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__73(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__73\n"); );
    // Body
    vlSelf->top__DOT___0796_ = ((IData)(vlSelf->top__DOT___0379_) 
                                & (IData)(vlSelf->top__DOT___0736_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__74(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__74\n"); );
    // Body
    vlSelf->top__DOT___1347_ = (1U & (~ (((vlSelf->top__DOT___3648_ 
                                           >> 0x18U) 
                                          & (vlSelf->top__DOT___3664_[1U] 
                                             >> 0xaU)) 
                                         | ((IData)(vlSelf->top__DOT___0401_) 
                                            & (~ (IData)(vlSelf->top__DOT___1064_))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__75(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__75\n"); );
    // Body
    vlSelf->top__DOT___1847_ = (1U & ((IData)(vlSelf->top__DOT___0401_) 
                                      ^ (IData)((vlSelf->top__DOT___3814_ 
                                                 >> 0x10U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__76(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__76\n"); );
    // Body
    vlSelf->top__DOT___0386_ = (1U & (~ (((IData)(vlSelf->top__DOT___0018_) 
                                          & ((IData)(vlSelf->top__DOT___3669_) 
                                             >> 1U)) 
                                         | ((IData)(vlSelf->top__DOT___0401_) 
                                            & (IData)(vlSelf->top__DOT___0082_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__77(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__77\n"); );
    // Body
    vlSelf->top__DOT___0603_ = (1U & (~ (((IData)(vlSelf->top__DOT___0401_) 
                                          & (IData)(vlSelf->top__DOT___3732_)) 
                                         | (IData)(vlSelf->top__DOT___0134_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__78(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__78\n"); );
    // Body
    vlSelf->top__DOT___0272_ = ((IData)(vlSelf->top__DOT___0232_) 
                                | (IData)(vlSelf->top__DOT___0290_));
    vlSelf->top__DOT___0464_ = ((IData)(vlSelf->top__DOT___0134_) 
                                & (IData)(vlSelf->top__DOT___0272_));
    vlSelf->top__DOT___0715_ = (1U & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                      | (IData)(vlSelf->top__DOT___0464_)));
    vlSelf->top__DOT___0027_ = (((IData)(vlSelf->top__DOT___3732_) 
                                 >> 4U) & (IData)(vlSelf->top__DOT___0715_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__79(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__79\n"); );
    // Body
    vlSelf->top__DOT___1247_ = (1U & ((IData)(vlSelf->top__DOT___0625_) 
                                      | ((IData)(vlSelf->top__DOT___3704_) 
                                         >> 1U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__80(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__80\n"); );
    // Body
    vlSelf->top__DOT___0180_ = ((IData)(vlSelf->top__DOT___0625_) 
                                & (IData)((vlSelf->top__DOT___3791_ 
                                           >> 0x15U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__82(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__82\n"); );
    // Body
    vlSelf->top__DOT___0617_ = (1U & (~ (((IData)(vlSelf->top__DOT___1211_) 
                                          & (IData)(vlSelf->top__DOT___0625_)) 
                                         | (IData)(vlSelf->top__DOT___1210_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__84(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__84\n"); );
    // Body
    vlSelf->top__DOT___1655_ = ((IData)(vlSelf->top__DOT___0678_) 
                                ^ (IData)(vlSelf->top__DOT___0118_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__85(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__85\n"); );
    // Body
    vlSelf->top__DOT___2035_ = ((0xf80000U & (vlSelf->top__DOT___3651_[1U] 
                                              >> 4U)) 
                                | ((0x40000U & (vlSelf->top__DOT___3651_[1U] 
                                                >> 4U)) 
                                   | ((0x20000U & (
                                                   vlSelf->top__DOT___3651_[1U] 
                                                   >> 4U)) 
                                      | ((0x10000U 
                                          & (vlSelf->top__DOT___3651_[1U] 
                                             >> 4U)) 
                                         | ((0x8000U 
                                             & (vlSelf->top__DOT___3651_[1U] 
                                                >> 4U)) 
                                            | ((0x7ffcU 
                                                & (vlSelf->top__DOT___3651_[1U] 
                                                   >> 4U)) 
                                               | (((IData)(vlSelf->top__DOT___0320_) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->top__DOT___0795_))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__86(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__86\n"); );
    // Body
    vlSelf->top__DOT___1895_ = ((0xffffffffcULL & vlSelf->top__DOT___1895_) 
                                | (IData)((IData)((
                                                   ((IData)(vlSelf->top__DOT___0281_) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT___3650_ 
                                                                 >> 0xaU)))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__87(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__87\n"); );
    // Body
    vlSelf->top__DOT___0321_ = ((IData)(vlSelf->top__DOT___0322_) 
                                & (~ (IData)(vlSelf->top__DOT___0281_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__88(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__88\n"); );
    // Body
    vlSelf->top__DOT___0279_ = ((IData)(vlSelf->top__DOT___0281_) 
                                & (~ (IData)(vlSelf->top__DOT___0280_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__89(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__89\n"); );
    // Body
    vlSelf->top__DOT___0857_ = (1U & (~ (((IData)(vlSelf->top__DOT___1521_) 
                                          & (IData)(vlSelf->top__DOT___1520_)) 
                                         | ((IData)(vlSelf->top__DOT___0690_) 
                                            & (IData)(vlSelf->top__DOT___0128_)))));
    vlSelf->top__DOT___0697_ = ((IData)(vlSelf->top__DOT___0857_) 
                                ^ (IData)(vlSelf->top__DOT___0769_));
    vlSelf->top__DOT___1265_ = ((IData)(vlSelf->top__DOT___0315_) 
                                ^ (IData)(vlSelf->top__DOT___0857_));
    vlSelf->top__DOT___1809_ = ((IData)(vlSelf->top__DOT___0401_) 
                                ^ (IData)(vlSelf->top__DOT___1265_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__90(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__90\n"); );
    // Body
    vlSelf->top__DOT___0756_ = (1U & (~ ((IData)(vlSelf->top__DOT___0692_) 
                                         | (vlSelf->top__DOT___3751_ 
                                            >> 0xaU))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__91(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__91\n"); );
    // Body
    vlSelf->top__DOT___2143_[0U] = (4U | (((vlSelf->top__DOT___3731_[2U] 
                                            << 0x1cU) 
                                           | (0xffffff8U 
                                              & (vlSelf->top__DOT___3731_[1U] 
                                                 >> 4U))) 
                                          | ((2U & 
                                              ((IData)(
                                                       (vlSelf->top__DOT___3641_ 
                                                        >> 1U)) 
                                               << 1U)) 
                                             | (IData)(vlSelf->top__DOT___0692_))));
    vlSelf->top__DOT___2143_[1U] = ((7U & (vlSelf->top__DOT___3731_[2U] 
                                           >> 4U)) 
                                    | ((vlSelf->top__DOT___3731_[3U] 
                                        << 0x1cU) | 
                                       (0xffffff8U 
                                        & (vlSelf->top__DOT___3731_[2U] 
                                           >> 4U))));
    vlSelf->top__DOT___2143_[2U] = ((0x1fe000U & (vlSelf->top__DOT___3731_[3U] 
                                                  >> 4U)) 
                                    | ((0x1000U & (
                                                   vlSelf->top__DOT___3731_[3U] 
                                                   >> 4U)) 
                                       | ((7U & (vlSelf->top__DOT___3731_[3U] 
                                                 >> 4U)) 
                                          | (0xff8U 
                                             & (vlSelf->top__DOT___3731_[3U] 
                                                >> 4U)))));
    vlSelf->top__DOT___2150_ = ((0x1ffffffff8000000ULL 
                                 & (((QData)((IData)(
                                                     vlSelf->top__DOT___2143_[1U])) 
                                     << 0x38U) | (0xfffffffff8000000ULL 
                                                  & ((QData)((IData)(
                                                                     vlSelf->top__DOT___2143_[0U])) 
                                                     << 0x18U)))) 
                                | (QData)((IData)((0x7ffffffU 
                                                   & ((vlSelf->top__DOT___3731_[1U] 
                                                       << 0x14U) 
                                                      | (vlSelf->top__DOT___3731_[0U] 
                                                         >> 0xcU))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__92(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__92\n"); );
    // Body
    vlSelf->top__DOT___0890_ = (1U & (~ ((IData)(vlSelf->top__DOT___0082_) 
                                         | ((IData)(vlSelf->top__DOT___0043_) 
                                            & (IData)(vlSelf->top__DOT___0675_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__93(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__93\n"); );
    // Body
    vlSelf->top__DOT___1001_ = (1U & (~ (((IData)(vlSelf->top__DOT___0043_) 
                                          & (IData)(vlSelf->top__DOT___0404_)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT___3809_ 
                                                    >> 0x23U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__94(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__94\n"); );
    // Body
    vlSelf->top__DOT___0519_ = ((IData)(vlSelf->top__DOT___0043_) 
                                ^ ((IData)(vlSelf->top__DOT___3623_) 
                                   >> 3U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__95(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__95\n"); );
    // Body
    vlSelf->top__DOT___0623_ = ((IData)(vlSelf->top__DOT___0043_) 
                                & (IData)((vlSelf->top__DOT___3791_ 
                                           >> 0x28U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__96(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__96\n"); );
    // Body
    vlSelf->top__DOT___0645_ = ((IData)(vlSelf->top__DOT___1788_) 
                                ^ (IData)(vlSelf->top__DOT___0043_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__97(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__97\n"); );
    // Body
    vlSelf->top__DOT___0409_ = (1U & (((0x2000000U 
                                        | (((IData)(vlSelf->top__DOT___0154_) 
                                            << 0x1eU) 
                                           | (((IData)(vlSelf->top__DOT___0043_) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelf->top__DOT___0226_) 
                                                  << 0x1bU) 
                                                 | ((0x1000000U 
                                                     & ((IData)(vlSelf->top__DOT___3647_) 
                                                        << 0xdU)) 
                                                    | ((0xf00000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___1893_ 
                                                                    >> 7U)) 
                                                           << 0x14U)) 
                                                       | ((0x80000U 
                                                           & ((IData)(vlSelf->top__DOT___3647_) 
                                                              << 0xdU)) 
                                                          | ((0x60000U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___1893_ 
                                                                          >> 4U)) 
                                                                 << 0x11U)) 
                                                             | ((0x10000U 
                                                                 & ((IData)(vlSelf->top__DOT___3647_) 
                                                                    << 0xdU)) 
                                                                | ((0x8000U 
                                                                    & ((IData)(vlSelf->top__DOT___3647_) 
                                                                       << 0xdU)) 
                                                                   | ((0x4000U 
                                                                       & ((IData)(vlSelf->top__DOT___3647_) 
                                                                          << 0xdU)) 
                                                                      | ((0x2000U 
                                                                          & ((IData)(vlSelf->top__DOT___3647_) 
                                                                             << 0xdU)) 
                                                                         | (((IData)(vlSelf->top__DOT___0241_) 
                                                                             << 0xcU) 
                                                                            | ((0x800U 
                                                                                & (IData)(vlSelf->top__DOT___3647_)) 
                                                                               | ((0x780U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1893_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (IData)(vlSelf->top__DOT___3647_)) 
                                                                                | ((0x30U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1893_ 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (IData)(vlSelf->top__DOT___3647_))))))))))))))))))) 
                                       + ((0x7ff80000U 
                                           & (vlSelf->in_data[0x2eU] 
                                              << 0x12U)) 
                                          | ((0x40000U 
                                              & ((IData)(vlSelf->top__DOT___3647_) 
                                                 << 7U)) 
                                             | ((0x3c000U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___1893_ 
                                                             >> 7U)) 
                                                    << 0xeU)) 
                                                | ((0x2000U 
                                                    & ((IData)(vlSelf->top__DOT___3647_) 
                                                       << 7U)) 
                                                   | ((0x1800U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___1893_ 
                                                                   >> 4U)) 
                                                          << 0xbU)) 
                                                      | ((0x400U 
                                                          & ((IData)(vlSelf->top__DOT___3647_) 
                                                             << 7U)) 
                                                         | ((0x200U 
                                                             & ((IData)(vlSelf->top__DOT___3647_) 
                                                                << 7U)) 
                                                            | ((0x100U 
                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                   << 7U)) 
                                                               | ((0x80U 
                                                                   & ((IData)(vlSelf->top__DOT___3647_) 
                                                                      << 7U)) 
                                                                  | (((IData)(vlSelf->top__DOT___0128_) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->top__DOT___0277_) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->top__DOT___0127_) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->top__DOT___0128_) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U)))))))))))))))) 
                                      >> 0x1eU));
    vlSelf->top__DOT___1804_ = (1U & (((0x2000000U 
                                        | (((IData)(vlSelf->top__DOT___0043_) 
                                            << 0x1dU) 
                                           | (((IData)(vlSelf->top__DOT___0226_) 
                                               << 0x1bU) 
                                              | ((0x1000000U 
                                                  & ((IData)(vlSelf->top__DOT___3647_) 
                                                     << 0xdU)) 
                                                 | ((0xf00000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___1893_ 
                                                                 >> 7U)) 
                                                        << 0x14U)) 
                                                    | ((0x80000U 
                                                        & ((IData)(vlSelf->top__DOT___3647_) 
                                                           << 0xdU)) 
                                                       | ((0x60000U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___1893_ 
                                                                       >> 4U)) 
                                                              << 0x11U)) 
                                                          | ((0x10000U 
                                                              & ((IData)(vlSelf->top__DOT___3647_) 
                                                                 << 0xdU)) 
                                                             | ((0x8000U 
                                                                 & ((IData)(vlSelf->top__DOT___3647_) 
                                                                    << 0xdU)) 
                                                                | ((0x4000U 
                                                                    & ((IData)(vlSelf->top__DOT___3647_) 
                                                                       << 0xdU)) 
                                                                   | ((0x2000U 
                                                                       & ((IData)(vlSelf->top__DOT___3647_) 
                                                                          << 0xdU)) 
                                                                      | (((IData)(vlSelf->top__DOT___0241_) 
                                                                          << 0xcU) 
                                                                         | ((0x800U 
                                                                             & (IData)(vlSelf->top__DOT___3647_)) 
                                                                            | ((0x780U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1893_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                               | ((0x40U 
                                                                                & (IData)(vlSelf->top__DOT___3647_)) 
                                                                                | ((0x30U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1893_ 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (IData)(vlSelf->top__DOT___3647_)))))))))))))))))) 
                                       + ((0x3ff80000U 
                                           & (vlSelf->in_data[0x2eU] 
                                              << 0x12U)) 
                                          | ((0x40000U 
                                              & ((IData)(vlSelf->top__DOT___3647_) 
                                                 << 7U)) 
                                             | ((0x3c000U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___1893_ 
                                                             >> 7U)) 
                                                    << 0xeU)) 
                                                | ((0x2000U 
                                                    & ((IData)(vlSelf->top__DOT___3647_) 
                                                       << 7U)) 
                                                   | ((0x1800U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___1893_ 
                                                                   >> 4U)) 
                                                          << 0xbU)) 
                                                      | ((0x400U 
                                                          & ((IData)(vlSelf->top__DOT___3647_) 
                                                             << 7U)) 
                                                         | ((0x200U 
                                                             & ((IData)(vlSelf->top__DOT___3647_) 
                                                                << 7U)) 
                                                            | ((0x100U 
                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                   << 7U)) 
                                                               | ((0x80U 
                                                                   & ((IData)(vlSelf->top__DOT___3647_) 
                                                                      << 7U)) 
                                                                  | (((IData)(vlSelf->top__DOT___0128_) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->top__DOT___0277_) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->top__DOT___0127_) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->top__DOT___0128_) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U)))))))))))))))) 
                                      >> 0x1dU));
    vlSelf->top__DOT___1677_ = (((0x2000000U | (((IData)(vlSelf->top__DOT___0132_) 
                                                 << 0x1fU) 
                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelf->top__DOT___0043_) 
                                                       << 0x1dU) 
                                                      | (((IData)(vlSelf->top__DOT___0226_) 
                                                          << 0x1bU) 
                                                         | ((0x1000000U 
                                                             & ((IData)(vlSelf->top__DOT___3647_) 
                                                                << 0xdU)) 
                                                            | ((0xf00000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___1893_ 
                                                                            >> 7U)) 
                                                                   << 0x14U)) 
                                                               | ((0x80000U 
                                                                   & ((IData)(vlSelf->top__DOT___3647_) 
                                                                      << 0xdU)) 
                                                                  | ((0x60000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___1893_ 
                                                                                >> 4U)) 
                                                                         << 0x11U)) 
                                                                     | ((0x10000U 
                                                                         & ((IData)(vlSelf->top__DOT___3647_) 
                                                                            << 0xdU)) 
                                                                        | ((0x8000U 
                                                                            & ((IData)(vlSelf->top__DOT___3647_) 
                                                                               << 0xdU)) 
                                                                           | ((0x4000U 
                                                                               & ((IData)(vlSelf->top__DOT___3647_) 
                                                                                << 0xdU)) 
                                                                              | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT___3647_) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0241_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (IData)(vlSelf->top__DOT___3647_)) 
                                                                                | ((0x780U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1893_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (IData)(vlSelf->top__DOT___3647_)) 
                                                                                | ((0x30U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___1893_ 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (IData)(vlSelf->top__DOT___3647_)))))))))))))))))))) 
                                 + ((0xfff80000U & 
                                     (vlSelf->in_data[0x2eU] 
                                      << 0x12U)) | 
                                    ((0x40000U & ((IData)(vlSelf->top__DOT___3647_) 
                                                  << 7U)) 
                                     | ((0x3c000U & 
                                         ((IData)((vlSelf->top__DOT___1893_ 
                                                   >> 7U)) 
                                          << 0xeU)) 
                                        | ((0x2000U 
                                            & ((IData)(vlSelf->top__DOT___3647_) 
                                               << 7U)) 
                                           | ((0x1800U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___1893_ 
                                                           >> 4U)) 
                                                  << 0xbU)) 
                                              | ((0x400U 
                                                  & ((IData)(vlSelf->top__DOT___3647_) 
                                                     << 7U)) 
                                                 | ((0x200U 
                                                     & ((IData)(vlSelf->top__DOT___3647_) 
                                                        << 7U)) 
                                                    | ((0x100U 
                                                        & ((IData)(vlSelf->top__DOT___3647_) 
                                                           << 7U)) 
                                                       | ((0x80U 
                                                           & ((IData)(vlSelf->top__DOT___3647_) 
                                                              << 7U)) 
                                                          | (((IData)(vlSelf->top__DOT___0128_) 
                                                              << 6U) 
                                                             | (((IData)(vlSelf->top__DOT___0277_) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT___0127_) 
                                                                    << 4U) 
                                                                   | (((IData)(vlSelf->top__DOT___0128_) 
                                                                       << 3U) 
                                                                      | (((IData)(vlSelf->top__DOT___0082_) 
                                                                          << 2U) 
                                                                         | ((IData)(vlSelf->top__DOT___0226_) 
                                                                            << 1U)))))))))))))))) 
                                >> 0x1fU);
    vlSelf->top__DOT___0151_ = ((IData)(vlSelf->top__DOT___0320_) 
                                ^ (IData)(vlSelf->top__DOT___1677_));
    vlSelf->top__DOT___0926_ = (1U & (((((IData)(vlSelf->top__DOT___1365_) 
                                         << 5U) | (
                                                   ((IData)(vlSelf->top__DOT___0154_) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top__DOT___0277_) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (~ (IData)(vlSelf->top__DOT___0014_)))))) 
                                       + (0x10U | (
                                                   ((IData)(vlSelf->top__DOT___0128_) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->top__DOT___1677_) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top__DOT___0134_) 
                                                          << 2U) 
                                                         | ((2U 
                                                             & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                << 1U)) 
                                                            | (IData)(vlSelf->top__DOT___0127_))))))) 
                                      >> 5U));
    vlSelf->top__DOT___0674_ = (1U & (((((IData)(vlSelf->top__DOT___0154_) 
                                         << 4U) | (
                                                   ((IData)(vlSelf->top__DOT___0277_) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->top__DOT___0014_))))) 
                                       + (0x10U | (
                                                   ((IData)(vlSelf->top__DOT___1677_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___0134_) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                             << 1U)) 
                                                         | (IData)(vlSelf->top__DOT___0127_)))))) 
                                      >> 4U));
    vlSelf->top__DOT___0610_ = (1U & (((((IData)(vlSelf->top__DOT___0277_) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelf->top__DOT___0014_)))) 
                                       + (((IData)(vlSelf->top__DOT___1677_) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top__DOT___0134_) 
                                            << 2U) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                << 1U)) 
                                              | (IData)(vlSelf->top__DOT___0127_))))) 
                                      >> 3U));
    vlSelf->top__DOT___0907_ = (1U & (~ ((IData)(vlSelf->top__DOT___0318_) 
                                         | ((IData)(vlSelf->top__DOT___0610_) 
                                            & (~ (IData)(vlSelf->top__DOT___0320_))))));
    vlSelf->top__DOT___2067_ = (((IData)(vlSelf->top__DOT___0926_) 
                                 << 5U) | (((IData)(vlSelf->top__DOT___0674_) 
                                            << 4U) 
                                           | (((IData)(vlSelf->top__DOT___0610_) 
                                               << 3U) 
                                              | ((6U 
                                                  & ((((IData)(vlSelf->top__DOT___0277_) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (~ (IData)(vlSelf->top__DOT___0014_)))) 
                                                     + 
                                                     (((IData)(vlSelf->top__DOT___0134_) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                             << 1U)) 
                                                         | (IData)(vlSelf->top__DOT___0127_))))) 
                                                 | (IData)(vlSelf->top__DOT___0775_)))));
    vlSelf->top__DOT___1373_ = (1U & (((((IData)(vlSelf->top__DOT___1211_) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelf->top__DOT___0106_)))) 
                                       + ((2U & (IData)(vlSelf->top__DOT___2067_)) 
                                          | (IData)(vlSelf->top__DOT___0775_))) 
                                      >> 1U));
    vlSelf->top__DOT___1632_ = (1U & ((((4U & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                               << 2U)) 
                                        | (((IData)(vlSelf->top__DOT___1211_) 
                                            << 1U) 
                                           | (1U & 
                                              (~ (IData)(vlSelf->top__DOT___0106_))))) 
                                       + ((6U & (IData)(vlSelf->top__DOT___2067_)) 
                                          | (IData)(vlSelf->top__DOT___0775_))) 
                                      >> 2U));
    vlSelf->top__DOT___1202_ = (1U & ((IData)(vlSelf->top__DOT___0383_) 
                                      + ((IData)(vlSelf->top__DOT___2067_) 
                                         >> 2U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__98(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__98\n"); );
    // Body
    vlSelf->top__DOT___0111_ = (1U & ((IData)(vlSelf->top__DOT___0043_) 
                                      ^ (vlSelf->top__DOT___3723_[3U] 
                                         >> 1U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__99(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__99\n"); );
    // Body
    vlSelf->top__DOT___0306_ = (1U & (~ ((IData)(vlSelf->top__DOT___0128_) 
                                         | ((IData)(vlSelf->top__DOT___0043_) 
                                            & (IData)(vlSelf->top__DOT___0150_)))));
    vlSelf->top__DOT___0586_ = (1U & (~ (((IData)(vlSelf->top__DOT___0438_) 
                                          & (IData)(vlSelf->top__DOT___0154_)) 
                                         | ((IData)(vlSelf->top__DOT___0237_) 
                                            & (IData)(vlSelf->top__DOT___0043_)))));
    vlSelf->top__DOT___0463_ = (1U & (~ (((IData)(vlSelf->top__DOT___0306_) 
                                          & (IData)(vlSelf->top__DOT___0134_)) 
                                         | (IData)(vlSelf->top__DOT___1046_))));
    vlSelf->out_data[3U] = ((0xfffffffeU & vlSelf->out_data[3U]) 
                            | ((IData)(vlSelf->top__DOT___0586_) 
                               & (IData)(vlSelf->top__DOT___0585_)));
    vlSelf->top__DOT___1651_ = ((IData)(vlSelf->top__DOT___0463_) 
                                | (IData)(vlSelf->top__DOT___0018_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__100(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__100\n"); );
    // Body
    vlSelf->top__DOT___0311_ = (1U & (~ (((IData)(vlSelf->top__DOT___1042_) 
                                          & (IData)(vlSelf->top__DOT___0043_)) 
                                         | (~ (IData)(vlSelf->top__DOT___0014_)))));
    vlSelf->top__DOT___0609_ = (1U & (~ (((IData)(vlSelf->top__DOT___0265_) 
                                          & (IData)(vlSelf->top__DOT___0311_)) 
                                         | (IData)(vlSelf->top__DOT___0226_))));
    vlSelf->top__DOT___0368_ = ((IData)(vlSelf->top__DOT___0226_) 
                                ^ (IData)(vlSelf->top__DOT___0609_));
    vlSelf->top__DOT___0367_ = ((IData)(vlSelf->top__DOT___0368_) 
                                & (~ (IData)(vlSelf->top__DOT___0018_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__101(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__101\n"); );
    // Body
    vlSelf->top__DOT___0665_ = (1U & (~ (((IData)(vlSelf->top__DOT___0043_) 
                                          & (IData)(vlSelf->top__DOT___0206_)) 
                                         | (vlSelf->top__DOT___3639_ 
                                            >> 0x13U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__102(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__102\n"); );
    // Body
    vlSelf->top__DOT___0600_ = ((IData)(vlSelf->top__DOT___0601_) 
                                & (IData)(vlSelf->top__DOT___0084_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__103(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__103\n"); );
    // Body
    vlSelf->top__DOT___0017_ = ((IData)(vlSelf->top__DOT___0265_) 
                                ^ (IData)(vlSelf->top__DOT___0800_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__105(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__105\n"); );
    // Body
    vlSelf->top__DOT___1550_ = (1U & ((IData)((vlSelf->top__DOT___3628_ 
                                               >> 0xbU)) 
                                      ^ (IData)(vlSelf->top__DOT___0265_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__106(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__106\n"); );
    // Body
    vlSelf->top__DOT___1567_ = (1U & ((IData)(vlSelf->top__DOT___0174_) 
                                      + ((IData)(vlSelf->top__DOT___3775_) 
                                         >> 6U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__109(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__109\n"); );
    // Body
    vlSelf->top__DOT___0205_ = ((~ (IData)(vlSelf->top__DOT___0149_)) 
                                & (IData)(vlSelf->top__DOT___0206_));
    vlSelf->top__DOT___0739_ = (1U & (~ (((IData)(vlSelf->top__DOT___0733_) 
                                          & (IData)(vlSelf->top__DOT___0106_)) 
                                         | (IData)(vlSelf->top__DOT___0127_))));
    vlSelf->top__DOT___1203_ = ((IData)(vlSelf->top__DOT___0058_) 
                                | (IData)(vlSelf->top__DOT___0438_));
    vlSelf->top__DOT___0197_ = (1U & (~ (((IData)(vlSelf->top__DOT___0134_) 
                                          & (IData)(vlSelf->top__DOT___0438_)) 
                                         | ((IData)(vlSelf->top__DOT___0241_) 
                                            & (IData)(vlSelf->top__DOT___0205_)))));
    vlSelf->top__DOT___1996_ = ((0x3ff80U & ((vlSelf->in_data[0x1aU] 
                                              << 0xdU) 
                                             | (0x1f80U 
                                                & (vlSelf->in_data[0x19U] 
                                                   >> 0x13U)))) 
                                | (((IData)(vlSelf->top__DOT___1203_) 
                                    << 6U) | (((IData)(vlSelf->top__DOT___1716_) 
                                               << 5U) 
                                              | ((0x10U 
                                                  & (((IData)(vlSelf->top__DOT___3659_) 
                                                      << 2U) 
                                                     + 
                                                     ((IData)(vlSelf->top__DOT___0241_) 
                                                      << 3U))) 
                                                 | (((IData)(vlSelf->top__DOT___1365_) 
                                                     << 3U) 
                                                    | ((IData)(vlSelf->top__DOT___0154_) 
                                                       << 2U))))));
    vlSelf->top__DOT___0141_ = ((IData)(vlSelf->top__DOT___0197_) 
                                | (IData)(vlSelf->top__DOT___1716_));
    vlSelf->top__DOT___0071_ = ((IData)(vlSelf->top__DOT___0197_) 
                                & (IData)(vlSelf->top__DOT___0152_));
    vlSelf->top__DOT___0095_ = ((IData)(vlSelf->top__DOT___0197_) 
                                & (IData)(vlSelf->top__DOT___0237_));
    vlSelf->top__DOT____VdfgTmp_hfc16dbdc__0 = (((IData)(vlSelf->top__DOT___0071_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0226_));
    vlSelf->top__DOT___0323_ = ((IData)(vlSelf->top__DOT___0082_) 
                                & (IData)(vlSelf->top__DOT___0071_));
    vlSelf->top__DOT___0455_ = ((IData)(vlSelf->top__DOT___0071_) 
                                & (IData)(vlSelf->top__DOT___0241_));
    vlSelf->top__DOT___0324_ = ((IData)(vlSelf->top__DOT___0071_) 
                                & (IData)(vlSelf->top__DOT___0134_));
    vlSelf->top__DOT___1093_ = (1U & ((IData)(vlSelf->top__DOT___0095_) 
                                      ^ ((IData)(vlSelf->top__DOT___3647_) 
                                         >> 6U)));
    vlSelf->top__DOT___1027_ = (1U & (~ (((IData)(vlSelf->top__DOT___0438_) 
                                          & (IData)(vlSelf->top__DOT___0206_)) 
                                         | ((IData)(vlSelf->top__DOT___0524_) 
                                            & (IData)(vlSelf->top__DOT___0095_)))));
    vlSelf->top__DOT___0309_ = ((IData)(vlSelf->top__DOT___0306_) 
                                & (IData)(vlSelf->top__DOT___0095_));
    vlSelf->top__DOT___0304_ = ((~ (IData)(vlSelf->top__DOT___0095_)) 
                                & (IData)(vlSelf->top__DOT___0154_));
    vlSelf->top__DOT___1586_ = (1U & ((IData)(vlSelf->top__DOT___0058_) 
                                      + (IData)(vlSelf->top__DOT___0309_)));
    vlSelf->top__DOT___0219_ = ((IData)(vlSelf->top__DOT___0304_) 
                                | (IData)(vlSelf->top__DOT___0463_));
    vlSelf->top__DOT___0218_ = ((IData)(vlSelf->top__DOT___0219_) 
                                & (~ (IData)(vlSelf->top__DOT___0154_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__111(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__111\n"); );
    // Body
    vlSelf->top__DOT___1212_ = (1U & (~ (((IData)(vlSelf->top__DOT___0261_) 
                                          & (vlSelf->top__DOT___3783_[2U] 
                                             >> 0x1dU)) 
                                         | (IData)(vlSelf->top__DOT___0058_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__112(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__112\n"); );
    // Body
    vlSelf->top__DOT___1362_ = (1U & (~ (((IData)(vlSelf->top__DOT___0058_) 
                                          & (IData)(vlSelf->top__DOT___0082_)) 
                                         | ((IData)(vlSelf->top__DOT___0383_) 
                                            & ((IData)(vlSelf->top__DOT___3749_) 
                                               >> 3U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__113(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__113\n"); );
    // Body
    vlSelf->top__DOT___1021_ = (1U & (~ ((((IData)(vlSelf->top__DOT___3674_) 
                                           >> 4U) & (IData)(vlSelf->top__DOT___1353_)) 
                                         | ((IData)(vlSelf->top__DOT___0080_) 
                                            & (IData)(vlSelf->top__DOT___0134_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__114(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__114\n"); );
    // Body
    vlSelf->top__DOT___0635_ = ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                & (IData)(vlSelf->top__DOT___0636_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__115(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__115\n"); );
    // Body
    vlSelf->top__DOT___1607_ = ((IData)(vlSelf->top__DOT___0234_) 
                                ^ (IData)(vlSelf->top__DOT___0014_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__116(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__116\n"); );
    // Body
    vlSelf->top__DOT___0709_ = (1U & ((IData)((vlSelf->top__DOT___3791_ 
                                               >> 0x15U)) 
                                      | (IData)(vlSelf->top__DOT___0158_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__118(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__118\n"); );
    // Body
    vlSelf->top__DOT___1734_ = (1U & ((IData)(vlSelf->top__DOT___0454_) 
                                      | ((IData)(vlSelf->top__DOT___3775_) 
                                         >> 7U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__120(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__120\n"); );
    // Body
    vlSelf->top__DOT___1812_ = (1U & ((IData)(vlSelf->top__DOT___0166_) 
                                      ^ ((IData)(vlSelf->top__DOT___0127_) 
                                         | ((IData)(vlSelf->top__DOT___3823_) 
                                            >> 3U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__121(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__121\n"); );
    // Body
    vlSelf->top__DOT___2070_ = (((QData)((IData)(((
                                                   vlSelf->top__DOT___3701_[2U] 
                                                   << 0x1eU) 
                                                  | (vlSelf->top__DOT___3701_[1U] 
                                                     >> 2U)))) 
                                 << 1U) | (QData)((IData)(vlSelf->top__DOT___0166_)));
    vlSelf->top__DOT___0425_ = (1U & (~ (((IData)(vlSelf->top__DOT___0166_) 
                                          & (IData)(vlSelf->top__DOT___0127_)) 
                                         | (vlSelf->top__DOT___3701_[0U] 
                                            >> 0x1aU))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__122(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__122\n"); );
    // Body
    vlSelf->top__DOT___0812_ = (1U & ((IData)((vlSelf->top__DOT___3791_ 
                                               >> 0x18U)) 
                                      | (IData)(vlSelf->top__DOT___0193_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__123(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__123\n"); );
    // Body
    vlSelf->top__DOT___1680_ = ((IData)(vlSelf->top__DOT___0193_) 
                                | (IData)(vlSelf->top__DOT___0454_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__124(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__124\n"); );
    // Body
    vlSelf->top__DOT___2117_ = ((0x1feU & (IData)(vlSelf->top__DOT___3746_)) 
                                | (IData)(vlSelf->top__DOT___0607_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__125(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__125\n"); );
    // Body
    vlSelf->top__DOT___0851_ = (1U & ((IData)(vlSelf->top__DOT___0386_) 
                                      | (vlSelf->top__DOT___3713_ 
                                         >> 0xeU)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__126(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__126\n"); );
    // Body
    vlSelf->top__DOT___0055_ = (1U & (~ (((IData)(vlSelf->top__DOT___0272_) 
                                          & (vlSelf->top__DOT___3622_ 
                                             >> 0x14U)) 
                                         | ((IData)(vlSelf->top__DOT___0318_) 
                                            & (IData)(vlSelf->top__DOT___0149_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__127(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__127\n"); );
    // Body
    vlSelf->top__DOT___0510_ = (vlSelf->top__DOT___3684_ 
                                & (IData)(vlSelf->top__DOT___0180_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__128(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__128\n"); );
    // Body
    vlSelf->top__DOT___0670_ = ((IData)(vlSelf->top__DOT___0617_) 
                                & (IData)(vlSelf->top__DOT___0192_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__129(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__129\n"); );
    // Body
    vlSelf->top__DOT___0899_ = ((IData)(vlSelf->top__DOT___0617_) 
                                ^ (IData)(vlSelf->top__DOT___0290_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__131(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__131\n"); );
    // Body
    vlSelf->top__DOT___0813_ = ((IData)(vlSelf->top__DOT___0640_) 
                                & ((IData)(vlSelf->top__DOT___0321_) 
                                   & (IData)(vlSelf->top__DOT___0736_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__132(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__132\n"); );
    // Body
    vlSelf->top__DOT___1486_ = (1U & (~ (((vlSelf->top__DOT___3660_ 
                                           >> 4U) & 
                                          ((IData)(vlSelf->top__DOT___3677_) 
                                           >> 1U)) 
                                         | (IData)(vlSelf->top__DOT___0279_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__133(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__133\n"); );
    // Body
    vlSelf->top__DOT___0778_ = (1U & ((IData)(vlSelf->top__DOT___0857_) 
                                      | ((IData)(vlSelf->top__DOT___3644_) 
                                         >> 8U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__134(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__134\n"); );
    // Body
    vlSelf->top__DOT___0856_ = ((IData)(vlSelf->top__DOT___0636_) 
                                & (IData)(vlSelf->top__DOT___0857_));
    vlSelf->top__DOT___0626_ = ((IData)(vlSelf->top__DOT___0856_) 
                                | (IData)(vlSelf->top__DOT___0586_));
    vlSelf->top__DOT___0024_ = ((IData)(vlSelf->top__DOT___0856_) 
                                ^ (IData)(vlSelf->top__DOT___0152_));
    vlSelf->top__DOT___0171_ = ((IData)(vlSelf->top__DOT___0626_) 
                                & (IData)(vlSelf->top__DOT___0270_));
    vlSelf->top__DOT___0023_ = ((IData)(vlSelf->top__DOT___0043_) 
                                ^ (IData)(vlSelf->top__DOT___0024_));
    vlSelf->top__DOT___1549_ = (1U & ((IData)((vlSelf->top__DOT___3747_ 
                                               >> 0x11U)) 
                                      | (IData)(vlSelf->top__DOT___0171_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__135(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__135\n"); );
    // Body
    vlSelf->top__DOT___1139_ = (1U & (~ ((((IData)(vlSelf->top__DOT___3820_) 
                                           >> 2U) & 
                                          ((IData)(vlSelf->top__DOT___3743_) 
                                           >> 3U)) 
                                         | (IData)(vlSelf->top__DOT___0697_))));
    vlSelf->top__DOT___1916_ = ((0xffU & (IData)(vlSelf->top__DOT___1916_)) 
                                | ((IData)(vlSelf->top__DOT___1139_) 
                                   << 8U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__136(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__136\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_ha7e79421__0 = (((vlSelf->top__DOT___3751_ 
                                                  >> 0x11U) 
                                                 & (IData)(vlSelf->top__DOT___0206_)) 
                                                | ((IData)(vlSelf->top__DOT___0519_) 
                                                   & (IData)(vlSelf->top__DOT___0134_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__137(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__137\n"); );
    // Body
    vlSelf->top__DOT___0643_ = ((IData)(vlSelf->top__DOT___0645_) 
                                & (IData)((vlSelf->top__DOT___3670_ 
                                           >> 0x15U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__138(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__138\n"); );
    // Body
    vlSelf->top__DOT___0000_ = (1U & ((IData)(vlSelf->top__DOT___0645_) 
                                      | (~ (IData)(vlSelf->top__DOT___0106_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__140(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__140\n"); );
    // Body
    vlSelf->top__DOT___0287_ = ((IData)(vlSelf->top__DOT___1804_) 
                                ^ (IData)(vlSelf->top__DOT___1803_));
    vlSelf->top__DOT___0177_ = ((IData)(vlSelf->top__DOT___0287_) 
                                ^ (IData)(vlSelf->top__DOT___0082_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__141(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__141\n"); );
    // Body
    vlSelf->top__DOT___0637_ = ((IData)(vlSelf->top__DOT___0639_) 
                                & (IData)(vlSelf->top__DOT___1677_));
    vlSelf->top__DOT___0148_ = ((IData)(vlSelf->top__DOT___0151_) 
                                & (~ (IData)(vlSelf->top__DOT___0149_)));
    vlSelf->top__DOT___0035_ = (1U & (~ (((IData)(vlSelf->top__DOT___0154_) 
                                          & (IData)(vlSelf->top__DOT___0151_)) 
                                         | (IData)(vlSelf->top__DOT___0095_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__143(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__143\n"); );
    // Body
    vlSelf->top__DOT___1298_ = (1U & ((IData)(vlSelf->top__DOT___0151_) 
                                      ^ (vlSelf->top__DOT___3648_ 
                                         >> 0x13U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__144(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__144\n"); );
    // Body
    vlSelf->top__DOT___0893_ = (1U & ((IData)(vlSelf->top__DOT___0151_) 
                                      ^ (IData)((vlSelf->top__DOT___3769_ 
                                                 >> 4U))));
    vlSelf->top__DOT___1720_ = ((IData)(vlSelf->top__DOT___0134_) 
                                | (IData)(vlSelf->top__DOT___0893_));
    vlSelf->top__DOT___0013_ = ((IData)(vlSelf->top__DOT___0306_) 
                                | (IData)(vlSelf->top__DOT___0893_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__145(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__145\n"); );
    // Body
    vlSelf->top__DOT___0672_ = ((IData)(vlSelf->top__DOT___0674_) 
                                & ((IData)(vlSelf->top__DOT___3707_) 
                                   >> 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__146(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__146\n"); );
    // Body
    vlSelf->top__DOT___0116_ = (1U & (~ ((IData)(vlSelf->top__DOT___0343_) 
                                         & (IData)(vlSelf->top__DOT___0610_))));
    vlSelf->top__DOT___0712_ = ((IData)(vlSelf->top__DOT___0151_) 
                                | (IData)(vlSelf->top__DOT___0116_));
    vlSelf->top__DOT___0099_ = ((IData)(vlSelf->top__DOT___0320_) 
                                ^ (IData)(vlSelf->top__DOT___0116_));
    vlSelf->top__DOT___0752_ = (1U & (~ (((IData)(vlSelf->top__DOT___0237_) 
                                          & (IData)(vlSelf->top__DOT___0116_)) 
                                         | (IData)(vlSelf->top__DOT___0232_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__147(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__147\n"); );
    // Body
    vlSelf->top__DOT___0905_ = ((vlSelf->top__DOT___3748_ 
                                 >> 0x11U) & (IData)(vlSelf->top__DOT___0907_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__149(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__149\n"); );
    // Body
    vlSelf->top__DOT___0581_ = (1U & (~ (((IData)(vlSelf->top__DOT___0152_) 
                                          & (IData)(vlSelf->top__DOT___1202_)) 
                                         | (vlSelf->top__DOT___3701_[1U] 
                                            >> 0x12U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__151(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__151\n"); );
    // Body
    vlSelf->top__DOT___1170_ = (1U & (~ ((IData)(vlSelf->top__DOT___0733_) 
                                         | ((IData)(vlSelf->top__DOT___0586_) 
                                            & (IData)(vlSelf->top__DOT___0290_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__152(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__152\n"); );
    // Body
    vlSelf->top__DOT___1447_ = (1U & ((IData)((vlSelf->top__DOT___3635_ 
                                               >> 0x39U)) 
                                      ^ (IData)(vlSelf->top__DOT___0463_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__153(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__153\n"); );
    // Body
    vlSelf->top__DOT___0217_ = ((IData)(vlSelf->top__DOT___0464_) 
                                & (~ (IData)(vlSelf->top__DOT___0463_)));
    vlSelf->top__DOT___0216_ = ((IData)(vlSelf->top__DOT___0217_) 
                                & (~ (IData)(vlSelf->top__DOT___0154_)));
    vlSelf->top__DOT___1394_ = (1U & (~ ((IData)(vlSelf->top__DOT___0217_) 
                                         & (IData)(vlSelf->top__DOT___0014_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__154(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__154\n"); );
    // Body
    vlSelf->top__DOT___0652_ = ((IData)((vlSelf->top__DOT___3747_ 
                                         >> 0x1bU)) 
                                & (IData)(vlSelf->top__DOT___0311_));
    vlSelf->top__DOT___0240_ = (1U & ((IData)((vlSelf->top__DOT___3747_ 
                                               >> 0x14U)) 
                                      + (IData)(vlSelf->top__DOT___0311_)));
    vlSelf->top__DOT___0274_ = ((IData)(vlSelf->top__DOT___0438_) 
                                & (IData)(vlSelf->top__DOT___0311_));
    vlSelf->top__DOT___0191_ = (1U & (~ ((IData)(vlSelf->top__DOT___1046_) 
                                         | (IData)(vlSelf->top__DOT___0311_))));
    vlSelf->top__DOT___0069_ = ((IData)(vlSelf->top__DOT___0524_) 
                                | (IData)(vlSelf->top__DOT___0609_));
    vlSelf->top__DOT___0044_ = (1U & (~ ((IData)(vlSelf->top__DOT___0315_) 
                                         & (IData)(vlSelf->top__DOT___0609_))));
    vlSelf->top__DOT___1807_ = (1U & ((IData)(vlSelf->top__DOT___0152_) 
                                      + (IData)(vlSelf->top__DOT___0240_)));
    vlSelf->top__DOT___0273_ = ((IData)(vlSelf->top__DOT___0275_) 
                                & (~ (IData)(vlSelf->top__DOT___0274_)));
    vlSelf->top__DOT___1900_[2U] = ((0x7ff7ffU & vlSelf->top__DOT___1900_[2U]) 
                                    | (0x7fffffU & 
                                       ((IData)(vlSelf->top__DOT___0191_) 
                                        << 0xbU)));
    vlSelf->top__DOT___0522_ = ((IData)(vlSelf->top__DOT___0609_) 
                                & (IData)(vlSelf->top__DOT___0069_));
    vlSelf->top__DOT___0067_ = ((IData)(vlSelf->top__DOT___0069_) 
                                & (~ (IData)(vlSelf->top__DOT___0154_)));
    vlSelf->top__DOT___0591_ = (1U & (~ ((IData)(vlSelf->top__DOT___0044_) 
                                         & (IData)(vlSelf->top__DOT___0463_))));
    vlSelf->top__DOT___0042_ = ((IData)(vlSelf->top__DOT___0044_) 
                                & (~ (IData)(vlSelf->top__DOT___0043_)));
    vlSelf->top__DOT___0949_ = ((IData)(vlSelf->top__DOT___1807_) 
                                ^ (IData)(vlSelf->top__DOT___0593_));
    vlSelf->top__DOT___1368_ = ((IData)(vlSelf->top__DOT___0067_) 
                                ^ (IData)(vlSelf->top__DOT___0506_));
    vlSelf->top__DOT___0196_ = ((IData)(vlSelf->top__DOT___0042_) 
                                | (IData)(vlSelf->top__DOT___0127_));
    vlSelf->top__DOT___0671_ = ((IData)(vlSelf->top__DOT___0438_) 
                                | (IData)(vlSelf->top__DOT___0042_));
    vlSelf->top__DOT___0296_ = ((~ (IData)(vlSelf->top__DOT___0438_)) 
                                & (IData)(vlSelf->top__DOT___0671_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__155(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__155\n"); );
    // Body
    vlSelf->top__DOT___0310_ = ((IData)(vlSelf->top__DOT___0311_) 
                                & (~ (IData)(vlSelf->top__DOT___0133_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__156(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__156\n"); );
    // Body
    vlSelf->top__DOT___0655_ = ((IData)(vlSelf->top__DOT___0609_) 
                                & (IData)(vlSelf->top__DOT___0656_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__157(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__157\n"); );
    // Body
    vlSelf->top__DOT___0549_ = ((IData)(vlSelf->top__DOT___0610_) 
                                & (IData)(vlSelf->top__DOT___0609_));
    vlSelf->top__DOT___0338_ = (1U & (~ ((IData)(vlSelf->top__DOT___0191_) 
                                         & (IData)(vlSelf->top__DOT___1381_))));
    vlSelf->top__DOT___1718_ = ((IData)(vlSelf->top__DOT___0338_) 
                                ^ (IData)(vlSelf->top__DOT___0949_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__158(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__158\n"); );
    // Body
    vlSelf->top__DOT___0146_ = (1U & (~ (((IData)(vlSelf->top__DOT___0609_) 
                                          & (IData)(vlSelf->top__DOT___0306_)) 
                                         | (IData)(vlSelf->top__DOT___0464_))));
    vlSelf->top__DOT___0936_ = ((IData)(vlSelf->top__DOT___0146_) 
                                | (IData)(vlSelf->top__DOT___0084_));
    vlSelf->top__DOT___0611_ = ((IData)(vlSelf->top__DOT___0146_) 
                                & (IData)(vlSelf->top__DOT___0154_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__159(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__159\n"); );
    // Body
    vlSelf->top__DOT___0664_ = ((IData)(vlSelf->top__DOT___0665_) 
                                & (IData)(vlSelf->top__DOT___0488_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__160(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__160\n"); );
    // Body
    vlSelf->top__DOT___0301_ = (1U & ((IData)(vlSelf->top__DOT___3707_) 
                                      | (IData)(vlSelf->top__DOT___0600_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__162(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__162\n"); );
    // Body
    vlSelf->top__DOT___0895_ = (1U & ((IData)(vlSelf->top__DOT___1550_) 
                                      + (IData)((vlSelf->top__DOT___3791_ 
                                                 >> 0x15U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__163(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__163\n"); );
    // Body
    vlSelf->top__DOT___0984_ = (1U & (~ ((IData)(vlSelf->top__DOT___0205_) 
                                         & (vlSelf->top__DOT___3633_[0U] 
                                            >> 0x19U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__164(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__164\n"); );
    // Body
    vlSelf->top__DOT___0924_ = ((IData)(vlSelf->top__DOT___0739_) 
                                | (IData)(vlSelf->top__DOT___0603_));
    vlSelf->top__DOT___0267_ = (1U & ((IData)(vlSelf->top__DOT___0324_) 
                                      | ((IData)(vlSelf->top__DOT___3732_) 
                                         >> 4U)));
    vlSelf->top__DOT___0266_ = ((IData)(vlSelf->top__DOT___0058_) 
                                & (~ (IData)(vlSelf->top__DOT___0267_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__165(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__165\n"); );
    // Body
    vlSelf->top__DOT___1691_ = ((IData)(vlSelf->top__DOT___1692_) 
                                | (IData)(vlSelf->top__DOT___0197_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__166(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__166\n"); );
    // Body
    vlSelf->top__DOT___0987_ = (1U & (~ (((IData)(vlSelf->top__DOT___0586_) 
                                          & (IData)(vlSelf->top__DOT___0988_)) 
                                         | (IData)(vlSelf->top__DOT___0141_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__167(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__167\n"); );
    // Body
    vlSelf->top__DOT___0140_ = ((IData)(vlSelf->top__DOT___0142_) 
                                & (~ (IData)(vlSelf->top__DOT___0141_)));
    vlSelf->top__DOT___0314_ = (1U ^ ((IData)(vlSelf->top__DOT___0140_) 
                                      ^ (IData)(vlSelf->top__DOT___0320_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__168(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__168\n"); );
    // Body
    vlSelf->top__DOT___1149_ = (1U & (~ ((IData)(vlSelf->top__DOT___0071_) 
                                         | (IData)(
                                                   (vlSelf->top__DOT___3818_ 
                                                    >> 0x14U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__169(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__169\n"); );
    // Body
    vlSelf->top__DOT___1552_ = ((IData)(vlSelf->top__DOT___0071_) 
                                ^ (IData)(vlSelf->top__DOT___0454_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__170(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__170\n"); );
    // Body
    vlSelf->top__DOT___1338_ = (1U & (((((IData)(vlSelf->top__DOT___0237_) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT___0524_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0095_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0354_)))) 
                                       + (1U | (0xeU 
                                                & ((IData)(
                                                           (vlSelf->top__DOT___2040_ 
                                                            >> 3U)) 
                                                   << 1U)))) 
                                      >> 3U));
    vlSelf->top__DOT___0283_ = ((vlSelf->top__DOT___3660_ 
                                 >> 7U) & (IData)(vlSelf->top__DOT___0219_));
    vlSelf->top__DOT___0282_ = ((IData)(vlSelf->top__DOT___0283_) 
                                & (~ (IData)(vlSelf->top__DOT___0154_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__171(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__171\n"); );
    // Body
    vlSelf->top__DOT___0076_ = (1U & (~ ((IData)(vlSelf->top__DOT___3669_) 
                                         & (IData)(vlSelf->top__DOT___0095_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__172(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__172\n"); );
    // Body
    vlSelf->top__DOT___0094_ = (1U & (~ (((IData)(vlSelf->top__DOT___1283_) 
                                          & (vlSelf->top__DOT___3748_ 
                                             >> 0x12U)) 
                                         | ((IData)(vlSelf->top__DOT___0095_) 
                                            & (vlSelf->top__DOT___3624_[0U] 
                                               >> 0x1eU)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__173(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__173\n"); );
    // Body
    vlSelf->top__DOT___2014_ = ((0x3fc00U & ((IData)(
                                                     (vlSelf->top__DOT___3670_ 
                                                      >> 0xcU)) 
                                             << 0xaU)) 
                                | ((0x3c0U & ((IData)(
                                                      (vlSelf->top__DOT___1988_ 
                                                       >> 0x33U)) 
                                              << 6U)) 
                                   | ((0x20U & ((IData)(
                                                        (vlSelf->top__DOT___3670_ 
                                                         >> 7U)) 
                                                << 5U)) 
                                      | ((0x10U & ((IData)(
                                                           (vlSelf->top__DOT___1988_ 
                                                            >> 0x31U)) 
                                                   << 4U)) 
                                         | ((8U & ((IData)(
                                                           (vlSelf->top__DOT___3670_ 
                                                            >> 5U)) 
                                                   << 3U)) 
                                            | ((6U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT___1988_ 
                                                            >> 0x2eU)) 
                                                   << 1U)) 
                                               | (IData)(vlSelf->top__DOT___0095_)))))));
    vlSelf->top__DOT___1081_ = (1U & ((((0x800U & (vlSelf->top__DOT___2014_ 
                                                   << 1U)) 
                                        | ((0x780U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT___1988_ 
                                                        >> 0x33U)) 
                                               << 7U)) 
                                           | ((0x40U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___3670_ 
                                                           >> 7U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___1988_ 
                                                              >> 0x31U)) 
                                                     << 5U)) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___3670_ 
                                                                 >> 5U)) 
                                                        << 4U)) 
                                                    | ((0xcU 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___1988_ 
                                                                    >> 0x2eU)) 
                                                           << 2U)) 
                                                       | ((2U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___3670_ 
                                                                       >> 2U)) 
                                                              << 1U)) 
                                                          | (IData)(vlSelf->top__DOT___0206_)))))))) 
                                       + ((vlSelf->in_data[0x36U] 
                                           << 0xeU) 
                                          | (vlSelf->in_data[0x36U] 
                                             >> 0x12U))) 
                                      >> 0xbU));
    vlSelf->top__DOT___1323_ = (1U & ((((0x7800U & 
                                         (vlSelf->top__DOT___2014_ 
                                          << 1U)) | 
                                        ((0x780U & 
                                          ((IData)(
                                                   (vlSelf->top__DOT___1988_ 
                                                    >> 0x33U)) 
                                           << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(
                                                        (vlSelf->top__DOT___3670_ 
                                                         >> 7U)) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT___1988_ 
                                                            >> 0x31U)) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___3670_ 
                                                               >> 5U)) 
                                                      << 4U)) 
                                                  | ((0xcU 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___1988_ 
                                                                  >> 0x2eU)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___3670_ 
                                                                     >> 2U)) 
                                                            << 1U)) 
                                                        | (IData)(vlSelf->top__DOT___0206_)))))))) 
                                       + ((vlSelf->in_data[0x37U] 
                                           << 0xeU) 
                                          | (vlSelf->in_data[0x36U] 
                                             >> 0x12U))) 
                                      >> 0xeU));
    vlSelf->top__DOT___1309_ = (1U & ((((0x1800U & 
                                         (vlSelf->top__DOT___2014_ 
                                          << 1U)) | 
                                        ((0x780U & 
                                          ((IData)(
                                                   (vlSelf->top__DOT___1988_ 
                                                    >> 0x33U)) 
                                           << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(
                                                        (vlSelf->top__DOT___3670_ 
                                                         >> 7U)) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT___1988_ 
                                                            >> 0x31U)) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___3670_ 
                                                               >> 5U)) 
                                                      << 4U)) 
                                                  | ((0xcU 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___1988_ 
                                                                  >> 0x2eU)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___3670_ 
                                                                     >> 2U)) 
                                                            << 1U)) 
                                                        | (IData)(vlSelf->top__DOT___0206_)))))))) 
                                       + ((vlSelf->in_data[0x36U] 
                                           << 0xeU) 
                                          | (vlSelf->in_data[0x36U] 
                                             >> 0x12U))) 
                                      >> 0xcU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__174(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__174\n"); );
    // Body
    vlSelf->top__DOT___1819_ = (1U & ((((4U & ((IData)(vlSelf->top__DOT___3810_) 
                                               << 2U)) 
                                        | (IData)(vlSelf->top__DOT____VdfgTmp_hfc16dbdc__0)) 
                                       + (2U | ((IData)(vlSelf->top__DOT___0272_) 
                                                << 2U))) 
                                      >> 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__175(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__175\n"); );
    // Body
    vlSelf->top__DOT___0860_ = (1U & (~ (((IData)(vlSelf->top__DOT___0455_) 
                                          & (vlSelf->top__DOT___3751_ 
                                             >> 0x11U)) 
                                         | (IData)(vlSelf->top__DOT___0071_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__176(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__176\n"); );
    // Body
    vlSelf->top__DOT___1352_ = ((IData)(vlSelf->top__DOT___0994_) 
                                | (IData)(vlSelf->top__DOT___0309_));
    vlSelf->top__DOT___1461_ = (1U & ((IData)(vlSelf->top__DOT___1352_) 
                                      + (IData)(vlSelf->top__DOT___0524_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__177(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__177\n"); );
    // Body
    vlSelf->top__DOT___0648_ = ((~ (IData)(vlSelf->top__DOT___0309_)) 
                                & (IData)(vlSelf->top__DOT___0623_));
    vlSelf->top__DOT___0020_ = (1U & ((~ (IData)(vlSelf->top__DOT___0309_)) 
                                      | (IData)(vlSelf->top__DOT___0648_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__179(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__179\n"); );
    // Body
    vlSelf->top__DOT___0663_ = ((IData)(vlSelf->top__DOT___0309_) 
                                & (IData)(vlSelf->top__DOT___0453_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__180(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__180\n"); );
    // Body
    vlSelf->top__DOT___0144_ = (1U & (~ (((IData)(vlSelf->top__DOT___1362_) 
                                          & (IData)(vlSelf->top__DOT___0304_)) 
                                         | ((IData)(vlSelf->top__DOT___0193_) 
                                            & (IData)(vlSelf->top__DOT___0311_)))));
    vlSelf->top__DOT___0345_ = (1U & ((IData)(vlSelf->top__DOT___0144_) 
                                      | ((IData)(vlSelf->top__DOT___3647_) 
                                         >> 3U)));
    vlSelf->top__DOT___0065_ = ((IData)(vlSelf->top__DOT___0144_) 
                                ^ (IData)(vlSelf->top__DOT___0318_));
    vlSelf->top__DOT___0295_ = ((IData)(vlSelf->top__DOT___0144_) 
                                & (~ (IData)(vlSelf->top__DOT___0296_)));
    vlSelf->top__DOT___1114_ = (1U & (~ ((IData)(vlSelf->top__DOT___0613_) 
                                         | ((IData)(vlSelf->top__DOT___1368_) 
                                            & (IData)(vlSelf->top__DOT___0065_)))));
    vlSelf->top__DOT___1138_ = ((IData)(vlSelf->top__DOT___0065_) 
                                | (IData)(vlSelf->top__DOT___0625_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__181(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__181\n"); );
    // Body
    vlSelf->top__DOT___1657_ = (1U & ((IData)(vlSelf->top__DOT___1607_) 
                                      | (IData)((vlSelf->top__DOT___3809_ 
                                                 >> 0x2fU))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__184(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__184\n"); );
    // Body
    vlSelf->top__DOT___0730_ = ((IData)(vlSelf->top__DOT___0055_) 
                                | (IData)(vlSelf->top__DOT___0656_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__185(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__185\n"); );
    // Body
    vlSelf->top__DOT___2056_ = ((0xeU & ((IData)((vlSelf->top__DOT___3652_ 
                                                  >> 0x14U)) 
                                         << 1U)) | (IData)(vlSelf->top__DOT___0510_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__188(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__188\n"); );
    // Body
    vlSelf->top__DOT___0284_ = ((IData)(vlSelf->top__DOT____VdfgTmp_ha7e79421__0) 
                                & (IData)((vlSelf->top__DOT___3641_ 
                                           >> 1U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__190(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__190\n"); );
    // Body
    vlSelf->top__DOT___0039_ = (1U & (~ (((IData)(vlSelf->top__DOT___0463_) 
                                          & (IData)(vlSelf->top__DOT___0287_)) 
                                         | ((vlSelf->top__DOT___3723_[3U] 
                                             >> 1U) 
                                            & (IData)(vlSelf->top__DOT___0383_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__191(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__191\n"); );
    // Body
    vlSelf->top__DOT___0808_ = (1U & (~ (((IData)(vlSelf->top__DOT___0637_) 
                                          & (IData)(
                                                    (vlSelf->top__DOT___3818_ 
                                                     >> 0x12U))) 
                                         | (IData)(vlSelf->top__DOT___0226_))));
    vlSelf->top__DOT___0807_ = ((IData)(vlSelf->top__DOT___0808_) 
                                & (~ (IData)(vlSelf->top__DOT___0320_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__193(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__193\n"); );
    // Body
    vlSelf->top__DOT___0745_ = ((IData)(vlSelf->top__DOT___3697_) 
                                & (IData)(vlSelf->top__DOT___0148_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__194(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__194\n"); );
    // Body
    vlSelf->top__DOT___2186_ = ((0x1ffffff0U & vlSelf->top__DOT___2186_) 
                                | (((IData)(vlSelf->top__DOT___3789_) 
                                    << 1U) | (IData)(vlSelf->top__DOT___1298_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__195(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__195\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h5ef09df3__0 = (((IData)(vlSelf->top__DOT___0197_) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->top__DOT___0232_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0893_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0154_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__196(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__196\n"); );
    // Body
    vlSelf->top__DOT___0255_ = (1U & ((IData)(vlSelf->top__DOT___3704_) 
                                      & (~ (IData)(vlSelf->top__DOT___0013_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__197(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__197\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h250083de__0 = ((2U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___3791_ 
                                                             >> 0x15U)) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->top__DOT___0116_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__198(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__198\n"); );
    // Body
    vlSelf->top__DOT___1457_ = (1U & (~ (((IData)(vlSelf->top__DOT___3695_) 
                                          >> 5U) & (IData)(vlSelf->top__DOT___0116_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__199(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__199\n"); );
    // Body
    vlSelf->top__DOT___0373_ = (1U & ((IData)(vlSelf->top__DOT___0116_) 
                                      ^ ((IData)(vlSelf->top__DOT___3704_) 
                                         >> 1U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__200(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__200\n"); );
    // Body
    vlSelf->top__DOT___2185_[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0116_)) 
                                             << 0x39U) 
                                            | vlSelf->top__DOT___3699_));
    vlSelf->top__DOT___2185_[1U] = ((0xfc000000U & 
                                     vlSelf->top__DOT___2185_[1U]) 
                                    | (IData)(((((QData)((IData)(vlSelf->top__DOT___0116_)) 
                                                 << 0x39U) 
                                                | vlSelf->top__DOT___3699_) 
                                               >> 0x20U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__206(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__206\n"); );
    // Body
    vlSelf->top__DOT___0098_ = (1U & ((IData)((vlSelf->top__DOT___3636_ 
                                               >> 0xaU)) 
                                      & (~ (IData)(vlSelf->top__DOT___0099_))));
    vlSelf->top__DOT___0335_ = ((IData)(vlSelf->top__DOT___0098_) 
                                & (IData)(vlSelf->top__DOT___0354_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__207(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__207\n"); );
    // Body
    vlSelf->top__DOT___1003_ = (1U & (~ (((IData)(vlSelf->top__DOT___0099_) 
                                          & (IData)(vlSelf->top__DOT___0289_)) 
                                         | (IData)(vlSelf->top__DOT___0235_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__209(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__209\n"); );
    // Body
    vlSelf->top__DOT___2146_ = ((1U & vlSelf->top__DOT___2146_) 
                                | ((0xe00000U & (vlSelf->top__DOT___3714_ 
                                                 << 3U)) 
                                   | ((0x100000U & 
                                       (vlSelf->top__DOT___3714_ 
                                        << 3U)) | (
                                                   (0xffff0U 
                                                    & (vlSelf->top__DOT___3714_ 
                                                       << 3U)) 
                                                   | (((IData)(vlSelf->top__DOT___0752_) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top__DOT___0519_) 
                                                          << 2U) 
                                                         | ((IData)(vlSelf->top__DOT___0193_) 
                                                            << 1U)))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__210(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__210\n"); );
    // Body
    vlSelf->top__DOT___0751_ = ((IData)(vlSelf->top__DOT___0752_) 
                                & ((IData)(vlSelf->top__DOT___3823_) 
                                   >> 4U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__211(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__211\n"); );
    // Body
    vlSelf->top__DOT___0711_ = ((IData)(vlSelf->top__DOT___0752_) 
                                ^ (IData)(vlSelf->top__DOT___0071_));
    vlSelf->top__DOT___0710_ = ((IData)(vlSelf->top__DOT___0712_) 
                                & (IData)(vlSelf->top__DOT___0711_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__213(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__213\n"); );
    // Body
    vlSelf->top__DOT___0163_ = (1U & (~ ((IData)((vlSelf->top__DOT___3791_ 
                                                  >> 0x29U)) 
                                         & (IData)(vlSelf->top__DOT___0581_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__214(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__214\n"); );
    // Body
    vlSelf->top__DOT___1927_ = ((0x1fffffcU & vlSelf->top__DOT___1927_) 
                                | (((IData)(vlSelf->top__DOT___1447_) 
                                    << 1U) | (IData)(vlSelf->top__DOT___0133_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__216(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__216\n"); );
    // Body
    vlSelf->top__DOT___2024_ = ((0x3000U & (vlSelf->top__DOT___3648_ 
                                            >> 8U)) 
                                | ((0x800U & (vlSelf->top__DOT___3648_ 
                                              >> 8U)) 
                                   | ((0x7fcU & (vlSelf->top__DOT___3648_ 
                                                 >> 8U)) 
                                      | (((IData)(vlSelf->top__DOT___0274_) 
                                          << 1U) | (IData)(vlSelf->top__DOT___0016_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__217(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__217\n"); );
    // Body
    vlSelf->top__DOT___1820_ = (1U & ((IData)((vlSelf->top__DOT___3628_ 
                                               >> 0x28U)) 
                                      ^ (~ (IData)(vlSelf->top__DOT___0191_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__218(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__218\n"); );
    // Body
    vlSelf->top__DOT___0087_ = ((IData)(vlSelf->top__DOT___0191_) 
                                ^ ((IData)(vlSelf->top__DOT___0058_) 
                                   & (~ (IData)(vlSelf->top__DOT___0287_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__219(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__219\n"); );
    // Body
    vlSelf->top__DOT___0810_ = ((IData)(vlSelf->top__DOT___0812_) 
                                & (~ (IData)(vlSelf->top__DOT___0191_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__220(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__220\n"); );
    // Body
    vlSelf->top__DOT___0162_ = (1U & ((((4U & ((IData)(vlSelf->top__DOT___3732_) 
                                               >> 2U)) 
                                        | (((IData)(vlSelf->top__DOT___0191_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___0383_))) 
                                       + (((IData)(vlSelf->top__DOT___0674_) 
                                           << 2U) | 
                                          (((IData)(vlSelf->top__DOT___0610_) 
                                            << 1U) 
                                           | (1U & 
                                              ((IData)(vlSelf->top__DOT___2067_) 
                                               >> 2U))))) 
                                      >> 2U));
    vlSelf->top__DOT___0633_ = (1U & ((((8U & ((IData)(vlSelf->top__DOT___3732_) 
                                               >> 2U)) 
                                        | ((4U & ((IData)(vlSelf->top__DOT___3732_) 
                                                  >> 2U)) 
                                           | (((IData)(vlSelf->top__DOT___0191_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0383_)))) 
                                       + (((IData)(vlSelf->top__DOT___0926_) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top__DOT___0674_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0610_) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSelf->top__DOT___2067_) 
                                                    >> 2U)))))) 
                                      >> 3U));
    vlSelf->top__DOT___1436_ = ((IData)(vlSelf->top__DOT___0069_) 
                                | (IData)(vlSelf->top__DOT___0162_));
    vlSelf->top__DOT___1079_ = (1U & ((IData)((vlSelf->top__DOT___3640_ 
                                               >> 0xcU)) 
                                      | (~ (IData)(vlSelf->top__DOT___0162_))));
    vlSelf->top__DOT___0210_ = ((IData)(vlSelf->top__DOT___0633_) 
                                & (~ (IData)(vlSelf->top__DOT___0438_)));
    vlSelf->top__DOT___0521_ = ((IData)(vlSelf->top__DOT___0210_) 
                                & (IData)(vlSelf->top__DOT___0522_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__221(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__221\n"); );
    // Body
    vlSelf->out_data[0x1eU] = ((0xfffffffeU & vlSelf->out_data[0x1eU]) 
                               | (1U & (~ (((IData)(vlSelf->top__DOT___0111_) 
                                            & (IData)(vlSelf->top__DOT___0856_)) 
                                           | (IData)(vlSelf->top__DOT___0069_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__222(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__222\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h43e592f8__0 = (((IData)(vlSelf->top__DOT___0044_) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->top__DOT___0608_) 
                                                    << 3U) 
                                                   | ((2U 
                                                       & (vlSelf->top__DOT___3751_ 
                                                          >> 0x10U)) 
                                                      | (IData)(vlSelf->top__DOT___0715_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__223(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__223\n"); );
    // Body
    vlSelf->top__DOT___1056_ = (1U & (~ (((IData)(vlSelf->top__DOT___3732_) 
                                          >> 4U) & (IData)(vlSelf->top__DOT___0067_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__224(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__224\n"); );
    // Body
    vlSelf->top__DOT___0590_ = ((IData)(vlSelf->top__DOT___0095_) 
                                & (IData)(vlSelf->top__DOT___0591_));
    vlSelf->top__DOT___0195_ = ((IData)(vlSelf->top__DOT___0197_) 
                                & (~ (IData)(vlSelf->top__DOT___0196_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__225(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__225\n"); );
    // Body
    vlSelf->top__DOT___0115_ = ((IData)(vlSelf->top__DOT___0116_) 
                                & (~ (IData)(vlSelf->top__DOT___0042_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__226(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__226\n"); );
    // Body
    vlSelf->top__DOT___1429_ = (1U & ((IData)(vlSelf->top__DOT___0042_) 
                                      | ((IData)(vlSelf->top__DOT___3735_) 
                                         >> 6U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__227(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__227\n"); );
    // Body
    vlSelf->top__DOT___2039_ = ((0x3800U & ((IData)(
                                                    (vlSelf->top__DOT___3628_ 
                                                     >> 0x2eU)) 
                                            << 0xbU)) 
                                | ((0x400U & ((IData)(
                                                      (vlSelf->top__DOT___3628_ 
                                                       >> 0x2dU)) 
                                              << 0xaU)) 
                                   | (((IData)(vlSelf->top__DOT___0151_) 
                                       << 8U) | (((IData)(vlSelf->top__DOT___0581_) 
                                                  << 7U) 
                                                 | (((IData)(vlSelf->top__DOT___0455_) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->top__DOT___0042_) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->top__DOT___0287_) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT___0241_) 
                                                              << 3U) 
                                                             | (((IData)(vlSelf->top__DOT___1368_) 
                                                                 << 2U) 
                                                                | (((IData)(vlSelf->top__DOT___0795_) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelf->top__DOT___1550_)))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__228(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__228\n"); );
    // Body
    vlSelf->top__DOT___0713_ = ((IData)(vlSelf->top__DOT___0296_) 
                                & (IData)(vlSelf->top__DOT___0343_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__229(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__229\n"); );
    // Body
    vlSelf->top__DOT___0940_ = (1U & ((IData)(vlSelf->top__DOT___0338_) 
                                      | (IData)((vlSelf->top__DOT___3670_ 
                                                 >> 2U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__230(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__230\n"); );
    // Body
    vlSelf->top__DOT___0145_ = (1U & ((vlSelf->top__DOT___3748_ 
                                       >> 0x1dU) & 
                                      (~ (IData)(vlSelf->top__DOT___0146_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__231(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__231\n"); );
    // Body
    vlSelf->top__DOT___0605_ = ((IData)(vlSelf->top__DOT___0606_) 
                                & (IData)(vlSelf->top__DOT___0146_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__232(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__232\n"); );
    // Body
    vlSelf->top__DOT___0589_ = ((IData)(vlSelf->top__DOT___0146_) 
                                ^ (IData)(vlSelf->top__DOT___0071_));
    vlSelf->top__DOT___0587_ = ((IData)(vlSelf->top__DOT___0589_) 
                                & ((IData)(vlSelf->top__DOT___3732_) 
                                   >> 7U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__233(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__233\n"); );
    // Body
    vlSelf->top__DOT___0755_ = ((IData)(vlSelf->top__DOT___0611_) 
                                ^ (IData)(vlSelf->top__DOT___0035_));
    vlSelf->top__DOT___1281_ = (1U & ((IData)(vlSelf->top__DOT___0940_) 
                                      + (IData)(vlSelf->top__DOT___0924_)));
    vlSelf->top__DOT___0175_ = ((IData)(vlSelf->top__DOT___0587_) 
                                ^ (IData)(vlSelf->top__DOT___0633_));
    vlSelf->top__DOT___0376_ = (1U & (~ (((IData)(vlSelf->top__DOT___0671_) 
                                          & (IData)(vlSelf->top__DOT___0755_)) 
                                         | (IData)(vlSelf->top__DOT___0272_))));
    vlSelf->top__DOT___1438_ = (1U & (~ ((IData)(vlSelf->top__DOT___0175_) 
                                         & (IData)(vlSelf->top__DOT___0071_))));
    vlSelf->top__DOT___0173_ = ((IData)(vlSelf->top__DOT___0175_) 
                                & (~ (IData)(vlSelf->top__DOT___0174_)));
    vlSelf->top__DOT___0627_ = ((vlSelf->top__DOT___3651_[1U] 
                                 >> 1U) & (IData)(vlSelf->top__DOT___0175_));
    vlSelf->top__DOT___0766_ = (1U & (~ ((IData)(vlSelf->top__DOT___0627_) 
                                         & (IData)(vlSelf->top__DOT___0044_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__234(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__234\n"); );
    // Body
    vlSelf->top__DOT___0995_ = (1U & (~ (((IData)(vlSelf->top__DOT___0636_) 
                                          & (~ (IData)(vlSelf->top__DOT___0320_))) 
                                         | (IData)(vlSelf->top__DOT___0611_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__236(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__236\n"); );
    // Body
    vlSelf->top__DOT___0532_ = (1U & (~ ((IData)(vlSelf->top__DOT___0984_) 
                                         | (IData)(vlSelf->top__DOT___1048_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__238(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__238\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h97ea9c8b__0 = (((IData)(vlSelf->top__DOT___0924_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0042_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__239(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__239\n"); );
    // Body
    vlSelf->top__DOT___0620_ = ((IData)(vlSelf->top__DOT___1792_) 
                                ^ (IData)(vlSelf->top__DOT___0924_));
    vlSelf->top__DOT___0012_ = ((IData)(vlSelf->top__DOT___0197_) 
                                ^ (IData)(vlSelf->top__DOT___0620_));
    vlSelf->top__DOT___0619_ = ((IData)(vlSelf->top__DOT___0241_) 
                                & (IData)(vlSelf->top__DOT___0620_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__240(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__240\n"); );
    // Body
    vlSelf->top__DOT___0761_ = ((IData)(vlSelf->top__DOT___0717_) 
                                & ((IData)(vlSelf->top__DOT___0438_) 
                                   | (IData)(vlSelf->top__DOT___0267_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__241(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__241\n"); );
    // Body
    vlSelf->top__DOT___1758_ = (1U & ((vlSelf->top__DOT___3731_[3U] 
                                       >> 0x10U) | (IData)(vlSelf->top__DOT___1691_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__243(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__243\n"); );
    // Body
    vlSelf->top__DOT___0288_ = ((IData)(vlSelf->top__DOT___0289_) 
                                & (~ (IData)(vlSelf->top__DOT___0140_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__244(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__244\n"); );
    // Body
    vlSelf->top__DOT___1472_ = ((IData)(vlSelf->top__DOT___0314_) 
                                ^ (IData)(vlSelf->top__DOT___0193_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__245(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__245\n"); );
    // Body
    vlSelf->top__DOT___1336_ = (1U & (~ (((IData)(vlSelf->top__DOT___1338_) 
                                          & (IData)(vlSelf->top__DOT___0133_)) 
                                         | ((IData)(vlSelf->top__DOT___0438_) 
                                            & ((IData)(vlSelf->top__DOT___3645_) 
                                               >> 8U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__246(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__246\n"); );
    // Body
    vlSelf->top__DOT___0682_ = (1U & (~ (((IData)(vlSelf->top__DOT___0283_) 
                                          & (IData)(vlSelf->top__DOT___0692_)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT___3635_ 
                                                    >> 0x39U)))));
    vlSelf->top__DOT___0681_ = ((IData)(vlSelf->top__DOT___0524_) 
                                & (IData)(vlSelf->top__DOT___0682_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__247(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__247\n"); );
    // Body
    vlSelf->top__DOT___2132_ = ((2U & ((IData)((vlSelf->top__DOT___3635_ 
                                                >> 0x10U)) 
                                       << 1U)) | (IData)(vlSelf->top__DOT___0282_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__248(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__248\n"); );
    // Body
    vlSelf->top__DOT___0685_ = ((IData)(vlSelf->top__DOT___0076_) 
                                & (IData)(vlSelf->top__DOT___0519_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__249(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__249\n"); );
    // Body
    vlSelf->top__DOT___1031_ = (1U & (~ (((IData)(vlSelf->top__DOT___0094_) 
                                          & (vlSelf->top__DOT___3751_ 
                                             >> 0xeU)) 
                                         | ((IData)(vlSelf->top__DOT___3676_) 
                                            >> 1U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__250(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__250\n"); );
    // Body
    vlSelf->top__DOT___0092_ = ((IData)(vlSelf->top__DOT___0094_) 
                                & (~ (IData)((vlSelf->top__DOT___3626_ 
                                              >> 0x25U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__251(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__251\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_hc18b0380__0 = ((0x7f8U 
                                                 & (vlSelf->top__DOT___2014_ 
                                                    >> 7U)) 
                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & ((~ (IData)(vlSelf->top__DOT___0193_)) 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->top__DOT___0924_))));
    vlSelf->top__DOT___2091_ = ((0x7800U & ((IData)(
                                                    (vlSelf->top__DOT___3670_ 
                                                     >> 0x14U)) 
                                            << 0xbU)) 
                                | (IData)(vlSelf->top__DOT____VdfgTmp_hc18b0380__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__252(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__252\n"); );
    // Body
    vlSelf->top__DOT___0562_ = (1U & (~ (((IData)(vlSelf->top__DOT___0128_) 
                                          & (vlSelf->top__DOT___3727_ 
                                             >> 0xeU)) 
                                         | (IData)(vlSelf->top__DOT___1081_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__253(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__253\n"); );
    // Body
    vlSelf->top__DOT___0887_ = (1U & (~ (((IData)(vlSelf->top__DOT___0111_) 
                                          & (IData)(vlSelf->top__DOT___0464_)) 
                                         | (IData)(vlSelf->top__DOT___1309_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__254(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__254\n"); );
    // Body
    vlSelf->top__DOT___0668_ = (1U & (((((IData)(vlSelf->top__DOT___0232_) 
                                         << 5U) | (
                                                   (0x10U 
                                                    & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                       << 4U)) 
                                                   | (((IData)(vlSelf->top__DOT___0905_) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top__DOT___0134_) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->top__DOT___0166_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___1352_)))))) 
                                       + ((0x20U & (IData)(vlSelf->top__DOT___2045_)) 
                                          | ((0x1eU 
                                              & ((IData)(
                                                         (vlSelf->top__DOT___2012_ 
                                                          >> 0x28U)) 
                                                 << 1U)) 
                                             | (IData)(vlSelf->top__DOT___0524_)))) 
                                      >> 5U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__255(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__255\n"); );
    // Body
    vlSelf->top__DOT___0946_ = ((IData)(vlSelf->top__DOT___0148_) 
                                ^ (IData)(vlSelf->top__DOT___1461_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__257(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__257\n"); );
    // Body
    vlSelf->top__DOT___0552_ = ((IData)(vlSelf->top__DOT___0144_) 
                                & (IData)(vlSelf->top__DOT___0477_));
    vlSelf->top__DOT___0773_ = ((IData)(vlSelf->top__DOT___0127_) 
                                | (IData)(vlSelf->top__DOT___0552_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__258(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__258\n"); );
    // Body
    vlSelf->top__DOT___1299_ = (1U & (~ ((IData)(vlSelf->top__DOT___0144_) 
                                         & (IData)(vlSelf->top__DOT___0924_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__259(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__259\n"); );
    // Body
    vlSelf->top__DOT___0026_ = ((IData)(vlSelf->top__DOT___0332_) 
                                & (~ (IData)(vlSelf->top__DOT___0345_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__260(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__260\n"); );
    // Body
    vlSelf->top__DOT___0369_ = (1U & (~ ((IData)((vlSelf->top__DOT___3791_ 
                                                  >> 0x15U)) 
                                         & (IData)(vlSelf->top__DOT___0065_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__262(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__262\n"); );
    // Body
    vlSelf->top__DOT___0110_ = ((IData)(vlSelf->top__DOT___0111_) 
                                & (~ (IData)(vlSelf->top__DOT___0065_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__263(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__263\n"); );
    // Body
    vlSelf->top__DOT___0357_ = (1U & (~ (((IData)(vlSelf->top__DOT___0690_) 
                                          & (IData)(vlSelf->top__DOT___0135_)) 
                                         | (IData)(vlSelf->top__DOT___0065_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__264(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__264\n"); );
    // Body
    vlSelf->top__DOT___0198_ = ((IData)(vlSelf->top__DOT___0065_) 
                                & (IData)(vlSelf->top__DOT___0617_));
    vlSelf->top__DOT___0481_ = ((IData)(vlSelf->top__DOT___0198_) 
                                & (IData)(vlSelf->top__DOT___0069_));
    vlSelf->top__DOT___0053_ = ((IData)(vlSelf->top__DOT___0152_) 
                                & (~ (IData)(vlSelf->top__DOT___0198_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__265(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__265\n"); );
    // Body
    vlSelf->top__DOT___1808_ = ((IData)(vlSelf->top__DOT___0259_) 
                                ^ (IData)(vlSelf->top__DOT___0730_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__267(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__267\n"); );
    // Body
    vlSelf->top__DOT___0431_ = (IData)((((IData)(vlSelf->top__DOT___3663_) 
                                         >> 8U) ^ (IData)(vlSelf->top__DOT___0039_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__268(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__268\n"); );
    // Body
    vlSelf->top__DOT___1266_ = (1U & (~ (((IData)(vlSelf->top__DOT___1170_) 
                                          & (IData)(vlSelf->top__DOT___0127_)) 
                                         | ((IData)(vlSelf->top__DOT___0039_) 
                                            & (IData)(vlSelf->top__DOT___0134_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__269(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__269\n"); );
    // Body
    vlSelf->top__DOT___1590_ = (1U & (((((IData)(vlSelf->top__DOT___0311_) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->top__DOT___0039_) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->top__DOT___0320_))))) 
                                       + (4U | ((IData)(vlSelf->top__DOT___0150_) 
                                                << 1U))) 
                                      >> 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__270(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__270\n"); );
    // Body
    vlSelf->top__DOT___1761_ = (1U & (((((IData)(vlSelf->top__DOT___0134_) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT___0311_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0039_) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (~ (IData)(vlSelf->top__DOT___0320_)))))) 
                                       + (4U | (((IData)(vlSelf->top__DOT___0464_) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->top__DOT___0150_) 
                                                   << 1U)))) 
                                      >> 3U));
    vlSelf->top__DOT___0482_ = (1U & (((((IData)(vlSelf->top__DOT___0287_) 
                                         << 4U) | (
                                                   ((IData)(vlSelf->top__DOT___0134_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___0311_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___0039_) 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSelf->top__DOT___0320_))))))) 
                                       + (4U | (((IData)(vlSelf->top__DOT___0127_) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->top__DOT___0464_) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->top__DOT___0150_) 
                                                      << 1U))))) 
                                      >> 4U));
    vlSelf->top__DOT___1589_ = (1U & (~ (((IData)(vlSelf->top__DOT___0134_) 
                                          & (IData)(vlSelf->top__DOT___0907_)) 
                                         | ((IData)(vlSelf->top__DOT___0272_) 
                                            & (IData)(vlSelf->top__DOT___1590_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__273(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__273\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h046c5272__0 = (((IData)(vlSelf->top__DOT___0240_) 
                                                 << 4U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h5ef09df3__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__274(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__274\n"); );
    // Body
    vlSelf->top__DOT___1233_ = ((IData)(vlSelf->top__DOT___0095_) 
                                | (IData)(vlSelf->top__DOT___0255_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__275(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__275\n"); );
    // Body
    vlSelf->top__DOT___0475_ = (1U & (~ (((IData)(vlSelf->top__DOT___0255_) 
                                          & (IData)(vlSelf->top__DOT___0655_)) 
                                         | (IData)(vlSelf->top__DOT___0623_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__276(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__276\n"); );
    // Body
    vlSelf->top__DOT___0372_ = ((IData)(vlSelf->top__DOT___0253_) 
                                & (~ (IData)(vlSelf->top__DOT___0373_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__278(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__278\n"); );
    // Body
    vlSelf->top__DOT___0841_ = (1U & (~ (((IData)(vlSelf->top__DOT___0065_) 
                                          & (IData)(vlSelf->top__DOT___0626_)) 
                                         | (IData)(vlSelf->top__DOT___0098_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__280(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__280\n"); );
    // Body
    vlSelf->top__DOT___1086_ = (1U & ((IData)(vlSelf->top__DOT___1003_) 
                                      | (vlSelf->top__DOT___3651_[1U] 
                                         >> 0x13U)));
    vlSelf->top__DOT___1634_ = ((IData)(vlSelf->top__DOT___0608_) 
                                ^ (IData)(vlSelf->top__DOT___1086_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__282(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__282\n"); );
    // Body
    vlSelf->top__DOT___1013_ = (1U & (~ (((IData)(vlSelf->top__DOT___0611_) 
                                          & (IData)(vlSelf->top__DOT___0989_)) 
                                         | ((IData)(vlSelf->top__DOT___3794_) 
                                            >> 5U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__284(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__284\n"); );
    // Body
    vlSelf->top__DOT___1053_ = (1U & (~ (((~ (IData)(vlSelf->top__DOT___0162_)) 
                                          & ((IData)(vlSelf->top__DOT___3822_) 
                                             >> 6U)) 
                                         | ((IData)(vlSelf->top__DOT___3674_) 
                                            >> 3U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__285(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__285\n"); );
    // Body
    vlSelf->top__DOT___1481_ = (1U & (~ (((~ (IData)(vlSelf->top__DOT___0162_)) 
                                          & (IData)(vlSelf->top__DOT___0469_)) 
                                         | ((IData)(vlSelf->top__DOT___0320_) 
                                            & (~ (IData)(vlSelf->top__DOT___0272_))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__286(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__286\n"); );
    // Body
    vlSelf->top__DOT___0091_ = (1U & ((vlSelf->top__DOT___3622_ 
                                       >> 0x11U) & 
                                      (~ (IData)(vlSelf->top__DOT___0162_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__287(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__287\n"); );
    // Body
    vlSelf->top__DOT___0553_ = (1U & ((~ (IData)(vlSelf->top__DOT___0162_)) 
                                      | (IData)((vlSelf->top__DOT___3699_ 
                                                 >> 5U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__288(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__288\n"); );
    // Body
    vlSelf->top__DOT___1025_ = (1U & (~ (((~ (IData)(vlSelf->top__DOT___0162_)) 
                                          & ((IData)(vlSelf->top__DOT___3794_) 
                                             >> 5U)) 
                                         | (IData)(vlSelf->top__DOT___1026_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__289(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__289\n"); );
    // Body
    vlSelf->top__DOT___0212_ = (1U & (~ (((IData)(vlSelf->top__DOT___0055_) 
                                          & (~ (IData)(vlSelf->top__DOT___0162_))) 
                                         | (IData)(vlSelf->top__DOT___0210_))));
    vlSelf->top__DOT___1228_ = (1U & (~ (((IData)(vlSelf->top__DOT___0082_) 
                                          & (IData)(vlSelf->top__DOT___0907_)) 
                                         | ((IData)(vlSelf->top__DOT___0091_) 
                                            & (IData)(vlSelf->top__DOT___0175_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__290(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__290\n"); );
    // Body
    vlSelf->out_data[0x26U] = ((0xfffffffeU & vlSelf->out_data[0x26U]) 
                               | ((IData)(vlSelf->top__DOT___0469_) 
                                  | (IData)(vlSelf->top__DOT___0521_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__291(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__291\n"); );
    // Body
    vlSelf->top__DOT___1055_ = (1U & (~ (((IData)(vlSelf->top__DOT___0219_) 
                                          & (IData)(vlSelf->top__DOT___1056_)) 
                                         | (IData)(vlSelf->top__DOT___0697_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__293(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__293\n"); );
    // Body
    vlSelf->top__DOT___0875_ = (1U & (~ (((IData)(vlSelf->top__DOT___0662_) 
                                          & (IData)(vlSelf->top__DOT___1056_)) 
                                         | (IData)(vlSelf->top__DOT___0134_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__294(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__294\n"); );
    // Body
    vlSelf->top__DOT___1380_ = (1U & (~ (((IData)((vlSelf->top__DOT___3627_ 
                                                   >> 0xfU)) 
                                          & (IData)(vlSelf->top__DOT___0133_)) 
                                         | ((IData)(vlSelf->top__DOT___1381_) 
                                            & (IData)(vlSelf->top__DOT___1056_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__295(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__295\n"); );
    // Body
    vlSelf->top__DOT___2051_ = ((0x200U & ((IData)(
                                                   (vlSelf->top__DOT___3650_ 
                                                    >> 0xfU)) 
                                           << 9U)) 
                                | (((IData)(vlSelf->top__DOT___1056_) 
                                    << 8U) | ((0x80U 
                                               & ((~ (IData)(vlSelf->top__DOT___0205_)) 
                                                  << 7U)) 
                                              | (((IData)(vlSelf->top__DOT___0043_) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->top__DOT___0477_) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->top__DOT___1360_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___0135_) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->top__DOT___0146_) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT___0144_)))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__296(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__296\n"); );
    // Body
    vlSelf->top__DOT___1038_ = (1U & (~ (((vlSelf->top__DOT___3668_[0U] 
                                           >> 4U) & (IData)(vlSelf->top__DOT___0171_)) 
                                         | (IData)(vlSelf->top__DOT___0590_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__297(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__297\n"); );
    // Body
    vlSelf->top__DOT___1402_ = ((IData)(vlSelf->top__DOT___0195_) 
                                | (IData)(vlSelf->top__DOT___0607_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__298(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__298\n"); );
    // Body
    vlSelf->top__DOT___0537_ = ((IData)(vlSelf->top__DOT___0099_) 
                                | (IData)(vlSelf->top__DOT___0195_));
    vlSelf->top__DOT___1137_ = (1U & (~ ((IData)(vlSelf->top__DOT___0537_) 
                                         & (IData)(vlSelf->top__DOT___0590_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__300(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__300\n"); );
    // Body
    vlSelf->top__DOT___2054_ = (((QData)((IData)((3U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT___3628_ 
                                                             >> 0x31U))))) 
                                 << 0x27U) | (((QData)((IData)(
                                                               (7U 
                                                                & ((IData)(vlSelf->top__DOT___2039_) 
                                                                   >> 0xbU)))) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___3628_ 
                                                                              >> 0x2dU))))) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(
                                                                     (0xfU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x29U))))) 
                                                     << 0x1fU) 
                                                    | (QData)((IData)(
                                                                      ((0x40000000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x28U)) 
                                                                           << 0x1eU)) 
                                                                       | ((0x3ff80000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x1dU)) 
                                                                              << 0x13U)) 
                                                                          | ((0x40000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x1cU)) 
                                                                                << 0x12U)) 
                                                                             | ((0x30000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x1aU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x19U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x7e00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x13U)) 
                                                                                << 9U)) 
                                                                                | (IData)(vlSelf->top__DOT___3645_)))))))))))));
    vlSelf->top__DOT___2254_ = (((QData)((IData)((0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT___3628_ 
                                                             >> 0x33U))))) 
                                 << 0x33U) | (((QData)((IData)(
                                                               (3U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___2054_ 
                                                                           >> 0x27U))))) 
                                               << 0x31U) 
                                              | (((QData)((IData)(
                                                                  (7U 
                                                                   & ((IData)(vlSelf->top__DOT___2039_) 
                                                                      >> 0xbU)))) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x2dU))))) 
                                                     << 0x2dU) 
                                                    | (((QData)((IData)(
                                                                        (0xfU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___2054_ 
                                                                                >> 0x1fU))))) 
                                                        << 0x29U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x28U))))) 
                                                           << 0x28U) 
                                                          | (((QData)((IData)(
                                                                              (0x7ffU 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT___2054_ 
                                                                                >> 0x13U))))) 
                                                              << 0x1dU) 
                                                             | (QData)((IData)(
                                                                               ((0x10000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0xc000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2054_ 
                                                                                >> 0x10U)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x19U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1f80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2054_ 
                                                                                >> 9U)) 
                                                                                << 0x13U)) 
                                                                                | (0x7ffffU 
                                                                                & (IData)(vlSelf->top__DOT___3628_)))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__303(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__303\n"); );
    // Body
    vlSelf->top__DOT___2043_ = ((0x1ffcU & (vlSelf->top__DOT___3657_[0U] 
                                            >> 4U)) 
                                | (((IData)(vlSelf->top__DOT___0605_) 
                                    << 1U) | (IData)(vlSelf->top__DOT___0226_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__305(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__305\n"); );
    // Body
    vlSelf->top__DOT___0594_ = ((IData)(vlSelf->top__DOT___0589_) 
                                & (IData)(vlSelf->top__DOT___0595_));
    vlSelf->top__DOT___0612_ = ((IData)(vlSelf->top__DOT___0594_) 
                                & (IData)(vlSelf->top__DOT___0270_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__306(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__306\n"); );
    // Body
    vlSelf->top__DOT___0785_ = (1U & (~ (((IData)(vlSelf->top__DOT___0175_) 
                                          & (IData)(vlSelf->top__DOT___0177_)) 
                                         | (IData)(vlSelf->top__DOT___0591_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__307(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__307\n"); );
    // Body
    vlSelf->top__DOT___1827_ = (1U & ((IData)(vlSelf->top__DOT___0175_) 
                                      ^ (IData)((vlSelf->top__DOT___3700_ 
                                                 >> 0x23U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__309(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__309\n"); );
    // Body
    vlSelf->top__DOT___1015_ = (1U & (~ (((IData)(vlSelf->top__DOT___0175_) 
                                          & (IData)(vlSelf->top__DOT___0988_)) 
                                         | ((IData)(vlSelf->top__DOT___3810_) 
                                            >> 5U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__310(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__310\n"); );
    // Body
    vlSelf->top__DOT___0489_ = (1U & (~ (((IData)(vlSelf->top__DOT___0043_) 
                                          & (IData)(vlSelf->top__DOT___0605_)) 
                                         | ((IData)(vlSelf->top__DOT___0175_) 
                                            & (IData)(vlSelf->top__DOT___0058_)))));
    vlSelf->top__DOT___0789_ = (1U & (~ ((IData)(vlSelf->top__DOT___0042_) 
                                         & (IData)(vlSelf->top__DOT___0489_))));
    vlSelf->top__DOT___1028_ = (1U & (~ (((IData)(vlSelf->top__DOT___0152_) 
                                          & (IData)(vlSelf->top__DOT___0134_)) 
                                         | ((IData)(vlSelf->top__DOT___0489_) 
                                            & (IData)(vlSelf->top__DOT___0438_)))));
    vlSelf->out_data[0x2aU] = ((0xfffffffeU & vlSelf->out_data[0x2aU]) 
                               | (1U & (~ (((IData)(vlSelf->top__DOT___1028_) 
                                            & (IData)(vlSelf->top__DOT___0095_)) 
                                           | (IData)(vlSelf->top__DOT___1027_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__312(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__312\n"); );
    // Body
    vlSelf->top__DOT___1399_ = (1U & (~ (((IData)(vlSelf->top__DOT___0795_) 
                                          & (IData)(vlSelf->top__DOT___1017_)) 
                                         | ((IData)(vlSelf->top__DOT___0678_) 
                                            & (IData)(vlSelf->top__DOT___0149_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__313(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__313\n"); );
    // Body
    vlSelf->out_data[0x20U] = ((0xfffffffeU & vlSelf->out_data[0x20U]) 
                               | ((IData)(vlSelf->top__DOT___0016_) 
                                  & (IData)(vlSelf->top__DOT___0532_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__315(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__315\n"); );
    // Body
    vlSelf->top__DOT___0885_ = (1U & (~ (((IData)(vlSelf->top__DOT___0620_) 
                                          & (IData)(vlSelf->top__DOT___0042_)) 
                                         | ((vlSelf->top__DOT___3682_ 
                                             >> 6U) 
                                            & (IData)(
                                                      (vlSelf->top__DOT___3734_ 
                                                       >> 0xdU))))));
    vlSelf->top__DOT___0884_ = ((IData)(vlSelf->top__DOT___0885_) 
                                & (IData)(vlSelf->top__DOT___0640_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__316(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__316\n"); );
    // Body
    vlSelf->top__DOT___1405_ = (1U & ((IData)((vlSelf->top__DOT___3643_ 
                                               >> 0x14U)) 
                                      ^ (IData)(vlSelf->top__DOT___0620_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__317(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__317\n"); );
    // Body
    vlSelf->top__DOT___0680_ = ((~ (IData)(vlSelf->top__DOT___0162_)) 
                                & (IData)(vlSelf->top__DOT___0620_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__318(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__318\n"); );
    // Body
    vlSelf->top__DOT___0214_ = (1U & (~ (((IData)(vlSelf->top__DOT___1017_) 
                                          & (IData)(vlSelf->top__DOT___0354_)) 
                                         | (IData)(vlSelf->top__DOT___0620_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__319(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__319\n"); );
    // Body
    vlSelf->top__DOT___0779_ = ((IData)(vlSelf->top__DOT___0619_) 
                                | (IData)(vlSelf->top__DOT___0635_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__320(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__320\n"); );
    // Body
    vlSelf->top__DOT___1411_ = (1U & (~ (((IData)(vlSelf->top__DOT___0043_) 
                                          & (IData)(vlSelf->top__DOT___0128_)) 
                                         | ((IData)(vlSelf->top__DOT___0288_) 
                                            & ((IData)(vlSelf->top__DOT___3642_) 
                                               >> 2U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__321(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__321\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h76511b29__0 = (((IData)(vlSelf->top__DOT___1031_) 
                                                 << 2U) 
                                                | ((2U 
                                                    & ((~ (IData)(vlSelf->top__DOT___0193_)) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->top__DOT___1381_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__323(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__323\n"); );
    // Body
    vlSelf->top__DOT___0979_ = ((IData)(vlSelf->top__DOT___0092_) 
                                ^ (IData)(vlSelf->top__DOT___0343_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__325(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__325\n"); );
    // Body
    vlSelf->top__DOT___0434_ = (1U & (~ (((IData)(vlSelf->top__DOT___0116_) 
                                          & ((IData)(vlSelf->top__DOT___3810_) 
                                             >> 5U)) 
                                         | ((IData)(vlSelf->top__DOT___0438_) 
                                            & (IData)(vlSelf->top__DOT___0887_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__326(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__326\n"); );
    // Body
    vlSelf->top__DOT___0666_ = ((IData)(vlSelf->top__DOT___0668_) 
                                & (vlSelf->top__DOT___3679_[2U] 
                                   >> 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__328(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__328\n"); );
    // Body
    vlSelf->top__DOT___2064_ = (0x28000000000ULL | 
                                (((QData)((IData)((1U 
                                                   & ((IData)(vlSelf->top__DOT___1890_) 
                                                      >> 0xbU)))) 
                                  << 0x2bU) | (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->top__DOT___3732_) 
                                                                    >> 5U)))) 
                                                << 0x2aU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0177_)) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0552_)) 
                                                      << 0x26U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->top__DOT___3648_ 
                                                                             >> 0x19U)))) 
                                                         << 0x25U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->top__DOT___3648_ 
                                                                                >> 0x18U)))) 
                                                            << 0x24U) 
                                                           | (((QData)((IData)(
                                                                               (3U 
                                                                                & (vlSelf->top__DOT___3648_ 
                                                                                >> 0x16U)))) 
                                                               << 0x22U) 
                                                              | (((QData)((IData)(
                                                                                (3U 
                                                                                & ((IData)(vlSelf->top__DOT___2024_) 
                                                                                >> 0xcU)))) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->top__DOT___3648_ 
                                                                                << 0xcU)) 
                                                                                | ((0x7fc00000U 
                                                                                & ((IData)(vlSelf->top__DOT___2024_) 
                                                                                << 0x14U)) 
                                                                                | ((0x3fc000U 
                                                                                & (vlSelf->top__DOT___3648_ 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3648_ 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3648_ 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___3693_) 
                                                                                << 7U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___3693_) 
                                                                                << 7U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___3693_) 
                                                                                << 7U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(vlSelf->top__DOT___3693_) 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0408_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0343_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0627_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___1064_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0730_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0505_))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__331(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__331\n"); );
    // Body
    vlSelf->top__DOT___1264_ = (1U & (~ (((IData)(vlSelf->top__DOT___0672_) 
                                          & (IData)(vlSelf->top__DOT___0191_)) 
                                         | ((IData)(vlSelf->top__DOT___0110_) 
                                            & (IData)(vlSelf->top__DOT___1265_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__332(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__332\n"); );
    // Body
    vlSelf->top__DOT___0362_ = ((IData)(vlSelf->top__DOT___0151_) 
                                | (IData)(vlSelf->top__DOT___0357_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__333(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__333\n"); );
    // Body
    vlSelf->top__DOT___0215_ = ((IData)(vlSelf->top__DOT___0267_) 
                                & (IData)(vlSelf->top__DOT___0357_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__334(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__334\n"); );
    // Body
    vlSelf->top__DOT___1821_ = (1U & (((((IData)(vlSelf->top__DOT___0261_) 
                                         << 1U) | (1U 
                                                   & (~ (IData)(vlSelf->top__DOT___0272_)))) 
                                       + (((IData)(vlSelf->top__DOT___1447_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0198_))) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__340(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__340\n"); );
    // Body
    vlSelf->top__DOT___1969_ = (((QData)((IData)((0xffffU 
                                                  & (vlSelf->top__DOT___3633_[1U] 
                                                     >> 1U)))) 
                                 << 0x24U) | (((QData)((IData)(
                                                               (1U 
                                                                & vlSelf->top__DOT___3633_[1U]))) 
                                               << 0x23U) 
                                              | (((QData)((IData)(
                                                                  (vlSelf->top__DOT___3633_[0U] 
                                                                   >> 0x1aU))) 
                                                  << 0x1dU) 
                                                 | (QData)((IData)(
                                                                   ((0x10000000U 
                                                                     & (vlSelf->top__DOT___3633_[0U] 
                                                                        << 3U)) 
                                                                    | ((0xfffff00U 
                                                                        & (vlSelf->top__DOT___3633_[0U] 
                                                                           << 3U)) 
                                                                       | (((IData)(vlSelf->top__DOT___0453_) 
                                                                           << 7U) 
                                                                          | (((IData)(vlSelf->top__DOT___1266_) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->top__DOT___0438_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0752_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1283_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0625_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0065_))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__341(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__341\n"); );
    // Body
    vlSelf->top__DOT___1760_ = ((IData)(vlSelf->top__DOT___0171_) 
                                | (IData)(vlSelf->top__DOT___1761_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__343(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__343\n"); );
    // Body
    vlSelf->top__DOT___0759_ = (1U & (~ (((IData)(vlSelf->top__DOT___0841_) 
                                          & (vlSelf->top__DOT___3751_ 
                                             >> 0x11U)) 
                                         | (((IData)(vlSelf->top__DOT___3647_) 
                                             >> 3U) 
                                            & (IData)(vlSelf->top__DOT___0226_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__345(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__345\n"); );
    // Body
    vlSelf->top__DOT___0954_ = (1U & (((((IData)(vlSelf->top__DOT___0995_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___0082_)) 
                                       + (((IData)(vlSelf->top__DOT___0425_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0091_))) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__346(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__346\n"); );
    // Body
    vlSelf->top__DOT___1629_ = ((IData)(vlSelf->top__DOT___0721_) 
                                | (IData)(vlSelf->top__DOT___1025_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__347(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__347\n"); );
    // Body
    vlSelf->out_data[0x1cU] = ((0xfffffffeU & vlSelf->out_data[0x1cU]) 
                               | ((IData)(vlSelf->top__DOT___0212_) 
                                  & (~ (IData)((vlSelf->top__DOT___3635_ 
                                                >> 0x39U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__348(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__348\n"); );
    // Body
    vlSelf->top__DOT___0698_ = ((IData)(vlSelf->top__DOT___0212_) 
                                & (IData)(vlSelf->top__DOT___0335_));
    vlSelf->top__DOT___0931_ = (1U & (~ (((IData)(vlSelf->top__DOT___0698_) 
                                          & (IData)(vlSelf->top__DOT___0018_)) 
                                         | (IData)(vlSelf->top__DOT___0273_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__349(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__349\n"); );
    // Body
    vlSelf->top__DOT___1188_ = (1U & (~ (((IData)(vlSelf->top__DOT___0014_) 
                                          & (IData)(vlSelf->top__DOT___0994_)) 
                                         | (IData)(vlSelf->top__DOT___0212_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__350(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__350\n"); );
    // Body
    vlSelf->top__DOT___1329_ = (1U & (~ (((IData)(vlSelf->top__DOT___0139_) 
                                          & (IData)(vlSelf->top__DOT___0071_)) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT___3627_ 
                                                     >> 0x14U)) 
                                            & (IData)(vlSelf->top__DOT___0212_)))));
    vlSelf->top__DOT___1911_ = ((0x7ffeU & (IData)(vlSelf->top__DOT___1911_)) 
                                | (IData)(vlSelf->top__DOT___1329_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__351(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__351\n"); );
    // Body
    vlSelf->top__DOT___0951_ = (1U & (~ ((((IData)(vlSelf->top__DOT___3715_) 
                                           >> 0xeU) 
                                          & (~ (((IData)(
                                                         (vlSelf->top__DOT___3719_ 
                                                          >> 0x1fU)) 
                                                 & (IData)(vlSelf->top__DOT___1013_)) 
                                                | (IData)(vlSelf->top__DOT___0854_)))) 
                                         | ((IData)(vlSelf->top__DOT___0148_) 
                                            & (IData)(vlSelf->top__DOT___1137_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__352(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__352\n"); );
    // Body
    vlSelf->top__DOT___0777_ = (1U & (((((0x10000U 
                                          & ((IData)(
                                                     (vlSelf->top__DOT___2054_ 
                                                      >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & ((IData)(
                                                        (vlSelf->top__DOT___3628_ 
                                                         >> 0x19U)) 
                                                << 0xfU)) 
                                            | (0x7e00U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___2054_ 
                                                           >> 9U)) 
                                                  << 9U)))) 
                                        | ((0x100U 
                                            & (IData)(vlSelf->top__DOT___3645_)) 
                                           | ((0xfcU 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___2054_ 
                                                           >> 2U)) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (IData)(vlSelf->top__DOT___3645_))))) 
                                       + (((0x18000U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT___2053_ 
                                                        >> 0xfU)) 
                                               << 0xfU)) 
                                           | ((0x4000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___3640_ 
                                                           >> 6U)) 
                                                  << 0xeU)) 
                                              | ((0x3800U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___2053_ 
                                                              >> 0xbU)) 
                                                     << 0xbU)) 
                                                 | (((IData)(vlSelf->top__DOT___0129_) 
                                                     << 0xaU) 
                                                    | ((IData)(vlSelf->top__DOT___0141_) 
                                                       << 9U))))) 
                                          | (((IData)(vlSelf->top__DOT___0152_) 
                                              << 8U) 
                                             | (((IData)(vlSelf->top__DOT___0253_) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->top__DOT___1044_) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->top__DOT___1066_) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->top__DOT___0116_) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->top__DOT___0058_) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->top__DOT___0071_) 
                                                                << 2U) 
                                                               | (IData)(vlSelf->top__DOT___0340_)))))))))) 
                                      >> 0x10U));
    vlSelf->top__DOT___0331_ = (1U & (((((0x3ff80000U 
                                          & ((IData)(
                                                     (vlSelf->top__DOT___2054_ 
                                                      >> 0x13U)) 
                                             << 0x13U)) 
                                         | ((0x40000U 
                                             & ((IData)(
                                                        (vlSelf->top__DOT___3628_ 
                                                         >> 0x1cU)) 
                                                << 0x12U)) 
                                            | ((0x30000U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT___2054_ 
                                                            >> 0x10U)) 
                                                   << 0x10U)) 
                                               | ((0x8000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___3628_ 
                                                               >> 0x19U)) 
                                                      << 0xfU)) 
                                                  | (0x7e00U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___2054_ 
                                                                 >> 9U)) 
                                                        << 9U)))))) 
                                        | ((0x100U 
                                            & (IData)(vlSelf->top__DOT___3645_)) 
                                           | ((0xfcU 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___2054_ 
                                                           >> 2U)) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (IData)(vlSelf->top__DOT___3645_))))) 
                                       + (((0x30000000U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT___2053_ 
                                                        >> 0x1cU)) 
                                               << 0x1cU)) 
                                           | ((0x8000000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___3640_ 
                                                           >> 0x13U)) 
                                                  << 0x1bU)) 
                                              | ((0x7e00000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___2053_ 
                                                              >> 0x15U)) 
                                                     << 0x15U)) 
                                                 | ((0x100000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___3640_ 
                                                                 >> 0xcU)) 
                                                        << 0x14U)) 
                                                    | ((0xf8000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___2053_ 
                                                                    >> 0xfU)) 
                                                           << 0xfU)) 
                                                       | ((0x4000U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___3640_ 
                                                                       >> 6U)) 
                                                              << 0xeU)) 
                                                          | ((0x3800U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___2053_ 
                                                                          >> 0xbU)) 
                                                                 << 0xbU)) 
                                                             | (((IData)(vlSelf->top__DOT___0129_) 
                                                                 << 0xaU) 
                                                                | ((IData)(vlSelf->top__DOT___0141_) 
                                                                   << 9U))))))))) 
                                          | (((IData)(vlSelf->top__DOT___0152_) 
                                              << 8U) 
                                             | (((IData)(vlSelf->top__DOT___0253_) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->top__DOT___1044_) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->top__DOT___1066_) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->top__DOT___0116_) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->top__DOT___0058_) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->top__DOT___0071_) 
                                                                << 2U) 
                                                               | (IData)(vlSelf->top__DOT___0340_)))))))))) 
                                      >> 0x1dU));
    vlSelf->top__DOT___0252_ = (1U & (((((0x40000000U 
                                          & ((IData)(
                                                     (vlSelf->top__DOT___3628_ 
                                                      >> 0x28U)) 
                                             << 0x1eU)) 
                                         | ((0x3ff80000U 
                                             & ((IData)(
                                                        (vlSelf->top__DOT___2054_ 
                                                         >> 0x13U)) 
                                                << 0x13U)) 
                                            | ((0x40000U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT___3628_ 
                                                            >> 0x1cU)) 
                                                   << 0x12U)) 
                                               | ((0x30000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___2054_ 
                                                               >> 0x10U)) 
                                                      << 0x10U)) 
                                                  | ((0x8000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___3628_ 
                                                                  >> 0x19U)) 
                                                         << 0xfU)) 
                                                     | (0x7e00U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___2054_ 
                                                                    >> 9U)) 
                                                           << 9U))))))) 
                                        | ((0x100U 
                                            & (IData)(vlSelf->top__DOT___3645_)) 
                                           | ((0xfcU 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___2054_ 
                                                           >> 2U)) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (IData)(vlSelf->top__DOT___3645_))))) 
                                       + (((0x70000000U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT___2053_ 
                                                        >> 0x1cU)) 
                                               << 0x1cU)) 
                                           | ((0x8000000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___3640_ 
                                                           >> 0x13U)) 
                                                  << 0x1bU)) 
                                              | ((0x7e00000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___2053_ 
                                                              >> 0x15U)) 
                                                     << 0x15U)) 
                                                 | ((0x100000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___3640_ 
                                                                 >> 0xcU)) 
                                                        << 0x14U)) 
                                                    | ((0xf8000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___2053_ 
                                                                    >> 0xfU)) 
                                                           << 0xfU)) 
                                                       | ((0x4000U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___3640_ 
                                                                       >> 6U)) 
                                                              << 0xeU)) 
                                                          | ((0x3800U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___2053_ 
                                                                          >> 0xbU)) 
                                                                 << 0xbU)) 
                                                             | (((IData)(vlSelf->top__DOT___0129_) 
                                                                 << 0xaU) 
                                                                | ((IData)(vlSelf->top__DOT___0141_) 
                                                                   << 9U))))))))) 
                                          | (((IData)(vlSelf->top__DOT___0152_) 
                                              << 8U) 
                                             | (((IData)(vlSelf->top__DOT___0253_) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->top__DOT___1044_) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->top__DOT___1066_) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->top__DOT___0116_) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->top__DOT___0058_) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->top__DOT___0071_) 
                                                                << 2U) 
                                                               | (IData)(vlSelf->top__DOT___0340_)))))))))) 
                                      >> 0x1eU));
    vlSelf->top__DOT___2052_ = (((QData)((IData)((0x3ffU 
                                                  & (IData)(
                                                            (0x3ffULL 
                                                             & (((((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___2054_ 
                                                                                >> 0x27U)) 
                                                                                << 0x1eU) 
                                                                                | ((0x38000000U 
                                                                                & ((IData)(vlSelf->top__DOT___2039_) 
                                                                                << 0x10U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x2dU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x3c00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2054_ 
                                                                                >> 0x1fU)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x28U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x1ffc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2054_ 
                                                                                >> 0x13U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x1cU)) 
                                                                                << 9U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2054_ 
                                                                                >> 0x10U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___2054_ 
                                                                                >> 9U)))))))))))))) 
                                                                   << 9U) 
                                                                  | (QData)((IData)(
                                                                                ((0x100U 
                                                                                & (IData)(vlSelf->top__DOT___3645_)) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2054_ 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & (IData)(vlSelf->top__DOT___3645_))))))) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___2053_ 
                                                                                >> 0x1cU)) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3640_ 
                                                                                >> 0x13U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x3f000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2053_ 
                                                                                >> 0x15U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3640_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x7c0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2053_ 
                                                                                >> 0xfU)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3640_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | ((0x1cU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2053_ 
                                                                                >> 0xbU)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0129_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0141_))))))))))) 
                                                                   << 9U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0253_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1044_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1066_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0058_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0340_)))))))))))) 
                                                                >> 0x1fU)))))) 
                                 << 0x1fU) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0252_) 
                                                               << 0x1eU) 
                                                              | (((IData)(vlSelf->top__DOT___0331_) 
                                                                  << 0x1dU) 
                                                                 | ((0x1ffe0000U 
                                                                     & ((((0x1ff80000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___2054_ 
                                                                                >> 0x13U)) 
                                                                              << 0x13U)) 
                                                                          | ((0x40000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x1cU)) 
                                                                                << 0x12U)) 
                                                                             | ((0x30000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2054_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x19U)) 
                                                                                << 0xfU)) 
                                                                                | (0x7e00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2054_ 
                                                                                >> 9U)) 
                                                                                << 9U)))))) 
                                                                         | ((0x100U 
                                                                             & (IData)(vlSelf->top__DOT___3645_)) 
                                                                            | ((0xfcU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2054_ 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                               | (3U 
                                                                                & (IData)(vlSelf->top__DOT___3645_))))) 
                                                                        + 
                                                                        (((0x10000000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___2053_ 
                                                                                >> 0x1cU)) 
                                                                              << 0x1cU)) 
                                                                          | ((0x8000000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3640_ 
                                                                                >> 0x13U)) 
                                                                                << 0x1bU)) 
                                                                             | ((0x7e00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2053_ 
                                                                                >> 0x15U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3640_ 
                                                                                >> 0xcU)) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2053_ 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3640_ 
                                                                                >> 6U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x3800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2053_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0129_) 
                                                                                << 0xaU) 
                                                                                | ((IData)(vlSelf->top__DOT___0141_) 
                                                                                << 9U))))))))) 
                                                                         | (((IData)(vlSelf->top__DOT___0152_) 
                                                                             << 8U) 
                                                                            | (((IData)(vlSelf->top__DOT___0253_) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT___1044_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1066_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0058_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0340_))))))))))) 
                                                                    | (((IData)(vlSelf->top__DOT___0777_) 
                                                                        << 0x10U) 
                                                                       | (0xffffU 
                                                                          & ((((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3628_ 
                                                                                >> 0x19U)) 
                                                                                << 0xfU)) 
                                                                               | (0x7e00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2054_ 
                                                                                >> 9U)) 
                                                                                << 9U))) 
                                                                              | ((0x100U 
                                                                                & (IData)(vlSelf->top__DOT___3645_)) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2054_ 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & (IData)(vlSelf->top__DOT___3645_))))) 
                                                                             + 
                                                                             (((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2053_ 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                               | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3640_ 
                                                                                >> 6U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x3800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2053_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0129_) 
                                                                                << 0xaU) 
                                                                                | ((IData)(vlSelf->top__DOT___0141_) 
                                                                                << 9U))))) 
                                                                              | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0253_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1044_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1066_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0058_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0071_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0340_))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__353(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__353\n"); );
    // Body
    vlSelf->top__DOT___1994_ = (1U | ((0x3c0U & ((IData)(
                                                         (vlSelf->top__DOT___3818_ 
                                                          >> 0x27U)) 
                                                 << 6U)) 
                                      | ((0x20U & ((IData)(
                                                           (vlSelf->top__DOT___3818_ 
                                                            >> 0x26U)) 
                                                   << 5U)) 
                                         | ((0x18U 
                                             & ((IData)(
                                                        (vlSelf->top__DOT___3818_ 
                                                         >> 0x24U)) 
                                                << 3U)) 
                                            | ((4U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT___3818_ 
                                                            >> 0x23U)) 
                                                   << 2U)) 
                                               | ((IData)(vlSelf->top__DOT___0594_) 
                                                  << 1U))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__354(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__354\n"); );
    // Body
    vlSelf->top__DOT___1369_ = (1U & (((((IData)(vlSelf->top__DOT___0609_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___0137_)) 
                                       + (((IData)(vlSelf->top__DOT___0594_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0521_))) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__355(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__355\n"); );
    // Body
    vlSelf->top__DOT___1004_ = (1U & (~ (((IData)(vlSelf->top__DOT___0065_) 
                                          & (IData)(vlSelf->top__DOT___0594_)) 
                                         | (IData)(vlSelf->top__DOT___0135_))));
    vlSelf->top__DOT___1744_ = ((IData)(vlSelf->top__DOT___1004_) 
                                | (IData)(vlSelf->top__DOT___0367_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__356(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__356\n"); );
    // Body
    vlSelf->top__DOT___1733_ = ((IData)(vlSelf->top__DOT___0144_) 
                                ^ (IData)(vlSelf->top__DOT___0612_));
    vlSelf->top__DOT___1646_ = (1U & ((IData)(vlSelf->top__DOT___1733_) 
                                      + (IData)(vlSelf->top__DOT___0069_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__357(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__357\n"); );
    // Body
    vlSelf->top__DOT___0303_ = ((IData)(vlSelf->top__DOT___0612_) 
                                | (IData)(vlSelf->top__DOT___0619_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__358(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__358\n"); );
    // Body
    vlSelf->top__DOT___1052_ = (1U & (~ (((vlSelf->top__DOT___3751_ 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->top__DOT___0612_)) 
                                         | (IData)(vlSelf->top__DOT___0671_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__359(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__359\n"); );
    // Body
    vlSelf->top__DOT___1197_ = (1U & (~ (((IData)(vlSelf->top__DOT___0134_) 
                                          & (IData)(vlSelf->top__DOT___0785_)) 
                                         | ((IData)(vlSelf->top__DOT___1066_) 
                                            & (IData)(vlSelf->top__DOT___0697_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__361(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__361\n"); );
    // Body
    vlSelf->top__DOT___0897_ = (1U & (~ (((vlSelf->top__DOT___3723_[1U] 
                                           >> 0x1aU) 
                                          & (~ ((IData)(vlSelf->top__DOT___3721_) 
                                                >> 5U))) 
                                         | (IData)(vlSelf->top__DOT___0489_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__362(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__362\n"); );
    // Body
    vlSelf->top__DOT___0390_ = ((IData)(vlSelf->top__DOT___0391_) 
                                & (~ (IData)(vlSelf->top__DOT___0489_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__363(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__363\n"); );
    // Body
    vlSelf->top__DOT___0948_ = (1U & (((IData)(vlSelf->top__DOT___3654_) 
                                       >> 4U) ^ (IData)(vlSelf->top__DOT___0489_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__366(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__366\n"); );
    // Body
    vlSelf->top__DOT___1660_ = (1U & ((IData)(vlSelf->top__DOT___1399_) 
                                      | ((IData)(vlSelf->top__DOT___3697_) 
                                         >> 0xdU)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__369(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__369\n"); );
    // Body
    vlSelf->top__DOT___0701_ = ((IData)(vlSelf->top__DOT___0214_) 
                                & (IData)(vlSelf->top__DOT___0477_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__370(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__370\n"); );
    // Body
    vlSelf->top__DOT___0825_ = ((IData)(vlSelf->top__DOT___0234_) 
                                ^ (IData)(vlSelf->top__DOT___0214_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__373(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__373\n"); );
    // Body
    vlSelf->top__DOT___1345_ = (1U & (~ (((IData)(vlSelf->top__DOT___0979_) 
                                          & (IData)(vlSelf->top__DOT___0053_)) 
                                         | ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                            & ((IData)(vlSelf->top__DOT___3775_) 
                                               >> 7U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__375(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__375\n"); );
    // Body
    vlSelf->top__DOT___0873_ = (1U & (~ (((IData)(vlSelf->top__DOT___0039_) 
                                          & (IData)(vlSelf->top__DOT___0434_)) 
                                         | (IData)(vlSelf->top__DOT___0014_))));
    vlSelf->top__DOT___0702_ = ((IData)(vlSelf->top__DOT___0873_) 
                                | (IData)(vlSelf->top__DOT___0379_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__376(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__376\n"); );
    // Body
    vlSelf->top__DOT___2092_ = ((0x7f80U & ((IData)(vlSelf->top__DOT___3715_) 
                                            << 3U)) 
                                | ((0x40U & ((IData)(vlSelf->top__DOT___3715_) 
                                             << 3U)) 
                                   | ((0x20U & ((IData)(vlSelf->top__DOT___3715_) 
                                                << 3U)) 
                                      | ((0x10U & ((IData)(
                                                           (vlSelf->top__DOT___2064_ 
                                                            >> 0xbU)) 
                                                   << 4U)) 
                                         | ((8U & (IData)(vlSelf->top__DOT___3693_)) 
                                            | ((4U 
                                                & (IData)(vlSelf->top__DOT___3693_)) 
                                               | (3U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT___2064_ 
                                                             >> 7U)))))))));
    vlSelf->top__DOT____VdfgTmp_h13077688__0 = ((0x40U 
                                                 & ((IData)(vlSelf->top__DOT___3715_) 
                                                    << 3U)) 
                                                | ((0x20U 
                                                    & (IData)(vlSelf->top__DOT___2092_)) 
                                                   | ((0x10U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT___2064_ 
                                                                   >> 0xbU)) 
                                                          << 4U)) 
                                                      | ((0xcU 
                                                          & (IData)(vlSelf->top__DOT___3693_)) 
                                                         | (3U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT___2064_ 
                                                                       >> 7U)))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__377(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__377\n"); );
    // Body
    vlSelf->top__DOT___0213_ = ((IData)(vlSelf->top__DOT___0215_) 
                                & (~ (IData)(vlSelf->top__DOT___0214_)));
    vlSelf->top__DOT___0792_ = ((IData)(vlSelf->top__DOT___0213_) 
                                | (IData)(vlSelf->top__DOT___0144_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__378(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__378\n"); );
    // Body
    vlSelf->top__DOT___1602_ = (1U & ((IData)(vlSelf->top__DOT___1821_) 
                                      ^ (IData)((vlSelf->top__DOT___3627_ 
                                                 >> 0x1dU))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__379(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__379\n"); );
    // Body
    vlSelf->top__DOT___0567_ = (1U & (((0x80U | ((0x10000U 
                                                  & ((IData)(vlSelf->top__DOT___3732_) 
                                                     << 8U)) 
                                                 | ((0x8000U 
                                                     & ((IData)(vlSelf->top__DOT___3732_) 
                                                        << 8U)) 
                                                    | ((0x4000U 
                                                        & ((IData)(vlSelf->top__DOT___1890_) 
                                                           << 3U)) 
                                                       | ((0x2000U 
                                                           & ((IData)(vlSelf->top__DOT___3732_) 
                                                              << 8U)) 
                                                          | ((0x1000U 
                                                              & ((IData)(vlSelf->top__DOT___3732_) 
                                                                 << 8U)) 
                                                             | ((0xe00U 
                                                                 & ((IData)(vlSelf->top__DOT___1890_) 
                                                                    << 3U)) 
                                                                | ((0x100U 
                                                                    & ((IData)(vlSelf->top__DOT___3732_) 
                                                                       << 8U)) 
                                                                   | (((IData)(vlSelf->top__DOT___1026_) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT___0058_) 
                                                                          << 5U) 
                                                                         | (((IData)(vlSelf->top__DOT___0307_) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSelf->top__DOT___0153_) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSelf->top__DOT___0261_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0272_)))))))))))))))) 
                                       + ((0x1ff80U 
                                           & vlSelf->top__DOT___2083_) 
                                          | ((0x20U 
                                              & ((IData)(vlSelf->top__DOT___3732_) 
                                                 << 1U)) 
                                             | (((IData)(vlSelf->top__DOT___0163_) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->top__DOT___0512_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___0681_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___1447_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0198_)))))))) 
                                      >> 0x10U));
    vlSelf->top__DOT___1701_ = (1U & (((0x80U | ((0x8000U 
                                                  & ((IData)(vlSelf->top__DOT___3732_) 
                                                     << 8U)) 
                                                 | ((0x4000U 
                                                     & ((IData)(vlSelf->top__DOT___1890_) 
                                                        << 3U)) 
                                                    | ((0x2000U 
                                                        & ((IData)(vlSelf->top__DOT___3732_) 
                                                           << 8U)) 
                                                       | ((0x1000U 
                                                           & ((IData)(vlSelf->top__DOT___3732_) 
                                                              << 8U)) 
                                                          | ((0xe00U 
                                                              & ((IData)(vlSelf->top__DOT___1890_) 
                                                                 << 3U)) 
                                                             | ((0x100U 
                                                                 & ((IData)(vlSelf->top__DOT___3732_) 
                                                                    << 8U)) 
                                                                | (((IData)(vlSelf->top__DOT___1026_) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->top__DOT___0058_) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSelf->top__DOT___0307_) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSelf->top__DOT___0153_) 
                                                                             << 2U) 
                                                                            | (((IData)(vlSelf->top__DOT___0261_) 
                                                                                << 1U) 
                                                                               | (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0272_))))))))))))))) 
                                       + ((0xff80U 
                                           & vlSelf->top__DOT___2083_) 
                                          | ((0x20U 
                                              & ((IData)(vlSelf->top__DOT___3732_) 
                                                 << 1U)) 
                                             | (((IData)(vlSelf->top__DOT___0163_) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->top__DOT___0512_) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->top__DOT___0681_) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->top__DOT___1447_) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->top__DOT___0198_)))))))) 
                                      >> 0xfU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__383(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__383\n"); );
    // Body
    vlSelf->top__DOT___1275_ = (1U & (~ (((IData)(vlSelf->top__DOT___1188_) 
                                          & (IData)(vlSelf->top__DOT___0505_)) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT___3641_ 
                                                     >> 1U)) 
                                            & (IData)(vlSelf->top__DOT___0099_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__385(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__385\n"); );
    // Body
    vlSelf->top__DOT___0010_ = ((IData)(vlSelf->top__DOT___0252_) 
                                & (~ (IData)((vlSelf->top__DOT___3791_ 
                                              >> 0x15U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__386(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__386\n"); );
    // Body
    vlSelf->top__DOT___0569_ = (1U & (vlSelf->top__DOT___3633_[1U] 
                                      | (IData)(vlSelf->top__DOT___1733_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__387(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__387\n"); );
    // Body
    vlSelf->top__DOT___0302_ = ((IData)(vlSelf->top__DOT___0303_) 
                                & (~ (IData)(vlSelf->top__DOT___0193_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__388(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__388\n"); );
    // Body
    vlSelf->top__DOT___1343_ = ((IData)(vlSelf->top__DOT___0581_) 
                                ^ (IData)(vlSelf->top__DOT___0303_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__389(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__389\n"); );
    // Body
    vlSelf->top__DOT___0829_ = (1U & (~ (((IData)(vlSelf->top__DOT___0825_) 
                                          & (IData)(vlSelf->top__DOT___0854_)) 
                                         | (IData)(vlSelf->top__DOT___0270_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__390(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__390\n"); );
    // Body
    vlSelf->top__DOT___1916_ = ((0x187U & (IData)(vlSelf->top__DOT___1916_)) 
                                | ((0x40U & ((IData)(vlSelf->top__DOT___3779_) 
                                             << 5U)) 
                                   | (((IData)(vlSelf->top__DOT___1656_) 
                                       << 5U) | (((IData)(vlSelf->top__DOT___0873_) 
                                                  << 4U) 
                                                 | (8U 
                                                    & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                       << 3U))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__391(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__391\n"); );
    // Body
    vlSelf->top__DOT___0406_ = ((IData)(vlSelf->top__DOT___0702_) 
                                & (IData)(vlSelf->top__DOT___0332_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__393(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__393\n"); );
    // Body
    vlSelf->top__DOT___0852_ = (1U & (((((IData)(vlSelf->top__DOT___0027_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___0213_)) 
                                       + (((IData)(vlSelf->top__DOT___0013_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0477_))) 
                                      >> 1U));
    vlSelf->top__DOT___0527_ = ((IData)(vlSelf->top__DOT___0274_) 
                                & (IData)(vlSelf->top__DOT___0852_));
    vlSelf->top__DOT___1555_ = (1U & (~ ((IData)((vlSelf->top__DOT___3799_ 
                                                  >> 0x10U)) 
                                         & (IData)(vlSelf->top__DOT___0527_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__395(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__395\n"); );
    // Body
    vlSelf->top__DOT___0551_ = (1U & (~ ((((IData)(vlSelf->top__DOT___0082_) 
                                           | (IData)(vlSelf->top__DOT___0753_)) 
                                          & (IData)(vlSelf->top__DOT___3742_)) 
                                         | ((IData)(vlSelf->top__DOT___0125_) 
                                            & (IData)(vlSelf->top__DOT___1602_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__396(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__396\n"); );
    // Body
    vlSelf->top__DOT___1132_ = ((IData)(vlSelf->top__DOT___1701_) 
                                | (IData)(vlSelf->top__DOT___1567_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__398(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__398\n"); );
    // Body
    vlSelf->top__DOT___1910_ = ((1U & (IData)(vlSelf->top__DOT___1910_)) 
                                | ((0x3f8U & ((IData)(
                                                      (vlSelf->top__DOT___3795_ 
                                                       >> 0x17U)) 
                                              << 3U)) 
                                   | (((IData)(vlSelf->top__DOT___0010_) 
                                       << 2U) | ((IData)(vlSelf->top__DOT___0304_) 
                                                 << 1U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__399(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__399\n"); );
    // Body
    vlSelf->top__DOT___0568_ = ((IData)(vlSelf->top__DOT___0569_) 
                                & (IData)(vlSelf->top__DOT___0287_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__403(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__403\n"); );
    // Body
    vlSelf->top__DOT___0405_ = (1U & ((IData)((vlSelf->top__DOT___3665_ 
                                               >> 0x29U)) 
                                      & (~ (IData)(vlSelf->top__DOT___0406_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__406(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__406\n"); );
    // Body
    vlSelf->top__DOT___0526_ = ((vlSelf->top__DOT___3639_ 
                                 >> 4U) & (IData)(vlSelf->top__DOT___0527_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__409(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__409\n"); );
    // Init
    CData/*0:0*/ top__DOT___1087_;
    top__DOT___1087_ = 0;
    // Body
    vlSelf->top__DOT___2082_ = ((0x80000000U & (vlSelf->top__DOT___2035_ 
                                                << 0x1dU)) 
                                | ((0x78000000U & (
                                                   vlSelf->top__DOT___3651_[1U] 
                                                   << 0x19U)) 
                                   | ((0x4000000U & 
                                       (vlSelf->top__DOT___3651_[1U] 
                                        << 0x19U)) 
                                      | ((0x3000000U 
                                          & ((vlSelf->top__DOT___3651_[1U] 
                                              << 0x19U) 
                                             | (0x1000000U 
                                                & (vlSelf->top__DOT___3651_[0U] 
                                                   >> 7U)))) 
                                         | ((0x800000U 
                                             & (vlSelf->top__DOT___3651_[0U] 
                                                >> 7U)) 
                                            | ((0x780000U 
                                                & (vlSelf->top__DOT___3651_[0U] 
                                                   >> 7U)) 
                                               | ((0x40000U 
                                                   & (vlSelf->top__DOT___3651_[0U] 
                                                      >> 7U)) 
                                                  | ((0x38000U 
                                                      & (vlSelf->top__DOT___3651_[0U] 
                                                         >> 7U)) 
                                                     | (((IData)(vlSelf->top__DOT___0044_) 
                                                         << 0xdU) 
                                                        | (((IData)(vlSelf->top__DOT___0149_) 
                                                            << 0xcU) 
                                                           | (((IData)(vlSelf->top__DOT___0379_) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->top__DOT___0607_) 
                                                                  << 0xaU) 
                                                                 | ((0x3c0U 
                                                                     & (vlSelf->top__DOT___1936_[1U] 
                                                                        >> 6U)) 
                                                                    | (((IData)(vlSelf->top__DOT___1612_) 
                                                                        << 5U) 
                                                                       | ((0x10U 
                                                                           & (vlSelf->top__DOT___1936_[1U] 
                                                                              >> 6U)) 
                                                                          | (((IData)(vlSelf->top__DOT___0418_) 
                                                                              << 3U) 
                                                                             | ((4U 
                                                                                & (vlSelf->top__DOT___1936_[1U] 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0619_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0009_)))))))))))))))))));
    vlSelf->top__DOT___0313_ = (1U & ((((0x800U & (
                                                   vlSelf->top__DOT___3651_[1U] 
                                                   << 0xaU)) 
                                        | ((0x600U 
                                            & (vlSelf->top__DOT___2082_ 
                                               >> 0xfU)) 
                                           | ((0x100U 
                                               & (vlSelf->top__DOT___3651_[0U] 
                                                  >> 0x16U)) 
                                              | ((0xf0U 
                                                  & (vlSelf->top__DOT___2082_ 
                                                     >> 0xfU)) 
                                                 | ((8U 
                                                     & (vlSelf->top__DOT___3651_[0U] 
                                                        >> 0x16U)) 
                                                    | (((IData)(vlSelf->top__DOT___0265_) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->top__DOT___0320_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___0226_)))))))) 
                                       + (((IData)(vlSelf->top__DOT___0152_) 
                                           << 0xbU) 
                                          | (((IData)(vlSelf->top__DOT___0152_) 
                                              << 0xaU) 
                                             | (((IData)(vlSelf->top__DOT___0134_) 
                                                 << 9U) 
                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->top__DOT___0084_) 
                                                       << 7U) 
                                                      | (((IData)(vlSelf->top__DOT___0084_) 
                                                          << 6U) 
                                                         | ((0x20U 
                                                             & ((~ (IData)(vlSelf->top__DOT____VdfgTmp_he22cdd9f__0)) 
                                                                << 5U)) 
                                                            | ((0x10U 
                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                   << 4U)) 
                                                               | (((IData)(vlSelf->top__DOT___0733_) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->top__DOT___0043_) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top__DOT___0277_)))))))))))) 
                                      >> 0xbU));
    vlSelf->top__DOT___2105_ = (((QData)((IData)((0x3fU 
                                                  & ((vlSelf->top__DOT___3651_[2U] 
                                                      << 4U) 
                                                     | (vlSelf->top__DOT___3651_[1U] 
                                                        >> 0x1cU))))) 
                                 << 0x26U) | (((QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->top__DOT___2035_ 
                                                                   >> 0x13U)))) 
                                               << 0x21U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT___3651_[1U] 
                                                                      >> 0x16U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0x80000000U 
                                                                     & (vlSelf->top__DOT___3651_[1U] 
                                                                        << 0xaU)) 
                                                                    | ((0x40000000U 
                                                                        & (vlSelf->top__DOT___2035_ 
                                                                           << 0xeU)) 
                                                                       | ((0x20000000U 
                                                                           & (vlSelf->top__DOT___3651_[1U] 
                                                                              << 0xaU)) 
                                                                          | ((0x1fff0000U 
                                                                              & (vlSelf->top__DOT___2035_ 
                                                                                << 0xeU)) 
                                                                             | ((0xf000U 
                                                                                & (vlSelf->top__DOT___2082_ 
                                                                                >> 0xfU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3651_[1U] 
                                                                                << 0xaU)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___2082_ 
                                                                                >> 0xfU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___3651_[0U] 
                                                                                >> 0x16U)) 
                                                                                | ((0xf0U 
                                                                                & (vlSelf->top__DOT___2082_ 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3651_[0U] 
                                                                                >> 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0265_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0320_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0226_))))))))))))))))));
    vlSelf->top__DOT___0737_ = (1U & ((((0x30U & (vlSelf->top__DOT___2082_ 
                                                  >> 0xfU)) 
                                        | ((8U & (vlSelf->top__DOT___3651_[0U] 
                                                  >> 0x16U)) 
                                           | (((IData)(vlSelf->top__DOT___0265_) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT___0320_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___0226_))))) 
                                       + ((0x20U & 
                                           ((~ (IData)(vlSelf->top__DOT____VdfgTmp_he22cdd9f__0)) 
                                            << 5U)) 
                                          | ((0x10U 
                                              & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                 << 4U)) 
                                             | (((IData)(vlSelf->top__DOT___0733_) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT___0043_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0277_)))))) 
                                      >> 5U));
    vlSelf->top__DOT___0312_ = ((IData)(vlSelf->top__DOT___0314_) 
                                & (~ (IData)(vlSelf->top__DOT___0313_)));
    vlSelf->top__DOT___0019_ = ((IData)(vlSelf->top__DOT___0737_) 
                                & (IData)(vlSelf->top__DOT___0071_));
    vlSelf->top__DOT___1092_ = (1U & (~ (((IData)(vlSelf->top__DOT___1093_) 
                                          & (IData)(vlSelf->top__DOT___0312_)) 
                                         | (IData)(vlSelf->top__DOT___0856_))));
    vlSelf->top__DOT___0271_ = ((IData)(vlSelf->top__DOT___0019_) 
                                & (~ (IData)(vlSelf->top__DOT___0272_)));
    vlSelf->top__DOT___0046_ = (1U & (~ ((IData)(vlSelf->top__DOT___0019_) 
                                         | (IData)(vlSelf->top__DOT___0983_))));
    vlSelf->top__DOT___1206_ = ((IData)(vlSelf->top__DOT___0019_) 
                                | (IData)(vlSelf->top__DOT___1716_));
    vlSelf->top__DOT___0458_ = ((IData)(vlSelf->top__DOT___0154_) 
                                ^ (IData)(vlSelf->top__DOT___0019_));
    vlSelf->top__DOT___1020_ = (1U & (~ (((IData)(vlSelf->top__DOT___0019_) 
                                          & (IData)(vlSelf->top__DOT___0537_)) 
                                         | (~ (IData)(vlSelf->top__DOT___0205_)))));
    vlSelf->top__DOT___1024_ = (1U & (~ (((IData)(vlSelf->top__DOT___0110_) 
                                          & (IData)(vlSelf->top__DOT___0019_)) 
                                         | ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                            & (IData)(vlSelf->top__DOT___1026_)))));
    vlSelf->top__DOT___0015_ = ((IData)(vlSelf->top__DOT___0019_) 
                                & (~ (IData)(vlSelf->top__DOT___0018_)));
    vlSelf->out_data[0x34U] = ((0xfffffffeU & vlSelf->out_data[0x34U]) 
                               | (1U & (((IData)(vlSelf->top__DOT___1527_) 
                                         | (~ (IData)(vlSelf->top__DOT___0272_))) 
                                        & (~ ((IData)(vlSelf->top__DOT___1549_) 
                                              ^ (IData)(vlSelf->top__DOT___0046_))))));
    vlSelf->top__DOT___0848_ = ((IData)(vlSelf->top__DOT___0205_) 
                                | (IData)(vlSelf->top__DOT___0046_));
    vlSelf->top__DOT____VdfgTmp_h6e09a4df__0 = ((2U 
                                                 & ((~ (IData)(vlSelf->top__DOT___1206_)) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->top__DOT___0152_));
    vlSelf->top__DOT___0559_ = ((IData)(vlSelf->top__DOT___1206_) 
                                | (IData)(vlSelf->top__DOT___1028_));
    vlSelf->top__DOT___0925_ = (1U & (((((IData)(vlSelf->top__DOT___0043_) 
                                         << 0xdU) | 
                                        (((IData)(vlSelf->top__DOT___0219_) 
                                          << 0xcU) 
                                         | (((IData)(vlSelf->top__DOT___0125_) 
                                             << 0xbU) 
                                            | (((IData)(vlSelf->top__DOT___1235_) 
                                                << 0xaU) 
                                               | (((IData)(vlSelf->top__DOT___0043_) 
                                                   << 9U) 
                                                  | (((IData)(vlSelf->top__DOT___0191_) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->top__DOT___0134_) 
                                                         << 7U) 
                                                        | (((IData)(vlSelf->top__DOT___0907_) 
                                                            << 6U) 
                                                           | (((IData)(vlSelf->top__DOT___0608_) 
                                                               << 5U) 
                                                              | (((IData)(vlSelf->top__DOT___1206_) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSelf->top__DOT___0058_) 
                                                                     << 3U) 
                                                                    | ((4U 
                                                                        & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                           << 2U)) 
                                                                       | (((IData)(vlSelf->top__DOT___1211_) 
                                                                           << 1U) 
                                                                          | (1U 
                                                                             & (~ (IData)(vlSelf->top__DOT___0106_)))))))))))))))) 
                                       + (((IData)(vlSelf->top__DOT___1203_) 
                                           << 0xdU) 
                                          | (((IData)(vlSelf->top__DOT___0152_) 
                                              << 0xbU) 
                                             | (((IData)(vlSelf->top__DOT___0106_) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->top__DOT___0241_) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->top__DOT___0690_) 
                                                       << 8U) 
                                                      | (((IData)(vlSelf->top__DOT___1235_) 
                                                          << 7U) 
                                                         | (((IData)(vlSelf->top__DOT___1046_) 
                                                             << 6U) 
                                                            | (((IData)(vlSelf->top__DOT___0926_) 
                                                                << 5U) 
                                                               | (((IData)(vlSelf->top__DOT___0674_) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelf->top__DOT___0610_) 
                                                                      << 3U) 
                                                                     | ((6U 
                                                                         & (IData)(vlSelf->top__DOT___2067_)) 
                                                                        | (IData)(vlSelf->top__DOT___0775_))))))))))))) 
                                      >> 0xdU));
    vlSelf->top__DOT___1306_ = (1U & (((((IData)(vlSelf->top__DOT___0608_) 
                                         << 5U) | (
                                                   ((IData)(vlSelf->top__DOT___1206_) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top__DOT___0058_) 
                                                       << 3U) 
                                                      | ((4U 
                                                          & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelf->top__DOT___1211_) 
                                                             << 1U) 
                                                            | (1U 
                                                               & (~ (IData)(vlSelf->top__DOT___0106_)))))))) 
                                       + (((IData)(vlSelf->top__DOT___0926_) 
                                           << 5U) | 
                                          (((IData)(vlSelf->top__DOT___0674_) 
                                            << 4U) 
                                           | (((IData)(vlSelf->top__DOT___0610_) 
                                               << 3U) 
                                              | ((6U 
                                                  & (IData)(vlSelf->top__DOT___2067_)) 
                                                 | (IData)(vlSelf->top__DOT___0775_)))))) 
                                      >> 5U));
    vlSelf->top__DOT___0501_ = (1U & (((((IData)(vlSelf->top__DOT___0134_) 
                                         << 7U) | (
                                                   ((IData)(vlSelf->top__DOT___0907_) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->top__DOT___0608_) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->top__DOT___1206_) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->top__DOT___0058_) 
                                                             << 3U) 
                                                            | ((4U 
                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                   << 2U)) 
                                                               | (((IData)(vlSelf->top__DOT___1211_) 
                                                                   << 1U) 
                                                                  | (1U 
                                                                     & (~ (IData)(vlSelf->top__DOT___0106_)))))))))) 
                                       + (((IData)(vlSelf->top__DOT___1235_) 
                                           << 7U) | 
                                          (((IData)(vlSelf->top__DOT___1046_) 
                                            << 6U) 
                                           | (((IData)(vlSelf->top__DOT___0926_) 
                                               << 5U) 
                                              | (((IData)(vlSelf->top__DOT___0674_) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->top__DOT___0610_) 
                                                     << 3U) 
                                                    | ((6U 
                                                        & (IData)(vlSelf->top__DOT___2067_)) 
                                                       | (IData)(vlSelf->top__DOT___0775_)))))))) 
                                      >> 7U));
    vlSelf->top__DOT___0337_ = ((IData)(vlSelf->top__DOT___1024_) 
                                ^ (IData)(vlSelf->top__DOT___0626_));
    vlSelf->top__DOT___0239_ = ((IData)(vlSelf->top__DOT___0240_) 
                                & (~ (IData)(vlSelf->top__DOT___0015_)));
    top__DOT___1087_ = (1U & ((((2U & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                       << 1U)) | (IData)(vlSelf->top__DOT___0304_)) 
                               + (((IData)(vlSelf->top__DOT___0454_) 
                                   << 1U) | (IData)(vlSelf->top__DOT___0015_))) 
                              >> 1U));
    vlSelf->top__DOT___0269_ = (1U & (~ (((IData)(vlSelf->top__DOT___0848_) 
                                          & (IData)(vlSelf->top__DOT___0690_)) 
                                         | ((IData)(vlSelf->top__DOT___0489_) 
                                            & (IData)(vlSelf->top__DOT___0196_)))));
    vlSelf->top__DOT___1505_ = ((IData)(vlSelf->top__DOT___0848_) 
                                ^ (IData)(vlSelf->top__DOT___0141_));
    vlSelf->top__DOT___0436_ = (1U & ((IData)((vlSelf->top__DOT___3747_ 
                                               >> 0x14U)) 
                                      | (IData)(vlSelf->top__DOT___0848_)));
    vlSelf->top__DOT___1435_ = (1U & (~ (((IData)(vlSelf->top__DOT___0193_) 
                                          & (IData)(vlSelf->top__DOT___0337_)) 
                                         | ((IData)(vlSelf->top__DOT___0191_) 
                                            & (IData)(vlSelf->top__DOT___1056_)))));
    vlSelf->top__DOT___1258_ = ((IData)(vlSelf->top__DOT___0151_) 
                                | (IData)(vlSelf->top__DOT___0337_));
    vlSelf->top__DOT___0784_ = (1U & (~ (((IData)(vlSelf->top__DOT___0255_) 
                                          & (IData)(vlSelf->top__DOT___0995_)) 
                                         | ((IData)(vlSelf->top__DOT___0239_) 
                                            & (IData)(vlSelf->top__DOT___1028_)))));
    vlSelf->top__DOT___1085_ = (1U & (~ (((IData)(top__DOT___1087_) 
                                          & (IData)(vlSelf->top__DOT___1086_)) 
                                         | (IData)(vlSelf->top__DOT___0752_))));
    vlSelf->top__DOT___0268_ = ((IData)(vlSelf->top__DOT___0270_) 
                                & (~ (IData)(vlSelf->top__DOT___0269_)));
    vlSelf->top__DOT___0298_ = ((IData)(vlSelf->top__DOT___0177_) 
                                | (IData)(vlSelf->top__DOT___0269_));
    vlSelf->top__DOT___1686_ = ((IData)(vlSelf->top__DOT___0436_) 
                                | (IData)(vlSelf->top__DOT___0633_));
    vlSelf->top__DOT___0079_ = ((IData)(vlSelf->top__DOT___0792_) 
                                & (IData)(vlSelf->top__DOT___0784_));
    vlSelf->top__DOT___0297_ = (1U & (((IData)(vlSelf->top__DOT___3775_) 
                                       >> 7U) & (~ (IData)(vlSelf->top__DOT___0298_))));
    vlSelf->top__DOT___1704_ = ((IData)(vlSelf->top__DOT___1686_) 
                                | (IData)(vlSelf->top__DOT___1028_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__410(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__410\n"); );
    // Body
    vlSelf->top__DOT___0398_ = (1U & ((vlSelf->top__DOT___3712_[1U] 
                                       >> 7U) & (~ (IData)(vlSelf->top__DOT___0019_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__411(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__411\n"); );
    // Body
    vlSelf->top__DOT___1729_ = (1U & ((IData)(vlSelf->top__DOT___0019_) 
                                      | (vlSelf->top__DOT___3761_ 
                                         >> 0xeU)));
    vlSelf->top__DOT___1912_ = ((0xf7ffffffffULL & vlSelf->top__DOT___1912_) 
                                | ((QData)((IData)(vlSelf->top__DOT___1729_)) 
                                   << 0x23U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__412(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__412\n"); );
    // Body
    vlSelf->top__DOT___1127_ = (1U & (~ (((IData)((vlSelf->top__DOT___3818_ 
                                                   >> 0x1aU)) 
                                          & (IData)(vlSelf->top__DOT___0019_)) 
                                         | ((IData)(vlSelf->top__DOT___0335_) 
                                            & (IData)(vlSelf->top__DOT___0205_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__416(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__416\n"); );
    // Body
    vlSelf->top__DOT___0827_ = ((IData)(vlSelf->top__DOT___0046_) 
                                & (IData)((vlSelf->top__DOT___3650_ 
                                           >> 0x10U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__418(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__418\n"); );
    // Body
    vlSelf->top__DOT___1805_ = (1U & (((((IData)(vlSelf->top__DOT___0343_) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT___0135_) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & ((~ (IData)(vlSelf->top__DOT___1206_)) 
                                                          << 1U)) 
                                                      | (IData)(vlSelf->top__DOT___0152_)))) 
                                       + ((0xeU & (IData)(vlSelf->top__DOT___2010_)) 
                                          | (IData)(vlSelf->top__DOT___0240_))) 
                                      >> 3U));
    vlSelf->top__DOT___0264_ = ((IData)(vlSelf->top__DOT___1805_) 
                                ^ (IData)(vlSelf->top__DOT___0134_));
    vlSelf->top__DOT___0263_ = ((IData)(vlSelf->top__DOT___0210_) 
                                & (~ (IData)(vlSelf->top__DOT___0264_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__420(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__420\n"); );
    // Body
    vlSelf->top__DOT___0914_ = (1U & (~ (((IData)(vlSelf->top__DOT___0304_) 
                                          & (IData)(vlSelf->top__DOT___1020_)) 
                                         | (IData)(vlSelf->top__DOT___0979_))));
    vlSelf->top__DOT___1199_ = ((IData)(vlSelf->top__DOT___0071_) 
                                | (IData)(vlSelf->top__DOT___0914_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__421(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__421\n"); );
    // Body
    vlSelf->top__DOT___0157_ = ((IData)(vlSelf->top__DOT___0153_) 
                                & (IData)(vlSelf->top__DOT___0015_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__422(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__422\n"); );
    // Body
    vlSelf->top__DOT___0462_ = ((IData)(vlSelf->top__DOT___0015_) 
                                ^ ((IData)(vlSelf->top__DOT___3662_) 
                                   >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__423(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__423\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_20;
    // Body
    __Vtemp_1[1U] = (((IData)((0x7ffffffffULL & (vlSelf->top__DOT___1968_ 
                                                 >> 0xeU))) 
                      << 1U) | (IData)(((((QData)((IData)(vlSelf->top__DOT___0142_)) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (((IData)(vlSelf->top__DOT___1968_) 
                                                             << 0x13U) 
                                                            | (((IData)(vlSelf->top__DOT___0287_) 
                                                                << 0x12U) 
                                                               | (((IData)(vlSelf->top__DOT___0290_) 
                                                                   << 0x11U) 
                                                                  | (((IData)(vlSelf->top__DOT___0015_) 
                                                                      << 0x10U) 
                                                                     | (((IData)(vlSelf->top__DOT___0368_) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->top__DOT___0278_) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->top__DOT___0434_) 
                                                                               << 0xdU) 
                                                                              | ((0x1ff8U 
                                                                                & ((IData)(vlSelf->top__DOT___1985_) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___1985_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0521_)))))))))))))) 
                                        >> 0x20U)));
    __Vtemp_8[2U] = ((0x200000U & (vlSelf->top__DOT___3637_ 
                                   << 7U)) | ((0x1ffe00U 
                                               & (vlSelf->top__DOT___3637_ 
                                                  << 7U)) 
                                              | ((0x100U 
                                                  & (vlSelf->top__DOT___3637_ 
                                                     << 7U)) 
                                                 | ((0x80U 
                                                     & (vlSelf->top__DOT___3637_ 
                                                        << 7U)) 
                                                    | (((IData)(vlSelf->top__DOT___0719_) 
                                                        << 6U) 
                                                       | ((0x20U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___1968_ 
                                                                       >> 0x32U)) 
                                                              << 5U)) 
                                                          | (((IData)(vlSelf->top__DOT___1022_) 
                                                              << 4U) 
                                                             | (((IData)(
                                                                         (0x7ffffffffULL 
                                                                          & (vlSelf->top__DOT___1968_ 
                                                                             >> 0xeU))) 
                                                                 >> 0x1fU) 
                                                                | ((IData)(
                                                                           ((0x7ffffffffULL 
                                                                             & (vlSelf->top__DOT___1968_ 
                                                                                >> 0xeU)) 
                                                                            >> 0x20U)) 
                                                                   << 1U)))))))));
    __Vtemp_13[3U] = ((0x38U & (((0x20U & ((IData)(
                                                   (vlSelf->top__DOT___1988_ 
                                                    >> 0x31U)) 
                                           << 5U)) 
                                 | ((0x10U & ((IData)(
                                                      (vlSelf->top__DOT___3670_ 
                                                       >> 5U)) 
                                              << 4U)) 
                                    | ((0xcU & ((IData)(
                                                        (vlSelf->top__DOT___1988_ 
                                                         >> 0x2eU)) 
                                                << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlSelf->top__DOT___3670_ 
                                                          >> 2U)) 
                                                 << 1U)) 
                                          | (IData)(vlSelf->top__DOT___0206_))))) 
                                + ((vlSelf->in_data[0x36U] 
                                    << 0xeU) | (vlSelf->in_data[0x36U] 
                                                >> 0x12U)))) 
                      | (((IData)(vlSelf->top__DOT___1353_) 
                          << 2U) | ((2U & (((2U & ((IData)(
                                                           (vlSelf->top__DOT___3670_ 
                                                            >> 2U)) 
                                                   << 1U)) 
                                            | (IData)(vlSelf->top__DOT___0206_)) 
                                           + ((vlSelf->in_data[0x36U] 
                                               << 0xeU) 
                                              | (vlSelf->in_data[0x36U] 
                                                 >> 0x12U)))) 
                                    | (IData)(vlSelf->top__DOT___1359_))));
    __Vtemp_15[3U] = ((0x780U & (((0x780U & ((IData)(
                                                     (vlSelf->top__DOT___1988_ 
                                                      >> 0x33U)) 
                                             << 7U)) 
                                  | ((0x40U & ((IData)(
                                                       (vlSelf->top__DOT___3670_ 
                                                        >> 7U)) 
                                               << 6U)) 
                                     | ((0x20U & ((IData)(
                                                          (vlSelf->top__DOT___1988_ 
                                                           >> 0x31U)) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            ((IData)(
                                                     (vlSelf->top__DOT___3670_ 
                                                      >> 5U)) 
                                             << 4U)) 
                                           | ((0xcU 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___1988_ 
                                                           >> 0x2eU)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3670_ 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->top__DOT___0206_))))))) 
                                 + ((vlSelf->in_data[0x36U] 
                                     << 0xeU) | (vlSelf->in_data[0x36U] 
                                                 >> 0x12U)))) 
                      | (((IData)(vlSelf->top__DOT___1351_) 
                          << 6U) | __Vtemp_13[3U]));
    __Vtemp_18[3U] = ((0x2000U & (((0x3800U & (vlSelf->top__DOT___2014_ 
                                               << 1U)) 
                                   | ((0x780U & ((IData)(
                                                         (vlSelf->top__DOT___1988_ 
                                                          >> 0x33U)) 
                                                 << 7U)) 
                                      | ((0x40U & ((IData)(
                                                           (vlSelf->top__DOT___3670_ 
                                                            >> 7U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & ((IData)(
                                                        (vlSelf->top__DOT___1988_ 
                                                         >> 0x31U)) 
                                                << 5U)) 
                                            | ((0x10U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT___3670_ 
                                                            >> 5U)) 
                                                   << 4U)) 
                                               | ((0xcU 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___1988_ 
                                                               >> 0x2eU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___3670_ 
                                                                  >> 2U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->top__DOT___0206_)))))))) 
                                  + ((vlSelf->in_data[0x36U] 
                                      << 0xeU) | (vlSelf->in_data[0x36U] 
                                                  >> 0x12U)))) 
                      | (((IData)(vlSelf->top__DOT___1309_) 
                          << 0xcU) | (((IData)(vlSelf->top__DOT___1081_) 
                                       << 0xbU) | __Vtemp_15[3U])));
    __Vtemp_20[3U] = ((0x8000U & (((0xf800U & (vlSelf->top__DOT___2014_ 
                                               << 1U)) 
                                   | ((0x780U & ((IData)(
                                                         (vlSelf->top__DOT___1988_ 
                                                          >> 0x33U)) 
                                                 << 7U)) 
                                      | ((0x40U & ((IData)(
                                                           (vlSelf->top__DOT___3670_ 
                                                            >> 7U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & ((IData)(
                                                        (vlSelf->top__DOT___1988_ 
                                                         >> 0x31U)) 
                                                << 5U)) 
                                            | ((0x10U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT___3670_ 
                                                            >> 5U)) 
                                                   << 4U)) 
                                               | ((0xcU 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___1988_ 
                                                               >> 0x2eU)) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___3670_ 
                                                                  >> 2U)) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->top__DOT___0206_)))))))) 
                                  + ((vlSelf->in_data[0x37U] 
                                      << 0xeU) | (vlSelf->in_data[0x36U] 
                                                  >> 0x12U)))) 
                      | (((IData)(vlSelf->top__DOT___1323_) 
                          << 0xeU) | __Vtemp_18[3U]));
    vlSelf->top__DOT___2001_[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0142_)) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT___1968_) 
                                                                << 0x13U) 
                                                               | (((IData)(vlSelf->top__DOT___0287_) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->top__DOT___0290_) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->top__DOT___0015_) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->top__DOT___0368_) 
                                                                            << 0xfU) 
                                                                           | (((IData)(vlSelf->top__DOT___0278_) 
                                                                               << 0xeU) 
                                                                              | (((IData)(vlSelf->top__DOT___0434_) 
                                                                                << 0xdU) 
                                                                                | ((0x1ff8U 
                                                                                & ((IData)(vlSelf->top__DOT___1985_) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1692_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___1985_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0521_)))))))))))))));
    vlSelf->top__DOT___2001_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___2001_[2U] = ((0xffc00000U & 
                                     (vlSelf->top__DOT___3637_ 
                                      << 7U)) | __Vtemp_8[2U]);
    vlSelf->top__DOT___2001_[3U] = (((IData)((vlSelf->top__DOT___3635_ 
                                              >> 0x21U)) 
                                     << 0x11U) | (((IData)(vlSelf->top__DOT___0752_) 
                                                   << 0x10U) 
                                                  | __Vtemp_20[3U]));
    vlSelf->top__DOT___2001_[4U] = ((0xc00U & ((IData)(
                                                       (vlSelf->top__DOT___3635_ 
                                                        >> 0x3aU)) 
                                               << 0xaU)) 
                                    | ((0x200U & ((IData)(
                                                          (vlSelf->top__DOT___3635_ 
                                                           >> 0x39U)) 
                                                  << 9U)) 
                                       | (0x1ffU & 
                                          ((IData)(
                                                   (vlSelf->top__DOT___3635_ 
                                                    >> 0x21U)) 
                                           >> 0xfU))));
    vlSelf->top__DOT___2234_ = ((0xfULL & vlSelf->top__DOT___2234_) 
                                | ((QData)((IData)(
                                                   ((0x1ffc0000U 
                                                     & (vlSelf->top__DOT___2001_[3U] 
                                                        << 1U)) 
                                                    | ((0x3fffcU 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___3635_ 
                                                                    >> 0x11U)) 
                                                           << 2U)) 
                                                       | ((2U 
                                                           & (IData)(vlSelf->top__DOT___2132_)) 
                                                          | (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT___3635_ 
                                                                        >> 0xfU)))))))) 
                                   << 4U));
    vlSelf->top__DOT___2041_ = (((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT___3799_ 
                                                             >> 0x10U))))) 
                                 << 0x23U) | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3799_ 
                                                                           >> 0xfU))))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___3799_ 
                                                                              >> 0xeU))))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xcU))))) 
                                                     << 0x1fU) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->top__DOT___0152_) 
                                                                        << 0x1eU) 
                                                                       | ((0x3f000000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 5U)) 
                                                                              << 0x18U)) 
                                                                          | (((IData)(vlSelf->top__DOT___0733_) 
                                                                              << 0x17U) 
                                                                             | ((0x400000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0438_)) 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1323_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1309_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___1081_) 
                                                                                << 0xeU) 
                                                                                | ((0x3c00U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1351_) 
                                                                                << 9U) 
                                                                                | ((0x1c0U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1353_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1359_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___0320_) 
                                                                                << 1U)))))))))))))))))))))))));
    vlSelf->top__DOT___1042_ = (1U & (IData)((0x7ffffffULL 
                                              & (((((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3799_ 
                                                                               >> 0x10U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x40000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xfU)) 
                                                                            << 0x1eU)) 
                                                                        | ((0x20000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xeU)) 
                                                                               << 0x1dU)) 
                                                                           | ((0x18000000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x1fU)) 
                                                                                << 0x1bU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3f00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x18U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0733_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0438_)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 0xfU) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1323_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1309_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___1081_) 
                                                                                << 0xaU) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1351_) 
                                                                                << 5U) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1353_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U))))))))))))))))))))))) 
                                                    << 4U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1359_) 
                                                                       << 3U) 
                                                                      | (((IData)(vlSelf->top__DOT___0152_) 
                                                                          << 2U) 
                                                                         | ((IData)(vlSelf->top__DOT___0320_) 
                                                                            << 1U)))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (0x3ffU 
                                                                     & (vlSelf->in_data[0x29U] 
                                                                        >> 0x15U)))) 
                                                    << 0x1aU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0043_) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->top__DOT___0275_) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->top__DOT___0043_) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 0x16U) 
                                                                               | ((0x200000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 0x15U)) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___3660_ 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___3660_ 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___3660_ 
                                                                                << 3U)) 
                                                                                | ((0x78U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0690_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0154_))))))))))))))))) 
                                                 >> 9U))));
    vlSelf->top__DOT___0124_ = (1U & (IData)((0xffffffffULL 
                                              & (((((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3799_ 
                                                                               >> 0x10U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x40000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xfU)) 
                                                                            << 0x1eU)) 
                                                                        | ((0x20000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xeU)) 
                                                                               << 0x1dU)) 
                                                                           | ((0x18000000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x1fU)) 
                                                                                << 0x1bU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3f00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x18U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0733_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0438_)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 0xfU) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1323_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1309_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___1081_) 
                                                                                << 0xaU) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1351_) 
                                                                                << 5U) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1353_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U))))))))))))))))))))))) 
                                                    << 4U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1359_) 
                                                                       << 3U) 
                                                                      | (((IData)(vlSelf->top__DOT___0152_) 
                                                                          << 2U) 
                                                                         | ((IData)(vlSelf->top__DOT___0320_) 
                                                                            << 1U)))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (0x3ffU 
                                                                     & (vlSelf->in_data[0x29U] 
                                                                        >> 0x15U)))) 
                                                    << 0x1aU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0043_) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->top__DOT___0275_) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->top__DOT___0043_) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 0x16U) 
                                                                               | ((0x200000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 0x15U)) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___3660_ 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___3660_ 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___3660_ 
                                                                                << 3U)) 
                                                                                | ((0x78U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0690_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0154_))))))))))))))))) 
                                                 >> 4U))));
    vlSelf->top__DOT___1276_ = (1U & (IData)((0xfffffULL 
                                              & (((((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3799_ 
                                                                               >> 0x10U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x40000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xfU)) 
                                                                            << 0x1eU)) 
                                                                        | ((0x20000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xeU)) 
                                                                               << 0x1dU)) 
                                                                           | ((0x18000000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x1fU)) 
                                                                                << 0x1bU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3f00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x18U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0733_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0438_)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 0xfU) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1323_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1309_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___1081_) 
                                                                                << 0xaU) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1351_) 
                                                                                << 5U) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1353_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U))))))))))))))))))))))) 
                                                    << 4U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1359_) 
                                                                       << 3U) 
                                                                      | (((IData)(vlSelf->top__DOT___0152_) 
                                                                          << 2U) 
                                                                         | ((IData)(vlSelf->top__DOT___0320_) 
                                                                            << 1U)))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (0x3ffU 
                                                                     & (vlSelf->in_data[0x29U] 
                                                                        >> 0x15U)))) 
                                                    << 0x1aU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0043_) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->top__DOT___0275_) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->top__DOT___0043_) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 0x16U) 
                                                                               | ((0x200000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 0x15U)) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___3660_ 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___3660_ 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___3660_ 
                                                                                << 3U)) 
                                                                                | ((0x78U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0690_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0154_))))))))))))))))) 
                                                 >> 0x10U))));
    vlSelf->top__DOT___1255_ = (1U & (IData)((0xfffULL 
                                              & (((((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3799_ 
                                                                               >> 0x10U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x40000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xfU)) 
                                                                            << 0x1eU)) 
                                                                        | ((0x20000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3799_ 
                                                                                >> 0xeU)) 
                                                                               << 0x1dU)) 
                                                                           | ((0x18000000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x1fU)) 
                                                                                << 0x1bU)) 
                                                                              | (((IData)(vlSelf->top__DOT___0152_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3f00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2041_ 
                                                                                >> 0x18U)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0733_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0014_)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0438_)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 0xfU) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1323_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1309_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___1081_) 
                                                                                << 0xaU) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1351_) 
                                                                                << 5U) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1353_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___2001_[3U] 
                                                                                >> 1U))))))))))))))))))))))) 
                                                    << 4U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1359_) 
                                                                       << 3U) 
                                                                      | (((IData)(vlSelf->top__DOT___0152_) 
                                                                          << 2U) 
                                                                         | ((IData)(vlSelf->top__DOT___0320_) 
                                                                            << 1U)))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (0x3ffU 
                                                                     & (vlSelf->in_data[0x29U] 
                                                                        >> 0x15U)))) 
                                                    << 0x1aU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___0043_) 
                                                                       << 0x19U) 
                                                                      | (((IData)(vlSelf->top__DOT___0275_) 
                                                                          << 0x18U) 
                                                                         | (((IData)(vlSelf->top__DOT___0043_) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 0x16U) 
                                                                               | ((0x200000U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0320_)) 
                                                                                << 0x15U)) 
                                                                                | ((0x1ff800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___3660_ 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___3660_ 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___3660_ 
                                                                                << 3U)) 
                                                                                | ((0x78U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___2040_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0690_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0154_))))))))))))))))) 
                                                 >> 0x18U))));
    vlSelf->top__DOT___0122_ = ((IData)(vlSelf->top__DOT___0124_) 
                                & (~ ((IData)(vlSelf->top__DOT___3623_) 
                                      >> 2U)));
    vlSelf->top__DOT___0057_ = (1U & (~ (((IData)(vlSelf->top__DOT___0071_) 
                                          & (IData)(vlSelf->top__DOT___0306_)) 
                                         | ((vlSelf->top__DOT___3723_[2U] 
                                             >> 0xeU) 
                                            & (IData)(vlSelf->top__DOT___1276_)))));
    vlSelf->top__DOT___0221_ = (1U & ((IData)(vlSelf->top__DOT___1255_) 
                                      | (~ (IData)(vlSelf->top__DOT___0014_))));
    vlSelf->top__DOT___0153_ = ((IData)(vlSelf->top__DOT___0122_) 
                                & (~ (IData)(vlSelf->top__DOT___0152_)));
    vlSelf->top__DOT___0032_ = ((IData)(vlSelf->top__DOT___0122_) 
                                & (IData)(vlSelf->top__DOT___0084_));
    vlSelf->top__DOT___0443_ = (1U & (~ (((IData)(vlSelf->top__DOT___0218_) 
                                          & (IData)(vlSelf->top__DOT___0690_)) 
                                         | ((IData)(vlSelf->top__DOT___0019_) 
                                            & (IData)(vlSelf->top__DOT___0057_)))));
    vlSelf->top__DOT___0631_ = ((IData)(vlSelf->top__DOT___0057_) 
                                & (IData)(vlSelf->top__DOT___0401_));
    vlSelf->top__DOT___0243_ = ((IData)(vlSelf->top__DOT___0057_) 
                                & (IData)(vlSelf->top__DOT___0217_));
    vlSelf->top__DOT___0220_ = ((IData)(vlSelf->top__DOT___0221_) 
                                & (~ (IData)(vlSelf->top__DOT___0046_)));
    vlSelf->top__DOT___1834_ = ((IData)(vlSelf->top__DOT___0221_) 
                                ^ (IData)(vlSelf->top__DOT___0099_));
    vlSelf->top__DOT___0242_ = (1U & (~ (((IData)(vlSelf->top__DOT___0127_) 
                                          & (IData)(vlSelf->top__DOT___0221_)) 
                                         | ((IData)(vlSelf->top__DOT___0281_) 
                                            & (IData)(vlSelf->top__DOT___0613_)))));
    vlSelf->top__DOT___0203_ = ((IData)(vlSelf->top__DOT___0221_) 
                                & (IData)(vlSelf->top__DOT___0277_));
    vlSelf->top__DOT___1883_ = ((IData)(vlSelf->top__DOT___0032_) 
                                ^ (IData)(vlSelf->top__DOT___0144_));
    vlSelf->top__DOT___1909_ = ((0xfffffcffffULL & vlSelf->top__DOT___1909_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___0237_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0032_)))) 
                                   << 0x10U));
    vlSelf->top__DOT___0423_ = ((IData)(vlSelf->top__DOT___0357_) 
                                & (~ (IData)(vlSelf->top__DOT___0032_)));
    vlSelf->top__DOT___1916_ = ((0x1fcU & (IData)(vlSelf->top__DOT___1916_)) 
                                | (((IData)(vlSelf->top__DOT___0631_) 
                                    << 1U) | (IData)(vlSelf->top__DOT___1299_)));
    vlSelf->top__DOT___0669_ = ((IData)(vlSelf->top__DOT___0631_) 
                                & (IData)(vlSelf->top__DOT___0134_));
    vlSelf->top__DOT___0005_ = ((IData)(vlSelf->top__DOT___0243_) 
                                & (~ (IData)(vlSelf->top__DOT___0242_)));
    vlSelf->top__DOT___1018_ = (1U & (~ (((IData)(vlSelf->top__DOT___0140_) 
                                          & (IData)(vlSelf->top__DOT___0242_)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT___3791_ 
                                                    >> 0x15U)))));
    vlSelf->top__DOT___2234_ = ((0x1fffffff9ULL & vlSelf->top__DOT___2234_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___0423_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0193_)))) 
                                   << 1U));
    vlSelf->top__DOT___1752_ = ((IData)(vlSelf->top__DOT___0669_) 
                                | (IData)(vlSelf->top__DOT___0623_));
    vlSelf->top__DOT___1746_ = ((IData)(vlSelf->top__DOT___0232_) 
                                ^ (IData)(vlSelf->top__DOT___1018_));
    vlSelf->top__DOT___2258_ = (((QData)((IData)((3U 
                                                  & (vlSelf->top__DOT___2001_[4U] 
                                                     >> 0xaU)))) 
                                 << 0x3aU) | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3635_ 
                                                                           >> 0x39U))))) 
                                               << 0x39U) 
                                              | (((QData)((IData)(
                                                                  (0xffffffU 
                                                                   & ((vlSelf->top__DOT___2001_[4U] 
                                                                       << 0xfU) 
                                                                      | (vlSelf->top__DOT___2001_[3U] 
                                                                         >> 0x11U))))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___2234_ 
                                                                                >> 6U))))) 
                                                     << 0x11U) 
                                                    | (QData)((IData)(
                                                                      ((0x10000U 
                                                                        & ((IData)(vlSelf->top__DOT___2132_) 
                                                                           << 0xfU)) 
                                                                       | (0xffffU 
                                                                          & (IData)(vlSelf->top__DOT___3635_)))))))));
}
