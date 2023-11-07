// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__691(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__691\n"); );
    // Body
    vlSelf->top__DOT___2583_ = (1U & (~ (((IData)(vlSelf->top__DOT___0597_) 
                                          & (IData)(vlSelf->top__DOT___2535_)) 
                                         | (IData)(vlSelf->top__DOT___2584_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__692(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__692\n"); );
    // Body
    vlSelf->top__DOT___2460_ = (1U & (~ (((IData)(vlSelf->top__DOT___0597_) 
                                          & (IData)(vlSelf->top__DOT___0119_)) 
                                         | (vlSelf->top__DOT___7115_[0U] 
                                            >> 0xbU))));
    vlSelf->top__DOT___0956_ = (1U & (~ (((IData)(vlSelf->top__DOT___0176_) 
                                          & (IData)(vlSelf->top__DOT___2460_)) 
                                         | (IData)(vlSelf->top__DOT___1206_))));
    vlSelf->top__DOT___1591_ = (1U & ((IData)(vlSelf->top__DOT___0956_) 
                                      + (IData)(vlSelf->top__DOT___0577_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__694(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__694\n"); );
    // Body
    vlSelf->top__DOT___4100_ = (((QData)((IData)(vlSelf->top__DOT___2920_)) 
                                 << 0x24U) | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3920_ 
                                                                           >> 0xdU))))) 
                                               << 0x23U) 
                                              | (((QData)((IData)(vlSelf->top__DOT___3325_)) 
                                                  << 0x22U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU))))) 
                                                     << 0x21U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___2449_)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((0xfffffe00U 
                                                                           & (((IData)(vlSelf->top__DOT___1111_) 
                                                                               << 0x1eU) 
                                                                              | (((IData)(vlSelf->top__DOT___1693_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 0x19U) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 0x16U) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 0x13U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2449_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0979_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1288_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0087_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1820_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0534_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___2563_) 
                                                                                << 9U) 
                                                                                | (0xfffffe00U 
                                                                                & ((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 5U)))))))))))))))))))))))) 
                                                                          | ((0x100U 
                                                                              & ((IData)(vlSelf->top__DOT___4738_) 
                                                                                << 5U)) 
                                                                             | ((0xc0U 
                                                                                & (0x40U 
                                                                                | (((IData)(vlSelf->top__DOT___1111_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___1693_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 0x17U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2449_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0979_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1288_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0087_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1820_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0534_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___2563_) 
                                                                                << 8U) 
                                                                                | (0xffffffc0U 
                                                                                & ((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 4U))))))))))))))))))))))))) 
                                                                                | ((0x30U 
                                                                                & ((IData)(vlSelf->top__DOT___4738_) 
                                                                                << 3U)) 
                                                                                | ((0xcU 
                                                                                & (0x10U 
                                                                                | (((IData)(vlSelf->top__DOT___1111_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___1693_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 0x16U) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 0x15U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 0x13U) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 0x12U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2449_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0979_) 
                                                                                << 0xeU) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1288_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0087_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___1820_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0534_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___2563_) 
                                                                                << 6U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___4738_) 
                                                                                << 3U)) 
                                                                                | ((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 2U))))))))))))))))))))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___2054_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0300_))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__695(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__695\n"); );
    // Body
    vlSelf->top__DOT___0874_ = (1U & (((IData)(0x1fbU) 
                                       + ((0x100U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT___3920_ 
                                                     >> 0x10U)) 
                                            << 8U)) 
                                          | (((IData)(vlSelf->top__DOT___3571_) 
                                              << 7U) 
                                             | (((IData)(vlSelf->top__DOT___2920_) 
                                                 << 6U) 
                                                | ((0x20U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3920_ 
                                                                >> 0xdU)) 
                                                       << 5U)) 
                                                   | (((IData)(vlSelf->top__DOT___3325_) 
                                                       << 4U) 
                                                      | ((8U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___3920_ 
                                                                      >> 0xbU)) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (vlSelf->top__DOT___4749_[2U] 
                                                                >> 0x14U)) 
                                                            | (((IData)(vlSelf->top__DOT___0195_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___1513_)))))))))) 
                                      >> 8U));
    vlSelf->top__DOT___2125_ = (1U & (((IData)(0xfbU) 
                                       + (((IData)(vlSelf->top__DOT___3571_) 
                                           << 7U) | 
                                          (((IData)(vlSelf->top__DOT___2920_) 
                                            << 6U) 
                                           | ((0x20U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___3920_ 
                                                           >> 0xdU)) 
                                                  << 5U)) 
                                              | (((IData)(vlSelf->top__DOT___3325_) 
                                                  << 4U) 
                                                 | ((8U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___3920_ 
                                                                 >> 0xbU)) 
                                                        << 3U)) 
                                                    | ((4U 
                                                        & (vlSelf->top__DOT___4749_[2U] 
                                                           >> 0x14U)) 
                                                       | (((IData)(vlSelf->top__DOT___0195_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___1513_))))))))) 
                                      >> 7U));
    vlSelf->top__DOT___2116_ = (1U & (((IData)(0x7bU) 
                                       + (((IData)(vlSelf->top__DOT___2920_) 
                                           << 6U) | 
                                          ((0x20U & 
                                            ((IData)(
                                                     (vlSelf->top__DOT___3920_ 
                                                      >> 0xdU)) 
                                             << 5U)) 
                                           | (((IData)(vlSelf->top__DOT___3325_) 
                                               << 4U) 
                                              | ((8U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3920_ 
                                                              >> 0xbU)) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & (vlSelf->top__DOT___4749_[2U] 
                                                        >> 0x14U)) 
                                                    | (((IData)(vlSelf->top__DOT___0195_) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT___1513_)))))))) 
                                      >> 6U));
    vlSelf->top__DOT___4022_ = ((0x200U & ((IData)(0x1fbU) 
                                           + (((IData)(vlSelf->top__DOT___1188_) 
                                               << 9U) 
                                              | ((0x100U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3920_ 
                                                              >> 0x10U)) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelf->top__DOT___3571_) 
                                                     << 7U) 
                                                    | (((IData)(vlSelf->top__DOT___2920_) 
                                                        << 6U) 
                                                       | ((0x20U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___3920_ 
                                                                       >> 0xdU)) 
                                                              << 5U)) 
                                                          | (((IData)(vlSelf->top__DOT___3325_) 
                                                              << 4U) 
                                                             | ((8U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3920_ 
                                                                             >> 0xbU)) 
                                                                    << 3U)) 
                                                                | ((4U 
                                                                    & (vlSelf->top__DOT___4749_[2U] 
                                                                       >> 0x14U)) 
                                                                   | (((IData)(vlSelf->top__DOT___0195_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___1513_)))))))))))) 
                                | (((IData)(vlSelf->top__DOT___0874_) 
                                    << 8U) | (((IData)(vlSelf->top__DOT___2125_) 
                                               << 7U) 
                                              | (((IData)(vlSelf->top__DOT___2116_) 
                                                  << 6U) 
                                                 | ((0x38U 
                                                     & ((IData)(0x3bU) 
                                                        + 
                                                        ((0x20U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___3920_ 
                                                                      >> 0xdU)) 
                                                             << 5U)) 
                                                         | (((IData)(vlSelf->top__DOT___3325_) 
                                                             << 4U) 
                                                            | ((8U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3920_ 
                                                                            >> 0xbU)) 
                                                                   << 3U)) 
                                                               | ((4U 
                                                                   & (vlSelf->top__DOT___4749_[2U] 
                                                                      >> 0x14U)) 
                                                                  | (((IData)(vlSelf->top__DOT___0195_) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top__DOT___1513_)))))))) 
                                                    | (((IData)(vlSelf->top__DOT___2097_) 
                                                        << 2U) 
                                                       | (3U 
                                                          & ((IData)(3U) 
                                                             + 
                                                             (((IData)(vlSelf->top__DOT___0195_) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->top__DOT___1513_))))))))));
    vlSelf->top__DOT___3689_ = (1U & ((((0x200U & ((IData)(vlSelf->top__DOT___7065_) 
                                                   << 3U)) 
                                        | ((0x1c0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT___4049_ 
                                                        >> 0x21U)) 
                                               << 6U)) 
                                           | (((IData)(vlSelf->top__DOT___0183_) 
                                               << 5U) 
                                              | (((IData)(vlSelf->top__DOT___0227_) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->top__DOT___0023_) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT___2257_) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->top__DOT___0330_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___0304_)))))))) 
                                       + (((IData)(vlSelf->top__DOT___2125_) 
                                           << 9U) | 
                                          (((IData)(vlSelf->top__DOT___2116_) 
                                            << 8U) 
                                           | ((0xe0U 
                                               & ((IData)(vlSelf->top__DOT___4022_) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->top__DOT___2097_) 
                                                  << 4U) 
                                                 | ((0xcU 
                                                     & ((IData)(vlSelf->top__DOT___4022_) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelf->top__DOT___1322_) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT___0534_)))))))) 
                                      >> 9U));
    vlSelf->top__DOT___3242_ = (1U & (((((IData)(vlSelf->top__DOT___2257_) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->top__DOT___0330_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0304_))) 
                                       + ((4U & ((IData)(vlSelf->top__DOT___4022_) 
                                                 << 2U)) 
                                          | (((IData)(vlSelf->top__DOT___1322_) 
                                              << 1U) 
                                             | (IData)(vlSelf->top__DOT___0534_)))) 
                                      >> 2U));
    vlSelf->top__DOT___2091_ = (1U & (((((IData)(vlSelf->top__DOT___0023_) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT___2257_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0330_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0304_)))) 
                                       + ((0xcU & ((IData)(vlSelf->top__DOT___4022_) 
                                                   << 2U)) 
                                          | (((IData)(vlSelf->top__DOT___1322_) 
                                              << 1U) 
                                             | (IData)(vlSelf->top__DOT___0534_)))) 
                                      >> 3U));
    vlSelf->top__DOT___1655_ = (1U & ((((0x800U & ((IData)(
                                                           (vlSelf->top__DOT___4049_ 
                                                            >> 0x26U)) 
                                                   << 0xbU)) 
                                        | ((0x400U 
                                            & ((IData)(vlSelf->top__DOT___7065_) 
                                               << 3U)) 
                                           | ((0x200U 
                                               & ((IData)(vlSelf->top__DOT___7065_) 
                                                  << 3U)) 
                                              | ((0x1c0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___4049_ 
                                                              >> 0x21U)) 
                                                     << 6U)) 
                                                 | (((IData)(vlSelf->top__DOT___0183_) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->top__DOT___0227_) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT___0023_) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->top__DOT___2257_) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->top__DOT___0330_) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->top__DOT___0304_)))))))))) 
                                       + ((0x800U & 
                                           ((IData)(vlSelf->top__DOT___4022_) 
                                            << 2U)) 
                                          | (((IData)(vlSelf->top__DOT___0874_) 
                                              << 0xaU) 
                                             | (((IData)(vlSelf->top__DOT___2125_) 
                                                 << 9U) 
                                                | (((IData)(vlSelf->top__DOT___2116_) 
                                                    << 8U) 
                                                   | ((0xe0U 
                                                       & ((IData)(vlSelf->top__DOT___4022_) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelf->top__DOT___2097_) 
                                                          << 4U) 
                                                         | ((0xcU 
                                                             & ((IData)(vlSelf->top__DOT___4022_) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelf->top__DOT___1322_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___0534_)))))))))) 
                                      >> 0xbU));
    vlSelf->top__DOT___1654_ = ((IData)(vlSelf->top__DOT___1655_) 
                                & (IData)(vlSelf->top__DOT___0224_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__697(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__697\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_hb358240b__0 = (((QData)((IData)(
                                                                 ((vlSelf->top__DOT___7184_ 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->top__DOT___0717_)))) 
                                                 << 4U) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->top__DOT___0067_) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->top__DOT___0011_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___2078_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___1804_)))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__698(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__698\n"); );
    // Body
    vlSelf->top__DOT___2589_ = ((IData)(vlSelf->top__DOT___1336_) 
                                ^ (IData)(vlSelf->top__DOT___1295_));
    vlSelf->top__DOT___0615_ = ((IData)(vlSelf->top__DOT___1449_) 
                                | (IData)(vlSelf->top__DOT___2589_));
    vlSelf->top__DOT___1813_ = ((IData)(vlSelf->top__DOT___2589_) 
                                ^ (IData)(vlSelf->top__DOT___1177_));
    vlSelf->top__DOT____VdfgTmp_hf5f631e6__0 = (((IData)(vlSelf->top__DOT___0202_) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->top__DOT___1813_) 
                                                    << 2U) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_h361f1159__0)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__699(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__699\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0x1fU 
                                               & (vlSelf->top__DOT___4282_[0U] 
                                                  >> 5U)))) 
                              << 0x35U) | (((QData)((IData)(
                                                            (0xfffU 
                                                             & (vlSelf->top__DOT___4740_[1U] 
                                                                >> 0xeU)))) 
                                            << 0x29U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT___4740_[1U] 
                                                                   >> 0xdU)))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT___4740_[1U] 
                                                                      >> 0xcU)))) 
                                                  << 0x27U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT___4740_[1U] 
                                                                         >> 0xbU)))) 
                                                     << 0x26U) 
                                                    | (((QData)((IData)(
                                                                        (0x3fffU 
                                                                         & ((vlSelf->top__DOT___4740_[1U] 
                                                                             << 3U) 
                                                                            | (vlSelf->top__DOT___4740_[0U] 
                                                                               >> 0x1dU))))) 
                                                        << 0x18U) 
                                                       | (QData)((IData)(
                                                                         ((0x800000U 
                                                                           & (vlSelf->top__DOT___4740_[0U] 
                                                                              >> 5U)) 
                                                                          | ((0x7fe000U 
                                                                              & (vlSelf->top__DOT___4740_[0U] 
                                                                                >> 5U)) 
                                                                             | ((0x1000U 
                                                                                & (vlSelf->top__DOT___4740_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0xff8U 
                                                                                & (vlSelf->top__DOT___4740_[0U] 
                                                                                >> 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1295_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0054_)))))))))))))));
    __Vtemp_1[1U] = (((IData)((vlSelf->top__DOT___3953_ 
                               >> 0x10U)) << 0x1aU) 
                     | (IData)(((((QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT___4282_[0U] 
                                                      >> 5U)))) 
                                  << 0x35U) | (((QData)((IData)(
                                                                (0xfffU 
                                                                 & (vlSelf->top__DOT___4740_[1U] 
                                                                    >> 0xeU)))) 
                                                << 0x29U) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT___4740_[1U] 
                                                                       >> 0xdU)))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->top__DOT___4740_[1U] 
                                                                          >> 0xcU)))) 
                                                      << 0x27U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->top__DOT___4740_[1U] 
                                                                             >> 0xbU)))) 
                                                         << 0x26U) 
                                                        | (((QData)((IData)(
                                                                            (0x3fffU 
                                                                             & ((vlSelf->top__DOT___4740_[1U] 
                                                                                << 3U) 
                                                                                | (vlSelf->top__DOT___4740_[0U] 
                                                                                >> 0x1dU))))) 
                                                            << 0x18U) 
                                                           | (QData)((IData)(
                                                                             ((0x800000U 
                                                                               & (vlSelf->top__DOT___4740_[0U] 
                                                                                >> 5U)) 
                                                                              | ((0x7fe000U 
                                                                                & (vlSelf->top__DOT___4740_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___4740_[0U] 
                                                                                >> 5U)) 
                                                                                | ((0xff8U 
                                                                                & (vlSelf->top__DOT___4740_[0U] 
                                                                                >> 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1295_) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->top__DOT___0054_)))))))))))))) 
                                >> 0x20U)));
    vlSelf->top__DOT___4350_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4350_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4350_[2U] = (((IData)((vlSelf->top__DOT___3953_ 
                                              >> 0x2cU)) 
                                     << 0x16U) | ((0x200000U 
                                                   & (vlSelf->top__DOT___4740_[2U] 
                                                      >> 5U)) 
                                                  | ((0x100000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___3953_ 
                                                                  >> 0x2aU)) 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->top__DOT___4740_[2U] 
                                                            >> 5U)) 
                                                        | ((0x7ff00U 
                                                            & ((IData)(
                                                                       (vlSelf->top__DOT___3953_ 
                                                                        >> 0x1eU)) 
                                                               << 8U)) 
                                                           | ((0x80U 
                                                               & (vlSelf->top__DOT___4740_[2U] 
                                                                  >> 5U)) 
                                                              | (0x7fU 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3953_ 
                                                                             >> 0x10U)) 
                                                                    >> 6U))))))));
    vlSelf->top__DOT___4350_[3U] = ((0xf0U & (vlSelf->top__DOT___4282_[1U] 
                                              >> 0x10U)) 
                                    | ((8U & (vlSelf->top__DOT___4740_[3U] 
                                              >> 5U)) 
                                       | (7U & (vlSelf->top__DOT___4282_[1U] 
                                                >> 0x10U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__700(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__700\n"); );
    // Body
    vlSelf->top__DOT___4324_ = ((0x7fffffffffffffe7ULL 
                                 & vlSelf->top__DOT___4324_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___2353_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___1668_)))) 
                                   << 3U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__701(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__701\n"); );
    // Body
    vlSelf->top__DOT___2417_ = (1U & (~ (((IData)(vlSelf->top__DOT___2054_) 
                                          & (IData)(vlSelf->top__DOT___1668_)) 
                                         | (IData)(vlSelf->top__DOT___2418_))));
    vlSelf->top__DOT___4256_ = ((0xfeU & (IData)(vlSelf->top__DOT___4256_)) 
                                | (IData)(vlSelf->top__DOT___2417_));
    vlSelf->top__DOT___2594_ = (1U & (~ ((((IData)(vlSelf->top__DOT___7024_) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->top__DOT___2417_)) 
                                         | ((IData)(vlSelf->top__DOT___1172_) 
                                            & (IData)(vlSelf->top__DOT___0183_)))));
    vlSelf->top__DOT___2559_ = ((IData)(vlSelf->top__DOT___2354_) 
                                | (IData)(vlSelf->top__DOT___2594_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__702(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__702\n"); );
    // Body
    vlSelf->top__DOT___1490_ = (1U & ((IData)(vlSelf->top__DOT___1668_) 
                                      | ((IData)(vlSelf->top__DOT___7142_) 
                                         >> 5U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__703(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__703\n"); );
    // Body
    vlSelf->top__DOT___3964_ = (((QData)((IData)(vlSelf->top__DOT___2395_)) 
                                 << 0x26U) | (((QData)((IData)(vlSelf->top__DOT___0452_)) 
                                               << 0x25U) 
                                              | (((QData)((IData)(
                                                                  (0x7fffU 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___7106_ 
                                                                              >> 0x15U))))) 
                                                  << 0x16U) 
                                                 | (QData)((IData)(
                                                                   ((0x200000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___7106_ 
                                                                                >> 0x14U)) 
                                                                        << 0x15U)) 
                                                                    | ((0x1ffe00U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___7106_ 
                                                                                >> 8U)) 
                                                                           << 9U)) 
                                                                       | ((0x100U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___7106_ 
                                                                                >> 7U)) 
                                                                              << 8U)) 
                                                                          | ((0xc0U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___7106_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                             | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7106_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7106_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7106_ 
                                                                                >> 2U)) 
                                                                                << 3U)) 
                                                                                | ((6U 
                                                                                & ((IData)(vlSelf->top__DOT___7106_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___1410_))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__704(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__704\n"); );
    // Body
    vlSelf->top__DOT___4044_[2U] = ((0x1fffffffU & 
                                     vlSelf->top__DOT___4044_[2U]) 
                                    | (0xe0000000U 
                                       & (((IData)(vlSelf->top__DOT___2357_) 
                                           << 0x1fU) 
                                          | ((0x40000000U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT___4745_ 
                                                          >> 0xdU)) 
                                                 << 0x1eU)) 
                                             | ((IData)(vlSelf->top__DOT___0757_) 
                                                << 0x1dU)))));
    vlSelf->top__DOT___4044_[3U] = ((2U & vlSelf->top__DOT___4044_[3U]) 
                                    | (3U & ((0x1fffffffU 
                                              & (IData)(vlSelf->top__DOT___1217_)) 
                                             | ((0x1fffffffU 
                                                 & ((IData)(vlSelf->top__DOT___2357_) 
                                                    >> 1U)) 
                                                | ((IData)(vlSelf->top__DOT___0757_) 
                                                   >> 3U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__706(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__706\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h627e5219__0 = (((IData)(vlSelf->top__DOT___0840_) 
                                                 << 3U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h4be41ef3__0));
    vlSelf->top__DOT___2260_ = (1U & (((IData)(5U) 
                                       + (((IData)(vlSelf->top__DOT___0880_) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT___0840_) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top__DOT___1069_) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT___0312_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___0727_)))))) 
                                      >> 4U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__707(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__707\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = ((0xffff0000U & ((vlSelf->top__DOT___4749_[2U] 
                                      << 0x18U) | (0xff0000U 
                                                   & (vlSelf->top__DOT___4749_[1U] 
                                                      >> 8U)))) 
                     | (IData)(((((QData)((IData)((1U 
                                                   & (vlSelf->top__DOT___4749_[1U] 
                                                      >> 0x17U)))) 
                                  << 0x2fU) | (((QData)((IData)(
                                                                (0x7ffffU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___3992_ 
                                                                            >> 0x22U))))) 
                                                << 0x1cU) 
                                               | (QData)((IData)(
                                                                 ((0x7ffffc0U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___3992_ 
                                                                               >> 0xcU)) 
                                                                      << 6U)) 
                                                                  | (((IData)(vlSelf->top__DOT___2114_) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->top__DOT___1482_) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelf->top__DOT___1435_) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->top__DOT___2338_) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->top__DOT___1796_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0479_))))))))))) 
                                >> 0x20U)));
    vlSelf->top__DOT___4481_[0U] = (IData)((((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT___4749_[1U] 
                                                                 >> 0x17U)))) 
                                             << 0x2fU) 
                                            | (((QData)((IData)(
                                                                (0x7ffffU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___3992_ 
                                                                            >> 0x22U))))) 
                                                << 0x1cU) 
                                               | (QData)((IData)(
                                                                 ((0x7ffffc0U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___3992_ 
                                                                               >> 0xcU)) 
                                                                      << 6U)) 
                                                                  | (((IData)(vlSelf->top__DOT___2114_) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->top__DOT___1482_) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelf->top__DOT___1435_) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->top__DOT___2338_) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->top__DOT___1796_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0479_))))))))))));
    vlSelf->top__DOT___4481_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4481_[2U] = ((0x38000U & vlSelf->top__DOT___4268_) 
                                    | ((0x4000U & (
                                                   vlSelf->top__DOT___4749_[2U] 
                                                   >> 8U)) 
                                       | ((0x3000U 
                                           & vlSelf->top__DOT___4268_) 
                                          | ((0x800U 
                                              & (vlSelf->top__DOT___4749_[2U] 
                                                 >> 8U)) 
                                             | ((0x400U 
                                                 & vlSelf->top__DOT___4268_) 
                                                | ((0x200U 
                                                    & (vlSelf->top__DOT___4749_[2U] 
                                                       >> 8U)) 
                                                   | ((0x100U 
                                                       & (vlSelf->top__DOT___4749_[2U] 
                                                          >> 8U)) 
                                                      | (0xffU 
                                                         & (vlSelf->top__DOT___4749_[2U] 
                                                            >> 8U)))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__708(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__708\n"); );
    // Body
    vlSelf->top__DOT___3844_ = ((0x40000U & ((IData)(vlSelf->top__DOT___4761_) 
                                             << 0xdU)) 
                                | ((0x30000U & ((0x10000U 
                                                 & ((IData)(vlSelf->top__DOT___4761_) 
                                                    << 0xcU)) 
                                                | (0xffff0000U 
                                                   & (((IData)(vlSelf->top__DOT___3798_) 
                                                       << 0xeU) 
                                                      | ((IData)(vlSelf->top__DOT___0479_) 
                                                         << 9U))))) 
                                   | ((0xe000U & ((IData)(vlSelf->top__DOT___4761_) 
                                                  << 0xcU)) 
                                      | ((0x1000U & 
                                          (((IData)(vlSelf->top__DOT___4761_) 
                                            << 0xcU) 
                                           | (0x2000U 
                                              & ((IData)(vlSelf->top__DOT___4761_) 
                                                 << 9U)))) 
                                         | ((0x800U 
                                             & ((IData)(vlSelf->top__DOT___7172_) 
                                                << 1U)) 
                                            | ((0x600U 
                                                & ((0x1000U 
                                                    & ((IData)(vlSelf->top__DOT___4761_) 
                                                       << 8U)) 
                                                   | ((0x800U 
                                                       & ((IData)(vlSelf->top__DOT___4761_) 
                                                          << 0xbU)) 
                                                      | (((IData)(vlSelf->top__DOT___3798_) 
                                                          << 0xaU) 
                                                         | ((0x200U 
                                                             & ((IData)(vlSelf->top__DOT___7172_) 
                                                                << 1U)) 
                                                            | (0xfffffe00U 
                                                               & ((IData)(vlSelf->top__DOT___0479_) 
                                                                  << 5U))))))) 
                                               | ((0x1c0U 
                                                   & ((IData)(vlSelf->top__DOT___7172_) 
                                                      << 1U)) 
                                                  | (((1U 
                                                       & (((IData)(vlSelf->top__DOT___7172_) 
                                                           >> 4U) 
                                                          | ((((0x10U 
                                                                & (IData)(vlSelf->top__DOT___4761_)) 
                                                               | (8U 
                                                                  & ((IData)(vlSelf->top__DOT___4761_) 
                                                                     << 3U))) 
                                                              | (0x1ffffffcU 
                                                                 & ((IData)(vlSelf->top__DOT___3798_) 
                                                                    << 2U))) 
                                                             | (2U 
                                                                & ((IData)(vlSelf->top__DOT___7172_) 
                                                                   >> 7U))))) 
                                                      << 5U) 
                                                     | ((0x10U 
                                                         & ((IData)(vlSelf->top__DOT___7172_) 
                                                            << 1U)) 
                                                        | (((1U 
                                                             & (((IData)(vlSelf->top__DOT___7172_) 
                                                                 >> 2U) 
                                                                | (((((0x20U 
                                                                       & ((IData)(vlSelf->top__DOT___4761_) 
                                                                          << 1U)) 
                                                                      | (0x10U 
                                                                         & ((IData)(vlSelf->top__DOT___4761_) 
                                                                            << 4U))) 
                                                                     | (0x3ffffff8U 
                                                                        & ((IData)(vlSelf->top__DOT___3798_) 
                                                                           << 3U))) 
                                                                    | (4U 
                                                                       & ((IData)(vlSelf->top__DOT___7172_) 
                                                                          >> 6U))) 
                                                                   | (2U 
                                                                      & ((IData)(vlSelf->top__DOT___7172_) 
                                                                         >> 3U))))) 
                                                            << 3U) 
                                                           | ((4U 
                                                               & ((IData)(vlSelf->top__DOT___7172_) 
                                                                  << 1U)) 
                                                              | (3U 
                                                                 & ((0x80U 
                                                                     & ((IData)(vlSelf->top__DOT___4761_) 
                                                                        << 3U)) 
                                                                    | ((0x40U 
                                                                        & ((IData)(vlSelf->top__DOT___4761_) 
                                                                           << 6U)) 
                                                                       | (((IData)(vlSelf->top__DOT___3798_) 
                                                                           << 5U) 
                                                                          | ((0x10U 
                                                                              & ((IData)(vlSelf->top__DOT___7172_) 
                                                                                >> 4U)) 
                                                                             | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7172_) 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & (IData)(vlSelf->top__DOT___7172_)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7172_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0479_))))))))))))))))))));
    vlSelf->top__DOT____VdfgTmp_had2cd3c5__0 = (((IData)(vlSelf->top__DOT___0170_) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->top__DOT___0749_) 
                                                    << 0xdU) 
                                                   | ((0x1000U 
                                                       & (vlSelf->top__DOT___3844_ 
                                                          << 1U)) 
                                                      | ((0xc00U 
                                                          & ((IData)(vlSelf->top__DOT___7172_) 
                                                             << 2U)) 
                                                         | ((0x380U 
                                                             & (vlSelf->top__DOT___3844_ 
                                                                << 1U)) 
                                                            | ((0x40U 
                                                                & ((IData)(vlSelf->top__DOT___7172_) 
                                                                   << 2U)) 
                                                               | ((0x20U 
                                                                   & (vlSelf->top__DOT___3844_ 
                                                                      << 1U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(vlSelf->top__DOT___7172_) 
                                                                         << 2U)) 
                                                                     | ((8U 
                                                                         & (vlSelf->top__DOT___3844_ 
                                                                            << 1U)) 
                                                                        | ((4U 
                                                                            & ((IData)(vlSelf->top__DOT___7172_) 
                                                                               << 2U)) 
                                                                           | ((IData)(vlSelf->top__DOT___0300_) 
                                                                              << 1U)))))))))));
    vlSelf->top__DOT___2731_ = (1U & ((((4U & (IData)(vlSelf->top__DOT___7172_)) 
                                        | ((2U & (vlSelf->top__DOT___3844_ 
                                                  >> 1U)) 
                                           | (1U & (IData)(vlSelf->top__DOT___7172_)))) 
                                       + ((4U & (IData)(vlSelf->top__DOT___7065_)) 
                                          | ((2U & (IData)(vlSelf->top__DOT___7065_)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT___4049_ 
                                                           >> 0x1eU)))))) 
                                      >> 2U));
    vlSelf->top__DOT___3215_ = (1U & ((((0xe0U & (vlSelf->top__DOT___3844_ 
                                                  >> 1U)) 
                                        | ((0x10U & (IData)(vlSelf->top__DOT___7172_)) 
                                           | ((8U & 
                                               (vlSelf->top__DOT___3844_ 
                                                >> 1U)) 
                                              | ((4U 
                                                  & (IData)(vlSelf->top__DOT___7172_)) 
                                                 | ((2U 
                                                     & (vlSelf->top__DOT___3844_ 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & (IData)(vlSelf->top__DOT___7172_))))))) 
                                       + ((0x80U & (IData)(vlSelf->top__DOT___7065_)) 
                                          | ((0x40U 
                                              & (IData)(vlSelf->top__DOT___7065_)) 
                                             | ((0x38U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___4049_ 
                                                             >> 0x21U)) 
                                                    << 3U)) 
                                                | ((4U 
                                                    & (IData)(vlSelf->top__DOT___7065_)) 
                                                   | ((2U 
                                                       & (IData)(vlSelf->top__DOT___7065_)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT___4049_ 
                                                                    >> 0x1eU))))))))) 
                                      >> 7U));
    vlSelf->top__DOT___3038_ = (1U & (((((IData)(vlSelf->top__DOT___3798_) 
                                         << 9U) | (
                                                   (0x100U 
                                                    & (IData)(vlSelf->top__DOT___7172_)) 
                                                   | ((0xe0U 
                                                       & (vlSelf->top__DOT___3844_ 
                                                          >> 1U)) 
                                                      | ((0x10U 
                                                          & (IData)(vlSelf->top__DOT___7172_)) 
                                                         | ((8U 
                                                             & (vlSelf->top__DOT___3844_ 
                                                                >> 1U)) 
                                                            | ((4U 
                                                                & (IData)(vlSelf->top__DOT___7172_)) 
                                                               | ((2U 
                                                                   & (vlSelf->top__DOT___3844_ 
                                                                      >> 1U)) 
                                                                  | (1U 
                                                                     & (IData)(vlSelf->top__DOT___7172_))))))))) 
                                       + ((0x300U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT___4049_ 
                                                     >> 0x26U)) 
                                            << 8U)) 
                                          | ((0x80U 
                                              & (IData)(vlSelf->top__DOT___7065_)) 
                                             | ((0x40U 
                                                 & (IData)(vlSelf->top__DOT___7065_)) 
                                                | ((0x38U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___4049_ 
                                                                >> 0x21U)) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (IData)(vlSelf->top__DOT___7065_)) 
                                                      | ((2U 
                                                          & (IData)(vlSelf->top__DOT___7065_)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT___4049_ 
                                                                       >> 0x1eU)))))))))) 
                                      >> 9U));
    vlSelf->top__DOT___1073_ = (1U & (~ (((IData)(vlSelf->top__DOT___0619_) 
                                          & (IData)(vlSelf->top__DOT___0181_)) 
                                         | ((IData)(vlSelf->top__DOT___3039_) 
                                            & (IData)(vlSelf->top__DOT___3038_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__709(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__709\n"); );
    // Body
    vlSelf->top__DOT___2218_ = (1U & ((IData)(vlSelf->top__DOT___0719_) 
                                      + (IData)(vlSelf->top__DOT___0107_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__710(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__710\n"); );
    // Body
    vlSelf->top__DOT___0280_ = (1U & ((IData)(vlSelf->top__DOT___3374_) 
                                      | (vlSelf->top__DOT___7184_ 
                                         >> 5U)));
    vlSelf->top__DOT___4240_[0U] = ((0xffff1fffU & 
                                     vlSelf->top__DOT___4240_[0U]) 
                                    | (0xffffe000U 
                                       & (((IData)(vlSelf->top__DOT___3333_) 
                                           << 0xfU) 
                                          | (((IData)(vlSelf->top__DOT___0603_) 
                                              << 0xeU) 
                                             | ((IData)(vlSelf->top__DOT___0280_) 
                                                << 0xdU)))));
    vlSelf->top__DOT___0855_ = ((IData)(vlSelf->top__DOT___0280_) 
                                & (IData)(vlSelf->top__DOT___7092_));
    vlSelf->top__DOT___2614_ = (1U & (((IData)(vlSelf->top__DOT___6976_) 
                                       >> 3U) | (IData)(vlSelf->top__DOT___0280_)));
    vlSelf->top__DOT___3528_ = ((IData)(vlSelf->top__DOT___0933_) 
                                | (IData)(vlSelf->top__DOT___0280_));
    vlSelf->top__DOT___0206_ = (1U & ((IData)(vlSelf->top__DOT___0855_) 
                                      ^ (IData)((vlSelf->top__DOT___7059_ 
                                                 >> 0xfU))));
    vlSelf->top__DOT___0730_ = ((IData)(vlSelf->top__DOT___3528_) 
                                ^ (IData)(vlSelf->top__DOT___2648_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__711(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__711\n"); );
    // Body
    vlSelf->top__DOT___0000_ = ((~ (IData)(vlSelf->top__DOT___0001_)) 
                                & (IData)(vlSelf->top__DOT___0002_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__712(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__712\n"); );
    // Body
    vlSelf->top__DOT___0541_ = (1U & (~ (((vlSelf->in_data[8U] 
                                           >> 0xbU) 
                                          & (IData)(
                                                    (vlSelf->top__DOT___7155_ 
                                                     >> 0x12U))) 
                                         | (IData)(vlSelf->top__DOT___2252_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__713(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__713\n"); );
    // Body
    vlSelf->top__DOT___2162_ = (1U & (~ ((vlSelf->top__DOT___7170_[2U] 
                                          >> 0xaU) 
                                         | ((IData)(vlSelf->top__DOT___0056_) 
                                            & (IData)(vlSelf->top__DOT___0203_)))));
    vlSelf->top__DOT___4367_ = ((0xffffffdffffULL & vlSelf->top__DOT___4367_) 
                                | ((QData)((IData)(vlSelf->top__DOT___2162_)) 
                                   << 0x11U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__714(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__714\n"); );
    // Body
    vlSelf->top__DOT___3185_ = (1U & (~ (((IData)(vlSelf->top__DOT___3091_) 
                                          & (~ (((IData)(vlSelf->top__DOT___0284_) 
                                                 & (IData)(vlSelf->top__DOT___0933_)) 
                                                | (IData)(vlSelf->top__DOT___0623_)))) 
                                         | ((IData)(vlSelf->top__DOT___0011_) 
                                            & (IData)(vlSelf->top__DOT___3096_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__715(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__715\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((0x200000000ULL | (((QData)((IData)(
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___3916_ 
                                                                            >> 0x18U))))) 
                                                << 0x3eU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___3181_)) 
                                                   << 0x3dU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U))))) 
                                                      << 0x3cU) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___3688_)) 
                                                         << 0x3bU) 
                                                        | (((QData)((IData)(
                                                                            (0x3ffU 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU))))) 
                                                            << 0x31U) 
                                                           | (((QData)((IData)(vlSelf->top__DOT___0162_)) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(vlSelf->top__DOT___3319_)) 
                                                                  << 0x2fU) 
                                                                 | (((QData)((IData)(
                                                                                (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))) 
                                                                     << 0x26U) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___0224_)) 
                                                                        << 0x25U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4759_) 
                                                                                >> 5U)))) 
                                                                           << 0x22U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4759_) 
                                                                                >> 4U)))) 
                                                                              << 0x20U) 
                                                                             | (QData)((IData)(
                                                                                (0x24000000U 
                                                                                | ((0xc0000000U 
                                                                                & ((IData)(vlSelf->top__DOT___4759_) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->top__DOT___4759_) 
                                                                                << 0x1aU)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->top__DOT___4759_) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0509_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0866_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1082_) 
                                                                                << 0x14U) 
                                                                                | ((0xf0000U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___3190_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2952_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___2437_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___3506_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3632_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2763_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1899_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & vlSelf->top__DOT___3816_[0U]))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((0x200000000ULL | (((QData)((IData)(
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT___3916_ 
                                                                             >> 0x18U))))) 
                                                 << 0x3eU) 
                                                | (((QData)((IData)(vlSelf->top__DOT___3181_)) 
                                                    << 0x3dU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U))))) 
                                                       << 0x3cU) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___3688_)) 
                                                          << 0x3bU) 
                                                         | (((QData)((IData)(
                                                                             (0x3ffU 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU))))) 
                                                             << 0x31U) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___0162_)) 
                                                                << 0x30U) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___3319_)) 
                                                                   << 0x2fU) 
                                                                  | (((QData)((IData)(
                                                                                (0x1ffU 
                                                                                & (IData)(vlSelf->top__DOT___3916_)))) 
                                                                      << 0x26U) 
                                                                     | (((QData)((IData)(vlSelf->top__DOT___0224_)) 
                                                                         << 0x25U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4759_) 
                                                                                >> 5U)))) 
                                                                            << 0x22U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT___4759_) 
                                                                                >> 4U)))) 
                                                                               << 0x20U) 
                                                                              | (QData)((IData)(
                                                                                (0x24000000U 
                                                                                | ((0xc0000000U 
                                                                                & ((IData)(vlSelf->top__DOT___4759_) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->top__DOT___4759_) 
                                                                                << 0x1aU)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->top__DOT___4759_) 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0509_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0866_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1082_) 
                                                                                << 0x14U) 
                                                                                | ((0xf0000U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___3190_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2952_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___2437_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___3506_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3632_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2763_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1899_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & vlSelf->top__DOT___3816_[0U]))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    vlSelf->top__DOT___4189_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4189_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4189_[2U] = (((IData)(vlSelf->top__DOT___1205_) 
                                     << 0x1fU) | ((0x60000000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___3916_ 
                                                               >> 0x37U)) 
                                                      << 0x1dU)) 
                                                  | (((IData)(vlSelf->top__DOT___3570_) 
                                                      << 0x1cU) 
                                                     | ((0xfff0000U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___3916_ 
                                                                     >> 0x2aU)) 
                                                            << 0x10U)) 
                                                        | (((IData)(vlSelf->top__DOT___0719_) 
                                                            << 0xfU) 
                                                           | ((0x7ff8U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT___3916_ 
                                                                           >> 0x1dU)) 
                                                                  << 3U)) 
                                                              | (((IData)(vlSelf->top__DOT___3374_) 
                                                                  << 2U) 
                                                                 | ((2U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1bU)) 
                                                                        << 1U)) 
                                                                    | (IData)(vlSelf->top__DOT___3532_)))))))));
    vlSelf->top__DOT___4189_[3U] = ((2U & ((IData)(
                                                   (vlSelf->top__DOT___6989_ 
                                                    >> 0x20U)) 
                                           << 1U)) 
                                    | (1U & (vlSelf->top__DOT___3880_[2U] 
                                             >> 3U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__716(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__716\n"); );
    // Body
    vlSelf->top__DOT___0221_ = ((IData)(vlSelf->top__DOT___0222_) 
                                & (~ (IData)(vlSelf->top__DOT___0161_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__718(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__718\n"); );
    // Body
    vlSelf->top__DOT___3062_ = ((IData)(vlSelf->top__DOT___0881_) 
                                ^ (IData)(vlSelf->top__DOT___1695_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__719(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__719\n"); );
    // Body
    vlSelf->top__DOT___0313_ = ((vlSelf->top__DOT___7115_[0U] 
                                 >> 0x1eU) & (IData)(vlSelf->top__DOT___1695_));
    vlSelf->top__DOT___1384_ = (1U & ((~ (IData)(vlSelf->top__DOT___0313_)) 
                                      & ((IData)(vlSelf->top__DOT___0196_) 
                                         ^ (~ (IData)(vlSelf->top__DOT___1695_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__720(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__720\n"); );
    // Init
    IData/*16:0*/ top__DOT____VdfgTmp_h3f7daada__0;
    top__DOT____VdfgTmp_h3f7daada__0 = 0;
    CData/*3:0*/ top__DOT____VdfgTmp_h2e3bee7f__0;
    top__DOT____VdfgTmp_h2e3bee7f__0 = 0;
    // Body
    vlSelf->top__DOT___3891_ = ((0x7f000000U & ((IData)(
                                                        (vlSelf->top__DOT___7122_ 
                                                         >> 0x21U)) 
                                                << 0x18U)) 
                                | (((IData)(vlSelf->top__DOT___3507_) 
                                    << 0x17U) | (((IData)(vlSelf->top__DOT___0311_) 
                                                  << 0x16U) 
                                                 | ((0x3c0000U 
                                                     & (((((IData)(vlSelf->top__DOT___3688_) 
                                                           << 0x13U) 
                                                          | ((0x7fe00U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___3916_ 
                                                                          >> 0xbU)) 
                                                                 << 9U)) 
                                                             | (((IData)(vlSelf->top__DOT___0162_) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                    << 7U) 
                                                                   | ((0x7cU 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 4U)) 
                                                                          << 2U)) 
                                                                      | (((IData)(vlSelf->top__DOT___1561_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0018_))))))) 
                                                         + 
                                                         ((0xffe00U 
                                                           & vlSelf->top__DOT___4126_) 
                                                          | ((0x180U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___3836_ 
                                                                          >> 0x33U)) 
                                                                 << 7U)) 
                                                             | ((0x40U 
                                                                 & vlSelf->top__DOT___4126_) 
                                                                | ((0x10U 
                                                                    & vlSelf->top__DOT___4126_) 
                                                                   | (((IData)(vlSelf->top__DOT___1366_) 
                                                                       << 3U) 
                                                                      | (((IData)(vlSelf->top__DOT___1252_) 
                                                                          << 2U) 
                                                                         | (((IData)(vlSelf->top__DOT___1357_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___0571_))))))))) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelf->top__DOT___3311_) 
                                                        << 0x11U) 
                                                       | ((0x1c000U 
                                                           & ((((0x7e00U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3916_ 
                                                                             >> 0xbU)) 
                                                                    << 9U)) 
                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->top__DOT___3319_) 
                                                                       << 7U) 
                                                                      | ((0x7cU 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 4U)) 
                                                                             << 2U)) 
                                                                         | (((IData)(vlSelf->top__DOT___1561_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___0018_)))))) 
                                                               + 
                                                               ((0x7e00U 
                                                                 & vlSelf->top__DOT___4126_) 
                                                                | ((0x180U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3836_ 
                                                                                >> 0x33U)) 
                                                                       << 7U)) 
                                                                   | ((0x40U 
                                                                       & vlSelf->top__DOT___4126_) 
                                                                      | ((0x10U 
                                                                          & vlSelf->top__DOT___4126_) 
                                                                         | (((IData)(vlSelf->top__DOT___1366_) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSelf->top__DOT___1252_) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSelf->top__DOT___1357_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0571_))))))))) 
                                                              << 2U)) 
                                                          | (((IData)(vlSelf->top__DOT___1695_) 
                                                              << 0xdU) 
                                                             | ((0x1fe0U 
                                                                 & ((((0x600U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                          << 9U)) 
                                                                      | (((IData)(vlSelf->top__DOT___0162_) 
                                                                          << 8U) 
                                                                         | (((IData)(vlSelf->top__DOT___3319_) 
                                                                             << 7U) 
                                                                            | ((0x7cU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 4U)) 
                                                                                << 2U)) 
                                                                               | (((IData)(vlSelf->top__DOT___1561_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0018_)))))) 
                                                                     + 
                                                                     ((0x600U 
                                                                       & vlSelf->top__DOT___4126_) 
                                                                      | ((0x180U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x33U)) 
                                                                             << 7U)) 
                                                                         | ((0x40U 
                                                                             & vlSelf->top__DOT___4126_) 
                                                                            | ((0x10U 
                                                                                & vlSelf->top__DOT___4126_) 
                                                                               | (((IData)(vlSelf->top__DOT___1366_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1252_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1357_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0571_))))))))) 
                                                                    << 2U)) 
                                                                | (((IData)(vlSelf->top__DOT___1379_) 
                                                                    << 4U) 
                                                                   | ((0xcU 
                                                                       & (((((IData)(vlSelf->top__DOT___1561_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___0018_)) 
                                                                           + 
                                                                           ((0x10U 
                                                                             & vlSelf->top__DOT___4126_) 
                                                                            | (((IData)(vlSelf->top__DOT___1366_) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->top__DOT___1252_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1357_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0571_)))))) 
                                                                          << 2U)) 
                                                                      | (((IData)(vlSelf->top__DOT___2517_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___1204_))))))))))));
    vlSelf->top__DOT___4593_ = ((0x70U & (vlSelf->top__DOT___3891_ 
                                          >> 0x14U)) 
                                | ((0xeU & ((IData)(
                                                    (vlSelf->top__DOT___7122_ 
                                                     >> 0x1eU)) 
                                            << 1U)) 
                                   | (IData)(vlSelf->top__DOT___1366_)));
    vlSelf->top__DOT___3217_ = (1U & ((((2U & (vlSelf->top__DOT___3891_ 
                                               >> 1U)) 
                                        | (IData)(vlSelf->top__DOT___1836_)) 
                                       + (IData)((vlSelf->top__DOT___7059_ 
                                                  >> 1U))) 
                                      >> 1U));
    top__DOT____VdfgTmp_h2e3bee7f__0 = (((IData)(vlSelf->top__DOT___1379_) 
                                         << 3U) | (
                                                   (6U 
                                                    & (vlSelf->top__DOT___3891_ 
                                                       >> 1U)) 
                                                   | (IData)(vlSelf->top__DOT___1836_)));
    vlSelf->top__DOT___1847_ = (1U & ((((0xff0U & (vlSelf->top__DOT___3891_ 
                                                   >> 1U)) 
                                        | (((IData)(vlSelf->top__DOT___1379_) 
                                            << 3U) 
                                           | ((6U & 
                                               (vlSelf->top__DOT___3891_ 
                                                >> 1U)) 
                                              | (IData)(vlSelf->top__DOT___1836_)))) 
                                       + (IData)((vlSelf->top__DOT___7059_ 
                                                  >> 1U))) 
                                      >> 0xbU));
    vlSelf->top__DOT___2546_ = (1U & ((((6U & (vlSelf->top__DOT___3891_ 
                                               >> 1U)) 
                                        | (IData)(vlSelf->top__DOT___1836_)) 
                                       + (IData)((vlSelf->top__DOT___7059_ 
                                                  >> 1U))) 
                                      >> 2U));
    top__DOT____VdfgTmp_h3f7daada__0 = (((IData)(vlSelf->top__DOT___3311_) 
                                         << 0x10U) 
                                        | ((0xe000U 
                                            & (vlSelf->top__DOT___3891_ 
                                               >> 1U)) 
                                           | (((IData)(vlSelf->top__DOT___1695_) 
                                               << 0xcU) 
                                              | ((0xff0U 
                                                  & (vlSelf->top__DOT___3891_ 
                                                     >> 1U)) 
                                                 | (IData)(top__DOT____VdfgTmp_h2e3bee7f__0)))));
    vlSelf->top__DOT___2275_ = (1U & ((((0x60000U & 
                                         (vlSelf->top__DOT___3891_ 
                                          >> 1U)) | top__DOT____VdfgTmp_h3f7daada__0) 
                                       + (IData)((vlSelf->top__DOT___7059_ 
                                                  >> 1U))) 
                                      >> 0x12U));
    vlSelf->top__DOT___4418_ = ((0xf80000U & (((0x800000U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT___7215_ 
                                                            >> 0x13U)) 
                                                   << 0x17U)) 
                                               | (((IData)(vlSelf->top__DOT___3507_) 
                                                   << 0x16U) 
                                                  | (((IData)(vlSelf->top__DOT___0311_) 
                                                      << 0x15U) 
                                                     | ((0x1e0000U 
                                                         & (vlSelf->top__DOT___3891_ 
                                                            >> 1U)) 
                                                        | top__DOT____VdfgTmp_h3f7daada__0)))) 
                                              + (IData)(
                                                        (vlSelf->top__DOT___7059_ 
                                                         >> 1U)))) 
                                | (((IData)(vlSelf->top__DOT___2275_) 
                                    << 0x12U) | ((0x3f000U 
                                                  & (((0x20000U 
                                                       & (vlSelf->top__DOT___3891_ 
                                                          >> 1U)) 
                                                      | top__DOT____VdfgTmp_h3f7daada__0) 
                                                     + (IData)(
                                                               (vlSelf->top__DOT___7059_ 
                                                                >> 1U)))) 
                                                 | (((IData)(vlSelf->top__DOT___1847_) 
                                                     << 0xbU) 
                                                    | ((0x7f8U 
                                                        & (((0x7f0U 
                                                             & (vlSelf->top__DOT___3891_ 
                                                                >> 1U)) 
                                                            | (IData)(top__DOT____VdfgTmp_h2e3bee7f__0)) 
                                                           + (IData)(
                                                                     (vlSelf->top__DOT___7059_ 
                                                                      >> 1U)))) 
                                                       | (((IData)(vlSelf->top__DOT___2546_) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->top__DOT___3217_) 
                                                              << 1U) 
                                                             | (1U 
                                                                & ((IData)(vlSelf->top__DOT___1836_) 
                                                                   + (IData)(
                                                                             (vlSelf->top__DOT___7059_ 
                                                                              >> 1U)))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__721(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__721\n"); );
    // Body
    vlSelf->top__DOT___4531_[0U] = (IData)(((0x3fffffffffffcULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->top__DOT___4767_[1U])) 
                                                 << 0x22U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->top__DOT___4767_[0U])) 
                                                   << 2U))) 
                                            | (QData)((IData)(
                                                              ((IData)(vlSelf->top__DOT___0305_) 
                                                               << 1U)))));
    vlSelf->top__DOT___4531_[1U] = ((0xfff80000U & 
                                     (vlSelf->top__DOT___4767_[1U] 
                                      << 3U)) | (IData)(
                                                        (((0x3fffffffffffcULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->top__DOT___4767_[1U])) 
                                                               << 0x22U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->top__DOT___4767_[0U])) 
                                                                 << 2U))) 
                                                          | (QData)((IData)(
                                                                            ((IData)(vlSelf->top__DOT___0305_) 
                                                                             << 1U)))) 
                                                         >> 0x20U)));
    vlSelf->top__DOT___4531_[2U] = ((0x7ffc00U & (vlSelf->top__DOT___4767_[2U] 
                                                  << 3U)) 
                                    | ((0x200U & (vlSelf->top__DOT___4767_[2U] 
                                                  << 3U)) 
                                       | (0x1ffU & 
                                          ((0x7fff8U 
                                            & (vlSelf->top__DOT___4767_[2U] 
                                               << 3U)) 
                                           | (vlSelf->top__DOT___4767_[1U] 
                                              >> 0x1dU)))));
    vlSelf->top__DOT____VdfgTmp_h9fd0dcbd__0 = ((0x3fffffffffffcULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->top__DOT___4531_[1U])) 
                                                     << 0x20U) 
                                                    | (0xfffffffffffffffcULL 
                                                       & (QData)((IData)(
                                                                         vlSelf->top__DOT___4531_[0U]))))) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->top__DOT___0305_) 
                                                                   << 1U))));
    vlSelf->top__DOT____VdfgTmp_hcaba1764__0[0U] = (IData)(vlSelf->top__DOT____VdfgTmp_h9fd0dcbd__0);
    vlSelf->top__DOT____VdfgTmp_hcaba1764__0[1U] = 
        ((0xfff80000U & vlSelf->top__DOT___4531_[1U]) 
         | (IData)((vlSelf->top__DOT____VdfgTmp_h9fd0dcbd__0 
                    >> 0x20U)));
    vlSelf->top__DOT____VdfgTmp_hcaba1764__0[2U] = 
        ((0x200U & (vlSelf->top__DOT___4767_[2U] << 3U)) 
         | (0x1ffU & vlSelf->top__DOT___4531_[2U]));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__723(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__723\n"); );
    // Body
    vlSelf->top__DOT___2624_ = (1U & (~ (((IData)(vlSelf->top__DOT___2541_) 
                                          & (IData)(vlSelf->top__DOT___1955_)) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT___6971_ 
                                                     >> 4U)) 
                                            & (IData)(vlSelf->top__DOT___0116_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__724(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__724\n"); );
    // Body
    vlSelf->top__DOT___4054_[0U] = ((0x3fffffffU & 
                                     vlSelf->top__DOT___4054_[0U]) 
                                    | ((IData)((((QData)((IData)(vlSelf->top__DOT___1093_)) 
                                                 << 0x26U) 
                                                | vlSelf->top__DOT___7177_)) 
                                       << 0x1eU));
    vlSelf->top__DOT___4054_[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___1093_)) 
                                               << 0x26U) 
                                              | vlSelf->top__DOT___7177_)) 
                                     >> 2U) | ((IData)(
                                                       ((((QData)((IData)(vlSelf->top__DOT___1093_)) 
                                                          << 0x26U) 
                                                         | vlSelf->top__DOT___7177_) 
                                                        >> 0x20U)) 
                                               << 0x1eU));
    vlSelf->top__DOT___4054_[2U] = (0x1fU & ((IData)(
                                                     ((((QData)((IData)(vlSelf->top__DOT___1093_)) 
                                                        << 0x26U) 
                                                       | vlSelf->top__DOT___7177_) 
                                                      >> 0x20U)) 
                                             >> 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__725(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__725\n"); );
    // Body
    vlSelf->top__DOT___0060_ = (1U & (~ (((IData)(vlSelf->top__DOT___1329_) 
                                          & (((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT____VdfgTmp_hc95200b7__0)) 
                                             >> 1U)) 
                                         | ((IData)(vlSelf->top__DOT___0032_) 
                                            & (IData)(vlSelf->top__DOT___3157_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__727(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__727\n"); );
    // Body
    vlSelf->top__DOT___2080_ = ((IData)(vlSelf->top__DOT___0582_) 
                                ^ (IData)(vlSelf->top__DOT___1691_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__729(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__729\n"); );
    // Body
    vlSelf->top__DOT___3565_ = (1U & ((IData)((vlSelf->top__DOT___7157_ 
                                               >> 0x10U)) 
                                      | (IData)(vlSelf->top__DOT___0704_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__730(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__730\n"); );
    // Body
    vlSelf->top__DOT___1728_ = ((IData)(vlSelf->top__DOT___1663_) 
                                & (IData)(vlSelf->top__DOT___1046_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__731(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__731\n"); );
    // Body
    vlSelf->top__DOT___4343_[0U] = ((0xfffc7fffU & 
                                     vlSelf->top__DOT___4343_[0U]) 
                                    | (0xffff8000U 
                                       & (((IData)(vlSelf->top__DOT___1663_) 
                                           << 0x11U) 
                                          | (((IData)(vlSelf->top__DOT___1208_) 
                                              << 0x10U) 
                                             | ((IData)(vlSelf->top__DOT___0515_) 
                                                << 0xfU)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__732(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__732\n"); );
    // Body
    vlSelf->top__DOT___1810_ = (1U & (~ (((IData)(vlSelf->top__DOT___0102_) 
                                          & (IData)(vlSelf->top__DOT___2460_)) 
                                         | (IData)(vlSelf->top__DOT___1598_))));
    vlSelf->top__DOT___0929_ = (((IData)((vlSelf->top__DOT___7059_ 
                                          >> 9U)) & (IData)(vlSelf->top__DOT___1810_)) 
                                | ((IData)(vlSelf->top__DOT___1688_) 
                                   & (IData)(vlSelf->top__DOT___0876_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__733(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__733\n"); );
    // Body
    vlSelf->top__DOT___3574_ = (1U & (((0x40U | ((((IData)(vlSelf->top__DOT___0183_) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->top__DOT___0023_) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->top__DOT___0067_) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->top__DOT___1188_) 
                                                            << 0x19U) 
                                                           | ((0x1000000U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT___3920_ 
                                                                           >> 0x10U)) 
                                                                  << 0x18U)) 
                                                              | (((IData)(vlSelf->top__DOT___3571_) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->top__DOT___2920_) 
                                                                     << 0x16U) 
                                                                    | ((0x200000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                           << 0x15U)) 
                                                                       | (((IData)(vlSelf->top__DOT___3325_) 
                                                                           << 0x14U) 
                                                                          | ((0x80000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 0x13U)) 
                                                                             | (((IData)(vlSelf->top__DOT___2449_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0979_) 
                                                                                << 0x11U) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1288_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0087_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1820_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0534_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___2563_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4100_ 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | (0x30U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4100_ 
                                                                                >> 4U)) 
                                                                                << 4U)))))))))))))))))))))) 
                                                 | ((8U 
                                                     & ((IData)(vlSelf->top__DOT___4738_) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelf->top__DOT___2596_) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->top__DOT___2054_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___0300_)))))) 
                                       + ((((IData)(vlSelf->top__DOT___0520_) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->top__DOT___0295_) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->top__DOT___1463_) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->top__DOT___0082_) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->top__DOT___0300_) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->top__DOT___0485_) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->top__DOT___0985_) 
                                                              << 0x15U) 
                                                             | ((0x100000U 
                                                                 & (vlSelf->top__DOT___3900_[0U] 
                                                                    >> 1U)) 
                                                                | (((IData)(vlSelf->top__DOT___3603_) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->top__DOT___2640_) 
                                                                       << 0x12U) 
                                                                      | ((0x20000U 
                                                                          & (vlSelf->top__DOT___3900_[0U] 
                                                                             >> 1U)) 
                                                                         | (((IData)(vlSelf->top__DOT___1113_) 
                                                                             << 0x10U) 
                                                                            | ((0xf000U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 1U)) 
                                                                               | (((IData)(vlSelf->top__DOT___1782_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___3272_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3413_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___2501_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___3900_[0U] 
                                                                                >> 1U)) 
                                                                                | ((IData)(vlSelf->top__DOT___2465_) 
                                                                                << 5U)))))))))))))))))))) 
                                          | ((0x10U 
                                              & (vlSelf->top__DOT___3900_[0U] 
                                                 >> 1U)) 
                                             | (((IData)(vlSelf->top__DOT___2876_) 
                                                 << 3U) 
                                                | ((4U 
                                                    & (vlSelf->top__DOT___3900_[0U] 
                                                       >> 1U)) 
                                                   | (((IData)(vlSelf->top__DOT___0381_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___1309_))))))) 
                                      >> 0x1cU));
    vlSelf->top__DOT___1455_ = (1U & (((0x40U | ((0x30U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___4100_ 
                                                              >> 4U)) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(vlSelf->top__DOT___4738_) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelf->top__DOT___2596_) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->top__DOT___2054_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___0300_)))))) 
                                       + (((0x40U & 
                                            (vlSelf->top__DOT___3900_[0U] 
                                             >> 1U)) 
                                           | ((IData)(vlSelf->top__DOT___2465_) 
                                              << 5U)) 
                                          | ((0x10U 
                                              & (vlSelf->top__DOT___3900_[0U] 
                                                 >> 1U)) 
                                             | (((IData)(vlSelf->top__DOT___2876_) 
                                                 << 3U) 
                                                | ((4U 
                                                    & (vlSelf->top__DOT___3900_[0U] 
                                                       >> 1U)) 
                                                   | (((IData)(vlSelf->top__DOT___0381_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___1309_))))))) 
                                      >> 6U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__737(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__737\n"); );
    // Body
    vlSelf->top__DOT___2651_ = (1U & (~ ((IData)(vlSelf->top__DOT___0151_) 
                                         & (IData)(vlSelf->top__DOT___2091_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__739(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__739\n"); );
    // Body
    vlSelf->top__DOT___4129_ = (((QData)((IData)((0x7ffffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT___7189_ 
                                                             >> 0xfU))))) 
                                 << 0x24U) | vlSelf->top__DOT____VdfgTmp_hb358240b__0);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__740(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__740\n"); );
    // Body
    vlSelf->top__DOT___2750_ = ((IData)(vlSelf->top__DOT___0194_) 
                                | (IData)(vlSelf->top__DOT___0615_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__741(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__741\n"); );
    // Body
    vlSelf->top__DOT___4587_ = (((QData)((IData)((vlSelf->top__DOT___4350_[0U] 
                                                  >> 0x18U))) 
                                 << 0x23U) | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT___4740_[0U] 
                                                                   >> 0x1cU)))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (0x3ffU 
                                                                   & (vlSelf->top__DOT___4350_[0U] 
                                                                      >> 0xdU)))) 
                                                  << 0x18U) 
                                                 | (QData)((IData)(
                                                                   ((0x800000U 
                                                                     & (vlSelf->top__DOT___4740_[0U] 
                                                                        << 6U)) 
                                                                    | ((0x7fc000U 
                                                                        & (vlSelf->top__DOT___4350_[0U] 
                                                                           << 0xbU)) 
                                                                       | ((0x3000U 
                                                                           & (vlSelf->top__DOT___4740_[0U] 
                                                                              << 6U)) 
                                                                          | (IData)(vlSelf->top__DOT___7192_)))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__742(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__742\n"); );
    // Body
    vlSelf->top__DOT___2653_ = (1U & ((((0x60U & ((IData)(
                                                          (vlSelf->top__DOT___3834_ 
                                                           >> 5U)) 
                                                  << 5U)) 
                                        | (((IData)(vlSelf->top__DOT___0167_) 
                                            << 4U) 
                                           | ((0xcU 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___3834_ 
                                                           >> 2U)) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->top__DOT___0477_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___3264_))))) 
                                       + ((0x78U & 
                                           vlSelf->top__DOT___4350_[0U]) 
                                          | (((IData)(vlSelf->top__DOT___1295_) 
                                              << 2U) 
                                             | (IData)(vlSelf->top__DOT___0054_)))) 
                                      >> 6U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__743(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__743\n"); );
    // Body
    vlSelf->top__DOT___4149_ = ((0x7fffULL & vlSelf->top__DOT___4149_) 
                                | ((QData)((IData)(
                                                   ((0x3fffeU 
                                                     & (vlSelf->top__DOT___7204_ 
                                                        >> 9U)) 
                                                    | (IData)(vlSelf->top__DOT___2417_)))) 
                                   << 0xfU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__745(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__745\n"); );
    // Body
    vlSelf->top__DOT___3187_ = (1U & (((IData)(0x25U) 
                                       + (((IData)(vlSelf->top__DOT___0191_) 
                                           << 5U) | 
                                          (((IData)(vlSelf->top__DOT___0880_) 
                                            << 4U) 
                                           | (IData)(vlSelf->top__DOT____VdfgTmp_h627e5219__0)))) 
                                      >> 5U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__746(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__746\n"); );
    // Body
    vlSelf->top__DOT___0366_ = (1U & (~ (((IData)(vlSelf->top__DOT___0922_) 
                                          & (IData)(vlSelf->top__DOT___2350_)) 
                                         | ((IData)(vlSelf->top__DOT___1177_) 
                                            & (IData)(vlSelf->top__DOT___2260_)))));
    vlSelf->top__DOT___1548_ = ((IData)(vlSelf->top__DOT___0361_) 
                                ^ (IData)(vlSelf->top__DOT___0366_));
    vlSelf->top__DOT___2163_ = (1U & (((((IData)(vlSelf->top__DOT___0460_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___0069_)) 
                                       + (((IData)(vlSelf->top__DOT___0183_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0366_))) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__747(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__747\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h7ddf83ef__0 = (0x40U 
                                                | ((0x800U 
                                                    & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                       << 0xbU)) 
                                                   | (((IData)(vlSelf->top__DOT___1073_) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->top__DOT___0300_) 
                                                          << 9U) 
                                                         | ((0x100U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___4100_ 
                                                                         >> 8U)) 
                                                                << 8U)) 
                                                            | ((0x30U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___4100_ 
                                                                            >> 4U)) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & ((IData)(vlSelf->top__DOT___4738_) 
                                                                      << 3U)) 
                                                                  | (((IData)(vlSelf->top__DOT___0778_) 
                                                                      << 2U) 
                                                                     | (((IData)(vlSelf->top__DOT___0355_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___0464_))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__749(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__749\n"); );
    // Body
    vlSelf->top__DOT___1072_ = ((IData)(vlSelf->top__DOT___0381_) 
                                & (~ (IData)(vlSelf->top__DOT___1073_)));
    vlSelf->top__DOT___0725_ = (1U & (~ (((IData)(vlSelf->top__DOT___0201_) 
                                          & (IData)(vlSelf->top__DOT___0204_)) 
                                         | ((IData)(vlSelf->top__DOT___0464_) 
                                            & (IData)(vlSelf->top__DOT___1072_)))));
    vlSelf->top__DOT____VdfgTmp_h8c218a8f__0 = ((6U 
                                                 & ((IData)(vlSelf->top__DOT___7174_) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->top__DOT___1072_));
    vlSelf->top__DOT____VdfgTmp_h632e497e__0 = ((8U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___3836_ 
                                                             >> 0x18U)) 
                                                    << 3U)) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h8c218a8f__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__751(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__751\n"); );
    // Body
    vlSelf->top__DOT___4314_ = ((0xfffffc00U & vlSelf->top__DOT___4314_) 
                                | (((IData)(vlSelf->top__DOT___0013_) 
                                    << 9U) | (((IData)(vlSelf->top__DOT___0622_) 
                                               << 8U) 
                                              | (((IData)(vlSelf->top__DOT___2121_) 
                                                  << 7U) 
                                                 | ((0x40U 
                                                     & (vlSelf->top__DOT___3872_[1U] 
                                                        >> 0x10U)) 
                                                    | (((IData)(vlSelf->top__DOT___0268_) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->top__DOT___0843_) 
                                                           << 4U) 
                                                          | ((8U 
                                                              & (vlSelf->top__DOT___3872_[1U] 
                                                                 >> 0x10U)) 
                                                             | (((IData)(vlSelf->top__DOT___1743_) 
                                                                 << 2U) 
                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelf->top__DOT___2218_)))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__753(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__753\n"); );
    // Body
    vlSelf->top__DOT___0009_ = ((IData)(vlSelf->top__DOT___0280_) 
                                & (IData)(vlSelf->top__DOT___1046_));
    vlSelf->top__DOT____VdfgTmp_h41f0c13c__0 = ((0x8000U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___7096_ 
                                                             >> 0x1aU)) 
                                                    << 0xfU)) 
                                                | (((IData)(vlSelf->top__DOT___0009_) 
                                                    << 0xeU) 
                                                   | (0x3fffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT___7096_ 
                                                                 >> 0x1aU)))));
    vlSelf->top__DOT____VdfgTmp_h2ea1b517__0 = (((IData)(vlSelf->top__DOT___0116_) 
                                                 << 0x10U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h41f0c13c__0));
    vlSelf->top__DOT____VdfgTmp_ha2174ae0__0 = (((IData)(vlSelf->top__DOT___0571_) 
                                                 << 0x13U) 
                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                    << 0x12U) 
                                                   | (((IData)(vlSelf->top__DOT___1463_) 
                                                       << 0x11U) 
                                                      | vlSelf->top__DOT____VdfgTmp_h2ea1b517__0)));
    vlSelf->top__DOT____VdfgTmp_h7c58ff98__0 = (((IData)(vlSelf->top__DOT___0577_) 
                                                 << 0x14U) 
                                                | vlSelf->top__DOT____VdfgTmp_ha2174ae0__0);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__754(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__754\n"); );
    // Body
    vlSelf->top__DOT___1611_ = ((IData)((vlSelf->top__DOT___6995_ 
                                         >> 0x24U)) 
                                & (IData)(vlSelf->top__DOT___0280_));
    vlSelf->top__DOT___2001_ = (1U & ((vlSelf->top__DOT___3857_ 
                                       + (((IData)(vlSelf->top__DOT___1611_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0527_))) 
                                      >> 1U));
    vlSelf->top__DOT___2436_ = (1U & ((IData)(vlSelf->top__DOT___1611_) 
                                      + vlSelf->top__DOT___3885_));
    vlSelf->top__DOT___0197_ = (1U & (~ (((IData)(vlSelf->top__DOT___2354_) 
                                          & (IData)(vlSelf->top__DOT___1343_)) 
                                         | (IData)(vlSelf->top__DOT___1611_))));
    vlSelf->top__DOT___1675_ = (1U & (~ ((IData)(vlSelf->top__DOT___0023_) 
                                         & (IData)(vlSelf->top__DOT___2001_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__755(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__755\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0102_)) 
                              << 0x31U) | (((QData)((IData)(vlSelf->top__DOT___1513_)) 
                                            << 0x30U) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0160_)) 
                                               << 0x2fU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0727_)) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0280_)) 
                                                     << 0x2dU) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x26U))))) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(
                                                                           (0x7fU 
                                                                            & ((IData)(vlSelf->top__DOT___3939_) 
                                                                               >> 7U)))) 
                                                           << 0x21U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x1eU))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((0xf8000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3939_) 
                                                                                << 0x1aU)) 
                                                                                | ((0x7e00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x13U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x12U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___4160_) 
                                                                                << 0x12U)) 
                                                                                | ((0x7e000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0xbU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0xaU)) 
                                                                                << 0xcU)) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 8U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 7U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 6U)) 
                                                                                << 8U)) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___7155_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1834_)))))))))))))))))))))));
    __Vtemp_1[1U] = (((IData)((QData)((IData)(vlSelf->top__DOT___1177_))) 
                      << 0x12U) | (IData)(((((QData)((IData)(vlSelf->top__DOT___0102_)) 
                                             << 0x31U) 
                                            | (((QData)((IData)(vlSelf->top__DOT___1513_)) 
                                                << 0x30U) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0160_)) 
                                                   << 0x2fU) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0727_)) 
                                                      << 0x2eU) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___0280_)) 
                                                         << 0x2dU) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x26U))))) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               (0x7fU 
                                                                                & ((IData)(vlSelf->top__DOT___3939_) 
                                                                                >> 7U)))) 
                                                               << 0x21U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x1eU))))) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                ((0xf8000000U 
                                                                                & ((IData)(vlSelf->top__DOT___3939_) 
                                                                                << 0x1aU)) 
                                                                                | ((0x7e00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x13U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x12U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->top__DOT___4160_) 
                                                                                << 0x12U)) 
                                                                                | ((0x7e000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0xbU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0xaU)) 
                                                                                << 0xcU)) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 8U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 7U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 6U)) 
                                                                                << 8U)) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___7155_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1834_)))))))))))))))))))))) 
                                           >> 0x20U)));
    vlSelf->top__DOT___4188_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4188_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4188_[2U] = (((IData)((QData)((IData)(vlSelf->top__DOT___1177_))) 
                                     >> 0xeU) | ((IData)(
                                                         ((QData)((IData)(vlSelf->top__DOT___1177_)) 
                                                          >> 0x20U)) 
                                                 << 0x12U));
    vlSelf->top__DOT___4188_[3U] = ((IData)(((QData)((IData)(vlSelf->top__DOT___1177_)) 
                                             >> 0x20U)) 
                                    >> 0xeU);
    vlSelf->top__DOT___3113_ = (1U & (~ (((IData)(vlSelf->top__DOT___2097_) 
                                          & (IData)(vlSelf->top__DOT___0541_)) 
                                         | ((IData)(vlSelf->top__DOT___0953_) 
                                            & (IData)(vlSelf->top__DOT___0410_)))));
    vlSelf->top__DOT___2206_ = (1U & ((((0xc00U & (
                                                   vlSelf->top__DOT___3899_[1U] 
                                                   << 3U)) 
                                        | ((0x200U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT___7096_ 
                                                        >> 0x24U)) 
                                               << 9U)) 
                                           | ((0x100U 
                                               & (vlSelf->top__DOT___3899_[1U] 
                                                  << 3U)) 
                                              | (((IData)(vlSelf->top__DOT___2531_) 
                                                  << 7U) 
                                                 | ((0x60U 
                                                     & (vlSelf->top__DOT___3899_[1U] 
                                                        << 3U)) 
                                                    | ((0x10U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___7096_ 
                                                                    >> 0x1fU)) 
                                                           << 4U)) 
                                                       | (((IData)(vlSelf->top__DOT___0208_) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->top__DOT___1322_) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->top__DOT___0880_) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->top__DOT___0201_)))))))))) 
                                       + ((0xf00U & 
                                           ((IData)(vlSelf->top__DOT___3939_) 
                                            << 7U)) 
                                          | ((0xfcU 
                                              & (vlSelf->top__DOT___4188_[0U] 
                                                 >> 0x13U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___7155_ 
                                                             >> 0x12U)) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->top__DOT___2111_))))) 
                                      >> 0xbU));
    vlSelf->top__DOT___3016_ = (1U & (((((IData)(vlSelf->top__DOT___1322_) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->top__DOT___0880_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0201_))) 
                                       + ((4U & (vlSelf->top__DOT___4188_[0U] 
                                                 >> 0x13U)) 
                                          | ((2U & 
                                              ((IData)(
                                                       (vlSelf->top__DOT___7155_ 
                                                        >> 0x12U)) 
                                               << 1U)) 
                                             | (IData)(vlSelf->top__DOT___2111_)))) 
                                      >> 2U));
    vlSelf->top__DOT___1064_ = (1U & ((((0x20U & (vlSelf->top__DOT___3899_[1U] 
                                                  << 3U)) 
                                        | ((0x10U & 
                                            ((IData)(
                                                     (vlSelf->top__DOT___7096_ 
                                                      >> 0x1fU)) 
                                             << 4U)) 
                                           | (((IData)(vlSelf->top__DOT___0208_) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT___1322_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___0880_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0201_)))))) 
                                       + ((0x3cU & 
                                           (vlSelf->top__DOT___4188_[0U] 
                                            >> 0x13U)) 
                                          | ((2U & 
                                              ((IData)(
                                                       (vlSelf->top__DOT___7155_ 
                                                        >> 0x12U)) 
                                               << 1U)) 
                                             | (IData)(vlSelf->top__DOT___2111_)))) 
                                      >> 5U));
    vlSelf->top__DOT___1599_ = (1U & ((((0x100U & (
                                                   vlSelf->top__DOT___3899_[1U] 
                                                   << 3U)) 
                                        | (((IData)(vlSelf->top__DOT___2531_) 
                                            << 7U) 
                                           | ((0x60U 
                                               & (vlSelf->top__DOT___3899_[1U] 
                                                  << 3U)) 
                                              | ((0x10U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___7096_ 
                                                              >> 0x1fU)) 
                                                     << 4U)) 
                                                 | (((IData)(vlSelf->top__DOT___0208_) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT___1322_) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->top__DOT___0880_) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->top__DOT___0201_)))))))) 
                                       + ((0x100U & 
                                           ((IData)(vlSelf->top__DOT___3939_) 
                                            << 7U)) 
                                          | ((0xfcU 
                                              & (vlSelf->top__DOT___4188_[0U] 
                                                 >> 0x13U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___7155_ 
                                                             >> 0x12U)) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->top__DOT___2111_))))) 
                                      >> 8U));
    vlSelf->top__DOT___3047_ = ((IData)(vlSelf->top__DOT___3113_) 
                                | (IData)(vlSelf->top__DOT___1578_));
    vlSelf->top__DOT___0298_ = ((IData)(vlSelf->top__DOT___1064_) 
                                & (~ (IData)(vlSelf->top__DOT___1041_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__757(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__757\n"); );
    // Body
    vlSelf->top__DOT___4335_ = ((0xffffffffff9ULL & vlSelf->top__DOT___4335_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___2041_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0541_)))) 
                                   << 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__758(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__758\n"); );
    // Body
    vlSelf->top__DOT___2793_ = (1U & (~ (((IData)(vlSelf->top__DOT___0541_) 
                                          & (IData)(vlSelf->top__DOT___1336_)) 
                                         | ((IData)(vlSelf->top__DOT___2121_) 
                                            & (IData)(vlSelf->top__DOT___1066_)))));
    vlSelf->top__DOT___4430_[2U] = ((0xf3ffffffU & 
                                     vlSelf->top__DOT___4430_[2U]) 
                                    | (0xfc000000U 
                                       & (((IData)(vlSelf->top__DOT___1788_) 
                                           << 0x1bU) 
                                          | ((IData)(vlSelf->top__DOT___2793_) 
                                             << 0x1aU))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__759(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__759\n"); );
    // Body
    vlSelf->top__DOT___2681_ = (1U & ((IData)(vlSelf->top__DOT___2162_) 
                                      ^ (vlSelf->top__DOT___4782_ 
                                         >> 0x18U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__760(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__760\n"); );
    // Body
    vlSelf->top__DOT___0207_ = (1U & (((((IData)(vlSelf->top__DOT___0170_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___3185_)) 
                                       + (IData)((vlSelf->top__DOT___7078_ 
                                                  >> 0x10U))) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__763(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__763\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_25;
    // Body
    __Vtemp_11[2U] = (0x800000U | ((0x8000000U & (vlSelf->top__DOT___7107_ 
                                                  << 0x18U)) 
                                   | ((0x7000000U & 
                                       (vlSelf->top__DOT___7107_ 
                                        << 0x18U)) 
                                      | ((0x400000U 
                                          & (vlSelf->top__DOT___7156_[0U] 
                                             << 0x13U)) 
                                         | ((0x200000U 
                                             & ((IData)(vlSelf->top__DOT___7011_) 
                                                << 0xeU)) 
                                            | ((0x100000U 
                                                & ((IData)(vlSelf->top__DOT___7011_) 
                                                   << 0xeU)) 
                                               | ((0x80000U 
                                                   & ((IData)(vlSelf->top__DOT___7011_) 
                                                      << 0xeU)) 
                                                  | ((0x40000U 
                                                      & ((IData)(vlSelf->top__DOT___7011_) 
                                                         << 0xeU)) 
                                                     | ((0x3c000U 
                                                         & ((IData)(vlSelf->top__DOT___7011_) 
                                                            << 0xeU)) 
                                                        | ((0x3fc0U 
                                                            & (vlSelf->top__DOT___7084_[2U] 
                                                               << 4U)) 
                                                           | (0x3fU 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___4071_ 
                                                                          >> 7U)) 
                                                                 >> 0x14U))))))))))));
    __Vtemp_25[3U] = (((IData)(vlSelf->top__DOT___1462_) 
                       << 0x13U) | ((0x60000U & (vlSelf->top__DOT___7107_ 
                                                 >> 8U)) 
                                    | ((0x10000U & 
                                        (vlSelf->top__DOT___7107_ 
                                         >> 8U)) | 
                                       ((0xfc00U & 
                                         (vlSelf->top__DOT___7107_ 
                                          >> 8U)) | 
                                        ((0x200U & 
                                          (vlSelf->top__DOT___7107_ 
                                           >> 8U)) 
                                         | ((0x180U 
                                             & (vlSelf->top__DOT___7107_ 
                                                >> 8U)) 
                                            | ((0x40U 
                                                & (vlSelf->top__DOT___7107_ 
                                                   >> 8U)) 
                                               | ((0x38U 
                                                   & (vlSelf->top__DOT___7107_ 
                                                      >> 8U)) 
                                                  | ((4U 
                                                      & (vlSelf->top__DOT___7107_ 
                                                         >> 8U)) 
                                                     | ((2U 
                                                         & (vlSelf->top__DOT___7107_ 
                                                            >> 8U)) 
                                                        | (1U 
                                                           & (vlSelf->top__DOT___7107_ 
                                                              >> 8U))))))))))));
    vlSelf->top__DOT___4117_[0U] = (IData)((((QData)((IData)(
                                                             (0x7ffffU 
                                                              & ((vlSelf->top__DOT___7084_[1U] 
                                                                  << 0xbU) 
                                                                 | (vlSelf->top__DOT___7084_[0U] 
                                                                    >> 0x15U))))) 
                                             << 0x19U) 
                                            | (QData)((IData)(
                                                              ((0x1000000U 
                                                                & (vlSelf->top__DOT___7084_[0U] 
                                                                   << 4U)) 
                                                               | ((0xfffff0U 
                                                                   & (vlSelf->top__DOT___7084_[0U] 
                                                                      << 4U)) 
                                                                  | (((IData)(vlSelf->top__DOT___2935_) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->top__DOT___1490_) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSelf->top__DOT___0545_) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->top__DOT___0067_))))))))));
    vlSelf->top__DOT___4117_[1U] = (((IData)((vlSelf->top__DOT___4071_ 
                                              >> 7U)) 
                                     << 0xcU) | (IData)(
                                                        ((((QData)((IData)(
                                                                           (0x7ffffU 
                                                                            & ((vlSelf->top__DOT___7084_[1U] 
                                                                                << 0xbU) 
                                                                               | (vlSelf->top__DOT___7084_[0U] 
                                                                                >> 0x15U))))) 
                                                           << 0x19U) 
                                                          | (QData)((IData)(
                                                                            ((0x1000000U 
                                                                              & (vlSelf->top__DOT___7084_[0U] 
                                                                                << 4U)) 
                                                                             | ((0xfffff0U 
                                                                                & (vlSelf->top__DOT___7084_[0U] 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2935_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1490_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0545_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0067_))))))))) 
                                                         >> 0x20U)));
    vlSelf->top__DOT___4117_[2U] = ((0xc0000000U & 
                                     (vlSelf->top__DOT___7107_ 
                                      << 0x18U)) | 
                                    ((0x20000000U & 
                                      (vlSelf->top__DOT___7107_ 
                                       << 0x18U)) | 
                                     ((0x10000000U 
                                       & (vlSelf->top__DOT___7107_ 
                                          << 0x18U)) 
                                      | __Vtemp_11[2U])));
    vlSelf->top__DOT___4117_[3U] = ((0xff000000U & 
                                     vlSelf->top__DOT___4117_[3U]) 
                                    | ((0x800000U & 
                                        ((~ (IData)(vlSelf->top__DOT___0948_)) 
                                         << 0x17U)) 
                                       | ((0x400000U 
                                           & ((IData)(vlSelf->top__DOT___7169_) 
                                              << 0x14U)) 
                                          | ((0x300000U 
                                              & ((IData)(vlSelf->top__DOT___7169_) 
                                                 << 0x14U)) 
                                             | __Vtemp_25[3U]))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__764(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__764\n"); );
    // Body
    vlSelf->top__DOT___4469_[2U] = ((0xfffU & vlSelf->top__DOT___4469_[2U]) 
                                    | (0xfffff000U 
                                       & (0x5d60000U 
                                          | (((IData)(vlSelf->top__DOT___0313_) 
                                              << 0x1fU) 
                                             | ((0x78000000U 
                                                 & ((IData)(vlSelf->top__DOT___4791_) 
                                                    << 0x14U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSelf->top__DOT___4791_) 
                                                       << 0x13U)) 
                                                   | ((0x200000U 
                                                       & ((IData)(vlSelf->top__DOT___4791_) 
                                                          << 0x10U)) 
                                                      | ((0x80000U 
                                                          & ((IData)(vlSelf->top__DOT___4791_) 
                                                             << 0xfU)) 
                                                         | ((0x1e000U 
                                                             & ((IData)(vlSelf->top__DOT___4791_) 
                                                                << 0xdU)) 
                                                            | ((IData)(vlSelf->top__DOT___1910_) 
                                                               << 0xcU))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__765(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__765\n"); );
    // Body
    vlSelf->__VdfgTmp_h3041d752__0 = ((((IData)(vlSelf->top__DOT___1379_) 
                                        << 0x11U) | 
                                       ((0x18000U & 
                                         (vlSelf->top__DOT___3891_ 
                                          << 0xdU)) 
                                        | (0x4000U 
                                           & (vlSelf->top__DOT___3844_ 
                                              << 3U)))) 
                                      | ((0x3000U & 
                                          ((IData)(vlSelf->top__DOT___7172_) 
                                           << 4U)) 
                                         | ((0xe00U 
                                             & (vlSelf->top__DOT___3844_ 
                                                << 3U)) 
                                            | ((0x100U 
                                                & ((IData)(vlSelf->top__DOT___7172_) 
                                                   << 4U)) 
                                               | ((0x80U 
                                                   & (vlSelf->top__DOT___3844_ 
                                                      << 3U)) 
                                                  | ((0x40U 
                                                      & ((IData)(vlSelf->top__DOT___7172_) 
                                                         << 4U)) 
                                                     | ((0x20U 
                                                         & (vlSelf->top__DOT___3844_ 
                                                            << 3U)) 
                                                        | ((0x10U 
                                                            & ((IData)(vlSelf->top__DOT___7172_) 
                                                               << 4U)) 
                                                           | (((IData)(vlSelf->top__DOT___1066_) 
                                                               << 3U) 
                                                              | (IData)(vlSelf->top__DOT___7067_))))))))));
    vlSelf->top__DOT___0822_ = (1U & (((((0x1000000U 
                                          & (vlSelf->top__DOT___3816_[2U] 
                                             << 0x14U)) 
                                         | (((IData)(vlSelf->top__DOT___0995_) 
                                             << 0x17U) 
                                            | (((IData)(vlSelf->top__DOT___3214_) 
                                                << 0x16U) 
                                               | ((0x200000U 
                                                   & ((IData)(vlSelf->top__DOT___7195_) 
                                                      << 0xdU)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->top__DOT___3883_[0U] 
                                                         << 7U)) 
                                                     | ((0x80000U 
                                                         & ((IData)(vlSelf->top__DOT___7195_) 
                                                            << 0xdU)) 
                                                        | (((IData)(vlSelf->top__DOT___0122_) 
                                                            << 0x12U) 
                                                           | ((0x38000U 
                                                               & (vlSelf->top__DOT___3883_[0U] 
                                                                  << 7U)) 
                                                              | (0x4000U 
                                                                 & ((IData)(vlSelf->top__DOT___7195_) 
                                                                    << 0xdU)))))))))) 
                                        | ((0x2000U 
                                            & ((IData)(vlSelf->top__DOT___7195_) 
                                               << 0xdU)) 
                                           | (((IData)(vlSelf->top__DOT___1357_) 
                                               << 0xcU) 
                                              | (((IData)(vlSelf->top__DOT___2887_) 
                                                  << 0xbU) 
                                                 | ((0x400U 
                                                     & ((IData)(vlSelf->top__DOT___7102_) 
                                                        << 5U)) 
                                                    | ((0x200U 
                                                        & ((IData)(vlSelf->top__DOT___7102_) 
                                                           << 5U)) 
                                                       | ((0x100U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___4313_ 
                                                                       >> 8U)) 
                                                              << 8U)) 
                                                          | (((IData)(vlSelf->top__DOT___1453_) 
                                                              << 7U) 
                                                             | ((0x40U 
                                                                 & ((IData)(vlSelf->top__DOT___7102_) 
                                                                    << 5U)) 
                                                                | ((0x20U 
                                                                    & ((IData)(vlSelf->top__DOT___7102_) 
                                                                       << 5U)) 
                                                                   | (((IData)(vlSelf->top__DOT___1887_) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelf->top__DOT___0352_) 
                                                                          << 2U) 
                                                                         | ((2U 
                                                                             & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                                << 1U)) 
                                                                            | (IData)(vlSelf->top__DOT___0440_)))))))))))))) 
                                       + (((0x1fc0000U 
                                            & (vlSelf->top__DOT___3891_ 
                                               << 0xdU)) 
                                           | (((IData)(vlSelf->top__DOT___1379_) 
                                               << 0x11U) 
                                              | ((0x18000U 
                                                  & (vlSelf->top__DOT___3891_ 
                                                     << 0xdU)) 
                                                 | (0x4000U 
                                                    & (vlSelf->top__DOT___3844_ 
                                                       << 3U))))) 
                                          | (((IData)(vlSelf->top__DOT___3798_) 
                                              << 0xdU) 
                                             | ((0x1000U 
                                                 & ((IData)(vlSelf->top__DOT___7172_) 
                                                    << 4U)) 
                                                | ((0xe00U 
                                                    & (vlSelf->top__DOT___3844_ 
                                                       << 3U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSelf->top__DOT___7172_) 
                                                          << 4U)) 
                                                      | ((0x80U 
                                                          & (vlSelf->top__DOT___3844_ 
                                                             << 3U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSelf->top__DOT___7172_) 
                                                                << 4U)) 
                                                            | ((0x20U 
                                                                & (vlSelf->top__DOT___3844_ 
                                                                   << 3U)) 
                                                               | ((0x10U 
                                                                   & ((IData)(vlSelf->top__DOT___7172_) 
                                                                      << 4U)) 
                                                                  | (((IData)(vlSelf->top__DOT___1066_) 
                                                                      << 3U) 
                                                                     | (IData)(vlSelf->top__DOT___7067_)))))))))))) 
                                      >> 0x18U));
    vlSelf->top__DOT____VdfgTmp_hbb638564__0 = (((IData)(vlSelf->top__DOT___3311_) 
                                                 << 0x1eU) 
                                                | ((0x38000000U 
                                                    & (vlSelf->top__DOT___3891_ 
                                                       << 0xdU)) 
                                                   | (((IData)(vlSelf->top__DOT___1695_) 
                                                       << 0x1aU) 
                                                      | ((0x3fc0000U 
                                                          & (vlSelf->top__DOT___3891_ 
                                                             << 0xdU)) 
                                                         | vlSelf->__VdfgTmp_h3041d752__0))));
    vlSelf->top__DOT___0821_ = ((IData)(vlSelf->top__DOT___0451_) 
                                & (~ (IData)(vlSelf->top__DOT___0822_)));
    vlSelf->top__DOT___0046_ = ((IData)(vlSelf->top__DOT___0821_) 
                                & (~ (IData)(vlSelf->top__DOT___0860_)));
    vlSelf->top__DOT___0413_ = ((IData)(vlSelf->top__DOT___0046_) 
                                & (~ (IData)(vlSelf->top__DOT___0126_)));
    vlSelf->top__DOT___0411_ = ((~ ((IData)(vlSelf->top__DOT___0479_) 
                                    + (IData)(vlSelf->top__DOT___2288_))) 
                                & (IData)(vlSelf->top__DOT___0413_));
    vlSelf->top__DOT___3222_ = ((IData)(vlSelf->top__DOT___0413_) 
                                ^ (IData)(vlSelf->top__DOT___1836_));
    vlSelf->top__DOT____VdfgTmp_ha0fff7f8__0 = (((IData)(vlSelf->top__DOT___0413_) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->top__DOT___1783_) 
                                                    << 2U) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_h95f162d4__0)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__767(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__767\n"); );
    // Body
    vlSelf->top__DOT___2602_ = (1U & (~ (((IData)(vlSelf->top__DOT___0999_) 
                                          & ((((2U 
                                                & (vlSelf->top__DOT___3891_ 
                                                   >> 0xaU)) 
                                               | (1U 
                                                  & (~ (IData)(vlSelf->top__DOT___2369_)))) 
                                              + (((IData)(vlSelf->top__DOT___1919_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___1428_))) 
                                             >> 1U)) 
                                         | (IData)(vlSelf->top__DOT___0820_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__768(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__768\n"); );
    // Body
    vlSelf->top__DOT___3014_ = (1U & ((((0x7000000U 
                                         & (vlSelf->top__DOT___3891_ 
                                            << 0xaU)) 
                                        | (((IData)(vlSelf->top__DOT___1695_) 
                                            << 0x17U) 
                                           | ((0x7f8000U 
                                               & (vlSelf->top__DOT___3891_ 
                                                  << 0xaU)) 
                                              | (((IData)(vlSelf->top__DOT___1379_) 
                                                  << 0xeU) 
                                                 | ((0x2000U 
                                                     & (vlSelf->top__DOT___3891_ 
                                                        << 0xaU)) 
                                                    | (((IData)(vlSelf->top__DOT___0464_) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->top__DOT___1357_) 
                                                           << 0xbU) 
                                                          | ((0x400U 
                                                              & (vlSelf->top__DOT___3844_ 
                                                                 >> 1U)) 
                                                             | (((IData)(vlSelf->top__DOT___3798_) 
                                                                 << 9U) 
                                                                | ((0x100U 
                                                                    & (IData)(vlSelf->top__DOT___7172_)) 
                                                                   | ((0xe0U 
                                                                       & (vlSelf->top__DOT___3844_ 
                                                                          >> 1U)) 
                                                                      | ((0x10U 
                                                                          & (IData)(vlSelf->top__DOT___7172_)) 
                                                                         | ((8U 
                                                                             & (vlSelf->top__DOT___3844_ 
                                                                                >> 1U)) 
                                                                            | ((4U 
                                                                                & (IData)(vlSelf->top__DOT___7172_)) 
                                                                               | ((2U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7172_))))))))))))))))) 
                                       + ((0x7ff0000U 
                                           & ((IData)(
                                                      (vlSelf->top__DOT___3991_ 
                                                       >> 0x1bU)) 
                                              << 0x10U)) 
                                          | (((IData)(vlSelf->top__DOT___2111_) 
                                              << 0xfU) 
                                             | (((IData)(vlSelf->top__DOT___0102_) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->top__DOT___1672_) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->top__DOT___0212_) 
                                                       << 0xcU) 
                                                      | ((0x800U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___4049_ 
                                                                      >> 0x29U)) 
                                                             << 0xbU)) 
                                                         | ((0x400U 
                                                             & (IData)(vlSelf->top__DOT___7065_)) 
                                                            | ((0x300U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___4049_ 
                                                                            >> 0x26U)) 
                                                                   << 8U)) 
                                                               | ((0x80U 
                                                                   & (IData)(vlSelf->top__DOT___7065_)) 
                                                                  | ((0x40U 
                                                                      & (IData)(vlSelf->top__DOT___7065_)) 
                                                                     | ((0x38U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x21U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & (IData)(vlSelf->top__DOT___7065_)) 
                                                                           | ((2U 
                                                                               & (IData)(vlSelf->top__DOT___7065_)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x1eU))))))))))))))))) 
                                      >> 0x1aU));
    vlSelf->top__DOT___3652_ = (1U & ((((0x7f8000U 
                                         & (vlSelf->top__DOT___3891_ 
                                            << 0xaU)) 
                                        | (((IData)(vlSelf->top__DOT___1379_) 
                                            << 0xeU) 
                                           | ((0x2000U 
                                               & (vlSelf->top__DOT___3891_ 
                                                  << 0xaU)) 
                                              | (((IData)(vlSelf->top__DOT___0464_) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSelf->top__DOT___1357_) 
                                                     << 0xbU) 
                                                    | ((0x400U 
                                                        & (vlSelf->top__DOT___3844_ 
                                                           >> 1U)) 
                                                       | (((IData)(vlSelf->top__DOT___3798_) 
                                                           << 9U) 
                                                          | ((0x100U 
                                                              & (IData)(vlSelf->top__DOT___7172_)) 
                                                             | ((0xe0U 
                                                                 & (vlSelf->top__DOT___3844_ 
                                                                    >> 1U)) 
                                                                | ((0x10U 
                                                                    & (IData)(vlSelf->top__DOT___7172_)) 
                                                                   | ((8U 
                                                                       & (vlSelf->top__DOT___3844_ 
                                                                          >> 1U)) 
                                                                      | ((4U 
                                                                          & (IData)(vlSelf->top__DOT___7172_)) 
                                                                         | ((2U 
                                                                             & (vlSelf->top__DOT___3844_ 
                                                                                >> 1U)) 
                                                                            | (1U 
                                                                               & (IData)(vlSelf->top__DOT___7172_))))))))))))))) 
                                       + ((0x7f0000U 
                                           & ((IData)(
                                                      (vlSelf->top__DOT___3991_ 
                                                       >> 0x1bU)) 
                                              << 0x10U)) 
                                          | (((IData)(vlSelf->top__DOT___2111_) 
                                              << 0xfU) 
                                             | (((IData)(vlSelf->top__DOT___0102_) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->top__DOT___1672_) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->top__DOT___0212_) 
                                                       << 0xcU) 
                                                      | ((0x800U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___4049_ 
                                                                      >> 0x29U)) 
                                                             << 0xbU)) 
                                                         | ((0x400U 
                                                             & (IData)(vlSelf->top__DOT___7065_)) 
                                                            | ((0x300U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___4049_ 
                                                                            >> 0x26U)) 
                                                                   << 8U)) 
                                                               | ((0x80U 
                                                                   & (IData)(vlSelf->top__DOT___7065_)) 
                                                                  | ((0x40U 
                                                                      & (IData)(vlSelf->top__DOT___7065_)) 
                                                                     | ((0x38U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x21U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & (IData)(vlSelf->top__DOT___7065_)) 
                                                                           | ((2U 
                                                                               & (IData)(vlSelf->top__DOT___7065_)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x1eU))))))))))))))))) 
                                      >> 0x16U));
    vlSelf->top__DOT___4132_ = (((QData)((IData)((0x3fU 
                                                  & (IData)(
                                                            (0x3fULL 
                                                             & (((((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0311_) 
                                                                                << 0x1fU) 
                                                                                | ((0x78000000U 
                                                                                & (vlSelf->top__DOT___3891_ 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3311_) 
                                                                                << 0x1aU) 
                                                                                | ((0x3800000U 
                                                                                & (vlSelf->top__DOT___3891_ 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1695_) 
                                                                                << 0x16U) 
                                                                                | ((0x3fc000U 
                                                                                & (vlSelf->top__DOT___3891_ 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1379_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___3891_ 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0464_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___1357_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3798_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7172_) 
                                                                                >> 1U)) 
                                                                                | ((0x70U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7172_) 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7172_) 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 2U))))))))))))))))))))) 
                                                                   << 1U) 
                                                                  | (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___7172_))))) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___3991_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___2111_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0212_) 
                                                                                << 0xbU) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x29U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___7065_) 
                                                                                >> 1U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x26U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7065_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7065_) 
                                                                                >> 1U)) 
                                                                                | ((0x1cU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x21U)) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7065_) 
                                                                                >> 1U))))))))))))))) 
                                                                   << 1U) 
                                                                  | (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x1eU))))))) 
                                                                >> 0x1bU)))))) 
                                 << 0x1bU) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___3014_) 
                                                               << 0x1aU) 
                                                              | ((0x3800000U 
                                                                  & (((0x3000000U 
                                                                       & (vlSelf->top__DOT___3891_ 
                                                                          << 0xaU)) 
                                                                      | (((IData)(vlSelf->top__DOT___1695_) 
                                                                          << 0x17U) 
                                                                         | ((0x7f8000U 
                                                                             & (vlSelf->top__DOT___3891_ 
                                                                                << 0xaU)) 
                                                                            | (((IData)(vlSelf->top__DOT___1379_) 
                                                                                << 0xeU) 
                                                                               | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3891_ 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0464_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1357_) 
                                                                                << 0xbU) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3798_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & (IData)(vlSelf->top__DOT___7172_)) 
                                                                                | ((0xe0U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->top__DOT___7172_)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & (IData)(vlSelf->top__DOT___7172_)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7172_))))))))))))))))) 
                                                                     + 
                                                                     ((0x3ff0000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3991_ 
                                                                                >> 0x1bU)) 
                                                                          << 0x10U)) 
                                                                      | (((IData)(vlSelf->top__DOT___2111_) 
                                                                          << 0xfU) 
                                                                         | (((IData)(vlSelf->top__DOT___0102_) 
                                                                             << 0xeU) 
                                                                            | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 0xdU) 
                                                                               | (((IData)(vlSelf->top__DOT___0212_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x29U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (IData)(vlSelf->top__DOT___7065_)) 
                                                                                | ((0x300U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x26U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (IData)(vlSelf->top__DOT___7065_)) 
                                                                                | ((0x40U 
                                                                                & (IData)(vlSelf->top__DOT___7065_)) 
                                                                                | ((0x38U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x21U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (IData)(vlSelf->top__DOT___7065_)) 
                                                                                | ((2U 
                                                                                & (IData)(vlSelf->top__DOT___7065_)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x1eU)))))))))))))))))) 
                                                                 | (((IData)(vlSelf->top__DOT___3652_) 
                                                                     << 0x16U) 
                                                                    | ((0x3ffc00U 
                                                                        & (((0x3f8000U 
                                                                             & (vlSelf->top__DOT___3891_ 
                                                                                << 0xaU)) 
                                                                            | (((IData)(vlSelf->top__DOT___1379_) 
                                                                                << 0xeU) 
                                                                               | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3891_ 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0464_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___1357_) 
                                                                                << 0xbU) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3798_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & (IData)(vlSelf->top__DOT___7172_)) 
                                                                                | ((0xe0U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->top__DOT___7172_)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & (IData)(vlSelf->top__DOT___7172_)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7172_))))))))))))))) 
                                                                           + 
                                                                           ((0x3f0000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3991_ 
                                                                                >> 0x1bU)) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSelf->top__DOT___2111_) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0212_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x29U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (IData)(vlSelf->top__DOT___7065_)) 
                                                                                | ((0x300U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x26U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (IData)(vlSelf->top__DOT___7065_)) 
                                                                                | ((0x40U 
                                                                                & (IData)(vlSelf->top__DOT___7065_)) 
                                                                                | ((0x38U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x21U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (IData)(vlSelf->top__DOT___7065_)) 
                                                                                | ((2U 
                                                                                & (IData)(vlSelf->top__DOT___7065_)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x1eU)))))))))))))))))) 
                                                                       | (((IData)(vlSelf->top__DOT___3038_) 
                                                                           << 9U) 
                                                                          | ((0x100U 
                                                                              & (((0x100U 
                                                                                & (IData)(vlSelf->top__DOT___7172_)) 
                                                                                | ((0xe0U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->top__DOT___7172_)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & (IData)(vlSelf->top__DOT___7172_)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7172_)))))))) 
                                                                                + 
                                                                                ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x26U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (IData)(vlSelf->top__DOT___7065_)) 
                                                                                | ((0x40U 
                                                                                & (IData)(vlSelf->top__DOT___7065_)) 
                                                                                | ((0x38U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x21U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (IData)(vlSelf->top__DOT___7065_)) 
                                                                                | ((2U 
                                                                                & (IData)(vlSelf->top__DOT___7065_)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x1eU))))))))))) 
                                                                             | (((IData)(vlSelf->top__DOT___3215_) 
                                                                                << 7U) 
                                                                                | ((0x78U 
                                                                                & (((0x60U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->top__DOT___7172_)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & (IData)(vlSelf->top__DOT___7172_)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7172_))))))) 
                                                                                + 
                                                                                ((0x40U 
                                                                                & (IData)(vlSelf->top__DOT___7065_)) 
                                                                                | ((0x38U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x21U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (IData)(vlSelf->top__DOT___7065_)) 
                                                                                | ((2U 
                                                                                & (IData)(vlSelf->top__DOT___7065_)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x1eU))))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___2731_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (((2U 
                                                                                & (vlSelf->top__DOT___3844_ 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7172_))) 
                                                                                + 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->top__DOT___7065_)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___4049_ 
                                                                                >> 0x1eU))))))))))))))))));
    vlSelf->top__DOT___0903_ = (1U & ((IData)(vlSelf->top__DOT___3652_) 
                                      ^ (vlSelf->top__DOT___4749_[2U] 
                                         >> 0x16U)));
    vlSelf->top__DOT___3770_ = (1U & (IData)((0x3fffULL 
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
                                                 >> 0x1bU))));
    vlSelf->top__DOT___1690_ = (1U & (IData)((0x3ffffffULL 
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
                                                 >> 0xfU))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__769(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__769\n"); );
    // Body
    vlSelf->top__DOT___0423_ = (1U & (~ (((IData)(vlSelf->top__DOT___0942_) 
                                          & (IData)(vlSelf->top__DOT___0675_)) 
                                         | ((IData)(vlSelf->top__DOT___1526_) 
                                            & (~ (((IData)(vlSelf->top__DOT___2904_) 
                                                   & (IData)(vlSelf->top__DOT___3217_)) 
                                                  | ((IData)(vlSelf->top__DOT___0635_) 
                                                     & (IData)(vlSelf->top__DOT___0140_))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__770(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__770\n"); );
    // Body
    vlSelf->top__DOT___1846_ = ((IData)(vlSelf->top__DOT___1847_) 
                                & (IData)(vlSelf->top__DOT___1006_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__771(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__771\n"); );
    // Body
    vlSelf->top__DOT___1911_ = (1U & (~ (((IData)(vlSelf->top__DOT___2546_) 
                                          & (IData)(vlSelf->top__DOT___0633_)) 
                                         | (IData)(vlSelf->top__DOT___0619_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__772(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__772\n"); );
    // Body
    vlSelf->top__DOT___4073_ = ((0x40U & ((IData)(vlSelf->top__DOT___7055_) 
                                          << 1U)) | 
                                ((0x38U & ((IData)(vlSelf->top__DOT___7055_) 
                                           << 1U)) 
                                 | ((4U & ((IData)(vlSelf->top__DOT___7055_) 
                                           << 1U)) 
                                    | (((IData)(vlSelf->top__DOT___2624_) 
                                        << 1U) | (IData)(vlSelf->top__DOT___1116_)))));
    vlSelf->top__DOT___2355_ = (1U & ((((4U & ((IData)(vlSelf->top__DOT___4073_) 
                                               >> 1U)) 
                                        | (3U & (IData)(vlSelf->top__DOT___7055_))) 
                                       + (IData)(vlSelf->top__DOT____VdfgTmp_h762b5fd2__0)) 
                                      >> 2U));
    vlSelf->top__DOT___2905_ = (1U & ((((0x40U & ((IData)(vlSelf->top__DOT___7055_) 
                                                  << 1U)) 
                                        | ((0x38U & (IData)(vlSelf->top__DOT___4073_)) 
                                           | ((4U & 
                                               ((IData)(vlSelf->top__DOT___7055_) 
                                                << 1U)) 
                                              | ((2U 
                                                  & ((IData)(vlSelf->top__DOT___7055_) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->top__DOT___0597_))))) 
                                       + ((0x60U & 
                                           (vlSelf->top__DOT___3859_ 
                                            >> 2U)) 
                                          | (((IData)(vlSelf->top__DOT___0760_) 
                                              << 4U) 
                                             | (((IData)(vlSelf->top__DOT___1394_) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->top__DOT___3124_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___1605_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___1075_))))))) 
                                      >> 6U));
    vlSelf->top__DOT___0638_ = (1U & (~ (((IData)(vlSelf->top__DOT___1366_) 
                                          & (IData)(vlSelf->top__DOT___0699_)) 
                                         | ((IData)(vlSelf->top__DOT___1692_) 
                                            & (IData)(vlSelf->top__DOT___2905_)))));
    vlSelf->top__DOT___4318_[2U] = ((0xfffff7ffU & 
                                     vlSelf->top__DOT___4318_[2U]) 
                                    | ((IData)(vlSelf->top__DOT___0638_) 
                                       << 0xbU));
    vlSelf->top__DOT___0637_ = ((IData)(vlSelf->top__DOT___0639_) 
                                & (~ (IData)(vlSelf->top__DOT___0638_)));
    vlSelf->top__DOT___3581_ = (((((IData)((((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                             << 0x3cU) 
                                            | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                << 0x3bU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                   << 0x3aU) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                      << 0x39U) 
                                                     | ((0x1ffffffff000000ULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->top__DOT___4248_[2U])) 
                                                             << 0x24U) 
                                                            | (0xffffffffff000000ULL 
                                                               & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                  << 4U)))) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->top__DOT___3231_) 
                                                                            << 0x17U) 
                                                                           | ((0x7ff800U 
                                                                               & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                              | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)))))))))))))) 
                                   << 0x1cU) | (((IData)(vlSelf->top__DOT___3576_) 
                                                 << 0x1bU) 
                                                | ((0x4000000U 
                                                    & (vlSelf->top__DOT___3981_ 
                                                       << 0x16U)) 
                                                   | ((0x3fe0000U 
                                                       & vlSelf->top__DOT___4248_[0U]) 
                                                      | (((IData)(vlSelf->top__DOT___1870_) 
                                                          << 0x10U) 
                                                         | ((0xfffcU 
                                                             & vlSelf->top__DOT___4248_[0U]) 
                                                            | (((IData)(vlSelf->top__DOT___0603_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___0830_)))))))) 
                                 + ((0xffffe000U & 
                                     (vlSelf->top__DOT___3857_ 
                                      << 4U)) | (((IData)(vlSelf->top__DOT___3473_) 
                                                  << 0xcU) 
                                                 | ((0xc00U 
                                                     & (vlSelf->top__DOT___3857_ 
                                                        << 4U)) 
                                                    | (((IData)(vlSelf->top__DOT___3515_) 
                                                        << 9U) 
                                                       | ((0x1f0U 
                                                           & (vlSelf->top__DOT___3857_ 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___7096_ 
                                                                          >> 5U)) 
                                                                 << 3U)) 
                                                             | (((IData)(vlSelf->top__DOT___0479_) 
                                                                 << 2U) 
                                                                | (((IData)(vlSelf->top__DOT___0638_) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelf->top__DOT___1192_)))))))))) 
                                >> 0x1fU);
    vlSelf->top__DOT___0077_ = (1U & (~ (((IData)(vlSelf->top__DOT___0645_) 
                                          & (IData)(vlSelf->top__DOT___0638_)) 
                                         | (vlSelf->in_data[8U] 
                                            >> 0xbU))));
    vlSelf->top__DOT___3174_ = ((IData)(vlSelf->top__DOT___2494_) 
                                ^ (IData)(vlSelf->top__DOT___0638_));
    vlSelf->top__DOT___2391_ = ((IData)(vlSelf->top__DOT___0361_) 
                                ^ (IData)(vlSelf->top__DOT___0637_));
    vlSelf->top__DOT___0912_ = (1U & (~ ((IData)(vlSelf->top__DOT___0196_) 
                                         & (IData)(vlSelf->top__DOT___0637_))));
    vlSelf->top__DOT___0075_ = ((~ (vlSelf->top__DOT____VdfgTmp_h5214cb79__0[2U] 
                                    >> 9U)) & (IData)(vlSelf->top__DOT___0077_));
    vlSelf->top__DOT___4136_ = ((0x7ffffffffffeULL 
                                 & vlSelf->top__DOT___4136_) 
                                | (IData)((IData)(vlSelf->top__DOT___0077_)));
    vlSelf->top__DOT___1452_ = (1U & (~ (((IData)(vlSelf->top__DOT___0077_) 
                                          & (IData)(vlSelf->top__DOT___0290_)) 
                                         | ((IData)(vlSelf->top__DOT___1836_) 
                                            & (IData)(vlSelf->top__DOT___1748_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__773(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__773\n"); );
    // Body
    vlSelf->top__DOT___4214_ = ((0x1003U & (IData)(vlSelf->top__DOT___4214_)) 
                                | (((IData)(vlSelf->top__DOT___0060_) 
                                    << 0xbU) | ((0x600U 
                                                 & ((IData)(vlSelf->top__DOT___7103_) 
                                                    << 3U)) 
                                                | ((0x100U 
                                                    & ((IData)(vlSelf->top__DOT___7103_) 
                                                       << 3U)) 
                                                   | ((0x80U 
                                                       & ((IData)(vlSelf->top__DOT___7103_) 
                                                          << 3U)) 
                                                      | ((0x40U 
                                                          & ((IData)(vlSelf->top__DOT___7103_) 
                                                             << 3U)) 
                                                         | ((0x30U 
                                                             & ((IData)(vlSelf->top__DOT___7103_) 
                                                                << 3U)) 
                                                            | ((8U 
                                                                & ((IData)(vlSelf->top__DOT___7103_) 
                                                                   << 3U)) 
                                                               | ((IData)(vlSelf->top__DOT___1032_) 
                                                                  << 2U)))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__775(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__775\n"); );
    // Body
    vlSelf->top__DOT___0896_ = (1U & (~ (((IData)(vlSelf->top__DOT___1810_) 
                                          & (IData)(vlSelf->top__DOT___1366_)) 
                                         | ((IData)(vlSelf->top__DOT___0451_) 
                                            & (IData)(vlSelf->top__DOT___0948_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__777(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__777\n"); );
    // Body
    vlSelf->top__DOT___3364_ = ((IData)(vlSelf->top__DOT___1124_) 
                                ^ (IData)(vlSelf->top__DOT___1072_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__778(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__778\n"); );
    // Body
    vlSelf->top__DOT___4446_ = ((0x2000U & (vlSelf->top__DOT___4314_ 
                                            >> 0xaU)) 
                                | ((0x1000U & (vlSelf->top__DOT___4764_ 
                                               << 2U)) 
                                   | ((0x3e0U & (vlSelf->top__DOT___4314_ 
                                                 >> 0xaU)) 
                                      | (7U & (vlSelf->top__DOT___4764_ 
                                               >> 2U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__779(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__779\n"); );
    // Body
    vlSelf->top__DOT___3456_ = (1U & (((((IData)(vlSelf->top__DOT___0809_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___1611_)) 
                                       + (((IData)(vlSelf->top__DOT___0621_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___1783_))) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__780(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__780\n"); );
    // Body
    vlSelf->top__DOT___0977_ = (1U & ((IData)(vlSelf->top__DOT___1611_) 
                                      | ((IData)(vlSelf->top__DOT___7100_) 
                                         >> 7U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__781(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__781\n"); );
    // Body
    vlSelf->top__DOT___4346_[2U] = ((0x1fffffU & vlSelf->top__DOT___4346_[2U]) 
                                    | (0x1e00000U & 
                                       ((0x1800000U 
                                         & ((IData)(vlSelf->top__DOT___7181_) 
                                            << 0x16U)) 
                                        | (((IData)(vlSelf->top__DOT___3030_) 
                                            << 0x16U) 
                                           | ((IData)(vlSelf->top__DOT___0197_) 
                                              << 0x15U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__782(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__782\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    // Body
    __Vtemp_2[0U] = (IData)((0x200000000ULL | (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->top__DOT___4759_) 
                                                                    >> 4U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (0x24000000U 
                                                                  | ((0xc0000000U 
                                                                      & vlSelf->top__DOT___4189_[0U]) 
                                                                     | ((0x8000000U 
                                                                         & vlSelf->top__DOT___4189_[0U]) 
                                                                        | ((0x1000000U 
                                                                            & vlSelf->top__DOT___4189_[0U]) 
                                                                           | (((IData)(vlSelf->top__DOT___0509_) 
                                                                               << 0x17U) 
                                                                              | (((IData)(vlSelf->top__DOT___0866_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1082_) 
                                                                                << 0x14U) 
                                                                                | ((0xf0000U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___3190_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2952_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___2437_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___3506_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3632_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2763_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1899_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & vlSelf->top__DOT___3816_[0U]))))))))))))))))))))))));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)(((0x7c000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3916_ 
                                                              >> 0x2aU)) 
                                                     << 0xeU)) 
                                                 | (((IData)(vlSelf->top__DOT___0719_) 
                                                     << 0xdU) 
                                                    | ((0x1ffeU 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___3916_ 
                                                                    >> 0x1dU)) 
                                                           << 1U)) 
                                                       | (IData)(vlSelf->top__DOT___3374_)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(
                                                                      (vlSelf->top__DOT___3916_ 
                                                                       >> 0x1bU)) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___3532_) 
                                                                 << 0x1eU) 
                                                                | ((0x30000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                       << 0x1cU)) 
                                                                   | (((IData)(vlSelf->top__DOT___3181_) 
                                                                       << 0x1bU) 
                                                                      | ((0x4000000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                             << 0x1aU)) 
                                                                         | (((IData)(vlSelf->top__DOT___3688_) 
                                                                             << 0x19U) 
                                                                            | ((0x1ff8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xfU)) 
                                                                               | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 0xdU) 
                                                                                | ((0x1ff0U 
                                                                                & ((IData)(vlSelf->top__DOT___3916_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0224_) 
                                                                                << 3U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4189_[1U] 
                                                                                >> 2U))))))))))))))))) 
                      << 2U) | (IData)(((0x200000000ULL 
                                         | (((QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top__DOT___4759_) 
                                                                 >> 4U)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (0x24000000U 
                                                               | ((0xc0000000U 
                                                                   & vlSelf->top__DOT___4189_[0U]) 
                                                                  | ((0x8000000U 
                                                                      & vlSelf->top__DOT___4189_[0U]) 
                                                                     | ((0x1000000U 
                                                                         & vlSelf->top__DOT___4189_[0U]) 
                                                                        | (((IData)(vlSelf->top__DOT___0509_) 
                                                                            << 0x17U) 
                                                                           | (((IData)(vlSelf->top__DOT___0866_) 
                                                                               << 0x16U) 
                                                                              | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1082_) 
                                                                                << 0x14U) 
                                                                                | ((0xf0000U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___3190_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2952_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___2437_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___3506_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3632_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2763_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1899_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & vlSelf->top__DOT___3816_[0U]))))))))))))))))))))))) 
                                        >> 0x20U)));
    __Vtemp_2[2U] = (((IData)((((QData)((IData)(((0x7c000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3916_ 
                                                              >> 0x2aU)) 
                                                     << 0xeU)) 
                                                 | (((IData)(vlSelf->top__DOT___0719_) 
                                                     << 0xdU) 
                                                    | ((0x1ffeU 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___3916_ 
                                                                    >> 0x1dU)) 
                                                           << 1U)) 
                                                       | (IData)(vlSelf->top__DOT___3374_)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(
                                                                      (vlSelf->top__DOT___3916_ 
                                                                       >> 0x1bU)) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___3532_) 
                                                                 << 0x1eU) 
                                                                | ((0x30000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                       << 0x1cU)) 
                                                                   | (((IData)(vlSelf->top__DOT___3181_) 
                                                                       << 0x1bU) 
                                                                      | ((0x4000000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                             << 0x1aU)) 
                                                                         | (((IData)(vlSelf->top__DOT___3688_) 
                                                                             << 0x19U) 
                                                                            | ((0x1ff8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xfU)) 
                                                                               | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 0xdU) 
                                                                                | ((0x1ff0U 
                                                                                & ((IData)(vlSelf->top__DOT___3916_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0224_) 
                                                                                << 3U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4189_[1U] 
                                                                                >> 2U))))))))))))))))) 
                      >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                              ((0x7c000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3916_ 
                                                                            >> 0x2aU)) 
                                                                   << 0xeU)) 
                                                               | (((IData)(vlSelf->top__DOT___0719_) 
                                                                   << 0xdU) 
                                                                  | ((0x1ffeU 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU)) 
                                                                         << 1U)) 
                                                                     | (IData)(vlSelf->top__DOT___3374_)))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((IData)(
                                                                         (vlSelf->top__DOT___3916_ 
                                                                          >> 0x1bU)) 
                                                                 << 0x1fU) 
                                                                | (((IData)(vlSelf->top__DOT___3532_) 
                                                                    << 0x1eU) 
                                                                   | ((0x30000000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                          << 0x1cU)) 
                                                                      | (((IData)(vlSelf->top__DOT___3181_) 
                                                                          << 0x1bU) 
                                                                         | ((0x4000000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x1aU)) 
                                                                            | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x19U) 
                                                                               | ((0x1ff8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 0xdU) 
                                                                                | ((0x1ff0U 
                                                                                & ((IData)(vlSelf->top__DOT___3916_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0224_) 
                                                                                << 3U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4189_[1U] 
                                                                                >> 2U)))))))))))))))) 
                                            >> 0x20U)) 
                                   << 2U));
    __Vtemp_3[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0102_)) 
                              << 0x2fU) | (((QData)((IData)(vlSelf->top__DOT___1513_)) 
                                            << 0x2eU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0160_)) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0727_)) 
                                                  << 0x2cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0280_)) 
                                                     << 0x2bU) 
                                                    | (((QData)((IData)(
                                                                        ((0xf8000000U 
                                                                          & (vlSelf->top__DOT___4188_[1U] 
                                                                             << 0x13U)) 
                                                                         | ((0x7f00000U 
                                                                             & ((IData)(vlSelf->top__DOT___3939_) 
                                                                                << 0xdU)) 
                                                                            | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x1eU)) 
                                                                                << 0x13U)) 
                                                                               | ((0x7c000U 
                                                                                & ((IData)(vlSelf->top__DOT___3939_) 
                                                                                << 0xdU)) 
                                                                                | ((0x3f00U 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x12U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___4160_) 
                                                                                << 5U)) 
                                                                                | (0x3fU 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 0xdU))))))))))) 
                                                        << 0xbU) 
                                                       | (QData)((IData)(
                                                                         ((0x400U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0xaU)) 
                                                                              << 0xaU)) 
                                                                          | ((0x300U 
                                                                              & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 2U)) 
                                                                             | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 2U)))))))))))))));
    __Vtemp_3[1U] = (((IData)((0x7ffffffffULL & (QData)((IData)(vlSelf->top__DOT___1177_)))) 
                      << 0x10U) | (IData)(((((QData)((IData)(vlSelf->top__DOT___0102_)) 
                                             << 0x2fU) 
                                            | (((QData)((IData)(vlSelf->top__DOT___1513_)) 
                                                << 0x2eU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0160_)) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0727_)) 
                                                      << 0x2cU) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___0280_)) 
                                                         << 0x2bU) 
                                                        | (((QData)((IData)(
                                                                            ((0xf8000000U 
                                                                              & (vlSelf->top__DOT___4188_[1U] 
                                                                                << 0x13U)) 
                                                                             | ((0x7f00000U 
                                                                                & ((IData)(vlSelf->top__DOT___3939_) 
                                                                                << 0xdU)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x1eU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x7c000U 
                                                                                & ((IData)(vlSelf->top__DOT___3939_) 
                                                                                << 0xdU)) 
                                                                                | ((0x3f00U 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x12U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___4160_) 
                                                                                << 5U)) 
                                                                                | (0x3fU 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 0xdU))))))))))) 
                                                            << 0xbU) 
                                                           | (QData)((IData)(
                                                                             ((0x400U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                              | ((0x300U 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 2U)))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_4[0U] = ((__Vtemp_3[0U] << 2U) | (((IData)(vlSelf->top__DOT___0170_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___1834_)));
    __Vtemp_4[1U] = ((__Vtemp_3[0U] >> 0x1eU) | (__Vtemp_3[1U] 
                                                 << 2U));
    __Vtemp_4[2U] = ((__Vtemp_3[1U] >> 0x1eU) | ((0x3fffcU 
                                                  & ((IData)(
                                                             (0x7ffffffffULL 
                                                              & (QData)((IData)(vlSelf->top__DOT___1177_)))) 
                                                     >> 0xeU)) 
                                                 | ((IData)(
                                                            ((0x7ffffffffULL 
                                                              & (QData)((IData)(vlSelf->top__DOT___1177_))) 
                                                             >> 0x20U)) 
                                                    << 0x12U)));
    VL_ADD_W(3, __Vtemp_5, __Vtemp_2, __Vtemp_4);
    vlSelf->top__DOT___2801_ = (1U & (__Vtemp_5[0U] 
                                      >> 0x15U));
    __Vtemp_8[0U] = (IData)((0x200000000ULL | (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->top__DOT___4759_) 
                                                                    >> 4U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (0x24000000U 
                                                                  | ((0xc0000000U 
                                                                      & vlSelf->top__DOT___4189_[0U]) 
                                                                     | ((0x8000000U 
                                                                         & vlSelf->top__DOT___4189_[0U]) 
                                                                        | ((0x1000000U 
                                                                            & vlSelf->top__DOT___4189_[0U]) 
                                                                           | (((IData)(vlSelf->top__DOT___0509_) 
                                                                               << 0x17U) 
                                                                              | (((IData)(vlSelf->top__DOT___0866_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1082_) 
                                                                                << 0x14U) 
                                                                                | ((0xf0000U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___3190_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2952_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___2437_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___3506_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3632_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2763_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1899_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & vlSelf->top__DOT___3816_[0U]))))))))))))))))))))))));
    __Vtemp_8[1U] = (((IData)((((QData)((IData)(((0x7c000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3916_ 
                                                              >> 0x2aU)) 
                                                     << 0xeU)) 
                                                 | (((IData)(vlSelf->top__DOT___0719_) 
                                                     << 0xdU) 
                                                    | ((0x1ffeU 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___3916_ 
                                                                    >> 0x1dU)) 
                                                           << 1U)) 
                                                       | (IData)(vlSelf->top__DOT___3374_)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(
                                                                      (vlSelf->top__DOT___3916_ 
                                                                       >> 0x1bU)) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___3532_) 
                                                                 << 0x1eU) 
                                                                | ((0x30000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                       << 0x1cU)) 
                                                                   | (((IData)(vlSelf->top__DOT___3181_) 
                                                                       << 0x1bU) 
                                                                      | ((0x4000000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                             << 0x1aU)) 
                                                                         | (((IData)(vlSelf->top__DOT___3688_) 
                                                                             << 0x19U) 
                                                                            | ((0x1ff8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xfU)) 
                                                                               | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 0xdU) 
                                                                                | ((0x1ff0U 
                                                                                & ((IData)(vlSelf->top__DOT___3916_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0224_) 
                                                                                << 3U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4189_[1U] 
                                                                                >> 2U))))))))))))))))) 
                      << 2U) | (IData)(((0x200000000ULL 
                                         | (((QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top__DOT___4759_) 
                                                                 >> 4U)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (0x24000000U 
                                                               | ((0xc0000000U 
                                                                   & vlSelf->top__DOT___4189_[0U]) 
                                                                  | ((0x8000000U 
                                                                      & vlSelf->top__DOT___4189_[0U]) 
                                                                     | ((0x1000000U 
                                                                         & vlSelf->top__DOT___4189_[0U]) 
                                                                        | (((IData)(vlSelf->top__DOT___0509_) 
                                                                            << 0x17U) 
                                                                           | (((IData)(vlSelf->top__DOT___0866_) 
                                                                               << 0x16U) 
                                                                              | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1082_) 
                                                                                << 0x14U) 
                                                                                | ((0xf0000U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___3190_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2952_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___2437_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___3506_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3632_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2763_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1899_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & vlSelf->top__DOT___3816_[0U]))))))))))))))))))))))) 
                                        >> 0x20U)));
    __Vtemp_8[2U] = (((IData)((((QData)((IData)(((0x7c000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT___3916_ 
                                                              >> 0x2aU)) 
                                                     << 0xeU)) 
                                                 | (((IData)(vlSelf->top__DOT___0719_) 
                                                     << 0xdU) 
                                                    | ((0x1ffeU 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___3916_ 
                                                                    >> 0x1dU)) 
                                                           << 1U)) 
                                                       | (IData)(vlSelf->top__DOT___3374_)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(
                                                                      (vlSelf->top__DOT___3916_ 
                                                                       >> 0x1bU)) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___3532_) 
                                                                 << 0x1eU) 
                                                                | ((0x30000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                       << 0x1cU)) 
                                                                   | (((IData)(vlSelf->top__DOT___3181_) 
                                                                       << 0x1bU) 
                                                                      | ((0x4000000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                             << 0x1aU)) 
                                                                         | (((IData)(vlSelf->top__DOT___3688_) 
                                                                             << 0x19U) 
                                                                            | ((0x1ff8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xfU)) 
                                                                               | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 0xdU) 
                                                                                | ((0x1ff0U 
                                                                                & ((IData)(vlSelf->top__DOT___3916_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0224_) 
                                                                                << 3U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4189_[1U] 
                                                                                >> 2U))))))))))))))))) 
                      >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                              ((0x7c000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___3916_ 
                                                                            >> 0x2aU)) 
                                                                   << 0xeU)) 
                                                               | (((IData)(vlSelf->top__DOT___0719_) 
                                                                   << 0xdU) 
                                                                  | ((0x1ffeU 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU)) 
                                                                         << 1U)) 
                                                                     | (IData)(vlSelf->top__DOT___3374_)))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((IData)(
                                                                         (vlSelf->top__DOT___3916_ 
                                                                          >> 0x1bU)) 
                                                                 << 0x1fU) 
                                                                | (((IData)(vlSelf->top__DOT___3532_) 
                                                                    << 0x1eU) 
                                                                   | ((0x30000000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                          << 0x1cU)) 
                                                                      | (((IData)(vlSelf->top__DOT___3181_) 
                                                                          << 0x1bU) 
                                                                         | ((0x4000000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x1aU)) 
                                                                            | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x19U) 
                                                                               | ((0x1ff8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 0xdU) 
                                                                                | ((0x1ff0U 
                                                                                & ((IData)(vlSelf->top__DOT___3916_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0224_) 
                                                                                << 3U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4189_[1U] 
                                                                                >> 2U)))))))))))))))) 
                                            >> 0x20U)) 
                                   << 2U));
    __Vtemp_9[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0102_)) 
                              << 0x2fU) | (((QData)((IData)(vlSelf->top__DOT___1513_)) 
                                            << 0x2eU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0160_)) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0727_)) 
                                                  << 0x2cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0280_)) 
                                                     << 0x2bU) 
                                                    | (((QData)((IData)(
                                                                        ((0xf8000000U 
                                                                          & (vlSelf->top__DOT___4188_[1U] 
                                                                             << 0x13U)) 
                                                                         | ((0x7f00000U 
                                                                             & ((IData)(vlSelf->top__DOT___3939_) 
                                                                                << 0xdU)) 
                                                                            | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x1eU)) 
                                                                                << 0x13U)) 
                                                                               | ((0x7c000U 
                                                                                & ((IData)(vlSelf->top__DOT___3939_) 
                                                                                << 0xdU)) 
                                                                                | ((0x3f00U 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x12U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___4160_) 
                                                                                << 5U)) 
                                                                                | (0x3fU 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 0xdU))))))))))) 
                                                        << 0xbU) 
                                                       | (QData)((IData)(
                                                                         ((0x400U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0xaU)) 
                                                                              << 0xaU)) 
                                                                          | ((0x300U 
                                                                              & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 2U)) 
                                                                             | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 2U)))))))))))))));
    __Vtemp_9[1U] = (((IData)((0x7ffffffffULL & (QData)((IData)(vlSelf->top__DOT___1177_)))) 
                      << 0x10U) | (IData)(((((QData)((IData)(vlSelf->top__DOT___0102_)) 
                                             << 0x2fU) 
                                            | (((QData)((IData)(vlSelf->top__DOT___1513_)) 
                                                << 0x2eU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0160_)) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0727_)) 
                                                      << 0x2cU) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___0280_)) 
                                                         << 0x2bU) 
                                                        | (((QData)((IData)(
                                                                            ((0xf8000000U 
                                                                              & (vlSelf->top__DOT___4188_[1U] 
                                                                                << 0x13U)) 
                                                                             | ((0x7f00000U 
                                                                                & ((IData)(vlSelf->top__DOT___3939_) 
                                                                                << 0xdU)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x1eU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x7c000U 
                                                                                & ((IData)(vlSelf->top__DOT___3939_) 
                                                                                << 0xdU)) 
                                                                                | ((0x3f00U 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x12U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___4160_) 
                                                                                << 5U)) 
                                                                                | (0x3fU 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 0xdU))))))))))) 
                                                            << 0xbU) 
                                                           | (QData)((IData)(
                                                                             ((0x400U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                              | ((0x300U 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 2U)))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_10[0U] = ((__Vtemp_9[0U] << 2U) | (((IData)(vlSelf->top__DOT___0170_) 
                                                << 1U) 
                                               | (IData)(vlSelf->top__DOT___1834_)));
    __Vtemp_10[1U] = ((__Vtemp_9[0U] >> 0x1eU) | (__Vtemp_9[1U] 
                                                  << 2U));
    __Vtemp_10[2U] = ((__Vtemp_9[1U] >> 0x1eU) | ((0x3fffcU 
                                                   & ((IData)(
                                                              (0x7ffffffffULL 
                                                               & (QData)((IData)(vlSelf->top__DOT___1177_)))) 
                                                      >> 0xeU)) 
                                                  | ((IData)(
                                                             ((0x7ffffffffULL 
                                                               & (QData)((IData)(vlSelf->top__DOT___1177_))) 
                                                              >> 0x20U)) 
                                                     << 0x12U)));
    VL_ADD_W(3, __Vtemp_11, __Vtemp_8, __Vtemp_10);
    vlSelf->top__DOT___2890_ = (1U & (__Vtemp_11[1U] 
                                      >> 0x13U));
    __Vtemp_14[0U] = (IData)((0x200000000ULL | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->top__DOT___4759_) 
                                                                     >> 4U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (0x24000000U 
                                                                   | ((0xc0000000U 
                                                                       & vlSelf->top__DOT___4189_[0U]) 
                                                                      | ((0x8000000U 
                                                                          & vlSelf->top__DOT___4189_[0U]) 
                                                                         | ((0x1000000U 
                                                                             & vlSelf->top__DOT___4189_[0U]) 
                                                                            | (((IData)(vlSelf->top__DOT___0509_) 
                                                                                << 0x17U) 
                                                                               | (((IData)(vlSelf->top__DOT___0866_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1082_) 
                                                                                << 0x14U) 
                                                                                | ((0xf0000U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___3190_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2952_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___2437_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___3506_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3632_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2763_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1899_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & vlSelf->top__DOT___3816_[0U]))))))))))))))))))))))));
    __Vtemp_14[1U] = (((IData)((((QData)((IData)(((0x1ffc000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___3916_ 
                                                               >> 0x2aU)) 
                                                      << 0xeU)) 
                                                  | (((IData)(vlSelf->top__DOT___0719_) 
                                                      << 0xdU) 
                                                     | ((0x1ffeU 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___3916_ 
                                                                     >> 0x1dU)) 
                                                            << 1U)) 
                                                        | (IData)(vlSelf->top__DOT___3374_)))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(
                                                                       (vlSelf->top__DOT___3916_ 
                                                                        >> 0x1bU)) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___3532_) 
                                                                  << 0x1eU) 
                                                                 | ((0x30000000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                        << 0x1cU)) 
                                                                    | (((IData)(vlSelf->top__DOT___3181_) 
                                                                        << 0x1bU) 
                                                                       | ((0x4000000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                              << 0x1aU)) 
                                                                          | (((IData)(vlSelf->top__DOT___3688_) 
                                                                              << 0x19U) 
                                                                             | ((0x1ff8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 0xdU) 
                                                                                | ((0x1ff0U 
                                                                                & ((IData)(vlSelf->top__DOT___3916_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0224_) 
                                                                                << 3U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4189_[1U] 
                                                                                >> 2U))))))))))))))))) 
                       << 2U) | (IData)(((0x200000000ULL 
                                          | (((QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->top__DOT___4759_) 
                                                                  >> 4U)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (0x24000000U 
                                                                | ((0xc0000000U 
                                                                    & vlSelf->top__DOT___4189_[0U]) 
                                                                   | ((0x8000000U 
                                                                       & vlSelf->top__DOT___4189_[0U]) 
                                                                      | ((0x1000000U 
                                                                          & vlSelf->top__DOT___4189_[0U]) 
                                                                         | (((IData)(vlSelf->top__DOT___0509_) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlSelf->top__DOT___0866_) 
                                                                                << 0x16U) 
                                                                               | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1082_) 
                                                                                << 0x14U) 
                                                                                | ((0xf0000U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___3190_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2952_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___2437_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___3506_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3632_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & vlSelf->top__DOT___3816_[0U]) 
                                                                                | (((IData)(vlSelf->top__DOT___2763_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1899_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & vlSelf->top__DOT___3816_[0U]))))))))))))))))))))))) 
                                         >> 0x20U)));
    __Vtemp_14[2U] = (((IData)((((QData)((IData)(((0x1ffc000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT___3916_ 
                                                               >> 0x2aU)) 
                                                      << 0xeU)) 
                                                  | (((IData)(vlSelf->top__DOT___0719_) 
                                                      << 0xdU) 
                                                     | ((0x1ffeU 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT___3916_ 
                                                                     >> 0x1dU)) 
                                                            << 1U)) 
                                                        | (IData)(vlSelf->top__DOT___3374_)))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(
                                                                       (vlSelf->top__DOT___3916_ 
                                                                        >> 0x1bU)) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___3532_) 
                                                                  << 0x1eU) 
                                                                 | ((0x30000000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                        << 0x1cU)) 
                                                                    | (((IData)(vlSelf->top__DOT___3181_) 
                                                                        << 0x1bU) 
                                                                       | ((0x4000000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                              << 0x1aU)) 
                                                                          | (((IData)(vlSelf->top__DOT___3688_) 
                                                                              << 0x19U) 
                                                                             | ((0x1ff8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 0xdU) 
                                                                                | ((0x1ff0U 
                                                                                & ((IData)(vlSelf->top__DOT___3916_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0224_) 
                                                                                << 3U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4189_[1U] 
                                                                                >> 2U))))))))))))))))) 
                       >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                               ((0x1ffc000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3916_ 
                                                                             >> 0x2aU)) 
                                                                    << 0xeU)) 
                                                                | (((IData)(vlSelf->top__DOT___0719_) 
                                                                    << 0xdU) 
                                                                   | ((0x1ffeU 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x1dU)) 
                                                                          << 1U)) 
                                                                      | (IData)(vlSelf->top__DOT___3374_)))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(
                                                                          (vlSelf->top__DOT___3916_ 
                                                                           >> 0x1bU)) 
                                                                  << 0x1fU) 
                                                                 | (((IData)(vlSelf->top__DOT___3532_) 
                                                                     << 0x1eU) 
                                                                    | ((0x30000000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x18U)) 
                                                                           << 0x1cU)) 
                                                                       | (((IData)(vlSelf->top__DOT___3181_) 
                                                                           << 0x1bU) 
                                                                          | ((0x4000000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0x16U)) 
                                                                                << 0x1aU)) 
                                                                             | (((IData)(vlSelf->top__DOT___3688_) 
                                                                                << 0x19U) 
                                                                                | ((0x1ff8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3916_ 
                                                                                >> 0xbU)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0162_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___3319_) 
                                                                                << 0xdU) 
                                                                                | ((0x1ff0U 
                                                                                & ((IData)(vlSelf->top__DOT___3916_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0224_) 
                                                                                << 3U) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4189_[1U] 
                                                                                >> 2U)))))))))))))))) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp_15[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___0102_)) 
                               << 0x2fU) | (((QData)((IData)(vlSelf->top__DOT___1513_)) 
                                             << 0x2eU) 
                                            | (((QData)((IData)(vlSelf->top__DOT___0160_)) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(vlSelf->top__DOT___0727_)) 
                                                   << 0x2cU) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0280_)) 
                                                      << 0x2bU) 
                                                     | (((QData)((IData)(
                                                                         ((0xf8000000U 
                                                                           & (vlSelf->top__DOT___4188_[1U] 
                                                                              << 0x13U)) 
                                                                          | ((0x7f00000U 
                                                                              & ((IData)(vlSelf->top__DOT___3939_) 
                                                                                << 0xdU)) 
                                                                             | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x1eU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x7c000U 
                                                                                & ((IData)(vlSelf->top__DOT___3939_) 
                                                                                << 0xdU)) 
                                                                                | ((0x3f00U 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x12U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___4160_) 
                                                                                << 5U)) 
                                                                                | (0x3fU 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 0xdU))))))))))) 
                                                         << 0xbU) 
                                                        | (QData)((IData)(
                                                                          ((0x400U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0xaU)) 
                                                                               << 0xaU)) 
                                                                           | ((0x300U 
                                                                               & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 2U)) 
                                                                              | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 2U)))))))))))))));
    __Vtemp_15[1U] = (((IData)((0x1ffffffffffULL & (QData)((IData)(vlSelf->top__DOT___1177_)))) 
                       << 0x10U) | (IData)(((((QData)((IData)(vlSelf->top__DOT___0102_)) 
                                              << 0x2fU) 
                                             | (((QData)((IData)(vlSelf->top__DOT___1513_)) 
                                                 << 0x2eU) 
                                                | (((QData)((IData)(vlSelf->top__DOT___0160_)) 
                                                    << 0x2dU) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___0727_)) 
                                                       << 0x2cU) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___0280_)) 
                                                          << 0x2bU) 
                                                         | (((QData)((IData)(
                                                                             ((0xf8000000U 
                                                                               & (vlSelf->top__DOT___4188_[1U] 
                                                                                << 0x13U)) 
                                                                              | ((0x7f00000U 
                                                                                & ((IData)(vlSelf->top__DOT___3939_) 
                                                                                << 0xdU)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x1eU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x7c000U 
                                                                                & ((IData)(vlSelf->top__DOT___3939_) 
                                                                                << 0xdU)) 
                                                                                | ((0x3f00U 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0x12U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___4160_) 
                                                                                << 5U)) 
                                                                                | (0x3fU 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 0xdU))))))))))) 
                                                             << 0xbU) 
                                                            | (QData)((IData)(
                                                                              ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                               | ((0x300U 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 2U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7155_ 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & (vlSelf->top__DOT___4188_[0U] 
                                                                                >> 2U)))))))))))))) 
                                            >> 0x20U)));
    __Vtemp_16[0U] = ((__Vtemp_15[0U] << 2U) | (((IData)(vlSelf->top__DOT___0170_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1834_)));
    __Vtemp_16[1U] = ((__Vtemp_15[0U] >> 0x1eU) | (
                                                   __Vtemp_15[1U] 
                                                   << 2U));
    __Vtemp_16[2U] = ((__Vtemp_15[1U] >> 0x1eU) | (
                                                   (0x3fffcU 
                                                    & ((IData)(
                                                               (0x1ffffffffffULL 
                                                                & (QData)((IData)(vlSelf->top__DOT___1177_)))) 
                                                       >> 0xeU)) 
                                                   | ((IData)(
                                                              ((0x1ffffffffffULL 
                                                                & (QData)((IData)(vlSelf->top__DOT___1177_))) 
                                                               >> 0x20U)) 
                                                      << 0x12U)));
    VL_ADD_W(3, __Vtemp_17, __Vtemp_14, __Vtemp_16);
    vlSelf->top__DOT___2957_ = (1U & (__Vtemp_17[2U] 
                                      >> 0x1aU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__783(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__783\n"); );
    // Body
    vlSelf->top__DOT___2647_ = (1U & ((((0xf0000U & 
                                         vlSelf->top__DOT___3816_[0U]) 
                                        | (((IData)(vlSelf->top__DOT___3190_) 
                                            << 0xfU) 
                                           | ((0x6000U 
                                               & vlSelf->top__DOT___3816_[0U]) 
                                              | (((IData)(vlSelf->top__DOT___2952_) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSelf->top__DOT___2437_) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSelf->top__DOT___3506_) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSelf->top__DOT___3632_) 
                                                           << 9U) 
                                                          | ((0x180U 
                                                              & vlSelf->top__DOT___3816_[0U]) 
                                                             | (((IData)(vlSelf->top__DOT___2763_) 
                                                                 << 6U) 
                                                                | (((IData)(vlSelf->top__DOT___1899_) 
                                                                    << 5U) 
                                                                   | (0x1fU 
                                                                      & vlSelf->top__DOT___3816_[0U]))))))))))) 
                                       + ((((0x80000U 
                                             & ((IData)(vlSelf->top__DOT___4160_) 
                                                << 0x12U)) 
                                            | (0x7e000U 
                                               & vlSelf->top__DOT___4188_[0U])) 
                                           | ((0x1000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___7155_ 
                                                           >> 0xaU)) 
                                                  << 0xcU)) 
                                              | ((0xc00U 
                                                  & vlSelf->top__DOT___4188_[0U]) 
                                                 | ((0x200U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___7155_ 
                                                                 >> 7U)) 
                                                        << 9U)) 
                                                    | ((0x100U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___7155_ 
                                                                    >> 6U)) 
                                                           << 8U)) 
                                                       | (0xfcU 
                                                          & vlSelf->top__DOT___4188_[0U])))))) 
                                          | (((IData)(vlSelf->top__DOT___0170_) 
                                              << 1U) 
                                             | (IData)(vlSelf->top__DOT___1834_)))) 
                                      >> 0x13U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__784(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__784\n"); );
    // Body
    vlSelf->top__DOT___0800_ = ((IData)(vlSelf->top__DOT___1599_) 
                                & (IData)(vlSelf->top__DOT___1598_));
    vlSelf->top__DOT___3057_ = (1U & (~ ((((IData)(vlSelf->top__DOT___7174_) 
                                           >> 6U) & (IData)(vlSelf->top__DOT___0779_)) 
                                         | ((IData)(vlSelf->top__DOT___0800_) 
                                            & (IData)(vlSelf->top__DOT___3113_)))));
    vlSelf->top__DOT___0854_ = ((IData)(vlSelf->top__DOT___0800_) 
                                & (~ (IData)(vlSelf->top__DOT___1065_)));
    vlSelf->top__DOT___1055_ = (1U & (~ (((IData)(vlSelf->top__DOT___0800_) 
                                          & (IData)(vlSelf->top__DOT___0023_)) 
                                         | (IData)(vlSelf->top__DOT___0227_))));
    vlSelf->top__DOT___1705_ = (1U & (((((IData)(vlSelf->top__DOT___1829_) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->top__DOT___0640_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0800_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0699_)))) 
                                       + (((IData)(vlSelf->top__DOT___0619_) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top__DOT___0445_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0195_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0056_))))) 
                                      >> 3U));
    vlSelf->top__DOT___3239_ = (1U & (((((IData)(vlSelf->top__DOT___0800_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___0699_)) 
                                       + (((IData)(vlSelf->top__DOT___0195_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0056_))) 
                                      >> 1U));
    vlSelf->top__DOT___0785_ = ((IData)(vlSelf->top__DOT___0306_) 
                                & (~ (IData)(vlSelf->top__DOT___0800_)));
    vlSelf->top__DOT___1959_ = (1U & (~ (((IData)(vlSelf->top__DOT___0170_) 
                                          & (IData)(vlSelf->top__DOT___0997_)) 
                                         | ((IData)(vlSelf->top__DOT___0181_) 
                                            & (IData)(vlSelf->top__DOT___3057_)))));
    vlSelf->top__DOT___1053_ = ((IData)(vlSelf->top__DOT___1055_) 
                                & (~ (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[0U] 
                                      >> 0xaU)));
    vlSelf->top__DOT___0976_ = (1U & (~ (((IData)(vlSelf->top__DOT___0198_) 
                                          & (IData)(vlSelf->top__DOT___1688_)) 
                                         | ((IData)(vlSelf->top__DOT___0785_) 
                                            & (IData)(vlSelf->top__DOT___1071_)))));
    vlSelf->top__DOT____VdfgTmp_h758ac323__0 = (((IData)(vlSelf->top__DOT___0088_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1959_));
    vlSelf->top__DOT___1756_ = (1U & (~ (((IData)(vlSelf->top__DOT___0973_) 
                                          & (IData)(vlSelf->top__DOT___1834_)) 
                                         | (IData)(vlSelf->top__DOT___1959_))));
    vlSelf->top__DOT___4367_ = ((0xffffff7ffffULL & vlSelf->top__DOT___4367_) 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (~ 
                                                       (((IData)(vlSelf->top__DOT___0201_) 
                                                         & (IData)(vlSelf->top__DOT___1303_)) 
                                                        | (IData)(vlSelf->top__DOT___1053_)))))) 
                                   << 0x13U));
    vlSelf->top__DOT___2212_ = (1U & (~ (((IData)(vlSelf->top__DOT___0201_) 
                                          & (IData)(vlSelf->top__DOT___1303_)) 
                                         | (IData)(vlSelf->top__DOT___1053_))));
    vlSelf->top__DOT___0935_ = ((IData)(vlSelf->top__DOT___1194_) 
                                & (IData)(vlSelf->top__DOT___1053_));
    vlSelf->top__DOT___4445_[0U] = ((0xfffffffeU & 
                                     vlSelf->top__DOT___4445_[0U]) 
                                    | (IData)(vlSelf->top__DOT___0976_));
    vlSelf->top__DOT____VdfgTmp_h269e006c__0 = ((0x20U 
                                                 & ((~ (IData)(
                                                               (vlSelf->top__DOT___7059_ 
                                                                >> 0x17U))) 
                                                    << 5U)) 
                                                | (((IData)(vlSelf->top__DOT___0976_) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->top__DOT___0170_) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->top__DOT___1672_) 
                                                          << 2U) 
                                                         | (IData)(vlSelf->top__DOT____VdfgTmp_h052d7d43__0)))));
    vlSelf->top__DOT___4452_ = ((0x1fffffffffff1ULL 
                                 & vlSelf->top__DOT___4452_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___0760_) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT___0923_) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT___0976_))))) 
                                   << 1U));
    vlSelf->top__DOT___0958_ = (1U & (~ (((IData)(vlSelf->top__DOT___0791_) 
                                          & (IData)(vlSelf->top__DOT___0878_)) 
                                         | (IData)(vlSelf->top__DOT___0976_))));
    vlSelf->top__DOT___2182_ = (1U & (((((IData)(vlSelf->top__DOT___0958_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___0923_)) 
                                       + (IData)(vlSelf->top__DOT___7102_)) 
                                      >> 1U));
    vlSelf->top__DOT___1421_ = (1U & (((((IData)(vlSelf->top__DOT___0958_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___0923_)) 
                                       + (((IData)(vlSelf->top__DOT___1453_) 
                                           << 2U) | 
                                          (3U & (IData)(vlSelf->top__DOT___7102_)))) 
                                      >> 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__785(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__785\n"); );
    // Body
    vlSelf->top__DOT___0266_ = (1U & (~ ((IData)((vlSelf->top__DOT___4777_ 
                                                  >> 0xeU)) 
                                         & (IData)(vlSelf->top__DOT___0298_))));
    vlSelf->top__DOT___1751_ = ((IData)(vlSelf->top__DOT___0452_) 
                                | (IData)(vlSelf->top__DOT___0266_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__786(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__786\n"); );
    // Body
    vlSelf->top__DOT___4048_[0U] = ((0x3fU & vlSelf->top__DOT___4048_[0U]) 
                                    | ((IData)((((QData)((IData)(vlSelf->top__DOT___2353_)) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(vlSelf->top__DOT___2793_)) 
                                                    << 0x23U) 
                                                   | (((QData)((IData)(
                                                                       (0x1fU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___7072_ 
                                                                                >> 0x1eU))))) 
                                                       << 0x1eU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelf->top__DOT___0675_) 
                                                                          << 0x1dU) 
                                                                         | (0x1fffffffU 
                                                                            & (IData)(vlSelf->top__DOT___7072_))))))))) 
                                       << 6U));
    vlSelf->top__DOT___4048_[1U] = ((0xfffff800U & 
                                     vlSelf->top__DOT___4048_[1U]) 
                                    | (((IData)((((QData)((IData)(vlSelf->top__DOT___2353_)) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___2793_)) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___7072_ 
                                                                                >> 0x1eU))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelf->top__DOT___0675_) 
                                                                           << 0x1dU) 
                                                                          | (0x1fffffffU 
                                                                             & (IData)(vlSelf->top__DOT___7072_))))))))) 
                                        >> 0x1aU) | 
                                       ((IData)(((((QData)((IData)(vlSelf->top__DOT___2353_)) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___2793_)) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT___7072_ 
                                                                                >> 0x1eU))))) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->top__DOT___0675_) 
                                                                            << 0x1dU) 
                                                                           | (0x1fffffffU 
                                                                              & (IData)(vlSelf->top__DOT___7072_)))))))) 
                                                 >> 0x20U)) 
                                        << 6U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__787(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__787\n"); );
    // Body
    vlSelf->top__DOT___4058_ = ((0xffffff0U & vlSelf->top__DOT___4058_) 
                                | (((IData)(vlSelf->top__DOT___2681_) 
                                    << 3U) | (((IData)(vlSelf->top__DOT___2583_) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT___0181_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___1842_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__789(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__789\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = (((IData)((0x3fffffffffffULL & 
                               (((QData)((IData)(vlSelf->top__DOT___4746_[2U])) 
                                 << 0x28U) | (((QData)((IData)(
                                                               vlSelf->top__DOT___4746_[1U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT___4746_[0U])) 
                                                 >> 0x18U))))) 
                      << 1U) | (IData)(((((QData)((IData)(
                                                          (0x1ffU 
                                                           & ((vlSelf->top__DOT___4117_[4U] 
                                                               << 7U) 
                                                              | (vlSelf->top__DOT___4117_[3U] 
                                                                 >> 0x19U))))) 
                                          << 0x18U) 
                                         | (QData)((IData)(
                                                           ((0x300000U 
                                                             & (vlSelf->top__DOT___4746_[0U] 
                                                                << 7U)) 
                                                            | ((0x60000U 
                                                                & (vlSelf->top__DOT___4746_[0U] 
                                                                   << 6U)) 
                                                               | ((0x4000U 
                                                                   & (vlSelf->top__DOT___4746_[0U] 
                                                                      << 4U)) 
                                                                  | ((0x1000U 
                                                                      & (vlSelf->top__DOT___4746_[0U] 
                                                                         << 3U)) 
                                                                     | ((0x200U 
                                                                         & (vlSelf->top__DOT___4746_[0U] 
                                                                            << 1U)) 
                                                                        | (0xffU 
                                                                           & vlSelf->top__DOT___4746_[0U]))))))))) 
                                        >> 0x20U)));
    vlSelf->top__DOT___4649_[0U] = (IData)((((QData)((IData)(
                                                             (0x1ffU 
                                                              & ((vlSelf->top__DOT___4117_[4U] 
                                                                  << 7U) 
                                                                 | (vlSelf->top__DOT___4117_[3U] 
                                                                    >> 0x19U))))) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              ((0x300000U 
                                                                & (vlSelf->top__DOT___4746_[0U] 
                                                                   << 7U)) 
                                                               | ((0x60000U 
                                                                   & (vlSelf->top__DOT___4746_[0U] 
                                                                      << 6U)) 
                                                                  | ((0x4000U 
                                                                      & (vlSelf->top__DOT___4746_[0U] 
                                                                         << 4U)) 
                                                                     | ((0x1000U 
                                                                         & (vlSelf->top__DOT___4746_[0U] 
                                                                            << 3U)) 
                                                                        | ((0x200U 
                                                                            & (vlSelf->top__DOT___4746_[0U] 
                                                                               << 1U)) 
                                                                           | (0xffU 
                                                                              & vlSelf->top__DOT___4746_[0U]))))))))));
    vlSelf->top__DOT___4649_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4649_[2U] = (((IData)((0x3fffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->top__DOT___4746_[2U])) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT___4746_[1U])) 
                                                     << 8U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top__DOT___4746_[0U])) 
                                                       >> 0x18U))))) 
                                     >> 0x1fU) | ((IData)(
                                                          ((0x3fffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4746_[2U])) 
                                                                << 0x28U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->top__DOT___4746_[1U])) 
                                                                   << 8U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->top__DOT___4746_[0U])) 
                                                                     >> 0x18U)))) 
                                                           >> 0x20U)) 
                                                  << 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__790(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__790\n"); );
    // Body
    vlSelf->top__DOT___0653_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_ha664a4f7__0) 
                                       + ((6U & ((IData)(vlSelf->top__DOT___4158_) 
                                                 >> 6U)) 
                                          | (IData)(vlSelf->top__DOT___0821_))) 
                                      >> 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__791(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__791\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h04c15e02__0 = ((0xeU 
                                                 & ((IData)(vlSelf->top__DOT___4158_) 
                                                    >> 6U)) 
                                                | (IData)(vlSelf->top__DOT___0821_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__792(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__792\n"); );
    // Body
    vlSelf->top__DOT___0044_ = ((~ ((IData)(vlSelf->top__DOT___7161_) 
                                    >> 8U)) & (IData)(vlSelf->top__DOT___0046_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__794(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__794\n"); );
    // Body
    vlSelf->top__DOT___1097_ = (1U & (~ (((IData)(vlSelf->top__DOT___0040_) 
                                          & (IData)(vlSelf->top__DOT___0073_)) 
                                         | (IData)(vlSelf->top__DOT___0046_))));
    vlSelf->top__DOT___1096_ = ((~ (IData)(vlSelf->top__DOT___1097_)) 
                                & (IData)(vlSelf->top__DOT___1098_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__796(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__796\n"); );
    // Body
    vlSelf->top__DOT___2392_ = (1U & (~ (((IData)(vlSelf->top__DOT___2350_) 
                                          & (IData)(vlSelf->top__DOT___2054_)) 
                                         | ((IData)(vlSelf->top__DOT___3014_) 
                                            & ((IData)(vlSelf->top__DOT___7070_) 
                                               >> 8U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__797(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__797\n"); );
    // Body
    vlSelf->top__DOT___0676_ = (1U & (~ (((IData)(vlSelf->top__DOT___1792_) 
                                          & ((IData)(vlSelf->top__DOT___7067_) 
                                             >> 2U)) 
                                         | ((IData)(vlSelf->top__DOT___0903_) 
                                            & (IData)(vlSelf->top__DOT___1075_)))));
    vlSelf->top__DOT___4631_[2U] = ((0xfffffe7fU & 
                                     vlSelf->top__DOT___4631_[2U]) 
                                    | (0xffffff80U 
                                       & (((IData)(vlSelf->top__DOT___0676_) 
                                           << 8U) | 
                                          ((IData)(vlSelf->top__DOT___0038_) 
                                           << 7U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__798(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__798\n"); );
    // Body
    vlSelf->top__DOT___0362_ = (1U & (~ ((((IData)(vlSelf->top__DOT___7149_) 
                                           >> 1U) & (IData)(vlSelf->top__DOT___1846_)) 
                                         | (IData)(vlSelf->top__DOT___0809_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__800(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__800\n"); );
    // Body
    vlSelf->top__DOT___3698_ = (1U & ((((0xcU & (vlSelf->top__DOT___3891_ 
                                                 >> 0xcU)) 
                                        | (((IData)(vlSelf->top__DOT___1695_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___0992_))) 
                                       + (((IData)(vlSelf->top__DOT___0431_) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top__DOT___2905_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0445_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0102_))))) 
                                      >> 3U));
    vlSelf->top__DOT___0099_ = ((IData)(vlSelf->top__DOT___1762_) 
                                ^ (IData)(vlSelf->top__DOT___3698_));
    vlSelf->top__DOT___0773_ = ((IData)(vlSelf->top__DOT___0099_) 
                                ^ (IData)(vlSelf->top__DOT___1672_));
    vlSelf->top__DOT___0818_ = ((IData)(vlSelf->top__DOT___0099_) 
                                & (~ (IData)(vlSelf->top__DOT___0097_)));
    vlSelf->top__DOT___3408_ = (1U & ((IData)(vlSelf->top__DOT___7096_) 
                                      ^ (IData)(vlSelf->top__DOT___0773_)));
    vlSelf->top__DOT___0248_ = ((IData)(vlSelf->top__DOT___0773_) 
                                & (IData)(vlSelf->top__DOT___1127_));
    vlSelf->top__DOT___0401_ = ((IData)(vlSelf->top__DOT___0160_) 
                                ^ (IData)(vlSelf->top__DOT___0818_));
    vlSelf->top__DOT___3407_ = ((IData)(vlSelf->top__DOT___2648_) 
                                | (IData)(vlSelf->top__DOT___3408_));
    vlSelf->top__DOT____VdfgTmp_h60e5fd60__0 = (((IData)(vlSelf->top__DOT___2888_) 
                                                 << 0x10U) 
                                                | ((0xfffcU 
                                                    & (vlSelf->top__DOT___3816_[1U] 
                                                       << 1U)) 
                                                   | (((IData)(vlSelf->top__DOT___3703_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0248_))));
    vlSelf->top__DOT____VdfgTmp_he7f93aa6__0 = (((QData)((IData)(
                                                                 (0x7ffffU 
                                                                  & ((vlSelf->top__DOT___3816_[2U] 
                                                                      << 0x10U) 
                                                                     | (vlSelf->top__DOT___3816_[1U] 
                                                                        >> 0x10U))))) 
                                                 << 0x11U) 
                                                | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_h60e5fd60__0)));
    vlSelf->top__DOT____VdfgTmp_hf150bcb1__0 = (((QData)((IData)(vlSelf->top__DOT____VdfgTmp_h490d18cd__0)) 
                                                 << 0x24U) 
                                                | vlSelf->top__DOT____VdfgTmp_he7f93aa6__0);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__801(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__801\n"); );
    // Body
    vlSelf->top__DOT___3153_ = (1U & ((((0x1cU & (vlSelf->top__DOT___3891_ 
                                                  >> 0xcU)) 
                                        | (((IData)(vlSelf->top__DOT___1695_) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT___0992_))) 
                                       + (((IData)(vlSelf->top__DOT___2792_) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT___0431_) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top__DOT___2905_) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT___0445_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___0102_)))))) 
                                      >> 4U));
    vlSelf->top__DOT___1998_ = ((IData)(vlSelf->top__DOT___0069_) 
                                | (IData)(vlSelf->top__DOT___3153_));
    vlSelf->top__DOT___1635_ = ((IData)(vlSelf->top__DOT___1998_) 
                                ^ (IData)(vlSelf->top__DOT___1363_));
    vlSelf->top__DOT___1439_ = ((IData)(vlSelf->top__DOT___1998_) 
                                | (IData)(vlSelf->top__DOT___0116_));
    vlSelf->top__DOT___0390_ = ((IData)(vlSelf->top__DOT___1998_) 
                                | (IData)(vlSelf->top__DOT___0224_));
    vlSelf->top__DOT___3648_ = ((IData)(vlSelf->top__DOT___0037_) 
                                ^ (IData)(vlSelf->top__DOT___1439_));
    vlSelf->top__DOT___1963_ = ((IData)(vlSelf->top__DOT___1439_) 
                                ^ (IData)(vlSelf->top__DOT___3361_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__802(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__802\n"); );
    // Body
    vlSelf->top__DOT___1146_ = (1U & (~ (((IData)(vlSelf->top__DOT___1906_) 
                                          & (IData)(vlSelf->top__DOT___0526_)) 
                                         | (((IData)(vlSelf->top__DOT___7150_) 
                                             >> 5U) 
                                            & (IData)(vlSelf->top__DOT___0638_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__803(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__803\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h8de2cd09__0 = ((((IData)(vlSelf->top__DOT___0735_) 
                                                  & (IData)(vlSelf->top__DOT___0637_)) 
                                                 << 2U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h50ad6309__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__805(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__805\n"); );
    // Body
    vlSelf->top__DOT___1909_ = (1U & (((IData)(vlSelf->top__DOT___7086_) 
                                       >> 5U) ^ (IData)(vlSelf->top__DOT___0077_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__806(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__806\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((0x1fb5da00000000ULL | 
                             (((QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT___4784_ 
                                                           >> 0x1fU))))) 
                               << 0x2eU) | (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT___4784_ 
                                                                         >> 0x1eU))))) 
                                             << 0x2bU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___4784_ 
                                                                            >> 0x1dU))))) 
                                                << 0x29U) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT___4784_ 
                                                                               >> 0x1cU))))) 
                                                   << 0x25U) 
                                                  | (((QData)((IData)(
                                                                      (0x7fU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0x15U))))) 
                                                      << 0x1aU) 
                                                     | (QData)((IData)(
                                                                       (0x1000U 
                                                                        | ((0x2000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0x14U)) 
                                                                               << 0x19U)) 
                                                                           | ((0x1ff0000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0xbU)) 
                                                                                << 0x10U)) 
                                                                              | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0xaU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 9U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (IData)(vlSelf->top__DOT___4141_)) 
                                                                                | ((0xfc0U 
                                                                                & (IData)(vlSelf->top__DOT___4141_)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 1U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___4784_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___3174_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___1192_) 
                                                                                << 1U)))))))))))))))))))));
    __Vtemp_1[1U] = (((IData)((vlSelf->top__DOT___4784_ 
                               >> 0x20U)) << 0x15U) 
                     | (IData)(((0x1fb5da00000000ULL 
                                 | (((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT___4784_ 
                                                                 >> 0x1fU))))) 
                                     << 0x2eU) | (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT___4784_ 
                                                                               >> 0x1eU))))) 
                                                   << 0x2bU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0x1dU))))) 
                                                      << 0x29U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0x1cU))))) 
                                                         << 0x25U) 
                                                        | (((QData)((IData)(
                                                                            (0x7fU 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0x15U))))) 
                                                            << 0x1aU) 
                                                           | (QData)((IData)(
                                                                             (0x1000U 
                                                                              | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0x14U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1ff0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0xbU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0xaU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 9U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (IData)(vlSelf->top__DOT___4141_)) 
                                                                                | ((0xfc0U 
                                                                                & (IData)(vlSelf->top__DOT___4141_)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 1U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___4784_) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___3174_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___1192_) 
                                                                                << 1U)))))))))))))))))))) 
                                >> 0x20U)));
    vlSelf->top__DOT___4281_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4281_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4281_[2U] = (((IData)(vlSelf->top__DOT___0552_) 
                                     << 3U) | (((IData)(vlSelf->top__DOT___0318_) 
                                                << 2U) 
                                               | (((IData)(vlSelf->top__DOT___1011_) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___4784_ 
                                                                 >> 0x20U)) 
                                                        >> 0xbU)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__807(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__807\n"); );
    // Body
    vlSelf->top__DOT___1636_ = (1U & (~ ((((IData)(vlSelf->top__DOT___7100_) 
                                           >> 9U) & (IData)(vlSelf->top__DOT___0440_)) 
                                         | ((IData)(vlSelf->top__DOT___1452_) 
                                            & (IData)(vlSelf->top__DOT___1668_)))));
    vlSelf->top__DOT___1960_ = (1U & (~ (((IData)(vlSelf->top__DOT___0880_) 
                                          & (IData)(vlSelf->top__DOT___1636_)) 
                                         | (IData)(vlSelf->top__DOT___0485_))));
    vlSelf->top__DOT___4389_[0U] = ((0xfffffff7U & 
                                     vlSelf->top__DOT___4389_[0U]) 
                                    | ((IData)(vlSelf->top__DOT___1636_) 
                                       << 3U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__808(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__808\n"); );
    // Body
    vlSelf->top__DOT___2887_ = (1U & (~ (((IData)((vlSelf->top__DOT___7096_ 
                                                   >> 0x10U)) 
                                          & (IData)(vlSelf->top__DOT___2890_)) 
                                         | (((IData)(vlSelf->top__DOT___4753_) 
                                             >> 7U) 
                                            & (IData)(vlSelf->top__DOT___2888_)))));
    vlSelf->__VdfgTmp_h1f7d2a28__0 = ((((IData)(vlSelf->top__DOT___0995_) 
                                        << 0x17U) | 
                                       ((0x600000U 
                                         & ((IData)(vlSelf->top__DOT___7195_) 
                                            << 0xdU)) 
                                        | ((0x100000U 
                                            & (vlSelf->top__DOT___3883_[0U] 
                                               << 7U)) 
                                           | ((0xc0000U 
                                               & ((IData)(vlSelf->top__DOT___7195_) 
                                                  << 0xdU)) 
                                              | ((0x38000U 
                                                  & (vlSelf->top__DOT___3883_[0U] 
                                                     << 7U)) 
                                                 | (0x4000U 
                                                    & ((IData)(vlSelf->top__DOT___7195_) 
                                                       << 0xdU))))))) 
                                      | ((0x2000U & 
                                          ((IData)(vlSelf->top__DOT___7195_) 
                                           << 0xdU)) 
                                         | (((IData)(vlSelf->top__DOT___1357_) 
                                             << 0xcU) 
                                            | (((IData)(vlSelf->top__DOT___2887_) 
                                                << 0xbU) 
                                               | ((0x600U 
                                                   & ((IData)(vlSelf->top__DOT___7102_) 
                                                      << 5U)) 
                                                  | ((0x100U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___4313_ 
                                                                  >> 8U)) 
                                                         << 8U)) 
                                                     | ((0xe0U 
                                                         & ((IData)(vlSelf->top__DOT___7102_) 
                                                            << 5U)) 
                                                        | (((IData)(vlSelf->top__DOT___1887_) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->top__DOT___0352_) 
                                                               << 2U) 
                                                              | ((2U 
                                                                  & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                     << 1U)) 
                                                                 | (IData)(vlSelf->top__DOT___0440_)))))))))));
    vlSelf->top__DOT____VdfgTmp_h767a5715__0 = (((IData)(vlSelf->top__DOT___3512_) 
                                                 << 0x1aU) 
                                                | ((0x3000000U 
                                                    & (vlSelf->top__DOT___3816_[2U] 
                                                       << 0x14U)) 
                                                   | vlSelf->__VdfgTmp_h1f7d2a28__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__809(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__809\n"); );
    // Body
    vlSelf->top__DOT___2389_ = (1U & (~ (((~ (((IData)(vlSelf->top__DOT___0599_) 
                                               & ((~ (IData)(vlSelf->top__DOT___0563_)) 
                                                  & (IData)(vlSelf->top__DOT___0564_))) 
                                              | ((IData)(vlSelf->top__DOT___1070_) 
                                                 & ((IData)(vlSelf->top__DOT___7085_) 
                                                    >> 0xcU)))) 
                                          & ((IData)(vlSelf->top__DOT___0854_) 
                                             | (IData)(vlSelf->top__DOT___1696_))) 
                                         | (IData)(vlSelf->top__DOT___1817_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__812(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__812\n"); );
    // Body
    vlSelf->top__DOT___4025_ = ((0x1fU & vlSelf->top__DOT___4025_) 
                                | ((0x10000U & ((IData)(vlSelf->top__DOT___7070_) 
                                                << 7U)) 
                                   | ((0x8000U & ((IData)(vlSelf->top__DOT___7070_) 
                                                  << 7U)) 
                                      | ((0x4000U & 
                                          ((IData)(vlSelf->top__DOT___7070_) 
                                           << 7U)) 
                                         | ((0x2000U 
                                             & ((IData)(vlSelf->top__DOT___7070_) 
                                                << 7U)) 
                                            | ((0x1000U 
                                                & ((IData)(vlSelf->top__DOT___7070_) 
                                                   << 7U)) 
                                               | ((0xc00U 
                                                   & ((IData)(vlSelf->top__DOT___7070_) 
                                                      << 7U)) 
                                                  | ((0x200U 
                                                      & ((IData)(vlSelf->top__DOT___7070_) 
                                                         << 7U)) 
                                                     | ((0x100U 
                                                         & ((IData)(vlSelf->top__DOT___7070_) 
                                                            << 7U)) 
                                                        | ((0x80U 
                                                            & ((IData)(vlSelf->top__DOT___7070_) 
                                                               << 7U)) 
                                                           | (((IData)(vlSelf->top__DOT___0735_) 
                                                               << 6U) 
                                                              | ((IData)(vlSelf->top__DOT___1959_) 
                                                                 << 5U))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__813(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__813\n"); );
    // Body
    vlSelf->top__DOT___2363_ = (1U & (~ (((IData)(vlSelf->top__DOT___2681_) 
                                          & (vlSelf->top__DOT___7141_ 
                                             >> 0x16U)) 
                                         | ((IData)(vlSelf->top__DOT___1959_) 
                                            & (vlSelf->top__DOT___7222_ 
                                               >> 0x10U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__814(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__814\n"); );
    // Body
    vlSelf->out_data[0U] = ((0xfffffffeU & vlSelf->out_data[0U]) 
                            | ((~ (IData)(vlSelf->top__DOT___0976_)) 
                               & (IData)(vlSelf->top__DOT___0977_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__815(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__815\n"); );
    // Body
    vlSelf->top__DOT___0245_ = (1U & (~ (((IData)(vlSelf->top__DOT___0352_) 
                                          & (IData)(vlSelf->top__DOT___2167_)) 
                                         | (IData)(vlSelf->top__DOT___0976_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__816(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__816\n"); );
    // Body
    vlSelf->top__DOT___2049_ = (1U & (~ (((IData)(vlSelf->top__DOT___0976_) 
                                          & ((IData)(vlSelf->top__DOT___6981_) 
                                             >> 6U)) 
                                         | (IData)(vlSelf->top__DOT___4741_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__817(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__817\n"); );
    // Body
    vlSelf->top__DOT___4433_[2U] = ((0xfffffff3U & 
                                     vlSelf->top__DOT___4433_[2U]) 
                                    | (0xfffffffcU 
                                       & (((IData)(vlSelf->top__DOT___1070_) 
                                           << 3U) | 
                                          ((IData)(vlSelf->top__DOT___2212_) 
                                           << 2U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__818(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__818\n"); );
    // Body
    vlSelf->top__DOT___4679_ = ((1ULL & vlSelf->top__DOT___4679_) 
                                | ((0x1fffffffffcULL 
                                    & (vlSelf->top__DOT___7090_ 
                                       << 1U)) | ((QData)((IData)(vlSelf->top__DOT___0958_)) 
                                                  << 1U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__821(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__821\n"); );
    // Init
    CData/*0:0*/ top__DOT___0918_;
    top__DOT___0918_ = 0;
    // Body
    top__DOT___0918_ = (1U & (~ (((IData)(vlSelf->top__DOT___3174_) 
                                  & (IData)(vlSelf->top__DOT___1710_)) 
                                 | ((IData)(vlSelf->top__DOT___0958_) 
                                    & (IData)(vlSelf->top__DOT___0195_)))));
    vlSelf->top__DOT___0112_ = ((IData)(top__DOT___0918_) 
                                & (~ ((IData)(vlSelf->top__DOT___6976_) 
                                      >> 4U)));
    vlSelf->top__DOT___0110_ = ((~ (IData)(vlSelf->top__DOT___0111_)) 
                                & (IData)(vlSelf->top__DOT___0112_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__822(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__822\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h9c860086__0 = (((IData)(vlSelf->top__DOT___0266_) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->top__DOT___2555_) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->top__DOT___1836_) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT___0735_) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT___1016_) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->top__DOT___0408_))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__824(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__824\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h66e715ed__0 = (((IData)(vlSelf->top__DOT___2265_) 
                                                 << 4U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h04c15e02__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__827(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__827\n"); );
    // Body
    vlSelf->top__DOT___1456_ = (1U & (~ (((IData)(vlSelf->top__DOT___2392_) 
                                          & (IData)(vlSelf->top__DOT___1836_)) 
                                         | (IData)(vlSelf->top__DOT___1309_))));
    vlSelf->top__DOT___4430_[0U] = ((0xfbffffffU & 
                                     vlSelf->top__DOT___4430_[0U]) 
                                    | ((IData)(vlSelf->top__DOT___1456_) 
                                       << 0x1aU));
    vlSelf->top__DOT___1831_ = (1U & ((IData)(vlSelf->top__DOT___1456_) 
                                      | (1U & (((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT____VdfgTmp_hc95200b7__0)) 
                                               >> 1U))));
    vlSelf->top__DOT___1201_ = ((IData)(vlSelf->top__DOT___1831_) 
                                & (IData)(vlSelf->top__DOT___0216_));
    vlSelf->top__DOT___1200_ = ((IData)(vlSelf->top__DOT___1201_) 
                                & (~ (IData)(vlSelf->top__DOT___0300_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__828(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__828\n"); );
    // Body
    vlSelf->top__DOT___1061_ = (1U & (~ (((IData)(vlSelf->top__DOT___0440_) 
                                          & (IData)(vlSelf->top__DOT___0969_)) 
                                         | ((IData)(vlSelf->top__DOT___0099_) 
                                            & (IData)(vlSelf->top__DOT___0170_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__829(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__829\n"); );
    // Body
    vlSelf->top__DOT___1184_ = ((IData)(vlSelf->top__DOT___0401_) 
                                & ((IData)(vlSelf->top__DOT___7161_) 
                                   >> 8U));
    vlSelf->top__DOT____VdfgTmp_h718f48c9__0 = (((IData)(vlSelf->top__DOT___1184_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___1912_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__830(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__830\n"); );
    // Body
    vlSelf->top__DOT___3018_ = (1U & ((IData)(vlSelf->top__DOT___0401_) 
                                      ^ ((IData)(vlSelf->top__DOT___7206_) 
                                         >> 0xaU)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__831(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__831\n"); );
    // Body
    vlSelf->top__DOT___2914_ = (1U & (~ (((IData)(vlSelf->top__DOT___3153_) 
                                          & (IData)(vlSelf->top__DOT___0141_)) 
                                         | ((IData)(vlSelf->top__DOT___0876_) 
                                            & (IData)(vlSelf->top__DOT___1558_)))));
    vlSelf->top__DOT___4150_ = ((0x1ffffffbfULL & vlSelf->top__DOT___4150_) 
                                | ((QData)((IData)(vlSelf->top__DOT___2914_)) 
                                   << 6U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__833(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__833\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h5563e992__0 = (((IData)(vlSelf->top__DOT___0348_) 
                                                 & (IData)(vlSelf->top__DOT___1998_)) 
                                                | (IData)(vlSelf->top__DOT___1997_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__835(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__835\n"); );
    // Body
    vlSelf->top__DOT___0237_ = (1U & (~ (((IData)(vlSelf->top__DOT___1512_) 
                                          & (IData)(vlSelf->top__DOT___1439_)) 
                                         | ((IData)(vlSelf->top__DOT___1182_) 
                                            & (IData)(vlSelf->top__DOT___0503_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__836(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__836\n"); );
    // Body
    vlSelf->top__DOT___4430_[0U] = ((0xfffff801U & 
                                     vlSelf->top__DOT___4430_[0U]) 
                                    | (0xfffffffeU 
                                       & (((IData)(vlSelf->top__DOT___7028_) 
                                           << 2U) | 
                                          ((IData)(vlSelf->top__DOT___0390_) 
                                           << 1U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__838(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__838\n"); );
    // Body
    vlSelf->top__DOT___2244_ = (1U & (~ (((IData)(vlSelf->top__DOT___0390_) 
                                          & (IData)(vlSelf->top__DOT___0756_)) 
                                         | ((IData)(vlSelf->top__DOT___0284_) 
                                            & (IData)(
                                                      (vlSelf->top__DOT___7113_ 
                                                       >> 0x12U))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__839(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__839\n"); );
    // Body
    vlSelf->top__DOT___2487_ = (1U & (~ (((IData)(vlSelf->top__DOT___1146_) 
                                          & (IData)(vlSelf->top__DOT___1851_)) 
                                         | (IData)(vlSelf->top__DOT___0910_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__840(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__840\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelf->top__DOT___4207_ = ((3U & vlSelf->top__DOT___4207_) 
                                | (0x7ffffcU & ((IData)(
                                                        (0x1fffffULL 
                                                         & ((((((QData)((IData)(
                                                                                ((0xff0000U 
                                                                                & (vlSelf->top__DOT___4282_[1U] 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___4740_[3U] 
                                                                                << 7U)) 
                                                                                | ((0x7000U 
                                                                                & (vlSelf->top__DOT___4282_[1U] 
                                                                                >> 4U)) 
                                                                                | ((0xffcU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x2cU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4740_[2U] 
                                                                                >> 0x19U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x2aU)))))))))) 
                                                                << 0x24U) 
                                                               | ((QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->top__DOT___4740_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x7ff00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x1eU)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4740_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x7ffc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x10U)) 
                                                                                << 6U)) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4282_[0U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0x1aU))))))))) 
                                                                  << 4U)) 
                                                              | (QData)((IData)(
                                                                                ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0147_))))))) 
                                                             + 
                                                             ((((QData)((IData)(
                                                                                (0xfdaedU 
                                                                                | ((0x7f00000U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                                | (0x10U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U))))))))) 
                                                                << 0x21U) 
                                                               | ((QData)((IData)(
                                                                                (0x100U 
                                                                                | ((0x1fc00000U 
                                                                                & ((vlSelf->top__DOT___4281_[1U] 
                                                                                << 0x1cU) 
                                                                                | (0xfc00000U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)))) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0x14U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x1ff000U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0xaU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___4141_) 
                                                                                >> 4U)) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___4141_) 
                                                                                >> 4U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U))))))))))))) 
                                                                  << 4U)) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___3174_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___1192_) 
                                                                                << 1U))))))) 
                                                            >> 0x27U))) 
                                                << 2U)));
    vlSelf->top__DOT___0787_ = (1U & (((((0xf000000U 
                                          & ((IData)(
                                                     (vlSelf->top__DOT___3953_ 
                                                      >> 0x1eU)) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & (vlSelf->top__DOT___4740_[2U] 
                                                << 0xbU)) 
                                            | ((0x7ffc00U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT___3953_ 
                                                            >> 0x10U)) 
                                                   << 0xaU)) 
                                               | ((0x3e0U 
                                                   & vlSelf->top__DOT___4282_[0U]) 
                                                  | (0x10U 
                                                     & (vlSelf->top__DOT___3859_ 
                                                        >> 0x16U)))))) 
                                        | ((8U & ((IData)(vlSelf->top__DOT___7185_) 
                                                  << 1U)) 
                                           | ((4U & 
                                               (vlSelf->top__DOT___3859_ 
                                                >> 0x16U)) 
                                              | (((IData)(vlSelf->top__DOT___3654_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___0147_))))) 
                                       + (0x1000U | 
                                          (((0xc000000U 
                                             & vlSelf->top__DOT___4281_[0U]) 
                                            | ((0x2000000U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT___4784_ 
                                                            >> 0x14U)) 
                                                   << 0x19U)) 
                                               | ((0x1ff0000U 
                                                   & vlSelf->top__DOT___4281_[0U]) 
                                                  | ((0x8000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___4784_ 
                                                                  >> 0xaU)) 
                                                         << 0xfU)) 
                                                     | ((0x4000U 
                                                         & vlSelf->top__DOT___4281_[0U]) 
                                                        | ((0x2000U 
                                                            & (IData)(vlSelf->top__DOT___4141_)) 
                                                           | ((0xfc0U 
                                                               & (IData)(vlSelf->top__DOT___4141_)) 
                                                              | ((0x20U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___4784_ 
                                                                              >> 1U)) 
                                                                     << 5U)) 
                                                                 | (0x10U 
                                                                    & vlSelf->top__DOT___4281_[0U]))))))))) 
                                           | (((IData)(vlSelf->top__DOT___0300_) 
                                               << 3U) 
                                              | (((IData)(vlSelf->top__DOT___3174_) 
                                                  << 2U) 
                                                 | ((IData)(vlSelf->top__DOT___1192_) 
                                                    << 1U)))))) 
                                      >> 0x1bU));
    vlSelf->top__DOT___1525_ = (1U & (((((0xc00U & 
                                          ((IData)(
                                                   (vlSelf->top__DOT___3953_ 
                                                    >> 0x10U)) 
                                           << 0xaU)) 
                                         | ((0x3e0U 
                                             & vlSelf->top__DOT___4282_[0U]) 
                                            | (0x10U 
                                               & (vlSelf->top__DOT___3859_ 
                                                  >> 0x16U)))) 
                                        | ((8U & ((IData)(vlSelf->top__DOT___7185_) 
                                                  << 1U)) 
                                           | ((4U & 
                                               (vlSelf->top__DOT___3859_ 
                                                >> 0x16U)) 
                                              | (((IData)(vlSelf->top__DOT___3654_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___0147_))))) 
                                       + (((0xfc0U 
                                            & (IData)(vlSelf->top__DOT___4141_)) 
                                           | ((0x20U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___4784_ 
                                                           >> 1U)) 
                                                  << 5U)) 
                                              | (0x10U 
                                                 & vlSelf->top__DOT___4281_[0U]))) 
                                          | (((IData)(vlSelf->top__DOT___0300_) 
                                              << 3U) 
                                             | (((IData)(vlSelf->top__DOT___3174_) 
                                                 << 2U) 
                                                | ((IData)(vlSelf->top__DOT___1192_) 
                                                   << 1U))))) 
                                      >> 0xbU));
    __Vtemp_2[0U] = (((IData)((((QData)((IData)(((0xffff0000U 
                                                  & ((vlSelf->top__DOT___4282_[2U] 
                                                      << 0x1cU) 
                                                     | (0xfff0000U 
                                                        & (vlSelf->top__DOT___4282_[1U] 
                                                           >> 4U)))) 
                                                 | ((0x8000U 
                                                     & (vlSelf->top__DOT___4740_[3U] 
                                                        << 7U)) 
                                                    | ((0x7000U 
                                                        & (vlSelf->top__DOT___4282_[1U] 
                                                           >> 4U)) 
                                                       | ((0xffcU 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___3953_ 
                                                                       >> 0x2cU)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & (vlSelf->top__DOT___4740_[2U] 
                                                                 >> 0x19U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3953_ 
                                                                           >> 0x2aU)))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT___4740_[2U] 
                                                                 << 7U)) 
                                                             | ((0x7ff00000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3953_ 
                                                                             >> 0x1eU)) 
                                                                    << 0x14U)) 
                                                                | ((0x80000U 
                                                                    & (vlSelf->top__DOT___4740_[2U] 
                                                                       << 7U)) 
                                                                   | ((0x7ffc0U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x10U)) 
                                                                          << 6U)) 
                                                                      | ((0x3eU 
                                                                          & (vlSelf->top__DOT___4282_[0U] 
                                                                             >> 4U)) 
                                                                         | (1U 
                                                                            & (vlSelf->top__DOT___3859_ 
                                                                               >> 0x1aU))))))))))) 
                      << 4U) | ((8U & ((IData)(vlSelf->top__DOT___7185_) 
                                       << 1U)) | ((4U 
                                                   & (vlSelf->top__DOT___3859_ 
                                                      >> 0x16U)) 
                                                  | (((IData)(vlSelf->top__DOT___3654_) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->top__DOT___0147_)))));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)(((0xffff0000U 
                                                  & ((vlSelf->top__DOT___4282_[2U] 
                                                      << 0x1cU) 
                                                     | (0xfff0000U 
                                                        & (vlSelf->top__DOT___4282_[1U] 
                                                           >> 4U)))) 
                                                 | ((0x8000U 
                                                     & (vlSelf->top__DOT___4740_[3U] 
                                                        << 7U)) 
                                                    | ((0x7000U 
                                                        & (vlSelf->top__DOT___4282_[1U] 
                                                           >> 4U)) 
                                                       | ((0xffcU 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___3953_ 
                                                                       >> 0x2cU)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & (vlSelf->top__DOT___4740_[2U] 
                                                                 >> 0x19U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3953_ 
                                                                           >> 0x2aU)))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT___4740_[2U] 
                                                                 << 7U)) 
                                                             | ((0x7ff00000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3953_ 
                                                                             >> 0x1eU)) 
                                                                    << 0x14U)) 
                                                                | ((0x80000U 
                                                                    & (vlSelf->top__DOT___4740_[2U] 
                                                                       << 7U)) 
                                                                   | ((0x7ffc0U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x10U)) 
                                                                          << 6U)) 
                                                                      | ((0x3eU 
                                                                          & (vlSelf->top__DOT___4282_[0U] 
                                                                             >> 4U)) 
                                                                         | (1U 
                                                                            & (vlSelf->top__DOT___3859_ 
                                                                               >> 0x1aU))))))))))) 
                      >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                              ((0xffff0000U 
                                                                & ((vlSelf->top__DOT___4282_[2U] 
                                                                    << 0x1cU) 
                                                                   | (0xfff0000U 
                                                                      & (vlSelf->top__DOT___4282_[1U] 
                                                                         >> 4U)))) 
                                                               | ((0x8000U 
                                                                   & (vlSelf->top__DOT___4740_[3U] 
                                                                      << 7U)) 
                                                                  | ((0x7000U 
                                                                      & (vlSelf->top__DOT___4282_[1U] 
                                                                         >> 4U)) 
                                                                     | ((0xffcU 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x2cU)) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & (vlSelf->top__DOT___4740_[2U] 
                                                                               >> 0x19U)) 
                                                                           | (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x2aU)))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((0x80000000U 
                                                                 & (vlSelf->top__DOT___4740_[2U] 
                                                                    << 7U)) 
                                                                | ((0x7ff00000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3953_ 
                                                                                >> 0x1eU)) 
                                                                       << 0x14U)) 
                                                                   | ((0x80000U 
                                                                       & (vlSelf->top__DOT___4740_[2U] 
                                                                          << 7U)) 
                                                                      | ((0x7ffc0U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x10U)) 
                                                                             << 6U)) 
                                                                         | ((0x3eU 
                                                                             & (vlSelf->top__DOT___4282_[0U] 
                                                                                >> 4U)) 
                                                                            | (1U 
                                                                               & (vlSelf->top__DOT___3859_ 
                                                                                >> 0x1aU)))))))))) 
                                            >> 0x20U)) 
                                   << 4U));
    __Vtemp_2[2U] = ((IData)(((((QData)((IData)(((0xffff0000U 
                                                  & ((vlSelf->top__DOT___4282_[2U] 
                                                      << 0x1cU) 
                                                     | (0xfff0000U 
                                                        & (vlSelf->top__DOT___4282_[1U] 
                                                           >> 4U)))) 
                                                 | ((0x8000U 
                                                     & (vlSelf->top__DOT___4740_[3U] 
                                                        << 7U)) 
                                                    | ((0x7000U 
                                                        & (vlSelf->top__DOT___4282_[1U] 
                                                           >> 4U)) 
                                                       | ((0xffcU 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___3953_ 
                                                                       >> 0x2cU)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & (vlSelf->top__DOT___4740_[2U] 
                                                                 >> 0x19U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3953_ 
                                                                           >> 0x2aU)))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT___4740_[2U] 
                                                                 << 7U)) 
                                                             | ((0x7ff00000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3953_ 
                                                                             >> 0x1eU)) 
                                                                    << 0x14U)) 
                                                                | ((0x80000U 
                                                                    & (vlSelf->top__DOT___4740_[2U] 
                                                                       << 7U)) 
                                                                   | ((0x7ffc0U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x10U)) 
                                                                          << 6U)) 
                                                                      | ((0x3eU 
                                                                          & (vlSelf->top__DOT___4282_[0U] 
                                                                             >> 4U)) 
                                                                         | (1U 
                                                                            & (vlSelf->top__DOT___3859_ 
                                                                               >> 0x1aU)))))))))) 
                              >> 0x20U)) >> 0x1cU);
    __Vtemp_3[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0552_)) 
                                << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0318_)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(vlSelf->top__DOT___1011_)) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (0xfdaedU 
                                                                     | ((0xfff00000U 
                                                                         & ((vlSelf->top__DOT___4281_[2U] 
                                                                             << 0x1fU) 
                                                                            | (0x7ff00000U 
                                                                               & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)))) 
                                                                        | ((0x2000U 
                                                                            & (vlSelf->top__DOT___4281_[1U] 
                                                                               >> 1U)) 
                                                                           | ((0x400U 
                                                                               & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                              | ((0x100U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                                | (0x10U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U))))))))) 
                                                    << 0x1dU) 
                                                   | (QData)((IData)(
                                                                     (0x100U 
                                                                      | ((0x1fc00000U 
                                                                          & ((vlSelf->top__DOT___4281_[1U] 
                                                                              << 0x1cU) 
                                                                             | (0xfc00000U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)))) 
                                                                         | ((0x200000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0x14U)) 
                                                                                << 0x15U)) 
                                                                            | ((0x1ff000U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)) 
                                                                               | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0xaU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___4141_) 
                                                                                >> 4U)) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___4141_) 
                                                                                >> 4U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)))))))))))))))))) 
                      << 4U) | (((IData)(vlSelf->top__DOT___0300_) 
                                 << 3U) | (((IData)(vlSelf->top__DOT___3174_) 
                                            << 2U) 
                                           | ((IData)(vlSelf->top__DOT___1192_) 
                                              << 1U))));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0552_)) 
                                << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0318_)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(vlSelf->top__DOT___1011_)) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (0xfdaedU 
                                                                     | ((0xfff00000U 
                                                                         & ((vlSelf->top__DOT___4281_[2U] 
                                                                             << 0x1fU) 
                                                                            | (0x7ff00000U 
                                                                               & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)))) 
                                                                        | ((0x2000U 
                                                                            & (vlSelf->top__DOT___4281_[1U] 
                                                                               >> 1U)) 
                                                                           | ((0x400U 
                                                                               & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                              | ((0x100U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                                | (0x10U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U))))))))) 
                                                    << 0x1dU) 
                                                   | (QData)((IData)(
                                                                     (0x100U 
                                                                      | ((0x1fc00000U 
                                                                          & ((vlSelf->top__DOT___4281_[1U] 
                                                                              << 0x1cU) 
                                                                             | (0xfc00000U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)))) 
                                                                         | ((0x200000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0x14U)) 
                                                                                << 0x15U)) 
                                                                            | ((0x1ff000U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)) 
                                                                               | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0xaU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___4141_) 
                                                                                >> 4U)) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___4141_) 
                                                                                >> 4U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)))))))))))))))))) 
                      >> 0x1cU) | ((IData)(((((QData)((IData)(vlSelf->top__DOT___0552_)) 
                                              << 0x3fU) 
                                             | (((QData)((IData)(vlSelf->top__DOT___0318_)) 
                                                 << 0x3eU) 
                                                | (((QData)((IData)(vlSelf->top__DOT___1011_)) 
                                                    << 0x3dU) 
                                                   | (((QData)((IData)(
                                                                       (0xfdaedU 
                                                                        | ((0xfff00000U 
                                                                            & ((vlSelf->top__DOT___4281_[2U] 
                                                                                << 0x1fU) 
                                                                               | (0x7ff00000U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)))) 
                                                                           | ((0x2000U 
                                                                               & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                              | ((0x400U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                                | (0x10U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U))))))))) 
                                                       << 0x1dU) 
                                                      | (QData)((IData)(
                                                                        (0x100U 
                                                                         | ((0x1fc00000U 
                                                                             & ((vlSelf->top__DOT___4281_[1U] 
                                                                                << 0x1cU) 
                                                                                | (0xfc00000U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)))) 
                                                                            | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0x14U)) 
                                                                                << 0x15U)) 
                                                                               | ((0x1ff000U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0xaU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___4141_) 
                                                                                >> 4U)) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___4141_) 
                                                                                >> 4U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 4U));
    __Vtemp_3[2U] = ((IData)(((((QData)((IData)(vlSelf->top__DOT___0552_)) 
                                << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0318_)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(vlSelf->top__DOT___1011_)) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (0xfdaedU 
                                                                     | ((0xfff00000U 
                                                                         & ((vlSelf->top__DOT___4281_[2U] 
                                                                             << 0x1fU) 
                                                                            | (0x7ff00000U 
                                                                               & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)))) 
                                                                        | ((0x2000U 
                                                                            & (vlSelf->top__DOT___4281_[1U] 
                                                                               >> 1U)) 
                                                                           | ((0x400U 
                                                                               & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                              | ((0x100U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                                | (0x10U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U))))))))) 
                                                    << 0x1dU) 
                                                   | (QData)((IData)(
                                                                     (0x100U 
                                                                      | ((0x1fc00000U 
                                                                          & ((vlSelf->top__DOT___4281_[1U] 
                                                                              << 0x1cU) 
                                                                             | (0xfc00000U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)))) 
                                                                         | ((0x200000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0x14U)) 
                                                                                << 0x15U)) 
                                                                            | ((0x1ff000U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)) 
                                                                               | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0xaU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___4141_) 
                                                                                >> 4U)) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___4141_) 
                                                                                >> 4U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U))))))))))))))))) 
                              >> 0x20U)) >> 0x1cU);
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    __Vtemp_6[0U] = (IData)((((QData)((IData)(((0xfffff800U 
                                                & (vlSelf->top__DOT___4207_ 
                                                   << 9U)) 
                                               | (0x7ffU 
                                                  & (IData)(
                                                            (0xffffffffULL 
                                                             & ((((((QData)((IData)(
                                                                                ((0xff0000U 
                                                                                & (vlSelf->top__DOT___4282_[1U] 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___4740_[3U] 
                                                                                << 7U)) 
                                                                                | ((0x7000U 
                                                                                & (vlSelf->top__DOT___4282_[1U] 
                                                                                >> 4U)) 
                                                                                | ((0xffcU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x2cU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4740_[2U] 
                                                                                >> 0x19U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x2aU)))))))))) 
                                                                    << 0x24U) 
                                                                   | ((QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->top__DOT___4740_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x7ff00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x1eU)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4740_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x7ffc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x10U)) 
                                                                                << 6U)) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4282_[0U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0x1aU))))))))) 
                                                                      << 4U)) 
                                                                  | (QData)((IData)(
                                                                                ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0147_))))))) 
                                                                 + 
                                                                 ((((QData)((IData)(
                                                                                (0xfdaedU 
                                                                                | ((0x7f00000U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                                | (0x10U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U))))))))) 
                                                                    << 0x21U) 
                                                                   | ((QData)((IData)(
                                                                                (0x100U 
                                                                                | ((0x1fc00000U 
                                                                                & ((vlSelf->top__DOT___4281_[1U] 
                                                                                << 0x1cU) 
                                                                                | (0xfc00000U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)))) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0x14U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x1ff000U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0xaU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___4141_) 
                                                                                >> 4U)) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___4141_) 
                                                                                >> 4U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U))))))))))))) 
                                                                      << 4U)) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___3174_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___1192_) 
                                                                                << 1U))))))) 
                                                                >> 0x1cU))))))) 
                              << 0x1cU) | (QData)((IData)(
                                                          (((IData)(vlSelf->top__DOT___0787_) 
                                                            << 0x1bU) 
                                                           | ((0x7fff000U 
                                                               & ((((0x7000000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x1eU)) 
                                                                        << 0x18U)) 
                                                                    | ((0x800000U 
                                                                        & (vlSelf->top__DOT___4740_[2U] 
                                                                           << 0xbU)) 
                                                                       | ((0x7ffc00U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x10U)) 
                                                                              << 0xaU)) 
                                                                          | ((0x3e0U 
                                                                              & vlSelf->top__DOT___4282_[0U]) 
                                                                             | (0x10U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0x16U)))))) 
                                                                   | ((8U 
                                                                       & ((IData)(vlSelf->top__DOT___7185_) 
                                                                          << 1U)) 
                                                                      | ((4U 
                                                                          & (vlSelf->top__DOT___3859_ 
                                                                             >> 0x16U)) 
                                                                         | (((IData)(vlSelf->top__DOT___3654_) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->top__DOT___0147_))))) 
                                                                  + 
                                                                  (0x1000U 
                                                                   | (((0x4000000U 
                                                                        & vlSelf->top__DOT___4281_[0U]) 
                                                                       | ((0x2000000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0x14U)) 
                                                                              << 0x19U)) 
                                                                          | ((0x1ff0000U 
                                                                              & vlSelf->top__DOT___4281_[0U]) 
                                                                             | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0xaU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & vlSelf->top__DOT___4281_[0U]) 
                                                                                | ((0x2000U 
                                                                                & (IData)(vlSelf->top__DOT___4141_)) 
                                                                                | ((0xfc0U 
                                                                                & (IData)(vlSelf->top__DOT___4141_)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 1U)) 
                                                                                << 5U)) 
                                                                                | (0x10U 
                                                                                & vlSelf->top__DOT___4281_[0U]))))))))) 
                                                                      | (((IData)(vlSelf->top__DOT___0300_) 
                                                                          << 3U) 
                                                                         | (((IData)(vlSelf->top__DOT___3174_) 
                                                                             << 2U) 
                                                                            | ((IData)(vlSelf->top__DOT___1192_) 
                                                                               << 1U))))))) 
                                                              | (((IData)(vlSelf->top__DOT___1525_) 
                                                                  << 0xbU) 
                                                                 | (0x7ffU 
                                                                    & ((((0x400U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x10U)) 
                                                                             << 0xaU)) 
                                                                         | ((0x3e0U 
                                                                             & vlSelf->top__DOT___4282_[0U]) 
                                                                            | (0x10U 
                                                                               & (vlSelf->top__DOT___3859_ 
                                                                                >> 0x16U)))) 
                                                                        | ((8U 
                                                                            & ((IData)(vlSelf->top__DOT___7185_) 
                                                                               << 1U)) 
                                                                           | ((4U 
                                                                               & (vlSelf->top__DOT___3859_ 
                                                                                >> 0x16U)) 
                                                                              | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0147_))))) 
                                                                       + 
                                                                       (((0x7c0U 
                                                                          & (IData)(vlSelf->top__DOT___4141_)) 
                                                                         | ((0x20U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 1U)) 
                                                                                << 5U)) 
                                                                            | (0x10U 
                                                                               & vlSelf->top__DOT___4281_[0U]))) 
                                                                        | (((IData)(vlSelf->top__DOT___0300_) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->top__DOT___3174_) 
                                                                               << 2U) 
                                                                              | ((IData)(vlSelf->top__DOT___1192_) 
                                                                                << 1U)))))))))))));
    __Vtemp_6[1U] = ((0xf0000000U & __Vtemp_4[1U]) 
                     | (IData)(((((QData)((IData)((
                                                   (0xfffff800U 
                                                    & (vlSelf->top__DOT___4207_ 
                                                       << 9U)) 
                                                   | (0x7ffU 
                                                      & (IData)(
                                                                (0xffffffffULL 
                                                                 & ((((((QData)((IData)(
                                                                                ((0xff0000U 
                                                                                & (vlSelf->top__DOT___4282_[1U] 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___4740_[3U] 
                                                                                << 7U)) 
                                                                                | ((0x7000U 
                                                                                & (vlSelf->top__DOT___4282_[1U] 
                                                                                >> 4U)) 
                                                                                | ((0xffcU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x2cU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4740_[2U] 
                                                                                >> 0x19U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x2aU)))))))))) 
                                                                        << 0x24U) 
                                                                       | ((QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->top__DOT___4740_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x7ff00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x1eU)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___4740_[2U] 
                                                                                << 7U)) 
                                                                                | ((0x7ffc0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x10U)) 
                                                                                << 6U)) 
                                                                                | ((0x3eU 
                                                                                & (vlSelf->top__DOT___4282_[0U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0x1aU))))))))) 
                                                                          << 4U)) 
                                                                      | (QData)((IData)(
                                                                                ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0147_))))))) 
                                                                     + 
                                                                     ((((QData)((IData)(
                                                                                (0xfdaedU 
                                                                                | ((0x7f00000U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U)) 
                                                                                | (0x10U 
                                                                                & (vlSelf->top__DOT___4281_[1U] 
                                                                                >> 1U))))))))) 
                                                                        << 0x21U) 
                                                                       | ((QData)((IData)(
                                                                                (0x100U 
                                                                                | ((0x1fc00000U 
                                                                                & ((vlSelf->top__DOT___4281_[1U] 
                                                                                << 0x1cU) 
                                                                                | (0xfc00000U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)))) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0x14U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x1ff000U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0xaU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___4141_) 
                                                                                >> 4U)) 
                                                                                | ((0xfcU 
                                                                                & ((IData)(vlSelf->top__DOT___4141_) 
                                                                                >> 4U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___4281_[0U] 
                                                                                >> 4U))))))))))))) 
                                                                          << 4U)) 
                                                                      | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___3174_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___1192_) 
                                                                                << 1U))))))) 
                                                                    >> 0x1cU))))))) 
                                  << 0x1cU) | (QData)((IData)(
                                                              (((IData)(vlSelf->top__DOT___0787_) 
                                                                << 0x1bU) 
                                                               | ((0x7fff000U 
                                                                   & ((((0x7000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x1eU)) 
                                                                            << 0x18U)) 
                                                                        | ((0x800000U 
                                                                            & (vlSelf->top__DOT___4740_[2U] 
                                                                               << 0xbU)) 
                                                                           | ((0x7ffc00U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x10U)) 
                                                                                << 0xaU)) 
                                                                              | ((0x3e0U 
                                                                                & vlSelf->top__DOT___4282_[0U]) 
                                                                                | (0x10U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0x16U)))))) 
                                                                       | ((8U 
                                                                           & ((IData)(vlSelf->top__DOT___7185_) 
                                                                              << 1U)) 
                                                                          | ((4U 
                                                                              & (vlSelf->top__DOT___3859_ 
                                                                                >> 0x16U)) 
                                                                             | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0147_))))) 
                                                                      + 
                                                                      (0x1000U 
                                                                       | (((0x4000000U 
                                                                            & vlSelf->top__DOT___4281_[0U]) 
                                                                           | ((0x2000000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0x14U)) 
                                                                                << 0x19U)) 
                                                                              | ((0x1ff0000U 
                                                                                & vlSelf->top__DOT___4281_[0U]) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 0xaU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & vlSelf->top__DOT___4281_[0U]) 
                                                                                | ((0x2000U 
                                                                                & (IData)(vlSelf->top__DOT___4141_)) 
                                                                                | ((0xfc0U 
                                                                                & (IData)(vlSelf->top__DOT___4141_)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 1U)) 
                                                                                << 5U)) 
                                                                                | (0x10U 
                                                                                & vlSelf->top__DOT___4281_[0U]))))))))) 
                                                                          | (((IData)(vlSelf->top__DOT___0300_) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->top__DOT___3174_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___1192_) 
                                                                                << 1U))))))) 
                                                                  | (((IData)(vlSelf->top__DOT___1525_) 
                                                                      << 0xbU) 
                                                                     | (0x7ffU 
                                                                        & ((((0x400U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT___3953_ 
                                                                                >> 0x10U)) 
                                                                                << 0xaU)) 
                                                                             | ((0x3e0U 
                                                                                & vlSelf->top__DOT___4282_[0U]) 
                                                                                | (0x10U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0x16U)))) 
                                                                            | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 1U)) 
                                                                               | ((4U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0147_))))) 
                                                                           + 
                                                                           (((0x7c0U 
                                                                              & (IData)(vlSelf->top__DOT___4141_)) 
                                                                             | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4784_ 
                                                                                >> 1U)) 
                                                                                << 5U)) 
                                                                                | (0x10U 
                                                                                & vlSelf->top__DOT___4281_[0U]))) 
                                                                            | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->top__DOT___3174_) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->top__DOT___1192_) 
                                                                                << 1U)))))))))))) 
                                >> 0x20U)));
    vlSelf->top__DOT___4280_[0U] = __Vtemp_6[0U];
    vlSelf->top__DOT___4280_[1U] = __Vtemp_6[1U];
    vlSelf->top__DOT___4280_[2U] = (0xfU & __Vtemp_4[2U]);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__842(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__842\n"); );
    // Body
    vlSelf->top__DOT___2762_ = ((IData)(vlSelf->top__DOT___2887_) 
                                | ((IData)(vlSelf->top__DOT___7074_) 
                                   >> 6U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__845(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__845\n"); );
    // Body
    vlSelf->top__DOT___3575_ = ((IData)(vlSelf->top__DOT___0112_) 
                                | (IData)(vlSelf->top__DOT___0675_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__846(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__846\n"); );
    // Body
    vlSelf->top__DOT___1686_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_h2b326b78__0) 
                                       + (IData)(vlSelf->top__DOT____VdfgTmp_h66e715ed__0)) 
                                      >> 4U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__847(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__847\n"); );
    // Body
    vlSelf->top__DOT___0569_ = (1U & (~ (((IData)(vlSelf->top__DOT___0923_) 
                                          & ((IData)(vlSelf->top__DOT___0730_) 
                                             ^ (IData)(vlSelf->top__DOT___1831_))) 
                                         | (IData)(vlSelf->top__DOT___1453_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__849(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__849\n"); );
    // Body
    vlSelf->top__DOT___0188_ = ((IData)(vlSelf->top__DOT___1061_) 
                                & (~ (IData)(vlSelf->top__DOT___0474_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__850(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__850\n"); );
    // Body
    vlSelf->top__DOT___4445_[0U] = ((0xffff0003U & 
                                     vlSelf->top__DOT___4445_[0U]) 
                                    | (0xfffffffcU 
                                       & (((IData)(vlSelf->top__DOT___7218_) 
                                           << 3U) | 
                                          ((IData)(vlSelf->top__DOT___1184_) 
                                           << 2U))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__852(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__852\n"); );
    // Body
    vlSelf->top__DOT___1555_ = (1U & ((((0x10000U & 
                                         ((IData)(vlSelf->top__DOT___4159_) 
                                          << 0xbU)) 
                                        | (((IData)(vlSelf->top__DOT___1304_) 
                                            << 0xfU) 
                                           | (((IData)(vlSelf->top__DOT___0102_) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->top__DOT___0586_) 
                                                  << 0xdU) 
                                                 | ((0x1000U 
                                                     & ((~ (IData)(vlSelf->top__DOT___0038_)) 
                                                        << 0xcU)) 
                                                    | (((IData)(vlSelf->top__DOT___0116_) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->top__DOT___1594_) 
                                                           << 0xaU) 
                                                          | ((0x200U 
                                                              & (vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[2U] 
                                                                 << 8U)) 
                                                             | (((IData)(vlSelf->top__DOT___0223_) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->top__DOT___0406_) 
                                                                    << 7U) 
                                                                   | ((0x40U 
                                                                       & ((IData)(vlSelf->top__DOT___7006_) 
                                                                          << 2U)) 
                                                                      | ((0x20U 
                                                                          & ((IData)(vlSelf->top__DOT___7006_) 
                                                                             << 2U)) 
                                                                         | ((0x10U 
                                                                             & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 2U)) 
                                                                            | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 2U)) 
                                                                               | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0097_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0830_))))))))))))))))) 
                                       + ((0x1c000U 
                                           & vlSelf->top__DOT___4285_) 
                                          | ((0x2000U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT___6980_ 
                                                          >> 0x15U)) 
                                                 << 0xdU)) 
                                             | ((0x1f80U 
                                                 & vlSelf->top__DOT___4285_) 
                                                | ((0x40U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___6980_ 
                                                                >> 0xeU)) 
                                                       << 6U)) 
                                                   | (0x3fU 
                                                      & vlSelf->top__DOT___4285_)))))) 
                                      >> 0x10U));
    vlSelf->top__DOT___4284_ = ((0xfe0000U & ((0xc00000U 
                                               | (((IData)(vlSelf->top__DOT___0645_) 
                                                   << 0x15U) 
                                                  | (((IData)(vlSelf->top__DOT___3153_) 
                                                      << 0x14U) 
                                                     | (((IData)(vlSelf->top__DOT___3698_) 
                                                         << 0x13U) 
                                                        | (((IData)(vlSelf->top__DOT___2040_) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->top__DOT___2254_) 
                                                               << 0x11U) 
                                                              | ((0x10000U 
                                                                  & ((IData)(vlSelf->top__DOT___4159_) 
                                                                     << 0xbU)) 
                                                                 | (((IData)(vlSelf->top__DOT___1304_) 
                                                                     << 0xfU) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0xeU) 
                                                                       | (((IData)(vlSelf->top__DOT___0586_) 
                                                                           << 0xdU) 
                                                                          | ((0x1000U 
                                                                              & ((~ (IData)(vlSelf->top__DOT___0038_)) 
                                                                                << 0xcU)) 
                                                                             | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___1594_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[2U] 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0223_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0406_) 
                                                                                << 7U) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0097_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0830_))))))))))))))))))))))) 
                                              + ((0x800000U 
                                                  & (vlSelf->top__DOT___4248_[2U] 
                                                     >> 6U)) 
                                                 | ((0x7fc000U 
                                                     & vlSelf->top__DOT___4285_) 
                                                    | ((0x2000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___6980_ 
                                                                    >> 0x15U)) 
                                                           << 0xdU)) 
                                                       | ((0x1f80U 
                                                           & vlSelf->top__DOT___4285_) 
                                                          | ((0x40U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___6980_ 
                                                                          >> 0xeU)) 
                                                                 << 6U)) 
                                                             | (0x3fU 
                                                                & vlSelf->top__DOT___4285_)))))))) 
                                | (((IData)(vlSelf->top__DOT___1555_) 
                                    << 0x10U) | ((0xffc0U 
                                                  & ((((IData)(vlSelf->top__DOT___1304_) 
                                                       << 0xfU) 
                                                      | (((IData)(vlSelf->top__DOT___0102_) 
                                                          << 0xeU) 
                                                         | (((IData)(vlSelf->top__DOT___0586_) 
                                                             << 0xdU) 
                                                            | ((0x1000U 
                                                                & ((~ (IData)(vlSelf->top__DOT___0038_)) 
                                                                   << 0xcU)) 
                                                               | (((IData)(vlSelf->top__DOT___0116_) 
                                                                   << 0xbU) 
                                                                  | (((IData)(vlSelf->top__DOT___1594_) 
                                                                      << 0xaU) 
                                                                     | ((0x200U 
                                                                         & (vlSelf->top__DOT____VdfgTmp_hed41f4bb__0[2U] 
                                                                            << 8U)) 
                                                                        | (((IData)(vlSelf->top__DOT___0223_) 
                                                                            << 8U) 
                                                                           | (((IData)(vlSelf->top__DOT___0406_) 
                                                                               << 7U) 
                                                                              | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0097_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0830_)))))))))))))))) 
                                                     + 
                                                     ((0xc000U 
                                                       & vlSelf->top__DOT___4285_) 
                                                      | ((0x2000U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___6980_ 
                                                                      >> 0x15U)) 
                                                             << 0xdU)) 
                                                         | ((0x1f80U 
                                                             & vlSelf->top__DOT___4285_) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___6980_ 
                                                                            >> 0xeU)) 
                                                                   << 6U)) 
                                                               | (0x3fU 
                                                                  & vlSelf->top__DOT___4285_))))))) 
                                                 | (((IData)(vlSelf->top__DOT___2165_) 
                                                     << 5U) 
                                                    | ((0x10U 
                                                        & (((0x10U 
                                                             & ((IData)(vlSelf->top__DOT___7006_) 
                                                                << 2U)) 
                                                            | ((8U 
                                                                & ((IData)(vlSelf->top__DOT___7006_) 
                                                                   << 2U)) 
                                                               | ((4U 
                                                                   & ((IData)(vlSelf->top__DOT___7006_) 
                                                                      << 2U)) 
                                                                  | (((IData)(vlSelf->top__DOT___0097_) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top__DOT___0830_))))) 
                                                           + vlSelf->top__DOT___4285_)) 
                                                       | (((IData)(vlSelf->top__DOT___2989_) 
                                                           << 3U) 
                                                          | (7U 
                                                             & (((4U 
                                                                  & ((IData)(vlSelf->top__DOT___7006_) 
                                                                     << 2U)) 
                                                                 | (((IData)(vlSelf->top__DOT___0097_) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelf->top__DOT___0830_))) 
                                                                + vlSelf->top__DOT___4285_))))))));
    vlSelf->top__DOT___1554_ = ((IData)(vlSelf->top__DOT___1555_) 
                                & (IData)(vlSelf->top__DOT___0275_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__854(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__854\n"); );
    // Body
    vlSelf->top__DOT___3083_ = ((IData)(vlSelf->top__DOT___0237_) 
                                ^ (IData)(vlSelf->top__DOT___1014_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__855(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__855\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_58;
    VlWide<3>/*95:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_60;
    // Body
    vlSelf->top__DOT___3870_ = (((IData)(vlSelf->top__DOT___1153_) 
                                 << 0x1aU) | (((IData)(vlSelf->top__DOT___2244_) 
                                               << 0x19U) 
                                              | ((0x1800000U 
                                                  & (vlSelf->top__DOT___7025_ 
                                                     << 3U)) 
                                                 | ((0x400000U 
                                                     & (vlSelf->top__DOT___7025_ 
                                                        << 3U)) 
                                                    | ((0x3fe000U 
                                                        & (vlSelf->top__DOT___7025_ 
                                                           << 3U)) 
                                                       | ((0x1000U 
                                                           & (vlSelf->top__DOT___7025_ 
                                                              << 3U)) 
                                                          | ((0xe00U 
                                                              & (vlSelf->top__DOT___7025_ 
                                                                 << 3U)) 
                                                             | ((0x100U 
                                                                 & (vlSelf->top__DOT___7025_ 
                                                                    << 3U)) 
                                                                | ((0xf8U 
                                                                    & (vlSelf->top__DOT___7025_ 
                                                                       << 3U)) 
                                                                   | (((IData)(vlSelf->top__DOT___1667_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___1672_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___0723_))))))))))));
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & (IData)(
                                                            (vlSelf->top__DOT___7215_ 
                                                             >> 0x13U))))) 
                              << 0x3aU) | (((QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSelf->top__DOT___3900_[1U] 
                                                                >> 0x10U)))) 
                                            << 0x35U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___7215_ 
                                                                           >> 0xdU))))) 
                                               << 0x34U) 
                                              | (((QData)((IData)(
                                                                  (0xfffU 
                                                                   & (vlSelf->top__DOT___3900_[1U] 
                                                                      >> 3U)))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->top__DOT___7215_)))) 
                                                     << 0x27U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___2114_)) 
                                                        << 0x26U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___0415_)) 
                                                           << 0x25U) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___0830_)) 
                                                              << 0x24U) 
                                                             | (((QData)((IData)(
                                                                                (vlSelf->top__DOT___3857_ 
                                                                                >> 0x1eU))) 
                                                                 << 0x22U) 
                                                                | (((QData)((IData)(vlSelf->top__DOT___1814_)) 
                                                                    << 0x21U) 
                                                                   | (((QData)((IData)(vlSelf->top__DOT___3475_)) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                ((0xffffe000U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3473_) 
                                                                                << 0xcU) 
                                                                                | ((0xc00U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3515_) 
                                                                                << 9U) 
                                                                                | ((0x1f0U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0479_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0638_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1192_)))))))))))))))))))))));
    __Vtemp_1[1U] = ((0xf8000000U & (vlSelf->top__DOT___3900_[1U] 
                                     << 5U)) | (IData)(
                                                       ((((QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U))))) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(
                                                                             (0x1fU 
                                                                              & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))) 
                                                             << 0x35U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU))))) 
                                                                << 0x34U) 
                                                               | (((QData)((IData)(
                                                                                (0xfffU 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 3U)))) 
                                                                   << 0x28U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___7215_)))) 
                                                                      << 0x27U) 
                                                                     | (((QData)((IData)(vlSelf->top__DOT___2114_)) 
                                                                         << 0x26U) 
                                                                        | (((QData)((IData)(vlSelf->top__DOT___0415_)) 
                                                                            << 0x25U) 
                                                                           | (((QData)((IData)(vlSelf->top__DOT___0830_)) 
                                                                               << 0x24U) 
                                                                              | (((QData)((IData)(
                                                                                (vlSelf->top__DOT___3857_ 
                                                                                >> 0x1eU))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1814_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3475_)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0xffffe000U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3473_) 
                                                                                << 0xcU) 
                                                                                | ((0xc00U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3515_) 
                                                                                << 9U) 
                                                                                | ((0x1f0U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 5U)) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0479_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0638_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1192_)))))))))))))))))))))) 
                                                        >> 0x20U)));
    __Vtemp_9[2U] = ((0x7fc00000U & (vlSelf->top__DOT___3870_ 
                                     << 9U)) | ((0x200000U 
                                                 & (vlSelf->top__DOT___7025_ 
                                                    << 0xcU)) 
                                                | ((0x1c0000U 
                                                    & (vlSelf->top__DOT___3870_ 
                                                       << 9U)) 
                                                   | ((0x20000U 
                                                       & (vlSelf->top__DOT___7025_ 
                                                          << 0xcU)) 
                                                      | ((0x1f000U 
                                                          & (vlSelf->top__DOT___3870_ 
                                                             << 9U)) 
                                                         | ((0x800U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT___7215_ 
                                                                         >> 0x24U)) 
                                                                << 0xbU)) 
                                                            | ((0x7f8U 
                                                                & ((vlSelf->top__DOT___3900_[2U] 
                                                                    << 5U) 
                                                                   | (0x18U 
                                                                      & (vlSelf->top__DOT___3900_[1U] 
                                                                         >> 0x1bU)))) 
                                                               | ((4U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___7215_ 
                                                                               >> 0x1bU)) 
                                                                      << 2U)) 
                                                                  | (3U 
                                                                     & (vlSelf->top__DOT___3900_[1U] 
                                                                        >> 0x1bU))))))))));
    vlSelf->top__DOT___4247_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4247_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4247_[2U] = ((0x80000000U & 
                                     (vlSelf->top__DOT___7025_ 
                                      << 0xcU)) | __Vtemp_9[2U]);
    __Vtemp_11[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)))))))))))))))) 
                       << 0x1cU) | (((IData)(vlSelf->top__DOT___3576_) 
                                     << 0x1bU) | ((0x4000000U 
                                                   & (vlSelf->top__DOT___3981_ 
                                                      << 0x16U)) 
                                                  | ((0x3fe0000U 
                                                      & vlSelf->top__DOT___4248_[0U]) 
                                                     | (((IData)(vlSelf->top__DOT___1870_) 
                                                         << 0x10U) 
                                                        | ((0xfffcU 
                                                            & vlSelf->top__DOT___4248_[0U]) 
                                                           | (((IData)(vlSelf->top__DOT___0603_) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->top__DOT___0830_))))))));
    __Vtemp_11[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)))))))))))))))) 
                       >> 4U) | ((IData)(((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                            << 0x3fU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U))))))))))))))) 
                                          >> 0x20U)) 
                                 << 0x1cU));
    __Vtemp_11[2U] = ((IData)(((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U))))))))))))))) 
                               >> 0x20U)) >> 4U);
    __Vtemp_15[0U] = __Vtemp_11[0U];
    __Vtemp_15[1U] = __Vtemp_11[1U];
    __Vtemp_15[2U] = ((0x80000000U & vlSelf->top__DOT___4248_[2U]) 
                      | ((0x40000000U & ((IData)((vlSelf->top__DOT___6980_ 
                                                  >> 0x20U)) 
                                         << 0x1eU)) 
                         | ((0x20000000U & vlSelf->top__DOT___4248_[2U]) 
                            | (((IData)(vlSelf->top__DOT___2007_) 
                                << 0x1cU) | __Vtemp_11[2U]))));
    __Vtemp_16[0U] = ((0xffffe000U & (vlSelf->top__DOT___3857_ 
                                      << 4U)) | (((IData)(vlSelf->top__DOT___3473_) 
                                                  << 0xcU) 
                                                 | ((0xc00U 
                                                     & (vlSelf->top__DOT___3857_ 
                                                        << 4U)) 
                                                    | (((IData)(vlSelf->top__DOT___3515_) 
                                                        << 9U) 
                                                       | ((0x1f0U 
                                                           & (vlSelf->top__DOT___3857_ 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___7096_ 
                                                                          >> 5U)) 
                                                                 << 3U)) 
                                                             | (((IData)(vlSelf->top__DOT___0479_) 
                                                                 << 2U) 
                                                                | (((IData)(vlSelf->top__DOT___0638_) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelf->top__DOT___1192_)))))))));
    __Vtemp_16[1U] = (IData)((((QData)((IData)((1U 
                                                & (vlSelf->top__DOT___7025_ 
                                                   >> 0x13U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (0x1ffU 
                                                              & (vlSelf->top__DOT___3870_ 
                                                                 >> 0xdU)))) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT___7025_ 
                                                                    >> 9U)))) 
                                                << 0x35U) 
                                               | (((QData)((IData)(
                                                                   ((0xe0000000U 
                                                                     & (vlSelf->top__DOT___3870_ 
                                                                        << 0x14U)) 
                                                                    | ((0x10000000U 
                                                                        & (vlSelf->top__DOT___7025_ 
                                                                           << 0x17U)) 
                                                                       | ((0xf800000U 
                                                                           & (vlSelf->top__DOT___3870_ 
                                                                              << 0x14U)) 
                                                                          | ((0x400000U 
                                                                              & (vlSelf->top__DOT___4247_[2U] 
                                                                                << 0xbU)) 
                                                                             | ((0x3fc000U 
                                                                                & ((vlSelf->top__DOT___3900_[2U] 
                                                                                << 0x10U) 
                                                                                | (0xc000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))))))))))) 
                                                   << 0x15U) 
                                                  | (QData)((IData)(
                                                                    ((0x100000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                         << 0x14U)) 
                                                                     | ((0xfff00U 
                                                                         & (vlSelf->top__DOT___3900_[1U] 
                                                                            << 5U)) 
                                                                        | ((0x80U 
                                                                            & vlSelf->top__DOT___4247_[1U]) 
                                                                           | (((IData)(vlSelf->top__DOT___2114_) 
                                                                               << 6U) 
                                                                              | (((IData)(vlSelf->top__DOT___0415_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((0xcU 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___3475_))))))))))))))));
    __Vtemp_16[2U] = (IData)(((((QData)((IData)((1U 
                                                 & (vlSelf->top__DOT___7025_ 
                                                    >> 0x13U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0x1ffU 
                                                               & (vlSelf->top__DOT___3870_ 
                                                                  >> 0xdU)))) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT___7025_ 
                                                                     >> 9U)))) 
                                                 << 0x35U) 
                                                | (((QData)((IData)(
                                                                    ((0xe0000000U 
                                                                      & (vlSelf->top__DOT___3870_ 
                                                                         << 0x14U)) 
                                                                     | ((0x10000000U 
                                                                         & (vlSelf->top__DOT___7025_ 
                                                                            << 0x17U)) 
                                                                        | ((0xf800000U 
                                                                            & (vlSelf->top__DOT___3870_ 
                                                                               << 0x14U)) 
                                                                           | ((0x400000U 
                                                                               & (vlSelf->top__DOT___4247_[2U] 
                                                                                << 0xbU)) 
                                                                              | ((0x3fc000U 
                                                                                & ((vlSelf->top__DOT___3900_[2U] 
                                                                                << 0x10U) 
                                                                                | (0xc000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))))))))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                          << 0x14U)) 
                                                                      | ((0xfff00U 
                                                                          & (vlSelf->top__DOT___3900_[1U] 
                                                                             << 5U)) 
                                                                         | ((0x80U 
                                                                             & vlSelf->top__DOT___4247_[1U]) 
                                                                            | (((IData)(vlSelf->top__DOT___2114_) 
                                                                                << 6U) 
                                                                               | (((IData)(vlSelf->top__DOT___0415_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((0xcU 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___3475_))))))))))))))) 
                              >> 0x20U));
    VL_ADD_W(3, __Vtemp_17, __Vtemp_15, __Vtemp_16);
    vlSelf->top__DOT___2849_ = (1U & (__Vtemp_17[2U] 
                                      >> 0x15U));
    __Vtemp_18[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)))))))))))))))) 
                       << 0x1cU) | (((IData)(vlSelf->top__DOT___3576_) 
                                     << 0x1bU) | ((0x4000000U 
                                                   & (vlSelf->top__DOT___3981_ 
                                                      << 0x16U)) 
                                                  | ((0x3fe0000U 
                                                      & vlSelf->top__DOT___4248_[0U]) 
                                                     | (((IData)(vlSelf->top__DOT___1870_) 
                                                         << 0x10U) 
                                                        | ((0xfffcU 
                                                            & vlSelf->top__DOT___4248_[0U]) 
                                                           | (((IData)(vlSelf->top__DOT___0603_) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->top__DOT___0830_))))))));
    __Vtemp_18[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)))))))))))))))) 
                       >> 4U) | ((IData)(((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                            << 0x3fU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U))))))))))))))) 
                                          >> 0x20U)) 
                                 << 0x1cU));
    __Vtemp_18[2U] = ((IData)(((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U))))))))))))))) 
                               >> 0x20U)) >> 4U);
    __Vtemp_22[0U] = __Vtemp_18[0U];
    __Vtemp_22[1U] = __Vtemp_18[1U];
    __Vtemp_22[2U] = ((0x80000000U & vlSelf->top__DOT___4248_[2U]) 
                      | ((0x40000000U & ((IData)((vlSelf->top__DOT___6980_ 
                                                  >> 0x20U)) 
                                         << 0x1eU)) 
                         | ((0x20000000U & vlSelf->top__DOT___4248_[2U]) 
                            | (((IData)(vlSelf->top__DOT___2007_) 
                                << 0x1cU) | __Vtemp_18[2U]))));
    __Vtemp_23[0U] = ((0xffffe000U & (vlSelf->top__DOT___3857_ 
                                      << 4U)) | (((IData)(vlSelf->top__DOT___3473_) 
                                                  << 0xcU) 
                                                 | ((0xc00U 
                                                     & (vlSelf->top__DOT___3857_ 
                                                        << 4U)) 
                                                    | (((IData)(vlSelf->top__DOT___3515_) 
                                                        << 9U) 
                                                       | ((0x1f0U 
                                                           & (vlSelf->top__DOT___3857_ 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___7096_ 
                                                                          >> 5U)) 
                                                                 << 3U)) 
                                                             | (((IData)(vlSelf->top__DOT___0479_) 
                                                                 << 2U) 
                                                                | (((IData)(vlSelf->top__DOT___0638_) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelf->top__DOT___1192_)))))))));
    __Vtemp_23[1U] = (IData)((((QData)((IData)((1U 
                                                & (vlSelf->top__DOT___7025_ 
                                                   >> 0x13U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (0x1ffU 
                                                              & (vlSelf->top__DOT___3870_ 
                                                                 >> 0xdU)))) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT___7025_ 
                                                                    >> 9U)))) 
                                                << 0x35U) 
                                               | (((QData)((IData)(
                                                                   ((0xe0000000U 
                                                                     & (vlSelf->top__DOT___3870_ 
                                                                        << 0x14U)) 
                                                                    | ((0x10000000U 
                                                                        & (vlSelf->top__DOT___7025_ 
                                                                           << 0x17U)) 
                                                                       | ((0xf800000U 
                                                                           & (vlSelf->top__DOT___3870_ 
                                                                              << 0x14U)) 
                                                                          | ((0x400000U 
                                                                              & (vlSelf->top__DOT___4247_[2U] 
                                                                                << 0xbU)) 
                                                                             | ((0x3fc000U 
                                                                                & ((vlSelf->top__DOT___3900_[2U] 
                                                                                << 0x10U) 
                                                                                | (0xc000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))))))))))) 
                                                   << 0x15U) 
                                                  | (QData)((IData)(
                                                                    ((0x100000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                         << 0x14U)) 
                                                                     | ((0xfff00U 
                                                                         & (vlSelf->top__DOT___3900_[1U] 
                                                                            << 5U)) 
                                                                        | ((0x80U 
                                                                            & vlSelf->top__DOT___4247_[1U]) 
                                                                           | (((IData)(vlSelf->top__DOT___2114_) 
                                                                               << 6U) 
                                                                              | (((IData)(vlSelf->top__DOT___0415_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((0xcU 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___3475_))))))))))))))));
    __Vtemp_23[2U] = (IData)(((((QData)((IData)((1U 
                                                 & (vlSelf->top__DOT___7025_ 
                                                    >> 0x13U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0x1ffU 
                                                               & (vlSelf->top__DOT___3870_ 
                                                                  >> 0xdU)))) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT___7025_ 
                                                                     >> 9U)))) 
                                                 << 0x35U) 
                                                | (((QData)((IData)(
                                                                    ((0xe0000000U 
                                                                      & (vlSelf->top__DOT___3870_ 
                                                                         << 0x14U)) 
                                                                     | ((0x10000000U 
                                                                         & (vlSelf->top__DOT___7025_ 
                                                                            << 0x17U)) 
                                                                        | ((0xf800000U 
                                                                            & (vlSelf->top__DOT___3870_ 
                                                                               << 0x14U)) 
                                                                           | ((0x400000U 
                                                                               & (vlSelf->top__DOT___4247_[2U] 
                                                                                << 0xbU)) 
                                                                              | ((0x3fc000U 
                                                                                & ((vlSelf->top__DOT___3900_[2U] 
                                                                                << 0x10U) 
                                                                                | (0xc000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))))))))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                          << 0x14U)) 
                                                                      | ((0xfff00U 
                                                                          & (vlSelf->top__DOT___3900_[1U] 
                                                                             << 5U)) 
                                                                         | ((0x80U 
                                                                             & vlSelf->top__DOT___4247_[1U]) 
                                                                            | (((IData)(vlSelf->top__DOT___2114_) 
                                                                                << 6U) 
                                                                               | (((IData)(vlSelf->top__DOT___0415_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((0xcU 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___3475_))))))))))))))) 
                              >> 0x20U));
    VL_ADD_W(3, __Vtemp_24, __Vtemp_22, __Vtemp_23);
    vlSelf->top__DOT___3118_ = (1U & (__Vtemp_24[2U] 
                                      >> 6U));
    __Vtemp_25[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)))))))))))))))) 
                       << 0x1cU) | (((IData)(vlSelf->top__DOT___3576_) 
                                     << 0x1bU) | ((0x4000000U 
                                                   & (vlSelf->top__DOT___3981_ 
                                                      << 0x16U)) 
                                                  | ((0x3fe0000U 
                                                      & vlSelf->top__DOT___4248_[0U]) 
                                                     | (((IData)(vlSelf->top__DOT___1870_) 
                                                         << 0x10U) 
                                                        | ((0xfffcU 
                                                            & vlSelf->top__DOT___4248_[0U]) 
                                                           | (((IData)(vlSelf->top__DOT___0603_) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->top__DOT___0830_))))))));
    __Vtemp_25[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)))))))))))))))) 
                       >> 4U) | ((IData)(((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                            << 0x3fU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U))))))))))))))) 
                                          >> 0x20U)) 
                                 << 0x1cU));
    __Vtemp_25[2U] = ((IData)(((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U))))))))))))))) 
                               >> 0x20U)) >> 4U);
    __Vtemp_29[0U] = __Vtemp_25[0U];
    __Vtemp_29[1U] = __Vtemp_25[1U];
    __Vtemp_29[2U] = ((0x80000000U & vlSelf->top__DOT___4248_[2U]) 
                      | ((0x40000000U & ((IData)((vlSelf->top__DOT___6980_ 
                                                  >> 0x20U)) 
                                         << 0x1eU)) 
                         | ((0x20000000U & vlSelf->top__DOT___4248_[2U]) 
                            | (((IData)(vlSelf->top__DOT___2007_) 
                                << 0x1cU) | __Vtemp_25[2U]))));
    __Vtemp_30[0U] = ((0xffffe000U & (vlSelf->top__DOT___3857_ 
                                      << 4U)) | (((IData)(vlSelf->top__DOT___3473_) 
                                                  << 0xcU) 
                                                 | ((0xc00U 
                                                     & (vlSelf->top__DOT___3857_ 
                                                        << 4U)) 
                                                    | (((IData)(vlSelf->top__DOT___3515_) 
                                                        << 9U) 
                                                       | ((0x1f0U 
                                                           & (vlSelf->top__DOT___3857_ 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___7096_ 
                                                                          >> 5U)) 
                                                                 << 3U)) 
                                                             | (((IData)(vlSelf->top__DOT___0479_) 
                                                                 << 2U) 
                                                                | (((IData)(vlSelf->top__DOT___0638_) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelf->top__DOT___1192_)))))))));
    __Vtemp_30[1U] = (IData)((((QData)((IData)((1U 
                                                & (vlSelf->top__DOT___7025_ 
                                                   >> 0x13U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (0x1ffU 
                                                              & (vlSelf->top__DOT___3870_ 
                                                                 >> 0xdU)))) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT___7025_ 
                                                                    >> 9U)))) 
                                                << 0x35U) 
                                               | (((QData)((IData)(
                                                                   ((0xe0000000U 
                                                                     & (vlSelf->top__DOT___3870_ 
                                                                        << 0x14U)) 
                                                                    | ((0x10000000U 
                                                                        & (vlSelf->top__DOT___7025_ 
                                                                           << 0x17U)) 
                                                                       | ((0xf800000U 
                                                                           & (vlSelf->top__DOT___3870_ 
                                                                              << 0x14U)) 
                                                                          | ((0x400000U 
                                                                              & (vlSelf->top__DOT___4247_[2U] 
                                                                                << 0xbU)) 
                                                                             | ((0x3fc000U 
                                                                                & ((vlSelf->top__DOT___3900_[2U] 
                                                                                << 0x10U) 
                                                                                | (0xc000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))))))))))) 
                                                   << 0x15U) 
                                                  | (QData)((IData)(
                                                                    ((0x100000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                         << 0x14U)) 
                                                                     | ((0xfff00U 
                                                                         & (vlSelf->top__DOT___3900_[1U] 
                                                                            << 5U)) 
                                                                        | ((0x80U 
                                                                            & vlSelf->top__DOT___4247_[1U]) 
                                                                           | (((IData)(vlSelf->top__DOT___2114_) 
                                                                               << 6U) 
                                                                              | (((IData)(vlSelf->top__DOT___0415_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((0xcU 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___3475_))))))))))))))));
    __Vtemp_30[2U] = (IData)(((((QData)((IData)((1U 
                                                 & (vlSelf->top__DOT___7025_ 
                                                    >> 0x13U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0x1ffU 
                                                               & (vlSelf->top__DOT___3870_ 
                                                                  >> 0xdU)))) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT___7025_ 
                                                                     >> 9U)))) 
                                                 << 0x35U) 
                                                | (((QData)((IData)(
                                                                    ((0xe0000000U 
                                                                      & (vlSelf->top__DOT___3870_ 
                                                                         << 0x14U)) 
                                                                     | ((0x10000000U 
                                                                         & (vlSelf->top__DOT___7025_ 
                                                                            << 0x17U)) 
                                                                        | ((0xf800000U 
                                                                            & (vlSelf->top__DOT___3870_ 
                                                                               << 0x14U)) 
                                                                           | ((0x400000U 
                                                                               & (vlSelf->top__DOT___4247_[2U] 
                                                                                << 0xbU)) 
                                                                              | ((0x3fc000U 
                                                                                & ((vlSelf->top__DOT___3900_[2U] 
                                                                                << 0x10U) 
                                                                                | (0xc000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))))))))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                          << 0x14U)) 
                                                                      | ((0xfff00U 
                                                                          & (vlSelf->top__DOT___3900_[1U] 
                                                                             << 5U)) 
                                                                         | ((0x80U 
                                                                             & vlSelf->top__DOT___4247_[1U]) 
                                                                            | (((IData)(vlSelf->top__DOT___2114_) 
                                                                                << 6U) 
                                                                               | (((IData)(vlSelf->top__DOT___0415_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((0xcU 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___3475_))))))))))))))) 
                              >> 0x20U));
    VL_ADD_W(3, __Vtemp_31, __Vtemp_29, __Vtemp_30);
    vlSelf->top__DOT___2978_ = (1U & (__Vtemp_31[2U] 
                                      >> 0xeU));
    __Vtemp_32[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)))))))))))))))) 
                       << 0x1cU) | (((IData)(vlSelf->top__DOT___3576_) 
                                     << 0x1bU) | ((0x4000000U 
                                                   & (vlSelf->top__DOT___3981_ 
                                                      << 0x16U)) 
                                                  | ((0x3fe0000U 
                                                      & vlSelf->top__DOT___4248_[0U]) 
                                                     | (((IData)(vlSelf->top__DOT___1870_) 
                                                         << 0x10U) 
                                                        | ((0xfffcU 
                                                            & vlSelf->top__DOT___4248_[0U]) 
                                                           | (((IData)(vlSelf->top__DOT___0603_) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->top__DOT___0830_))))))));
    __Vtemp_32[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)))))))))))))))) 
                       >> 4U) | ((IData)(((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                            << 0x3fU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U))))))))))))))) 
                                          >> 0x20U)) 
                                 << 0x1cU));
    __Vtemp_32[2U] = ((IData)(((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U))))))))))))))) 
                               >> 0x20U)) >> 4U);
    __Vtemp_36[0U] = __Vtemp_32[0U];
    __Vtemp_36[1U] = __Vtemp_32[1U];
    __Vtemp_36[2U] = ((0x80000000U & vlSelf->top__DOT___4248_[2U]) 
                      | ((0x40000000U & ((IData)((vlSelf->top__DOT___6980_ 
                                                  >> 0x20U)) 
                                         << 0x1eU)) 
                         | ((0x20000000U & vlSelf->top__DOT___4248_[2U]) 
                            | (((IData)(vlSelf->top__DOT___2007_) 
                                << 0x1cU) | __Vtemp_32[2U]))));
    __Vtemp_37[0U] = ((0xffffe000U & (vlSelf->top__DOT___3857_ 
                                      << 4U)) | (((IData)(vlSelf->top__DOT___3473_) 
                                                  << 0xcU) 
                                                 | ((0xc00U 
                                                     & (vlSelf->top__DOT___3857_ 
                                                        << 4U)) 
                                                    | (((IData)(vlSelf->top__DOT___3515_) 
                                                        << 9U) 
                                                       | ((0x1f0U 
                                                           & (vlSelf->top__DOT___3857_ 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___7096_ 
                                                                          >> 5U)) 
                                                                 << 3U)) 
                                                             | (((IData)(vlSelf->top__DOT___0479_) 
                                                                 << 2U) 
                                                                | (((IData)(vlSelf->top__DOT___0638_) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelf->top__DOT___1192_)))))))));
    __Vtemp_37[1U] = (IData)((((QData)((IData)((1U 
                                                & (vlSelf->top__DOT___7025_ 
                                                   >> 0x13U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (0x1ffU 
                                                              & (vlSelf->top__DOT___3870_ 
                                                                 >> 0xdU)))) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT___7025_ 
                                                                    >> 9U)))) 
                                                << 0x35U) 
                                               | (((QData)((IData)(
                                                                   ((0xe0000000U 
                                                                     & (vlSelf->top__DOT___3870_ 
                                                                        << 0x14U)) 
                                                                    | ((0x10000000U 
                                                                        & (vlSelf->top__DOT___7025_ 
                                                                           << 0x17U)) 
                                                                       | ((0xf800000U 
                                                                           & (vlSelf->top__DOT___3870_ 
                                                                              << 0x14U)) 
                                                                          | ((0x400000U 
                                                                              & (vlSelf->top__DOT___4247_[2U] 
                                                                                << 0xbU)) 
                                                                             | ((0x3fc000U 
                                                                                & ((vlSelf->top__DOT___3900_[2U] 
                                                                                << 0x10U) 
                                                                                | (0xc000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))))))))))) 
                                                   << 0x15U) 
                                                  | (QData)((IData)(
                                                                    ((0x100000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                         << 0x14U)) 
                                                                     | ((0xfff00U 
                                                                         & (vlSelf->top__DOT___3900_[1U] 
                                                                            << 5U)) 
                                                                        | ((0x80U 
                                                                            & vlSelf->top__DOT___4247_[1U]) 
                                                                           | (((IData)(vlSelf->top__DOT___2114_) 
                                                                               << 6U) 
                                                                              | (((IData)(vlSelf->top__DOT___0415_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((0xcU 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___3475_))))))))))))))));
    __Vtemp_37[2U] = (IData)(((((QData)((IData)((1U 
                                                 & (vlSelf->top__DOT___7025_ 
                                                    >> 0x13U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0x1ffU 
                                                               & (vlSelf->top__DOT___3870_ 
                                                                  >> 0xdU)))) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT___7025_ 
                                                                     >> 9U)))) 
                                                 << 0x35U) 
                                                | (((QData)((IData)(
                                                                    ((0xe0000000U 
                                                                      & (vlSelf->top__DOT___3870_ 
                                                                         << 0x14U)) 
                                                                     | ((0x10000000U 
                                                                         & (vlSelf->top__DOT___7025_ 
                                                                            << 0x17U)) 
                                                                        | ((0xf800000U 
                                                                            & (vlSelf->top__DOT___3870_ 
                                                                               << 0x14U)) 
                                                                           | ((0x400000U 
                                                                               & (vlSelf->top__DOT___4247_[2U] 
                                                                                << 0xbU)) 
                                                                              | ((0x3fc000U 
                                                                                & ((vlSelf->top__DOT___3900_[2U] 
                                                                                << 0x10U) 
                                                                                | (0xc000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))))))))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                          << 0x14U)) 
                                                                      | ((0xfff00U 
                                                                          & (vlSelf->top__DOT___3900_[1U] 
                                                                             << 5U)) 
                                                                         | ((0x80U 
                                                                             & vlSelf->top__DOT___4247_[1U]) 
                                                                            | (((IData)(vlSelf->top__DOT___2114_) 
                                                                                << 6U) 
                                                                               | (((IData)(vlSelf->top__DOT___0415_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((0xcU 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___3475_))))))))))))))) 
                              >> 0x20U));
    VL_ADD_W(3, __Vtemp_38, __Vtemp_36, __Vtemp_37);
    __Vtemp_39[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)))))))))))))))) 
                       << 0x1cU) | (((IData)(vlSelf->top__DOT___3576_) 
                                     << 0x1bU) | ((0x4000000U 
                                                   & (vlSelf->top__DOT___3981_ 
                                                      << 0x16U)) 
                                                  | ((0x3fe0000U 
                                                      & vlSelf->top__DOT___4248_[0U]) 
                                                     | (((IData)(vlSelf->top__DOT___1870_) 
                                                         << 0x10U) 
                                                        | ((0xfffcU 
                                                            & vlSelf->top__DOT___4248_[0U]) 
                                                           | (((IData)(vlSelf->top__DOT___0603_) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->top__DOT___0830_))))))));
    __Vtemp_39[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)))))))))))))))) 
                       >> 4U) | ((IData)(((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                            << 0x3fU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U))))))))))))))) 
                                          >> 0x20U)) 
                                 << 0x1cU));
    __Vtemp_39[2U] = ((IData)(((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U))))))))))))))) 
                               >> 0x20U)) >> 4U);
    __Vtemp_43[0U] = __Vtemp_39[0U];
    __Vtemp_43[1U] = __Vtemp_39[1U];
    __Vtemp_43[2U] = ((0x80000000U & vlSelf->top__DOT___4248_[2U]) 
                      | ((0x40000000U & ((IData)((vlSelf->top__DOT___6980_ 
                                                  >> 0x20U)) 
                                         << 0x1eU)) 
                         | ((0x20000000U & vlSelf->top__DOT___4248_[2U]) 
                            | (((IData)(vlSelf->top__DOT___2007_) 
                                << 0x1cU) | __Vtemp_39[2U]))));
    __Vtemp_44[0U] = ((0xffffe000U & (vlSelf->top__DOT___3857_ 
                                      << 4U)) | (((IData)(vlSelf->top__DOT___3473_) 
                                                  << 0xcU) 
                                                 | ((0xc00U 
                                                     & (vlSelf->top__DOT___3857_ 
                                                        << 4U)) 
                                                    | (((IData)(vlSelf->top__DOT___3515_) 
                                                        << 9U) 
                                                       | ((0x1f0U 
                                                           & (vlSelf->top__DOT___3857_ 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___7096_ 
                                                                          >> 5U)) 
                                                                 << 3U)) 
                                                             | (((IData)(vlSelf->top__DOT___0479_) 
                                                                 << 2U) 
                                                                | (((IData)(vlSelf->top__DOT___0638_) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelf->top__DOT___1192_)))))))));
    __Vtemp_44[1U] = (IData)((((QData)((IData)((1U 
                                                & (vlSelf->top__DOT___7025_ 
                                                   >> 0x13U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (0x1ffU 
                                                              & (vlSelf->top__DOT___3870_ 
                                                                 >> 0xdU)))) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT___7025_ 
                                                                    >> 9U)))) 
                                                << 0x35U) 
                                               | (((QData)((IData)(
                                                                   ((0xe0000000U 
                                                                     & (vlSelf->top__DOT___3870_ 
                                                                        << 0x14U)) 
                                                                    | ((0x10000000U 
                                                                        & (vlSelf->top__DOT___7025_ 
                                                                           << 0x17U)) 
                                                                       | ((0xf800000U 
                                                                           & (vlSelf->top__DOT___3870_ 
                                                                              << 0x14U)) 
                                                                          | ((0x400000U 
                                                                              & (vlSelf->top__DOT___4247_[2U] 
                                                                                << 0xbU)) 
                                                                             | ((0x3fc000U 
                                                                                & ((vlSelf->top__DOT___3900_[2U] 
                                                                                << 0x10U) 
                                                                                | (0xc000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))))))))))) 
                                                   << 0x15U) 
                                                  | (QData)((IData)(
                                                                    ((0x100000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                         << 0x14U)) 
                                                                     | ((0xfff00U 
                                                                         & (vlSelf->top__DOT___3900_[1U] 
                                                                            << 5U)) 
                                                                        | ((0x80U 
                                                                            & vlSelf->top__DOT___4247_[1U]) 
                                                                           | (((IData)(vlSelf->top__DOT___2114_) 
                                                                               << 6U) 
                                                                              | (((IData)(vlSelf->top__DOT___0415_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((0xcU 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___3475_))))))))))))))));
    __Vtemp_44[2U] = (IData)(((((QData)((IData)((1U 
                                                 & (vlSelf->top__DOT___7025_ 
                                                    >> 0x13U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0x1ffU 
                                                               & (vlSelf->top__DOT___3870_ 
                                                                  >> 0xdU)))) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT___7025_ 
                                                                     >> 9U)))) 
                                                 << 0x35U) 
                                                | (((QData)((IData)(
                                                                    ((0xe0000000U 
                                                                      & (vlSelf->top__DOT___3870_ 
                                                                         << 0x14U)) 
                                                                     | ((0x10000000U 
                                                                         & (vlSelf->top__DOT___7025_ 
                                                                            << 0x17U)) 
                                                                        | ((0xf800000U 
                                                                            & (vlSelf->top__DOT___3870_ 
                                                                               << 0x14U)) 
                                                                           | ((0x400000U 
                                                                               & (vlSelf->top__DOT___4247_[2U] 
                                                                                << 0xbU)) 
                                                                              | ((0x3fc000U 
                                                                                & ((vlSelf->top__DOT___3900_[2U] 
                                                                                << 0x10U) 
                                                                                | (0xc000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))))))))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                          << 0x14U)) 
                                                                      | ((0xfff00U 
                                                                          & (vlSelf->top__DOT___3900_[1U] 
                                                                             << 5U)) 
                                                                         | ((0x80U 
                                                                             & vlSelf->top__DOT___4247_[1U]) 
                                                                            | (((IData)(vlSelf->top__DOT___2114_) 
                                                                                << 6U) 
                                                                               | (((IData)(vlSelf->top__DOT___0415_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((0xcU 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___3475_))))))))))))))) 
                              >> 0x20U));
    VL_ADD_W(3, __Vtemp_45, __Vtemp_43, __Vtemp_44);
    __Vtemp_46[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)))))))))))))))) 
                       << 0x1cU) | (((IData)(vlSelf->top__DOT___3576_) 
                                     << 0x1bU) | ((0x4000000U 
                                                   & (vlSelf->top__DOT___3981_ 
                                                      << 0x16U)) 
                                                  | ((0x3fe0000U 
                                                      & vlSelf->top__DOT___4248_[0U]) 
                                                     | (((IData)(vlSelf->top__DOT___1870_) 
                                                         << 0x10U) 
                                                        | ((0xfffcU 
                                                            & vlSelf->top__DOT___4248_[0U]) 
                                                           | (((IData)(vlSelf->top__DOT___0603_) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->top__DOT___0830_))))))));
    __Vtemp_46[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)))))))))))))))) 
                       >> 4U) | ((IData)(((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                            << 0x3fU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U))))))))))))))) 
                                          >> 0x20U)) 
                                 << 0x1cU));
    __Vtemp_46[2U] = ((IData)(((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U))))))))))))))) 
                               >> 0x20U)) >> 4U);
    __Vtemp_50[0U] = __Vtemp_46[0U];
    __Vtemp_50[1U] = __Vtemp_46[1U];
    __Vtemp_50[2U] = ((0x80000000U & vlSelf->top__DOT___4248_[2U]) 
                      | ((0x40000000U & ((IData)((vlSelf->top__DOT___6980_ 
                                                  >> 0x20U)) 
                                         << 0x1eU)) 
                         | ((0x20000000U & vlSelf->top__DOT___4248_[2U]) 
                            | (((IData)(vlSelf->top__DOT___2007_) 
                                << 0x1cU) | __Vtemp_46[2U]))));
    __Vtemp_51[0U] = ((0xffffe000U & (vlSelf->top__DOT___3857_ 
                                      << 4U)) | (((IData)(vlSelf->top__DOT___3473_) 
                                                  << 0xcU) 
                                                 | ((0xc00U 
                                                     & (vlSelf->top__DOT___3857_ 
                                                        << 4U)) 
                                                    | (((IData)(vlSelf->top__DOT___3515_) 
                                                        << 9U) 
                                                       | ((0x1f0U 
                                                           & (vlSelf->top__DOT___3857_ 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___7096_ 
                                                                          >> 5U)) 
                                                                 << 3U)) 
                                                             | (((IData)(vlSelf->top__DOT___0479_) 
                                                                 << 2U) 
                                                                | (((IData)(vlSelf->top__DOT___0638_) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelf->top__DOT___1192_)))))))));
    __Vtemp_51[1U] = (IData)((((QData)((IData)((1U 
                                                & (vlSelf->top__DOT___7025_ 
                                                   >> 0x13U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (0x1ffU 
                                                              & (vlSelf->top__DOT___3870_ 
                                                                 >> 0xdU)))) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT___7025_ 
                                                                    >> 9U)))) 
                                                << 0x35U) 
                                               | (((QData)((IData)(
                                                                   ((0xe0000000U 
                                                                     & (vlSelf->top__DOT___3870_ 
                                                                        << 0x14U)) 
                                                                    | ((0x10000000U 
                                                                        & (vlSelf->top__DOT___7025_ 
                                                                           << 0x17U)) 
                                                                       | ((0xf800000U 
                                                                           & (vlSelf->top__DOT___3870_ 
                                                                              << 0x14U)) 
                                                                          | ((0x400000U 
                                                                              & (vlSelf->top__DOT___4247_[2U] 
                                                                                << 0xbU)) 
                                                                             | ((0x3fc000U 
                                                                                & ((vlSelf->top__DOT___3900_[2U] 
                                                                                << 0x10U) 
                                                                                | (0xc000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))))))))))) 
                                                   << 0x15U) 
                                                  | (QData)((IData)(
                                                                    ((0x100000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                         << 0x14U)) 
                                                                     | ((0xfff00U 
                                                                         & (vlSelf->top__DOT___3900_[1U] 
                                                                            << 5U)) 
                                                                        | ((0x80U 
                                                                            & vlSelf->top__DOT___4247_[1U]) 
                                                                           | (((IData)(vlSelf->top__DOT___2114_) 
                                                                               << 6U) 
                                                                              | (((IData)(vlSelf->top__DOT___0415_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((0xcU 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___3475_))))))))))))))));
    __Vtemp_51[2U] = (IData)(((((QData)((IData)((1U 
                                                 & (vlSelf->top__DOT___7025_ 
                                                    >> 0x13U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0x1ffU 
                                                               & (vlSelf->top__DOT___3870_ 
                                                                  >> 0xdU)))) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT___7025_ 
                                                                     >> 9U)))) 
                                                 << 0x35U) 
                                                | (((QData)((IData)(
                                                                    ((0xe0000000U 
                                                                      & (vlSelf->top__DOT___3870_ 
                                                                         << 0x14U)) 
                                                                     | ((0x10000000U 
                                                                         & (vlSelf->top__DOT___7025_ 
                                                                            << 0x17U)) 
                                                                        | ((0xf800000U 
                                                                            & (vlSelf->top__DOT___3870_ 
                                                                               << 0x14U)) 
                                                                           | ((0x400000U 
                                                                               & (vlSelf->top__DOT___4247_[2U] 
                                                                                << 0xbU)) 
                                                                              | ((0x3fc000U 
                                                                                & ((vlSelf->top__DOT___3900_[2U] 
                                                                                << 0x10U) 
                                                                                | (0xc000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))))))))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                          << 0x14U)) 
                                                                      | ((0xfff00U 
                                                                          & (vlSelf->top__DOT___3900_[1U] 
                                                                             << 5U)) 
                                                                         | ((0x80U 
                                                                             & vlSelf->top__DOT___4247_[1U]) 
                                                                            | (((IData)(vlSelf->top__DOT___2114_) 
                                                                                << 6U) 
                                                                               | (((IData)(vlSelf->top__DOT___0415_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((0xcU 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___3475_))))))))))))))) 
                              >> 0x20U));
    VL_ADD_W(3, __Vtemp_52, __Vtemp_50, __Vtemp_51);
    __Vtemp_53[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)))))))))))))))) 
                       << 0x1cU) | (((IData)(vlSelf->top__DOT___3576_) 
                                     << 0x1bU) | ((0x4000000U 
                                                   & (vlSelf->top__DOT___3981_ 
                                                      << 0x16U)) 
                                                  | ((0x3fe0000U 
                                                      & vlSelf->top__DOT___4248_[0U]) 
                                                     | (((IData)(vlSelf->top__DOT___1870_) 
                                                         << 0x10U) 
                                                        | ((0xfffcU 
                                                            & vlSelf->top__DOT___4248_[0U]) 
                                                           | (((IData)(vlSelf->top__DOT___0603_) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->top__DOT___0830_))))))));
    __Vtemp_53[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)))))))))))))))) 
                       >> 4U) | ((IData)(((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                            << 0x3fU) 
                                           | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U))))))))))))))) 
                                          >> 0x20U)) 
                                 << 0x1cU));
    __Vtemp_53[2U] = ((IData)(((((QData)((IData)(vlSelf->top__DOT___0281_)) 
                                 << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT___0760_)) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                           << 0x39U) 
                                                          | ((0x1ffffffff000000ULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                  << 0x24U) 
                                                                 | (0xffffffffff000000ULL 
                                                                    & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                       << 4U)))) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U))))))))))))))) 
                               >> 0x20U)) >> 4U);
    __Vtemp_57[0U] = __Vtemp_53[0U];
    __Vtemp_57[1U] = __Vtemp_53[1U];
    __Vtemp_57[2U] = ((0x80000000U & vlSelf->top__DOT___4248_[2U]) 
                      | ((0x40000000U & ((IData)((vlSelf->top__DOT___6980_ 
                                                  >> 0x20U)) 
                                         << 0x1eU)) 
                         | ((0x20000000U & vlSelf->top__DOT___4248_[2U]) 
                            | (((IData)(vlSelf->top__DOT___2007_) 
                                << 0x1cU) | __Vtemp_53[2U]))));
    __Vtemp_58[0U] = ((0xffffe000U & (vlSelf->top__DOT___3857_ 
                                      << 4U)) | (((IData)(vlSelf->top__DOT___3473_) 
                                                  << 0xcU) 
                                                 | ((0xc00U 
                                                     & (vlSelf->top__DOT___3857_ 
                                                        << 4U)) 
                                                    | (((IData)(vlSelf->top__DOT___3515_) 
                                                        << 9U) 
                                                       | ((0x1f0U 
                                                           & (vlSelf->top__DOT___3857_ 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___7096_ 
                                                                          >> 5U)) 
                                                                 << 3U)) 
                                                             | (((IData)(vlSelf->top__DOT___0479_) 
                                                                 << 2U) 
                                                                | (((IData)(vlSelf->top__DOT___0638_) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelf->top__DOT___1192_)))))))));
    __Vtemp_58[1U] = (IData)((((QData)((IData)((1U 
                                                & (vlSelf->top__DOT___7025_ 
                                                   >> 0x13U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (0x1ffU 
                                                              & (vlSelf->top__DOT___3870_ 
                                                                 >> 0xdU)))) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT___7025_ 
                                                                    >> 9U)))) 
                                                << 0x35U) 
                                               | (((QData)((IData)(
                                                                   ((0xe0000000U 
                                                                     & (vlSelf->top__DOT___3870_ 
                                                                        << 0x14U)) 
                                                                    | ((0x10000000U 
                                                                        & (vlSelf->top__DOT___7025_ 
                                                                           << 0x17U)) 
                                                                       | ((0xf800000U 
                                                                           & (vlSelf->top__DOT___3870_ 
                                                                              << 0x14U)) 
                                                                          | ((0x400000U 
                                                                              & (vlSelf->top__DOT___4247_[2U] 
                                                                                << 0xbU)) 
                                                                             | ((0x3fc000U 
                                                                                & ((vlSelf->top__DOT___3900_[2U] 
                                                                                << 0x10U) 
                                                                                | (0xc000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))))))))))) 
                                                   << 0x15U) 
                                                  | (QData)((IData)(
                                                                    ((0x100000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                         << 0x14U)) 
                                                                     | ((0xfff00U 
                                                                         & (vlSelf->top__DOT___3900_[1U] 
                                                                            << 5U)) 
                                                                        | ((0x80U 
                                                                            & vlSelf->top__DOT___4247_[1U]) 
                                                                           | (((IData)(vlSelf->top__DOT___2114_) 
                                                                               << 6U) 
                                                                              | (((IData)(vlSelf->top__DOT___0415_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((0xcU 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___3475_))))))))))))))));
    __Vtemp_58[2U] = (IData)(((((QData)((IData)((1U 
                                                 & (vlSelf->top__DOT___7025_ 
                                                    >> 0x13U)))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              (0x1ffU 
                                                               & (vlSelf->top__DOT___3870_ 
                                                                  >> 0xdU)))) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT___7025_ 
                                                                     >> 9U)))) 
                                                 << 0x35U) 
                                                | (((QData)((IData)(
                                                                    ((0xe0000000U 
                                                                      & (vlSelf->top__DOT___3870_ 
                                                                         << 0x14U)) 
                                                                     | ((0x10000000U 
                                                                         & (vlSelf->top__DOT___7025_ 
                                                                            << 0x17U)) 
                                                                        | ((0xf800000U 
                                                                            & (vlSelf->top__DOT___3870_ 
                                                                               << 0x14U)) 
                                                                           | ((0x400000U 
                                                                               & (vlSelf->top__DOT___4247_[2U] 
                                                                                << 0xbU)) 
                                                                              | ((0x3fc000U 
                                                                                & ((vlSelf->top__DOT___3900_[2U] 
                                                                                << 0x10U) 
                                                                                | (0xc000U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x1bU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1fc0U 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0x13U)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->top__DOT___3900_[1U] 
                                                                                >> 0x10U)))))))))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___7215_ 
                                                                                >> 0xdU)) 
                                                                          << 0x14U)) 
                                                                      | ((0xfff00U 
                                                                          & (vlSelf->top__DOT___3900_[1U] 
                                                                             << 5U)) 
                                                                         | ((0x80U 
                                                                             & vlSelf->top__DOT___4247_[1U]) 
                                                                            | (((IData)(vlSelf->top__DOT___2114_) 
                                                                                << 6U) 
                                                                               | (((IData)(vlSelf->top__DOT___0415_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 4U) 
                                                                                | ((0xcU 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1814_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___3475_))))))))))))))) 
                              >> 0x20U));
    VL_ADD_W(3, __Vtemp_59, __Vtemp_57, __Vtemp_58);
    __Vtemp_60[0U] = (((IData)(vlSelf->top__DOT___3581_) 
                       << 0x1fU) | (0x7fffffffU & (
                                                   ((0x70000000U 
                                                     & ((IData)(
                                                                (((QData)((IData)(vlSelf->top__DOT___0234_)) 
                                                                  << 0x3cU) 
                                                                 | (((QData)((IData)(vlSelf->top__DOT___0069_)) 
                                                                     << 0x3bU) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                                        << 0x3aU) 
                                                                       | (((QData)((IData)(vlSelf->top__DOT___1836_)) 
                                                                           << 0x39U) 
                                                                          | ((0x1ffffffff000000ULL 
                                                                              & (((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[2U])) 
                                                                                << 0x24U) 
                                                                                | (0xffffffffff000000ULL 
                                                                                & ((QData)((IData)(
                                                                                vlSelf->top__DOT___4248_[1U])) 
                                                                                << 4U)))) 
                                                                             | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___3231_) 
                                                                                << 0x17U) 
                                                                                | ((0x7ff800U 
                                                                                & (vlSelf->top__DOT___4248_[1U] 
                                                                                << 4U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0017_) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->top__DOT___3981_ 
                                                                                >> 6U)))))))))))))) 
                                                        << 0x1cU)) 
                                                    | (((IData)(vlSelf->top__DOT___3576_) 
                                                        << 0x1bU) 
                                                       | ((0x4000000U 
                                                           & (vlSelf->top__DOT___3981_ 
                                                              << 0x16U)) 
                                                          | ((0x3fe0000U 
                                                              & vlSelf->top__DOT___4248_[0U]) 
                                                             | (((IData)(vlSelf->top__DOT___1870_) 
                                                                 << 0x10U) 
                                                                | ((0xfffcU 
                                                                    & vlSelf->top__DOT___4248_[0U]) 
                                                                   | (((IData)(vlSelf->top__DOT___0603_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___0830_)))))))) 
                                                   + 
                                                   ((0x7fffe000U 
                                                     & (vlSelf->top__DOT___3857_ 
                                                        << 4U)) 
                                                    | (((IData)(vlSelf->top__DOT___3473_) 
                                                        << 0xcU) 
                                                       | ((0xc00U 
                                                           & (vlSelf->top__DOT___3857_ 
                                                              << 4U)) 
                                                          | (((IData)(vlSelf->top__DOT___3515_) 
                                                              << 9U) 
                                                             | ((0x1f0U 
                                                                 & (vlSelf->top__DOT___3857_ 
                                                                    << 4U)) 
                                                                | ((8U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___7096_ 
                                                                                >> 5U)) 
                                                                       << 3U)) 
                                                                   | (((IData)(vlSelf->top__DOT___0479_) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->top__DOT___0638_) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->top__DOT___1192_))))))))))));
    vlSelf->top__DOT___4246_[0U] = __Vtemp_60[0U];
    vlSelf->top__DOT___4246_[1U] = (IData)((0x3fffffffffULL 
                                            & (((QData)((IData)(
                                                                __Vtemp_59[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 __Vtemp_59[1U])))));
    vlSelf->top__DOT___4246_[2U] = ((0xffc00000U & 
                                     __Vtemp_38[2U]) 
                                    | (((IData)(vlSelf->top__DOT___2849_) 
                                        << 0x15U) | 
                                       ((0x1f8000U 
                                         & __Vtemp_45[2U]) 
                                        | (((IData)(vlSelf->top__DOT___2978_) 
                                            << 0xeU) 
                                           | ((0x3f80U 
                                               & __Vtemp_52[2U]) 
                                              | (((IData)(vlSelf->top__DOT___3118_) 
                                                  << 6U) 
                                                 | (IData)(
                                                           ((0x3fffffffffULL 
                                                             & (((QData)((IData)(
                                                                                __Vtemp_59[2U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                __Vtemp_59[1U])))) 
                                                            >> 0x20U))))))));
    vlSelf->top__DOT___0495_ = (1U & (~ (((IData)(vlSelf->top__DOT___2980_) 
                                          & (IData)(vlSelf->top__DOT___0069_)) 
                                         | ((IData)(vlSelf->top__DOT___2978_) 
                                            & (IData)(vlSelf->top__DOT___1912_)))));
    vlSelf->top__DOT___2107_ = (((IData)(vlSelf->top__DOT___1864_) 
                                 & (IData)(vlSelf->top__DOT___1322_)) 
                                | (IData)(vlSelf->top__DOT___0495_));
    vlSelf->top__DOT___0488_ = (1U & (~ (((IData)(vlSelf->top__DOT___0495_) 
                                          & (IData)(
                                                    (vlSelf->top__DOT___6989_ 
                                                     >> 0x22U))) 
                                         | (((IData)(vlSelf->top__DOT___7006_) 
                                             >> 3U) 
                                            & (IData)(vlSelf->top__DOT___0074_)))));
    vlSelf->top__DOT___0261_ = ((IData)(vlSelf->top__DOT___1172_) 
                                | (IData)(vlSelf->top__DOT___0495_));
    vlSelf->top__DOT___0664_ = (1U & (~ (((IData)(vlSelf->top__DOT___1946_) 
                                          & (IData)(vlSelf->top__DOT___0495_)) 
                                         | (IData)(vlSelf->top__DOT___0311_))));
}
