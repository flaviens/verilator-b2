// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__856(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__856\n"); );
    // Body
    vlSelf->top__DOT___1848_ = (1U & ((IData)(vlSelf->top__DOT___4561_) 
                                      + (IData)(vlSelf->top__DOT___2244_)));
    vlSelf->top__DOT___0296_ = ((IData)(vlSelf->top__DOT___0216_) 
                                & (IData)(vlSelf->top__DOT___1848_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__857(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__857\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h60070cb3__0 = ((IData)(vlSelf->top__DOT___2487_) 
                                                | ((IData)(vlSelf->top__DOT___2487_) 
                                                   ^ (IData)(vlSelf->top__DOT___1012_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__859(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__859\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    // Body
    vlSelf->top__DOT___4223_ = ((0xfU & vlSelf->top__DOT___4223_) 
                                | ((0x7ff800U & (vlSelf->top__DOT___4739_[0U] 
                                                 << 9U)) 
                                   | (((IData)(vlSelf->top__DOT___0305_) 
                                       << 0xaU) | (
                                                   ((IData)(vlSelf->top__DOT___0485_) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->top__DOT___3575_) 
                                                       << 8U) 
                                                      | (((IData)(vlSelf->top__DOT___0619_) 
                                                          << 7U) 
                                                         | (((IData)(vlSelf->top__DOT___0817_) 
                                                             << 6U) 
                                                            | (((IData)(vlSelf->top__DOT___2439_) 
                                                                << 5U) 
                                                               | ((IData)(vlSelf->top__DOT___0153_) 
                                                                  << 4U)))))))));
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0x3fU 
                                               & (vlSelf->top__DOT___4514_ 
                                                  >> 8U)))) 
                              << 0x32U) | (((QData)((IData)(
                                                            (0x1fffU 
                                                             & (vlSelf->top__DOT___4126_ 
                                                                >> 9U)))) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               (3U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3836_ 
                                                                           >> 0x33U))))) 
                                               << 0x23U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT___4126_ 
                                                                      >> 6U)))) 
                                                  << 0x22U) 
                                                 | (((QData)((IData)(
                                                                     (3U 
                                                                      & ((1U 
                                                                          & (vlSelf->top__DOT___4126_ 
                                                                             >> 4U)) 
                                                                         | ((0x3ffffU 
                                                                             & ((IData)(vlSelf->top__DOT___0226_) 
                                                                                >> 4U)) 
                                                                            | ((0x3ffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0442_) 
                                                                                >> 5U)) 
                                                                               | ((0x3ffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1144_) 
                                                                                >> 9U)) 
                                                                                | ((0x3ffffU 
                                                                                & ((IData)(vlSelf->top__DOT___3381_) 
                                                                                >> 0xbU)) 
                                                                                | ((0x3ffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0389_) 
                                                                                >> 0xcU)) 
                                                                                | ((0x3ffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1183_) 
                                                                                >> 0xdU)) 
                                                                                | ((IData)(vlSelf->top__DOT___0723_) 
                                                                                >> 0xeU))))))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((0xfffe0000U 
                                                                        & ((vlSelf->top__DOT___4739_[1U] 
                                                                            << 0x1fU) 
                                                                           | (0x7ffe0000U 
                                                                              & (vlSelf->top__DOT___4739_[0U] 
                                                                                >> 1U)))) 
                                                                       | ((0x10000U 
                                                                           & ((0x7fff0000U 
                                                                               & (vlSelf->top__DOT___4739_[0U] 
                                                                                >> 1U)) 
                                                                              | (0x20000U 
                                                                                & (vlSelf->top__DOT___4126_ 
                                                                                << 0xdU)))) 
                                                                          | ((0xe000U 
                                                                              & (vlSelf->top__DOT___4739_[0U] 
                                                                                >> 1U)) 
                                                                             | (0x1fffU 
                                                                                & ((0x4000U 
                                                                                & (vlSelf->top__DOT___4126_ 
                                                                                << 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___4739_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x1800U 
                                                                                & (vlSelf->top__DOT___4223_ 
                                                                                >> 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0442_) 
                                                                                << 9U) 
                                                                                | ((0x1c0U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1144_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3381_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0389_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1183_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0723_))))))))))))))))))))))));
    __Vtemp_1[1U] = ((0xff000000U & (vlSelf->top__DOT___4397_ 
                                     << 0x11U)) | (IData)(
                                                          ((((QData)((IData)(
                                                                             (0x3fU 
                                                                              & (vlSelf->top__DOT___4514_ 
                                                                                >> 8U)))) 
                                                             << 0x32U) 
                                                            | (((QData)((IData)(
                                                                                (0x1fffU 
                                                                                & (vlSelf->top__DOT___4126_ 
                                                                                >> 9U)))) 
                                                                << 0x25U) 
                                                               | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x33U))))) 
                                                                   << 0x23U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___4126_ 
                                                                                >> 6U)))) 
                                                                      << 0x22U) 
                                                                     | (((QData)((IData)(
                                                                                (3U 
                                                                                & ((1U 
                                                                                & (vlSelf->top__DOT___4126_ 
                                                                                >> 4U)) 
                                                                                | ((0x3ffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0226_) 
                                                                                >> 4U)) 
                                                                                | ((0x3ffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0442_) 
                                                                                >> 5U)) 
                                                                                | ((0x3ffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1144_) 
                                                                                >> 9U)) 
                                                                                | ((0x3ffffU 
                                                                                & ((IData)(vlSelf->top__DOT___3381_) 
                                                                                >> 0xbU)) 
                                                                                | ((0x3ffffU 
                                                                                & ((IData)(vlSelf->top__DOT___0389_) 
                                                                                >> 0xcU)) 
                                                                                | ((0x3ffffU 
                                                                                & ((IData)(vlSelf->top__DOT___1183_) 
                                                                                >> 0xdU)) 
                                                                                | ((IData)(vlSelf->top__DOT___0723_) 
                                                                                >> 0xeU))))))))))) 
                                                                         << 0x20U) 
                                                                        | (QData)((IData)(
                                                                                ((0xfffe0000U 
                                                                                & ((vlSelf->top__DOT___4739_[1U] 
                                                                                << 0x1fU) 
                                                                                | (0x7ffe0000U 
                                                                                & (vlSelf->top__DOT___4739_[0U] 
                                                                                >> 1U)))) 
                                                                                | ((0x10000U 
                                                                                & ((0x7fff0000U 
                                                                                & (vlSelf->top__DOT___4739_[0U] 
                                                                                >> 1U)) 
                                                                                | (0x20000U 
                                                                                & (vlSelf->top__DOT___4126_ 
                                                                                << 0xdU)))) 
                                                                                | ((0xe000U 
                                                                                & (vlSelf->top__DOT___4739_[0U] 
                                                                                >> 1U)) 
                                                                                | (0x1fffU 
                                                                                & ((0x4000U 
                                                                                & (vlSelf->top__DOT___4126_ 
                                                                                << 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___4739_[0U] 
                                                                                >> 4U)) 
                                                                                | ((0x1800U 
                                                                                & (vlSelf->top__DOT___4223_ 
                                                                                >> 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0442_) 
                                                                                << 9U) 
                                                                                | ((0x1c0U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1144_) 
                                                                                << 5U) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3381_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0389_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___1183_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0723_))))))))))))))))))))))) 
                                                           >> 0x20U)));
    vlSelf->top__DOT___4555_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4555_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4555_[2U] = ((0xf80U & (vlSelf->top__DOT___4523_[2U] 
                                               << 2U)) 
                                    | ((0x78U & (vlSelf->top__DOT___4514_ 
                                                 >> 0x16U)) 
                                       | ((4U & vlSelf->top__DOT___4739_[2U]) 
                                          | (3U & (vlSelf->top__DOT___4397_ 
                                                   >> 0xfU)))));
    __Vtemp_5[0U] = (IData)((((QData)((IData)((0x3fU 
                                               & (vlSelf->top__DOT___4514_ 
                                                  >> 8U)))) 
                              << 0x33U) | (((QData)((IData)(
                                                            (0x1fffU 
                                                             & (vlSelf->top__DOT___4126_ 
                                                                >> 9U)))) 
                                            << 0x26U) 
                                           | (((QData)((IData)(
                                                               (3U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___3836_ 
                                                                           >> 0x33U))))) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT___4126_ 
                                                                      >> 6U)))) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT___4126_ 
                                                                         >> 4U)))) 
                                                     << 0x21U) 
                                                    | (((QData)((IData)(
                                                                        (vlSelf->top__DOT___4555_[0U] 
                                                                         >> 0x11U))) 
                                                        << 0x12U) 
                                                       | (QData)((IData)(
                                                                         ((0x20000U 
                                                                           & vlSelf->top__DOT___4739_[0U]) 
                                                                          | ((0x1c000U 
                                                                              & (vlSelf->top__DOT___4555_[0U] 
                                                                                << 1U)) 
                                                                             | ((0x3ffcU 
                                                                                & (vlSelf->top__DOT___4223_ 
                                                                                >> 9U)) 
                                                                                | (3U 
                                                                                & vlSelf->top__DOT___4739_[0U])))))))))))));
    __Vtemp_5[1U] = ((0xfe000000U & (vlSelf->top__DOT___4397_ 
                                     << 0x12U)) | (IData)(
                                                          ((((QData)((IData)(
                                                                             (0x3fU 
                                                                              & (vlSelf->top__DOT___4514_ 
                                                                                >> 8U)))) 
                                                             << 0x33U) 
                                                            | (((QData)((IData)(
                                                                                (0x1fffU 
                                                                                & (vlSelf->top__DOT___4126_ 
                                                                                >> 9U)))) 
                                                                << 0x26U) 
                                                               | (((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x33U))))) 
                                                                   << 0x24U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___4126_ 
                                                                                >> 6U)))) 
                                                                      << 0x23U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___4126_ 
                                                                                >> 4U)))) 
                                                                         << 0x21U) 
                                                                        | (((QData)((IData)(
                                                                                (vlSelf->top__DOT___4555_[0U] 
                                                                                >> 0x11U))) 
                                                                            << 0x12U) 
                                                                           | (QData)((IData)(
                                                                                ((0x20000U 
                                                                                & vlSelf->top__DOT___4739_[0U]) 
                                                                                | ((0x1c000U 
                                                                                & (vlSelf->top__DOT___4555_[0U] 
                                                                                << 1U)) 
                                                                                | ((0x3ffcU 
                                                                                & (vlSelf->top__DOT___4223_ 
                                                                                >> 9U)) 
                                                                                | (3U 
                                                                                & vlSelf->top__DOT___4739_[0U])))))))))))) 
                                                           >> 0x20U)));
    vlSelf->top__DOT___4673_[0U] = __Vtemp_5[0U];
    vlSelf->top__DOT___4673_[1U] = __Vtemp_5[1U];
    vlSelf->top__DOT___4673_[2U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->top__DOT___4739_[3U])) 
                                                  << 0x19U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT___4739_[2U])) 
                                                    >> 7U)))) 
                                     << 8U) | ((0xf0U 
                                                & (vlSelf->top__DOT___4514_ 
                                                   >> 0x15U)) 
                                               | ((8U 
                                                   & (vlSelf->top__DOT___4739_[2U] 
                                                      << 1U)) 
                                                  | (7U 
                                                     & (vlSelf->top__DOT___4397_ 
                                                        >> 0xeU)))));
    vlSelf->top__DOT___4673_[3U] = ((0x2000U & (vlSelf->top__DOT___4739_[3U] 
                                                << 1U)) 
                                    | ((0x1000U & (vlSelf->top__DOT___3859_ 
                                                   >> 0x13U)) 
                                       | (((IData)(
                                                   (0xfffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->top__DOT___4739_[3U])) 
                                                        << 0x19U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT___4739_[2U])) 
                                                          >> 7U)))) 
                                           >> 0x18U) 
                                          | ((IData)(
                                                     ((0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelf->top__DOT___4739_[3U])) 
                                                           << 0x19U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->top__DOT___4739_[2U])) 
                                                             >> 7U))) 
                                                      >> 0x20U)) 
                                             << 8U))));
    __Vtemp_12[0U] = (((IData)((((QData)((IData)(((0x80000000U 
                                                   & (vlSelf->top__DOT___4739_[2U] 
                                                      << 0x1dU)) 
                                                  | ((0x7fe00000U 
                                                      & (vlSelf->top__DOT___4397_ 
                                                         << 0xeU)) 
                                                     | ((0x1f8000U 
                                                         & (vlSelf->top__DOT___4514_ 
                                                            << 7U)) 
                                                        | ((0x7ffcU 
                                                            & (vlSelf->top__DOT___4126_ 
                                                               >> 7U)) 
                                                           | (3U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT___3836_ 
                                                                         >> 0x33U))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___4126_ 
                                                                  << 0x19U)) 
                                                              | ((0x20000000U 
                                                                  & (vlSelf->top__DOT___4126_ 
                                                                     << 0x19U)) 
                                                                 | ((0x1fffc000U 
                                                                     & (vlSelf->top__DOT___4555_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x2000U 
                                                                        & (vlSelf->top__DOT___4739_[0U] 
                                                                           >> 4U)) 
                                                                       | ((0x1c00U 
                                                                           & (vlSelf->top__DOT___4555_[0U] 
                                                                              >> 3U)) 
                                                                          | ((0x300U 
                                                                              & (vlSelf->top__DOT___4223_ 
                                                                                >> 0xdU)) 
                                                                             | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0442_) 
                                                                                << 6U) 
                                                                                | ((0x38U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1144_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (IData)(vlSelf->top__DOT___3381_)))))))))))))))) 
                       << 3U) | (((IData)(vlSelf->top__DOT___0389_) 
                                  << 2U) | (((IData)(vlSelf->top__DOT___1183_) 
                                             << 1U) 
                                            | (IData)(vlSelf->top__DOT___0723_))));
    __Vtemp_12[1U] = (((IData)((((QData)((IData)(((0x80000000U 
                                                   & (vlSelf->top__DOT___4739_[2U] 
                                                      << 0x1dU)) 
                                                  | ((0x7fe00000U 
                                                      & (vlSelf->top__DOT___4397_ 
                                                         << 0xeU)) 
                                                     | ((0x1f8000U 
                                                         & (vlSelf->top__DOT___4514_ 
                                                            << 7U)) 
                                                        | ((0x7ffcU 
                                                            & (vlSelf->top__DOT___4126_ 
                                                               >> 7U)) 
                                                           | (3U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT___3836_ 
                                                                         >> 0x33U))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___4126_ 
                                                                  << 0x19U)) 
                                                              | ((0x20000000U 
                                                                  & (vlSelf->top__DOT___4126_ 
                                                                     << 0x19U)) 
                                                                 | ((0x1fffc000U 
                                                                     & (vlSelf->top__DOT___4555_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x2000U 
                                                                        & (vlSelf->top__DOT___4739_[0U] 
                                                                           >> 4U)) 
                                                                       | ((0x1c00U 
                                                                           & (vlSelf->top__DOT___4555_[0U] 
                                                                              >> 3U)) 
                                                                          | ((0x300U 
                                                                              & (vlSelf->top__DOT___4223_ 
                                                                                >> 0xdU)) 
                                                                             | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0442_) 
                                                                                << 6U) 
                                                                                | ((0x38U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1144_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (IData)(vlSelf->top__DOT___3381_)))))))))))))))) 
                       >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                               ((0x80000000U 
                                                                 & (vlSelf->top__DOT___4739_[2U] 
                                                                    << 0x1dU)) 
                                                                | ((0x7fe00000U 
                                                                    & (vlSelf->top__DOT___4397_ 
                                                                       << 0xeU)) 
                                                                   | ((0x1f8000U 
                                                                       & (vlSelf->top__DOT___4514_ 
                                                                          << 7U)) 
                                                                      | ((0x7ffcU 
                                                                          & (vlSelf->top__DOT___4126_ 
                                                                             >> 7U)) 
                                                                         | (3U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x33U))))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0x80000000U 
                                                                  & (vlSelf->top__DOT___4126_ 
                                                                     << 0x19U)) 
                                                                 | ((0x20000000U 
                                                                     & (vlSelf->top__DOT___4126_ 
                                                                        << 0x19U)) 
                                                                    | ((0x1fffc000U 
                                                                        & (vlSelf->top__DOT___4555_[0U] 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->top__DOT___4739_[0U] 
                                                                              >> 4U)) 
                                                                          | ((0x1c00U 
                                                                              & (vlSelf->top__DOT___4555_[0U] 
                                                                                >> 3U)) 
                                                                             | ((0x300U 
                                                                                & (vlSelf->top__DOT___4223_ 
                                                                                >> 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0442_) 
                                                                                << 6U) 
                                                                                | ((0x38U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1144_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (IData)(vlSelf->top__DOT___3381_))))))))))))))) 
                                             >> 0x20U)) 
                                    << 3U));
    __Vtemp_12[2U] = ((IData)(((((QData)((IData)(((0x80000000U 
                                                   & (vlSelf->top__DOT___4739_[2U] 
                                                      << 0x1dU)) 
                                                  | ((0x7fe00000U 
                                                      & (vlSelf->top__DOT___4397_ 
                                                         << 0xeU)) 
                                                     | ((0x1f8000U 
                                                         & (vlSelf->top__DOT___4514_ 
                                                            << 7U)) 
                                                        | ((0x7ffcU 
                                                            & (vlSelf->top__DOT___4126_ 
                                                               >> 7U)) 
                                                           | (3U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT___3836_ 
                                                                         >> 0x33U))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___4126_ 
                                                                  << 0x19U)) 
                                                              | ((0x20000000U 
                                                                  & (vlSelf->top__DOT___4126_ 
                                                                     << 0x19U)) 
                                                                 | ((0x1fffc000U 
                                                                     & (vlSelf->top__DOT___4555_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x2000U 
                                                                        & (vlSelf->top__DOT___4739_[0U] 
                                                                           >> 4U)) 
                                                                       | ((0x1c00U 
                                                                           & (vlSelf->top__DOT___4555_[0U] 
                                                                              >> 3U)) 
                                                                          | ((0x300U 
                                                                              & (vlSelf->top__DOT___4223_ 
                                                                                >> 0xdU)) 
                                                                             | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0442_) 
                                                                                << 6U) 
                                                                                | ((0x38U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1144_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (IData)(vlSelf->top__DOT___3381_))))))))))))))) 
                               >> 0x20U)) >> 0x1dU);
    __Vtemp_14[0U] = __Vtemp_12[0U];
    __Vtemp_14[1U] = __Vtemp_12[1U];
    __Vtemp_14[2U] = ((0xf80U & (vlSelf->top__DOT___4523_[2U] 
                                 << 2U)) | ((0x78U 
                                             & (vlSelf->top__DOT___4514_ 
                                                >> 0x16U)) 
                                            | __Vtemp_12[2U]));
    __Vtemp_15[0U] = (IData)((((QData)((IData)((1U 
                                                & (vlSelf->top__DOT___3863_[0U] 
                                                   >> 0x1dU)))) 
                               << 0x2bU) | (((QData)((IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelf->top__DOT___0629_))))) 
                                             << 0x2aU) 
                                            | (((QData)((IData)(
                                                                ((0xe0000000U 
                                                                  & (vlSelf->top__DOT___3883_[1U] 
                                                                     << 6U)) 
                                                                 | (((IData)(vlSelf->top__DOT___1144_) 
                                                                     << 0x1cU) 
                                                                    | ((0x8000000U 
                                                                        & (vlSelf->top__DOT___3883_[1U] 
                                                                           << 6U)) 
                                                                       | (((IData)(vlSelf->top__DOT___3381_) 
                                                                           << 0x1aU) 
                                                                          | (((IData)(vlSelf->top__DOT___0389_) 
                                                                              << 0x19U) 
                                                                             | (((IData)(vlSelf->top__DOT___1887_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___2481_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0074_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0723_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1066_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0799_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU))))))))))))))))))))))))))))) 
                                                << 0xaU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___1801_) 
                                                                   << 9U) 
                                                                  | ((0x1e0U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                         << 5U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1258_) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelf->top__DOT___2094_) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->top__DOT___2610_) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0170_)))))))))))));
    __Vtemp_15[1U] = ((0xfffff000U & ((0x80000000U 
                                       & (vlSelf->top__DOT___7158_ 
                                          << 0xbU)) 
                                      | ((0x40000000U 
                                          & (vlSelf->top__DOT___7158_ 
                                             << 0xbU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->top__DOT___7158_ 
                                                << 0xbU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->top__DOT___3863_[1U] 
                                                   << 0xeU)) 
                                               | (((IData)(vlSelf->top__DOT___3617_) 
                                                   << 0x1bU) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->top__DOT___3863_[1U] 
                                                         << 0xeU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->top__DOT___7158_ 
                                                            << 0xbU)) 
                                                        | ((0x1e00000U 
                                                            & (vlSelf->top__DOT___3863_[1U] 
                                                               << 0xeU)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 0xbU)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT___3863_[1U] 
                                                                     << 0xeU)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT___7158_ 
                                                                        << 0xbU)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT___3863_[1U] 
                                                                           << 0xeU)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT___7158_ 
                                                                              << 0xbU)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xeU)) 
                                                                             | (0x7000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xbU))))))))))))))))) 
                      | (IData)(((((QData)((IData)(
                                                   (1U 
                                                    & (vlSelf->top__DOT___3863_[0U] 
                                                       >> 0x1dU)))) 
                                   << 0x2bU) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSelf->top__DOT___0629_))))) 
                                                 << 0x2aU) 
                                                | (((QData)((IData)(
                                                                    ((0xe0000000U 
                                                                      & (vlSelf->top__DOT___3883_[1U] 
                                                                         << 6U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1144_) 
                                                                         << 0x1cU) 
                                                                        | ((0x8000000U 
                                                                            & (vlSelf->top__DOT___3883_[1U] 
                                                                               << 6U)) 
                                                                           | (((IData)(vlSelf->top__DOT___3381_) 
                                                                               << 0x1aU) 
                                                                              | (((IData)(vlSelf->top__DOT___0389_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1887_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___2481_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0074_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0723_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1066_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0799_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU))))))))))))))))))))))))))))) 
                                                    << 0xaU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1801_) 
                                                                       << 9U) 
                                                                      | ((0x1e0U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                             << 5U)) 
                                                                         | (((IData)(vlSelf->top__DOT___1258_) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0170_)))))))))))) 
                                 >> 0x20U)));
    __Vtemp_15[2U] = (0xfffU & ((0x1c0U & (vlSelf->top__DOT___3863_[1U] 
                                           >> 0x12U)) 
                                | ((0x20U & (vlSelf->top__DOT___7158_ 
                                             >> 0x15U)) 
                                   | ((0xff0U & ((IData)(vlSelf->top__DOT___0023_) 
                                                 << 4U)) 
                                      | ((8U & (vlSelf->top__DOT___3863_[2U] 
                                                >> 0xcU)) 
                                         | ((4U & (vlSelf->top__DOT___7158_ 
                                                   >> 0x15U)) 
                                            | ((2U 
                                                & (vlSelf->top__DOT___7158_ 
                                                   >> 0x15U)) 
                                               | ((1U 
                                                   & (vlSelf->top__DOT___7158_ 
                                                      >> 0x15U)) 
                                                  | (0xfffU 
                                                     & ((IData)(vlSelf->top__DOT___3617_) 
                                                        >> 5U))))))))));
    VL_ADD_W(3, __Vtemp_16, __Vtemp_14, __Vtemp_15);
    vlSelf->top__DOT___1120_ = (1U & (__Vtemp_16[2U] 
                                      >> 3U));
    __Vtemp_19[0U] = (((IData)((((QData)((IData)(((0x80000000U 
                                                   & (vlSelf->top__DOT___4739_[2U] 
                                                      << 0x1dU)) 
                                                  | ((0x7fe00000U 
                                                      & (vlSelf->top__DOT___4397_ 
                                                         << 0xeU)) 
                                                     | ((0x1f8000U 
                                                         & (vlSelf->top__DOT___4514_ 
                                                            << 7U)) 
                                                        | ((0x7ffcU 
                                                            & (vlSelf->top__DOT___4126_ 
                                                               >> 7U)) 
                                                           | (3U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT___3836_ 
                                                                         >> 0x33U))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___4126_ 
                                                                  << 0x19U)) 
                                                              | ((0x20000000U 
                                                                  & (vlSelf->top__DOT___4126_ 
                                                                     << 0x19U)) 
                                                                 | ((0x1fffc000U 
                                                                     & (vlSelf->top__DOT___4555_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x2000U 
                                                                        & (vlSelf->top__DOT___4739_[0U] 
                                                                           >> 4U)) 
                                                                       | ((0x1c00U 
                                                                           & (vlSelf->top__DOT___4555_[0U] 
                                                                              >> 3U)) 
                                                                          | ((0x300U 
                                                                              & (vlSelf->top__DOT___4223_ 
                                                                                >> 0xdU)) 
                                                                             | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0442_) 
                                                                                << 6U) 
                                                                                | ((0x38U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1144_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (IData)(vlSelf->top__DOT___3381_)))))))))))))))) 
                       << 3U) | (((IData)(vlSelf->top__DOT___0389_) 
                                  << 2U) | (((IData)(vlSelf->top__DOT___1183_) 
                                             << 1U) 
                                            | (IData)(vlSelf->top__DOT___0723_))));
    __Vtemp_19[1U] = (((IData)((((QData)((IData)(((0x80000000U 
                                                   & (vlSelf->top__DOT___4739_[2U] 
                                                      << 0x1dU)) 
                                                  | ((0x7fe00000U 
                                                      & (vlSelf->top__DOT___4397_ 
                                                         << 0xeU)) 
                                                     | ((0x1f8000U 
                                                         & (vlSelf->top__DOT___4514_ 
                                                            << 7U)) 
                                                        | ((0x7ffcU 
                                                            & (vlSelf->top__DOT___4126_ 
                                                               >> 7U)) 
                                                           | (3U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT___3836_ 
                                                                         >> 0x33U))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___4126_ 
                                                                  << 0x19U)) 
                                                              | ((0x20000000U 
                                                                  & (vlSelf->top__DOT___4126_ 
                                                                     << 0x19U)) 
                                                                 | ((0x1fffc000U 
                                                                     & (vlSelf->top__DOT___4555_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x2000U 
                                                                        & (vlSelf->top__DOT___4739_[0U] 
                                                                           >> 4U)) 
                                                                       | ((0x1c00U 
                                                                           & (vlSelf->top__DOT___4555_[0U] 
                                                                              >> 3U)) 
                                                                          | ((0x300U 
                                                                              & (vlSelf->top__DOT___4223_ 
                                                                                >> 0xdU)) 
                                                                             | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0442_) 
                                                                                << 6U) 
                                                                                | ((0x38U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1144_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (IData)(vlSelf->top__DOT___3381_)))))))))))))))) 
                       >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                               ((0x80000000U 
                                                                 & (vlSelf->top__DOT___4739_[2U] 
                                                                    << 0x1dU)) 
                                                                | ((0x7fe00000U 
                                                                    & (vlSelf->top__DOT___4397_ 
                                                                       << 0xeU)) 
                                                                   | ((0x1f8000U 
                                                                       & (vlSelf->top__DOT___4514_ 
                                                                          << 7U)) 
                                                                      | ((0x7ffcU 
                                                                          & (vlSelf->top__DOT___4126_ 
                                                                             >> 7U)) 
                                                                         | (3U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x33U))))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0x80000000U 
                                                                  & (vlSelf->top__DOT___4126_ 
                                                                     << 0x19U)) 
                                                                 | ((0x20000000U 
                                                                     & (vlSelf->top__DOT___4126_ 
                                                                        << 0x19U)) 
                                                                    | ((0x1fffc000U 
                                                                        & (vlSelf->top__DOT___4555_[0U] 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->top__DOT___4739_[0U] 
                                                                              >> 4U)) 
                                                                          | ((0x1c00U 
                                                                              & (vlSelf->top__DOT___4555_[0U] 
                                                                                >> 3U)) 
                                                                             | ((0x300U 
                                                                                & (vlSelf->top__DOT___4223_ 
                                                                                >> 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0442_) 
                                                                                << 6U) 
                                                                                | ((0x38U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1144_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (IData)(vlSelf->top__DOT___3381_))))))))))))))) 
                                             >> 0x20U)) 
                                    << 3U));
    __Vtemp_19[2U] = ((IData)(((((QData)((IData)(((0x80000000U 
                                                   & (vlSelf->top__DOT___4739_[2U] 
                                                      << 0x1dU)) 
                                                  | ((0x7fe00000U 
                                                      & (vlSelf->top__DOT___4397_ 
                                                         << 0xeU)) 
                                                     | ((0x1f8000U 
                                                         & (vlSelf->top__DOT___4514_ 
                                                            << 7U)) 
                                                        | ((0x7ffcU 
                                                            & (vlSelf->top__DOT___4126_ 
                                                               >> 7U)) 
                                                           | (3U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT___3836_ 
                                                                         >> 0x33U))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___4126_ 
                                                                  << 0x19U)) 
                                                              | ((0x20000000U 
                                                                  & (vlSelf->top__DOT___4126_ 
                                                                     << 0x19U)) 
                                                                 | ((0x1fffc000U 
                                                                     & (vlSelf->top__DOT___4555_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x2000U 
                                                                        & (vlSelf->top__DOT___4739_[0U] 
                                                                           >> 4U)) 
                                                                       | ((0x1c00U 
                                                                           & (vlSelf->top__DOT___4555_[0U] 
                                                                              >> 3U)) 
                                                                          | ((0x300U 
                                                                              & (vlSelf->top__DOT___4223_ 
                                                                                >> 0xdU)) 
                                                                             | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0442_) 
                                                                                << 6U) 
                                                                                | ((0x38U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1144_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (IData)(vlSelf->top__DOT___3381_))))))))))))))) 
                               >> 0x20U)) >> 0x1dU);
    __Vtemp_21[0U] = __Vtemp_19[0U];
    __Vtemp_21[1U] = __Vtemp_19[1U];
    __Vtemp_21[2U] = ((0xf80U & (vlSelf->top__DOT___4523_[2U] 
                                 << 2U)) | ((0x78U 
                                             & (vlSelf->top__DOT___4514_ 
                                                >> 0x16U)) 
                                            | __Vtemp_19[2U]));
    __Vtemp_22[0U] = (IData)((((QData)((IData)((1U 
                                                & (vlSelf->top__DOT___3863_[0U] 
                                                   >> 0x1dU)))) 
                               << 0x2bU) | (((QData)((IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelf->top__DOT___0629_))))) 
                                             << 0x2aU) 
                                            | (((QData)((IData)(
                                                                ((0xe0000000U 
                                                                  & (vlSelf->top__DOT___3883_[1U] 
                                                                     << 6U)) 
                                                                 | (((IData)(vlSelf->top__DOT___1144_) 
                                                                     << 0x1cU) 
                                                                    | ((0x8000000U 
                                                                        & (vlSelf->top__DOT___3883_[1U] 
                                                                           << 6U)) 
                                                                       | (((IData)(vlSelf->top__DOT___3381_) 
                                                                           << 0x1aU) 
                                                                          | (((IData)(vlSelf->top__DOT___0389_) 
                                                                              << 0x19U) 
                                                                             | (((IData)(vlSelf->top__DOT___1887_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___2481_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0074_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0723_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1066_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0799_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU))))))))))))))))))))))))))))) 
                                                << 0xaU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___1801_) 
                                                                   << 9U) 
                                                                  | ((0x1e0U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                         << 5U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1258_) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelf->top__DOT___2094_) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->top__DOT___2610_) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0170_)))))))))))));
    __Vtemp_22[1U] = ((0xfffff000U & ((0x80000000U 
                                       & (vlSelf->top__DOT___7158_ 
                                          << 0xbU)) 
                                      | ((0x40000000U 
                                          & (vlSelf->top__DOT___7158_ 
                                             << 0xbU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->top__DOT___7158_ 
                                                << 0xbU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->top__DOT___3863_[1U] 
                                                   << 0xeU)) 
                                               | (((IData)(vlSelf->top__DOT___3617_) 
                                                   << 0x1bU) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->top__DOT___3863_[1U] 
                                                         << 0xeU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->top__DOT___7158_ 
                                                            << 0xbU)) 
                                                        | ((0x1e00000U 
                                                            & (vlSelf->top__DOT___3863_[1U] 
                                                               << 0xeU)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 0xbU)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT___3863_[1U] 
                                                                     << 0xeU)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT___7158_ 
                                                                        << 0xbU)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT___3863_[1U] 
                                                                           << 0xeU)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT___7158_ 
                                                                              << 0xbU)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xeU)) 
                                                                             | (0x7000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xbU))))))))))))))))) 
                      | (IData)(((((QData)((IData)(
                                                   (1U 
                                                    & (vlSelf->top__DOT___3863_[0U] 
                                                       >> 0x1dU)))) 
                                   << 0x2bU) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSelf->top__DOT___0629_))))) 
                                                 << 0x2aU) 
                                                | (((QData)((IData)(
                                                                    ((0xe0000000U 
                                                                      & (vlSelf->top__DOT___3883_[1U] 
                                                                         << 6U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1144_) 
                                                                         << 0x1cU) 
                                                                        | ((0x8000000U 
                                                                            & (vlSelf->top__DOT___3883_[1U] 
                                                                               << 6U)) 
                                                                           | (((IData)(vlSelf->top__DOT___3381_) 
                                                                               << 0x1aU) 
                                                                              | (((IData)(vlSelf->top__DOT___0389_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1887_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___2481_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0074_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0723_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1066_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0799_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU))))))))))))))))))))))))))))) 
                                                    << 0xaU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1801_) 
                                                                       << 9U) 
                                                                      | ((0x1e0U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                             << 5U)) 
                                                                         | (((IData)(vlSelf->top__DOT___1258_) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0170_)))))))))))) 
                                 >> 0x20U)));
    __Vtemp_22[2U] = (0xfffU & ((0x1c0U & (vlSelf->top__DOT___3863_[1U] 
                                           >> 0x12U)) 
                                | ((0x20U & (vlSelf->top__DOT___7158_ 
                                             >> 0x15U)) 
                                   | ((0xff0U & ((IData)(vlSelf->top__DOT___0023_) 
                                                 << 4U)) 
                                      | ((8U & (vlSelf->top__DOT___3863_[2U] 
                                                >> 0xcU)) 
                                         | ((4U & (vlSelf->top__DOT___7158_ 
                                                   >> 0x15U)) 
                                            | ((2U 
                                                & (vlSelf->top__DOT___7158_ 
                                                   >> 0x15U)) 
                                               | ((1U 
                                                   & (vlSelf->top__DOT___7158_ 
                                                      >> 0x15U)) 
                                                  | (0xfffU 
                                                     & ((IData)(vlSelf->top__DOT___3617_) 
                                                        >> 5U))))))))));
    VL_ADD_W(3, __Vtemp_23, __Vtemp_21, __Vtemp_22);
    vlSelf->top__DOT___1664_ = (1U & (__Vtemp_23[0U] 
                                      >> 0x16U));
    __Vtemp_26[0U] = (((IData)((((QData)((IData)(((0x80000000U 
                                                   & (vlSelf->top__DOT___4739_[2U] 
                                                      << 0x1dU)) 
                                                  | ((0x7fe00000U 
                                                      & (vlSelf->top__DOT___4397_ 
                                                         << 0xeU)) 
                                                     | ((0x1f8000U 
                                                         & (vlSelf->top__DOT___4514_ 
                                                            << 7U)) 
                                                        | ((0x7ffcU 
                                                            & (vlSelf->top__DOT___4126_ 
                                                               >> 7U)) 
                                                           | (3U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT___3836_ 
                                                                         >> 0x33U))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___4126_ 
                                                                  << 0x19U)) 
                                                              | ((0x20000000U 
                                                                  & (vlSelf->top__DOT___4126_ 
                                                                     << 0x19U)) 
                                                                 | ((0x1fffc000U 
                                                                     & (vlSelf->top__DOT___4555_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x2000U 
                                                                        & (vlSelf->top__DOT___4739_[0U] 
                                                                           >> 4U)) 
                                                                       | ((0x1c00U 
                                                                           & (vlSelf->top__DOT___4555_[0U] 
                                                                              >> 3U)) 
                                                                          | ((0x300U 
                                                                              & (vlSelf->top__DOT___4223_ 
                                                                                >> 0xdU)) 
                                                                             | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0442_) 
                                                                                << 6U) 
                                                                                | ((0x38U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1144_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (IData)(vlSelf->top__DOT___3381_)))))))))))))))) 
                       << 3U) | (((IData)(vlSelf->top__DOT___0389_) 
                                  << 2U) | (((IData)(vlSelf->top__DOT___1183_) 
                                             << 1U) 
                                            | (IData)(vlSelf->top__DOT___0723_))));
    __Vtemp_26[1U] = (((IData)((((QData)((IData)(((0x80000000U 
                                                   & (vlSelf->top__DOT___4739_[2U] 
                                                      << 0x1dU)) 
                                                  | ((0x7fe00000U 
                                                      & (vlSelf->top__DOT___4397_ 
                                                         << 0xeU)) 
                                                     | ((0x1f8000U 
                                                         & (vlSelf->top__DOT___4514_ 
                                                            << 7U)) 
                                                        | ((0x7ffcU 
                                                            & (vlSelf->top__DOT___4126_ 
                                                               >> 7U)) 
                                                           | (3U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT___3836_ 
                                                                         >> 0x33U))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___4126_ 
                                                                  << 0x19U)) 
                                                              | ((0x20000000U 
                                                                  & (vlSelf->top__DOT___4126_ 
                                                                     << 0x19U)) 
                                                                 | ((0x1fffc000U 
                                                                     & (vlSelf->top__DOT___4555_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x2000U 
                                                                        & (vlSelf->top__DOT___4739_[0U] 
                                                                           >> 4U)) 
                                                                       | ((0x1c00U 
                                                                           & (vlSelf->top__DOT___4555_[0U] 
                                                                              >> 3U)) 
                                                                          | ((0x300U 
                                                                              & (vlSelf->top__DOT___4223_ 
                                                                                >> 0xdU)) 
                                                                             | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0442_) 
                                                                                << 6U) 
                                                                                | ((0x38U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1144_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (IData)(vlSelf->top__DOT___3381_)))))))))))))))) 
                       >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                               ((0x80000000U 
                                                                 & (vlSelf->top__DOT___4739_[2U] 
                                                                    << 0x1dU)) 
                                                                | ((0x7fe00000U 
                                                                    & (vlSelf->top__DOT___4397_ 
                                                                       << 0xeU)) 
                                                                   | ((0x1f8000U 
                                                                       & (vlSelf->top__DOT___4514_ 
                                                                          << 7U)) 
                                                                      | ((0x7ffcU 
                                                                          & (vlSelf->top__DOT___4126_ 
                                                                             >> 7U)) 
                                                                         | (3U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x33U))))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0x80000000U 
                                                                  & (vlSelf->top__DOT___4126_ 
                                                                     << 0x19U)) 
                                                                 | ((0x20000000U 
                                                                     & (vlSelf->top__DOT___4126_ 
                                                                        << 0x19U)) 
                                                                    | ((0x1fffc000U 
                                                                        & (vlSelf->top__DOT___4555_[0U] 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->top__DOT___4739_[0U] 
                                                                              >> 4U)) 
                                                                          | ((0x1c00U 
                                                                              & (vlSelf->top__DOT___4555_[0U] 
                                                                                >> 3U)) 
                                                                             | ((0x300U 
                                                                                & (vlSelf->top__DOT___4223_ 
                                                                                >> 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0442_) 
                                                                                << 6U) 
                                                                                | ((0x38U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1144_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (IData)(vlSelf->top__DOT___3381_))))))))))))))) 
                                             >> 0x20U)) 
                                    << 3U));
    __Vtemp_26[2U] = ((IData)(((((QData)((IData)(((0x80000000U 
                                                   & (vlSelf->top__DOT___4739_[2U] 
                                                      << 0x1dU)) 
                                                  | ((0x7fe00000U 
                                                      & (vlSelf->top__DOT___4397_ 
                                                         << 0xeU)) 
                                                     | ((0x1f8000U 
                                                         & (vlSelf->top__DOT___4514_ 
                                                            << 7U)) 
                                                        | ((0x7ffcU 
                                                            & (vlSelf->top__DOT___4126_ 
                                                               >> 7U)) 
                                                           | (3U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT___3836_ 
                                                                         >> 0x33U))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT___4126_ 
                                                                  << 0x19U)) 
                                                              | ((0x20000000U 
                                                                  & (vlSelf->top__DOT___4126_ 
                                                                     << 0x19U)) 
                                                                 | ((0x1fffc000U 
                                                                     & (vlSelf->top__DOT___4555_[0U] 
                                                                        >> 3U)) 
                                                                    | ((0x2000U 
                                                                        & (vlSelf->top__DOT___4739_[0U] 
                                                                           >> 4U)) 
                                                                       | ((0x1c00U 
                                                                           & (vlSelf->top__DOT___4555_[0U] 
                                                                              >> 3U)) 
                                                                          | ((0x300U 
                                                                              & (vlSelf->top__DOT___4223_ 
                                                                                >> 0xdU)) 
                                                                             | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0442_) 
                                                                                << 6U) 
                                                                                | ((0x38U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1144_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x14U)) 
                                                                                | (IData)(vlSelf->top__DOT___3381_))))))))))))))) 
                               >> 0x20U)) >> 0x1dU);
    __Vtemp_28[0U] = __Vtemp_26[0U];
    __Vtemp_28[1U] = __Vtemp_26[1U];
    __Vtemp_28[2U] = ((0xf80U & (vlSelf->top__DOT___4523_[2U] 
                                 << 2U)) | ((0x78U 
                                             & (vlSelf->top__DOT___4514_ 
                                                >> 0x16U)) 
                                            | __Vtemp_26[2U]));
    __Vtemp_29[0U] = (IData)((((QData)((IData)((1U 
                                                & (vlSelf->top__DOT___3863_[0U] 
                                                   >> 0x1dU)))) 
                               << 0x2bU) | (((QData)((IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelf->top__DOT___0629_))))) 
                                             << 0x2aU) 
                                            | (((QData)((IData)(
                                                                ((0xe0000000U 
                                                                  & (vlSelf->top__DOT___3883_[1U] 
                                                                     << 6U)) 
                                                                 | (((IData)(vlSelf->top__DOT___1144_) 
                                                                     << 0x1cU) 
                                                                    | ((0x8000000U 
                                                                        & (vlSelf->top__DOT___3883_[1U] 
                                                                           << 6U)) 
                                                                       | (((IData)(vlSelf->top__DOT___3381_) 
                                                                           << 0x1aU) 
                                                                          | (((IData)(vlSelf->top__DOT___0389_) 
                                                                              << 0x19U) 
                                                                             | (((IData)(vlSelf->top__DOT___1887_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___2481_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0074_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0723_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1066_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0799_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU))))))))))))))))))))))))))))) 
                                                << 0xaU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___1801_) 
                                                                   << 9U) 
                                                                  | ((0x1e0U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                         << 5U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1258_) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelf->top__DOT___2094_) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->top__DOT___2610_) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0170_)))))))))))));
    __Vtemp_29[1U] = ((0xfffff000U & ((0x80000000U 
                                       & (vlSelf->top__DOT___7158_ 
                                          << 0xbU)) 
                                      | ((0x40000000U 
                                          & (vlSelf->top__DOT___7158_ 
                                             << 0xbU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->top__DOT___7158_ 
                                                << 0xbU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->top__DOT___3863_[1U] 
                                                   << 0xeU)) 
                                               | (((IData)(vlSelf->top__DOT___3617_) 
                                                   << 0x1bU) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->top__DOT___3863_[1U] 
                                                         << 0xeU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->top__DOT___7158_ 
                                                            << 0xbU)) 
                                                        | ((0x1e00000U 
                                                            & (vlSelf->top__DOT___3863_[1U] 
                                                               << 0xeU)) 
                                                           | ((0x100000U 
                                                               & (vlSelf->top__DOT___7158_ 
                                                                  << 0xbU)) 
                                                              | ((0x80000U 
                                                                  & (vlSelf->top__DOT___3863_[1U] 
                                                                     << 0xeU)) 
                                                                 | ((0x40000U 
                                                                     & (vlSelf->top__DOT___7158_ 
                                                                        << 0xbU)) 
                                                                    | ((0x20000U 
                                                                        & (vlSelf->top__DOT___3863_[1U] 
                                                                           << 0xeU)) 
                                                                       | ((0x10000U 
                                                                           & (vlSelf->top__DOT___7158_ 
                                                                              << 0xbU)) 
                                                                          | ((0x8000U 
                                                                              & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 0xeU)) 
                                                                             | (0x7000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                << 0xbU))))))))))))))))) 
                      | (IData)(((((QData)((IData)(
                                                   (1U 
                                                    & (vlSelf->top__DOT___3863_[0U] 
                                                       >> 0x1dU)))) 
                                   << 0x2bU) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSelf->top__DOT___0629_))))) 
                                                 << 0x2aU) 
                                                | (((QData)((IData)(
                                                                    ((0xe0000000U 
                                                                      & (vlSelf->top__DOT___3883_[1U] 
                                                                         << 6U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1144_) 
                                                                         << 0x1cU) 
                                                                        | ((0x8000000U 
                                                                            & (vlSelf->top__DOT___3883_[1U] 
                                                                               << 6U)) 
                                                                           | (((IData)(vlSelf->top__DOT___3381_) 
                                                                               << 0x1aU) 
                                                                              | (((IData)(vlSelf->top__DOT___0389_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___1887_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___2481_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0193_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0074_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->top__DOT___7185_) 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3654_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0082_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0723_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___1066_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___1672_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0799_) 
                                                                                << 6U) 
                                                                                | (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU))))))))))))))))))))))))))))) 
                                                    << 0xaU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top__DOT___1801_) 
                                                                       << 9U) 
                                                                      | ((0x1e0U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                             << 5U)) 
                                                                         | (((IData)(vlSelf->top__DOT___1258_) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0170_)))))))))))) 
                                 >> 0x20U)));
    __Vtemp_29[2U] = (0xfffU & ((0x1c0U & (vlSelf->top__DOT___3863_[1U] 
                                           >> 0x12U)) 
                                | ((0x20U & (vlSelf->top__DOT___7158_ 
                                             >> 0x15U)) 
                                   | ((0xff0U & ((IData)(vlSelf->top__DOT___0023_) 
                                                 << 4U)) 
                                      | ((8U & (vlSelf->top__DOT___3863_[2U] 
                                                >> 0xcU)) 
                                         | ((4U & (vlSelf->top__DOT___7158_ 
                                                   >> 0x15U)) 
                                            | ((2U 
                                                & (vlSelf->top__DOT___7158_ 
                                                   >> 0x15U)) 
                                               | ((1U 
                                                   & (vlSelf->top__DOT___7158_ 
                                                      >> 0x15U)) 
                                                  | (0xfffU 
                                                     & ((IData)(vlSelf->top__DOT___3617_) 
                                                        >> 5U))))))))));
    VL_ADD_W(3, __Vtemp_30, __Vtemp_28, __Vtemp_29);
    vlSelf->top__DOT___3502_ = (1U & (__Vtemp_30[1U] 
                                      >> 7U));
    vlSelf->top__DOT___0438_ = ((IData)(vlSelf->top__DOT___1664_) 
                                & (IData)(vlSelf->top__DOT___1663_));
    vlSelf->top__DOT___3244_ = ((IData)(vlSelf->top__DOT___3502_) 
                                | (IData)(vlSelf->top__DOT___0201_));
    vlSelf->top__DOT___3440_ = (1U & (((((IData)(vlSelf->top__DOT___2615_) 
                                         << 1U) | (IData)(vlSelf->top__DOT___3244_)) 
                                       + (((IData)(vlSelf->top__DOT___1865_) 
                                           << 1U) | (IData)(vlSelf->top__DOT___0577_))) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__861(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__861\n"); );
    // Body
    vlSelf->top__DOT___1135_ = ((IData)(vlSelf->top__DOT___0188_) 
                                & (~ (IData)((vlSelf->top__DOT___4745_ 
                                              >> 0x2dU))));
    vlSelf->top__DOT___4431_[0U] = ((0xfffffffeU & 
                                     vlSelf->top__DOT___4431_[0U]) 
                                    | (IData)(vlSelf->top__DOT___1135_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__862(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__862\n"); );
    // Body
    vlSelf->top__DOT___4371_ = ((0x3fffc000U & vlSelf->top__DOT___4371_) 
                                | (((IData)(vlSelf->top__DOT___0188_) 
                                    << 0xdU) | (((IData)(vlSelf->top__DOT___2602_) 
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
                                                                                >> 0x1eU))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__863(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__863\n"); );
    // Body
    vlSelf->top__DOT___2434_ = (1U & ((((0x3800U & 
                                         (vlSelf->top__DOT___4284_ 
                                          >> 6U)) | 
                                        (((IData)(vlSelf->top__DOT___1555_) 
                                          << 0xaU) 
                                         | ((0x3fcU 
                                             & (vlSelf->top__DOT___4284_ 
                                                >> 6U)) 
                                            | (((IData)(vlSelf->top__DOT___0201_) 
                                                << 1U) 
                                               | (IData)(vlSelf->top__DOT___1205_))))) 
                                       + ((0x2000U 
                                           & ((IData)(
                                                      (vlSelf->top__DOT___4011_ 
                                                       >> 0x1aU)) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(vlSelf->top__DOT___7111_) 
                                                 << 2U)) 
                                             | ((0xe00U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___4011_ 
                                                             >> 0x16U)) 
                                                    << 9U)) 
                                                | ((0x100U 
                                                    & ((IData)(vlSelf->top__DOT___7111_) 
                                                       << 2U)) 
                                                   | ((0x80U 
                                                       & ((IData)(vlSelf->top__DOT___7111_) 
                                                          << 2U)) 
                                                      | ((0x60U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___4011_ 
                                                                      >> 0x12U)) 
                                                             << 5U)) 
                                                         | ((0x10U 
                                                             & ((IData)(vlSelf->top__DOT___7111_) 
                                                                << 2U)) 
                                                            | ((0xcU 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___4011_ 
                                                                            >> 0xfU)) 
                                                                   << 2U)) 
                                                               | (((IData)(vlSelf->top__DOT___0995_) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->top__DOT___0038_))))))))))) 
                                      >> 0xdU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__864(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__864\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h398cd003__0 = (((IData)(vlSelf->top__DOT___1554_) 
                                                 << 7U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h9c860086__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__865(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__865\n"); );
    // Body
    vlSelf->top__DOT___1662_ = ((IData)(vlSelf->top__DOT___1554_) 
                                ^ (IData)(vlSelf->top__DOT___1428_));
    vlSelf->top__DOT___1843_ = ((IData)(vlSelf->top__DOT___0195_) 
                                & (IData)(vlSelf->top__DOT___1662_));
    vlSelf->top__DOT___2896_ = (1U & (~ (((IData)(vlSelf->top__DOT___0708_) 
                                          & (IData)(vlSelf->top__DOT___1662_)) 
                                         | ((IData)(vlSelf->top__DOT___0445_) 
                                            & (IData)(vlSelf->top__DOT___0183_)))));
    vlSelf->top__DOT___4346_[0U] = ((0xffffff7fU & 
                                     vlSelf->top__DOT___4346_[0U]) 
                                    | (((IData)(vlSelf->top__DOT___0195_) 
                                        & (IData)(vlSelf->top__DOT___1662_)) 
                                       << 7U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__866(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__866\n"); );
    // Body
    vlSelf->top__DOT___1233_ = (1U & ((IData)((vlSelf->top__DOT___4754_ 
                                               >> 0xdU)) 
                                      & (((0x3274U 
                                           | (IData)(vlSelf->top__DOT___1889_)) 
                                          + ((0x3e000U 
                                              & vlSelf->top__DOT___3870_) 
                                             | ((0x1000U 
                                                 & (vlSelf->top__DOT___7025_ 
                                                    << 3U)) 
                                                | ((0xe00U 
                                                    & vlSelf->top__DOT___3870_) 
                                                   | ((0x100U 
                                                       & (vlSelf->top__DOT___7025_ 
                                                          << 3U)) 
                                                      | ((0xf8U 
                                                          & vlSelf->top__DOT___3870_) 
                                                         | (IData)(vlSelf->top__DOT____VdfgTmp_hc3435163__0))))))) 
                                         >> 0x11U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__867(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__867\n"); );
    // Body
    vlSelf->top__DOT___3678_ = (1U & (((((IData)(vlSelf->top__DOT___1522_) 
                                         << 7U) | (
                                                   ((IData)(vlSelf->top__DOT___0029_) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->top__DOT___2699_) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->top__DOT___0445_) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->top__DOT___1567_) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->top__DOT___3672_) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->top__DOT___1845_) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->top__DOT___1688_)))))))) 
                                       + ((0x80U & 
                                           (vlSelf->top__DOT___3870_ 
                                            >> 2U)) 
                                          | ((0x40U 
                                              & (vlSelf->top__DOT___7025_ 
                                                 << 1U)) 
                                             | ((0x3eU 
                                                 & (vlSelf->top__DOT___3870_ 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (~ (IData)(vlSelf->top__DOT___0629_))))))) 
                                      >> 7U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__868(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__868\n"); );
    // Body
    vlSelf->top__DOT___2076_ = (1U & (~ (((IData)(vlSelf->top__DOT___2951_) 
                                          & (IData)(vlSelf->top__DOT___1955_)) 
                                         | ((IData)(vlSelf->top__DOT___3118_) 
                                            & (IData)(vlSelf->top__DOT___2699_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__869(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__869\n"); );
    // Body
    vlSelf->top__DOT___3677_ = (1U & (((8U | ((0x7fff0U 
                                               & vlSelf->top__DOT___4251_) 
                                              | (((IData)(vlSelf->top__DOT___1688_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___0300_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___1071_))))) 
                                       + ((0x78000U 
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
                                      >> 0x12U));
    vlSelf->top__DOT___1189_ = (1U & (((8U | ((0x70U 
                                               & vlSelf->top__DOT___4251_) 
                                              | (((IData)(vlSelf->top__DOT___1688_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___0300_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___1071_))))) 
                                       + ((0x78U & 
                                           (vlSelf->top__DOT___4246_[1U] 
                                            >> 0x18U)) 
                                          | (((IData)(vlSelf->top__DOT___1642_) 
                                              << 1U) 
                                             | (IData)(vlSelf->top__DOT___0834_)))) 
                                      >> 6U));
    vlSelf->top__DOT___3736_ = (1U & (((8U | ((0x10U 
                                               & vlSelf->top__DOT___4251_) 
                                              | (((IData)(vlSelf->top__DOT___1688_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___0300_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___1071_))))) 
                                       + ((0x18U & 
                                           (vlSelf->top__DOT___4246_[1U] 
                                            >> 0x18U)) 
                                          | (((IData)(vlSelf->top__DOT___1642_) 
                                              << 1U) 
                                             | (IData)(vlSelf->top__DOT___0834_)))) 
                                      >> 4U));
    vlSelf->top__DOT___1765_ = (1U & (((8U | ((0x7f0U 
                                               & vlSelf->top__DOT___4251_) 
                                              | (((IData)(vlSelf->top__DOT___1688_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___0300_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___1071_))))) 
                                       + ((0x7f8U & 
                                           ((vlSelf->top__DOT___4246_[2U] 
                                             << 8U) 
                                            | (0xf8U 
                                               & (vlSelf->top__DOT___4246_[1U] 
                                                  >> 0x18U)))) 
                                          | (((IData)(vlSelf->top__DOT___1642_) 
                                              << 1U) 
                                             | (IData)(vlSelf->top__DOT___0834_)))) 
                                      >> 0xaU));
    vlSelf->top__DOT___2057_ = (1U & (~ (((~ (IData)(vlSelf->top__DOT___0195_)) 
                                          & (IData)(vlSelf->top__DOT___0223_)) 
                                         | ((IData)(vlSelf->top__DOT___1188_) 
                                            & (IData)(vlSelf->top__DOT___1189_)))));
    vlSelf->top__DOT___0944_ = ((IData)(vlSelf->top__DOT___3736_) 
                                ^ (IData)(vlSelf->top__DOT___0560_));
    vlSelf->top__DOT___1764_ = ((IData)(vlSelf->top__DOT___1765_) 
                                & (IData)(vlSelf->top__DOT___1407_));
    vlSelf->top__DOT___0690_ = ((IData)(vlSelf->top__DOT___0945_) 
                                & (~ (IData)(vlSelf->top__DOT___0944_)));
    vlSelf->top__DOT___2256_ = (1U & ((IData)(vlSelf->top__DOT___0944_) 
                                      + (IData)(vlSelf->top__DOT___0154_)));
    vlSelf->top__DOT____VdfgTmp_heff88a57__0 = (((IData)(vlSelf->top__DOT___0106_) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->top__DOT___0295_) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->top__DOT___0866_) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT___1887_) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT___0933_) 
                                                             << 2U) 
                                                            | ((2U 
                                                                & ((IData)(vlSelf->top__DOT___6976_) 
                                                                   >> 1U)) 
                                                               | (IData)(vlSelf->top__DOT___0690_)))))));
    vlSelf->top__DOT____VdfgTmp_hbbdae7ab__0 = (((IData)(vlSelf->top__DOT___1009_) 
                                                 << 0x18U) 
                                                | ((0xffff80U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3991_ 
                                                                >> 7U)) 
                                                       << 7U)) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_heff88a57__0)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__870(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__870\n"); );
    // Body
    vlSelf->top__DOT___1954_ = (1U & (~ (((IData)(vlSelf->top__DOT___0495_) 
                                          & (IData)(vlSelf->top__DOT___0675_)) 
                                         | (IData)(vlSelf->top__DOT___0855_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__871(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__871\n"); );
    // Body
    vlSelf->top__DOT___3469_ = (1U & ((IData)(vlSelf->top__DOT___0495_) 
                                      | (IData)(vlSelf->top__DOT___7232_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__872(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__872\n"); );
    // Body
    vlSelf->top__DOT___0971_ = ((IData)(vlSelf->top__DOT___0495_) 
                                | (IData)(vlSelf->top__DOT___0546_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__873(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__873\n"); );
    // Body
    vlSelf->top__DOT___1684_ = (1U & (~ (((IData)(vlSelf->top__DOT___2472_) 
                                          & (IData)(vlSelf->top__DOT___0261_)) 
                                         | ((IData)(vlSelf->top__DOT___0773_) 
                                            & ((IData)(vlSelf->top__DOT___7006_) 
                                               >> 3U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__874(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__874\n"); );
    // Body
    vlSelf->top__DOT___3864_ = ((0xffU & vlSelf->top__DOT___3864_) 
                                | ((0xffff000U & ((IData)(
                                                          (vlSelf->top__DOT___7234_ 
                                                           >> 0x1dU)) 
                                                  << 0xcU)) 
                                   | (((IData)(vlSelf->top__DOT___0296_) 
                                       << 0xbU) | (
                                                   ((IData)(vlSelf->top__DOT___2287_) 
                                                    << 0xaU) 
                                                   | (((IData)(vlSelf->top__DOT___3030_) 
                                                       << 9U) 
                                                      | (0x100U 
                                                         & (vlSelf->top__DOT___7154_[2U] 
                                                            >> 0xeU)))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__877(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__877\n"); );
    // Init
    CData/*2:0*/ top__DOT____VdfgTmp_h367ae685__0;
    top__DOT____VdfgTmp_h367ae685__0 = 0;
    // Body
    vlSelf->top__DOT___3823_ = ((0x2000000U & ((IData)(vlSelf->top__DOT___7049_) 
                                               << 0xeU)) 
                                | ((0x1000000U & ((IData)(vlSelf->top__DOT___7049_) 
                                                  << 0xeU)) 
                                   | ((0x800000U & 
                                       ((IData)(vlSelf->top__DOT___7049_) 
                                        << 0xeU)) | 
                                      ((0x400000U & 
                                        ((IData)(vlSelf->top__DOT___7049_) 
                                         << 0xeU)) 
                                       | ((0x300000U 
                                           & ((IData)(vlSelf->top__DOT___7049_) 
                                              << 0xeU)) 
                                          | ((0x80000U 
                                              & ((IData)(vlSelf->top__DOT___7049_) 
                                                 << 0xeU)) 
                                             | ((0x40000U 
                                                 & ((IData)(vlSelf->top__DOT___7049_) 
                                                    << 0xeU)) 
                                                | ((0x20000U 
                                                    & ((IData)(vlSelf->top__DOT___7049_) 
                                                       << 0xeU)) 
                                                   | ((0x18000U 
                                                       & ((IData)(vlSelf->top__DOT___7150_) 
                                                          << 7U)) 
                                                      | ((0x4000U 
                                                          & ((IData)(vlSelf->top__DOT___7150_) 
                                                             << 7U)) 
                                                         | ((0x2000U 
                                                             & ((IData)(vlSelf->top__DOT___7150_) 
                                                                << 7U)) 
                                                            | ((0x1000U 
                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                   << 7U)) 
                                                               | ((0x800U 
                                                                   & ((IData)(vlSelf->top__DOT___7150_) 
                                                                      << 7U)) 
                                                                  | ((0x400U 
                                                                      & ((IData)(vlSelf->top__DOT___7150_) 
                                                                         << 7U)) 
                                                                     | ((0x200U 
                                                                         & ((IData)(vlSelf->top__DOT___7150_) 
                                                                            << 7U)) 
                                                                        | ((0x100U 
                                                                            & ((IData)(vlSelf->top__DOT___7150_) 
                                                                               << 7U)) 
                                                                           | ((0x80U 
                                                                               & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                << 7U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0038_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0296_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0208_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2904_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___3417_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1997_))))))))))))))))))))))));
    vlSelf->top__DOT___3922_ = (((QData)((IData)((1U 
                                                  & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                     >> 8U)))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                  << 0x18U)) 
                                                              | ((0x60000000U 
                                                                  & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                     << 0x18U)) 
                                                                 | (((IData)(vlSelf->top__DOT___1168_) 
                                                                     << 0x1cU) 
                                                                    | (((IData)(vlSelf->top__DOT___0834_) 
                                                                        << 0x1bU) 
                                                                       | (((IData)(vlSelf->top__DOT___0116_) 
                                                                           << 0x1aU) 
                                                                          | (((IData)(vlSelf->top__DOT___0338_) 
                                                                              << 0x19U) 
                                                                             | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x15U) 
                                                                                | ((0x1c0000U 
                                                                                & ((((0x7f8U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0x11U)) 
                                                                                | (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)))) 
                                                                                + 
                                                                                ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 1U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 1U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___3883_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0023_)))))))))))) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x11U) 
                                                                                | ((0x1c000U 
                                                                                & ((((0x78U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0x11U)) 
                                                                                | (7U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)))) 
                                                                                + 
                                                                                ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0023_)))))))) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                + 
                                                                                ((4U 
                                                                                & (vlSelf->top__DOT___3883_[1U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7092_) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0023_)))) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 0xaU) 
                                                                                | ((0x300U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 7U)) 
                                                                                | ((0x80U 
                                                                                & (IData)(vlSelf->top__DOT___7150_)) 
                                                                                | ((0x40U 
                                                                                & (IData)(vlSelf->top__DOT___7150_)) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->top__DOT___7150_)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 7U)) 
                                                                                | (0xfU 
                                                                                & (IData)(vlSelf->top__DOT___7150_)))))))))))))))))))))))))));
    vlSelf->top__DOT___4217_ = ((0x10U & (vlSelf->top__DOT___3823_ 
                                          >> 0x10U)) 
                                | ((8U & ((IData)(vlSelf->top__DOT___7049_) 
                                          >> 2U)) | 
                                   ((4U & (vlSelf->top__DOT___3823_ 
                                           >> 0x10U)) 
                                    | (3U & ((IData)(vlSelf->top__DOT___7049_) 
                                             >> 2U)))));
    vlSelf->top__DOT___1499_ = (1U & (IData)((0x7ffffULL 
                                              & ((((QData)((IData)(
                                                                   (0xc0000000U 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                                           << 0x1bU) 
                                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                                              << 0x1aU) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                   << 1U) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3922_ 
                                                                               >> 0x20U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x40000000U 
                                                                         & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                            << 0x17U)) 
                                                                        | ((0x30000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                               << 0x1cU)) 
                                                                           | (((IData)(vlSelf->top__DOT___1168_) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                 >> 0xeU))));
    vlSelf->top__DOT___3356_ = (1U & (IData)((0x1ffffffULL 
                                              & ((((QData)((IData)(
                                                                   (0xc0000000U 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                                           << 0x1bU) 
                                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                                              << 0x1aU) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                   << 1U) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3922_ 
                                                                               >> 0x20U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x40000000U 
                                                                         & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                            << 0x17U)) 
                                                                        | ((0x30000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                               << 0x1cU)) 
                                                                           | (((IData)(vlSelf->top__DOT___1168_) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                 >> 8U))));
    vlSelf->top__DOT___2682_ = (1U & (IData)((0x3fffffffULL 
                                              & ((((QData)((IData)(
                                                                   (0xc0000000U 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                                           << 0x1bU) 
                                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                                              << 0x1aU) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                   << 1U) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3922_ 
                                                                               >> 0x20U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x40000000U 
                                                                         & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                            << 0x17U)) 
                                                                        | ((0x30000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                               << 0x1cU)) 
                                                                           | (((IData)(vlSelf->top__DOT___1168_) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                 >> 3U))));
    vlSelf->top__DOT___3501_ = (1U & (IData)((0x7fULL 
                                              & ((((QData)((IData)(
                                                                   (0xc0000000U 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                                           << 0x1bU) 
                                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                                              << 0x1aU) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                   << 1U) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3922_ 
                                                                               >> 0x20U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x40000000U 
                                                                         & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                            << 0x17U)) 
                                                                        | ((0x30000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                               << 0x1cU)) 
                                                                           | (((IData)(vlSelf->top__DOT___1168_) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                 >> 0x1aU))));
    vlSelf->top__DOT___2882_ = (1U & (IData)((0x3fffULL 
                                              & ((((QData)((IData)(
                                                                   (0xc0000000U 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                                           << 0x1bU) 
                                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                                              << 0x1aU) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                   << 1U) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3922_ 
                                                                               >> 0x20U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x40000000U 
                                                                         & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                            << 0x17U)) 
                                                                        | ((0x30000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                               << 0x1cU)) 
                                                                           | (((IData)(vlSelf->top__DOT___1168_) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                 >> 0x13U))));
    vlSelf->top__DOT___2878_ = (1U & (IData)((0x7fffffffULL 
                                              & ((((QData)((IData)(
                                                                   (0xc0000000U 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                                           << 0x1bU) 
                                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                                              << 0x1aU) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                   << 1U) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3922_ 
                                                                               >> 0x20U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x40000000U 
                                                                         & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                            << 0x17U)) 
                                                                        | ((0x30000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                               << 0x1cU)) 
                                                                           | (((IData)(vlSelf->top__DOT___1168_) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                 >> 2U))));
    vlSelf->top__DOT___2744_ = (1U & (IData)((0x3fffffULL 
                                              & ((((QData)((IData)(
                                                                   (0xc0000000U 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                                           << 0x1bU) 
                                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                                              << 0x1aU) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                   << 1U) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3922_ 
                                                                               >> 0x20U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x40000000U 
                                                                         & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                            << 0x17U)) 
                                                                        | ((0x30000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                               << 0x1cU)) 
                                                                           | (((IData)(vlSelf->top__DOT___1168_) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                 >> 0xbU))));
    vlSelf->top__DOT___2705_ = (1U & (IData)((0xfffffULL 
                                              & ((((QData)((IData)(
                                                                   (0xc0000000U 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                                           << 0x1bU) 
                                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                                              << 0x1aU) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                   << 1U) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3922_ 
                                                                               >> 0x20U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x40000000U 
                                                                         & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                            << 0x17U)) 
                                                                        | ((0x30000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                               << 0x1cU)) 
                                                                           | (((IData)(vlSelf->top__DOT___1168_) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                 >> 0xdU))));
    vlSelf->top__DOT___2406_ = (1U & (IData)((0xffffffffULL 
                                              & ((((QData)((IData)(
                                                                   (0xc0000000U 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                                           << 0x1bU) 
                                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                                              << 0x1aU) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                   << 1U) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3922_ 
                                                                               >> 0x20U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x40000000U 
                                                                         & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                            << 0x17U)) 
                                                                        | ((0x30000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                               << 0x1cU)) 
                                                                           | (((IData)(vlSelf->top__DOT___1168_) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                 >> 1U))));
    vlSelf->top__DOT___0521_ = (1U & (IData)((0x7fffffULL 
                                              & ((((QData)((IData)(
                                                                   (0xc0000000U 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                                           << 0x1bU) 
                                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                                              << 0x1aU) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                   << 1U) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3922_ 
                                                                               >> 0x20U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x40000000U 
                                                                         & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                            << 0x17U)) 
                                                                        | ((0x30000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                               << 0x1cU)) 
                                                                           | (((IData)(vlSelf->top__DOT___1168_) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                 >> 0xaU))));
    vlSelf->top__DOT___2508_ = (1U & (IData)((0x7ffffffULL 
                                              & ((((QData)((IData)(
                                                                   (0xc0000000U 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                                           << 0x1bU) 
                                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                                              << 0x1aU) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                   << 1U) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3922_ 
                                                                               >> 0x20U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x40000000U 
                                                                         & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                            << 0x17U)) 
                                                                        | ((0x30000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                               << 0x1cU)) 
                                                                           | (((IData)(vlSelf->top__DOT___1168_) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                 >> 6U))));
    vlSelf->top__DOT___2008_ = (1U & (IData)((0x7ffULL 
                                              & ((((QData)((IData)(
                                                                   (0xc0000000U 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                                           << 0x1bU) 
                                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                                              << 0x1aU) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                   << 1U) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3922_ 
                                                                               >> 0x20U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x40000000U 
                                                                         & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                            << 0x17U)) 
                                                                        | ((0x30000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                               << 0x1cU)) 
                                                                           | (((IData)(vlSelf->top__DOT___1168_) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                 >> 0x16U))));
    vlSelf->top__DOT___3628_ = (1U & (IData)((0xffffffULL 
                                              & ((((QData)((IData)(
                                                                   (0xc0000000U 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___0622_) 
                                                                           << 0x1bU) 
                                                                          | (((IData)(vlSelf->top__DOT___2121_) 
                                                                              << 0x1aU) 
                                                                             | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                   << 1U) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->top__DOT___3922_ 
                                                                               >> 0x20U)) 
                                                                      << 0x1fU) 
                                                                     | ((0x40000000U 
                                                                         & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                            << 0x17U)) 
                                                                        | ((0x30000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                               << 0x1cU)) 
                                                                           | (((IData)(vlSelf->top__DOT___1168_) 
                                                                               << 0x1bU) 
                                                                              | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                 >> 9U))));
    vlSelf->top__DOT___0519_ = ((IData)(vlSelf->top__DOT___0521_) 
                                & (~ (IData)(vlSelf->top__DOT___0520_)));
    vlSelf->top__DOT___0604_ = (1U & (~ (((IData)(vlSelf->top__DOT___0629_) 
                                          & (IData)(vlSelf->top__DOT___0293_)) 
                                         | (IData)(vlSelf->top__DOT___2008_))));
    vlSelf->top__DOT___3921_ = (((QData)((IData)((0x3fU 
                                                  & (IData)(
                                                            (0x3fULL 
                                                             & ((((QData)((IData)(
                                                                                (0xc0000000U 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___2121_) 
                                                                                << 0x1aU) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                                  << 1U) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                                << 0x17U)) 
                                                                                | ((0x30000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                                   << 1U) 
                                                                  | (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                                >> 0x1bU)))))) 
                                 << 0x1bU) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___3501_) 
                                                               << 0x1aU) 
                                                              | ((0x3800000U 
                                                                  & ((IData)(
                                                                             (0x3ffULL 
                                                                              & ((((QData)((IData)(
                                                                                (0xc0000000U 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___2121_) 
                                                                                << 0x1aU) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                                << 0x17U)) 
                                                                                | ((0x30000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                | (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                                                >> 0x17U))) 
                                                                     << 0x17U)) 
                                                                 | (((IData)(vlSelf->top__DOT___2008_) 
                                                                     << 0x16U) 
                                                                    | ((0x300000U 
                                                                        & ((IData)(
                                                                                (0x1fffULL 
                                                                                & ((((QData)((IData)(
                                                                                (0xc0000000U 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___2121_) 
                                                                                << 0x1aU) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                                << 0x17U)) 
                                                                                | ((0x30000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                | (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                                                >> 0x14U))) 
                                                                           << 0x14U)) 
                                                                       | (((IData)(vlSelf->top__DOT___2882_) 
                                                                           << 0x13U) 
                                                                          | ((0x78000U 
                                                                              & ((IData)(
                                                                                (0x3ffffULL 
                                                                                & ((((QData)((IData)(
                                                                                (0xc0000000U 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___2121_) 
                                                                                << 0x1aU) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                                << 0x17U)) 
                                                                                | ((0x30000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                | (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                                                >> 0xfU))) 
                                                                                << 0xfU)) 
                                                                             | (((IData)(vlSelf->top__DOT___1499_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___2705_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (0x1fffffULL 
                                                                                & ((((QData)((IData)(
                                                                                (0xc0000000U 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___2121_) 
                                                                                << 0x1aU) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                                << 0x17U)) 
                                                                                | ((0x30000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                | (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                                                >> 0xcU))) 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2744_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0521_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3628_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___3356_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (0x3ffffffULL 
                                                                                & ((((QData)((IData)(
                                                                                (0xc0000000U 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___2121_) 
                                                                                << 0x1aU) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                                << 0x17U)) 
                                                                                | ((0x30000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                | (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                                                >> 7U))) 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2508_) 
                                                                                << 6U) 
                                                                                | ((0x30U 
                                                                                & ((IData)(
                                                                                (0x1fffffffULL 
                                                                                & ((((QData)((IData)(
                                                                                (0xc0000000U 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0622_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___2121_) 
                                                                                << 0x1aU) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0268_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0843_) 
                                                                                << 0x17U) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1743_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___0428_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___1118_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0699_) 
                                                                                << 0x10U) 
                                                                                | ((0xfc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1801_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3923_ 
                                                                                >> 6U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1258_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___2094_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2610_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0300_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0195_)))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                                << 0x17U)) 
                                                                                | ((0x30000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0338_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0571_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___1881_) 
                                                                                << 0x14U) 
                                                                                | ((0xe0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x12U)) 
                                                                                << 0x11U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3163_) 
                                                                                << 0x10U) 
                                                                                | ((0xe000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xeU)) 
                                                                                << 0xdU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0811_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0xcU)) 
                                                                                << 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1060_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3354_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 8U)) 
                                                                                | (7U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                >> 1U))))))))))))))))))))))))))) 
                                                                                << 1U) 
                                                                                | (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT___7150_)))))) 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2682_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___2878_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___2406_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->top__DOT___7150_))))))))))))))))))))))));
    vlSelf->top__DOT___2154_ = ((IData)(vlSelf->top__DOT___0352_) 
                                ^ (IData)(vlSelf->top__DOT___3628_));
    vlSelf->top__DOT___1647_ = ((IData)(vlSelf->top__DOT___0440_) 
                                & (IData)(vlSelf->top__DOT___0519_));
    vlSelf->top__DOT____VdfgTmp_hd134896c__0 = (((IData)(vlSelf->top__DOT___2355_) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->top__DOT____VdfgTmp_h4e9534e0__0) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___0275_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0604_))));
    vlSelf->top__DOT___1232_ = (1U & (~ (((IData)(vlSelf->top__DOT___0604_) 
                                          & (IData)(vlSelf->top__DOT___0040_)) 
                                         | (IData)(
                                                   (vlSelf->top__DOT___6971_ 
                                                    >> 0x24U)))));
    vlSelf->top__DOT___3366_ = (1U & (((((IData)(vlSelf->top__DOT___1796_) 
                                         << 8U) | (
                                                   ((IData)(vlSelf->top__DOT___0023_) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->top__DOT___0604_) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->top__DOT___0293_) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->top__DOT___0186_) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->top__DOT___1672_) 
                                                                << 2U) 
                                                               | (IData)(vlSelf->top__DOT___0148_))))))) 
                                       + (((IData)(vlSelf->top__DOT___0699_) 
                                           << 8U) | 
                                          (((IData)(vlSelf->top__DOT___1783_) 
                                            << 7U) 
                                           | (((IData)(vlSelf->top__DOT___1561_) 
                                               << 6U) 
                                              | (((IData)(vlSelf->top__DOT___0445_) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->top__DOT___0195_) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->top__DOT___0304_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___0176_) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->top__DOT___1366_) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT___0119_)))))))))) 
                                      >> 8U));
    vlSelf->top__DOT___0963_ = ((IData)(vlSelf->top__DOT___0534_) 
                                & (~ (IData)(vlSelf->top__DOT___0604_)));
    vlSelf->top__DOT___1297_ = ((IData)(vlSelf->top__DOT___2154_) 
                                | (IData)(vlSelf->top__DOT___0991_));
    vlSelf->top__DOT___1652_ = (1U & ((((6U & (vlSelf->in_data[4U] 
                                               >> 0x16U)) 
                                        | (IData)(vlSelf->top__DOT___1526_)) 
                                       + (((IData)(vlSelf->top__DOT___0479_) 
                                           << 2U) | (IData)(vlSelf->top__DOT___2154_))) 
                                      >> 2U));
    vlSelf->top__DOT___2261_ = (1U & ((IData)(vlSelf->top__DOT___1526_) 
                                      + (IData)(vlSelf->top__DOT___2154_)));
    vlSelf->top__DOT___4200_ = (0x1cd9000000000000ULL 
                                | (((QData)((IData)(vlSelf->top__DOT___0226_)) 
                                    << 0x2fU) | (((QData)((IData)(vlSelf->top__DOT___0067_)) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___1188_)) 
                                                     << 0x2dU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U))))) 
                                                        << 0x2cU) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___3571_)) 
                                                           << 0x2bU) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___2920_)) 
                                                              << 0x2aU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU))))) 
                                                                 << 0x29U) 
                                                                | (((QData)((IData)(vlSelf->top__DOT___3325_)) 
                                                                    << 0x28U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU))))) 
                                                                       << 0x27U) 
                                                                      | (((QData)((IData)(vlSelf->top__DOT___2449_)) 
                                                                          << 0x26U) 
                                                                         | (((QData)((IData)(vlSelf->top__DOT___0979_)) 
                                                                             << 0x25U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U))))) 
                                                                                << 0x24U) 
                                                                               | (((QData)((IData)(vlSelf->top__DOT___1288_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1979_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0534_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6971_ 
                                                                                >> 0x25U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1672_))))) 
                                                                                << 0x1dU) 
                                                                                | (QData)((IData)(
                                                                                ((0x1ff80000U 
                                                                                & (((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 4U)) 
                                                                                | (0xfff80000U 
                                                                                & (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 0xcU) 
                                                                                | ((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 0xaU))))))))))))) 
                                                                                | ((0x70000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | (((1U 
                                                                                & ((vlSelf->top__DOT___7160_ 
                                                                                >> 0xeU) 
                                                                                | (((((((((0xfffe00U 
                                                                                & ((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 9U)) 
                                                                                | (0xffff00U 
                                                                                & ((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 8U))) 
                                                                                | (0xffff80U 
                                                                                & ((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 7U))) 
                                                                                | (0xffffc0U 
                                                                                & ((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 6U))) 
                                                                                | (0xffffe0U 
                                                                                & ((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 5U))) 
                                                                                | (0xfffff0U 
                                                                                & ((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 4U))) 
                                                                                | (0xfffff8U 
                                                                                & ((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 3U))) 
                                                                                | (0xfffffcU 
                                                                                & ((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 2U))) 
                                                                                | (2U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                >> 0xeU))))) 
                                                                                << 0xfU) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x3000U 
                                                                                & (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & vlSelf->top__DOT___7184_) 
                                                                                | ((0x4000U 
                                                                                & vlSelf->top__DOT___7160_) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | (0xfffff000U 
                                                                                & (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 8U) 
                                                                                | ((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 6U))))))))))))) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x600U 
                                                                                & (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0xfU) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                >> 1U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 1U)) 
                                                                                | ((0x1000U 
                                                                                & vlSelf->top__DOT___7160_) 
                                                                                | ((0x800U 
                                                                                & vlSelf->top__DOT___7160_) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | (0xfffffe00U 
                                                                                & (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 7U) 
                                                                                | ((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 5U))))))))))))))) 
                                                                                | ((0x180U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | (((1U 
                                                                                & ((vlSelf->top__DOT___7160_ 
                                                                                >> 5U) 
                                                                                | ((((((((((((((0x1fffc000U 
                                                                                & ((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 0xeU)) 
                                                                                | (0x1fffe000U 
                                                                                & ((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 0xdU))) 
                                                                                | (0x1ffff000U 
                                                                                & ((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0xcU))) 
                                                                                | (0x1ffff800U 
                                                                                & ((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0xbU))) 
                                                                                | (0x1ffffc00U 
                                                                                & ((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0xaU))) 
                                                                                | (0x1ffffe00U 
                                                                                & ((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 9U))) 
                                                                                | (0x1fffff00U 
                                                                                & ((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 8U))) 
                                                                                | (0x1fffff80U 
                                                                                & ((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 7U))) 
                                                                                | (0x40U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                >> 9U))) 
                                                                                | (0x20U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 9U))) 
                                                                                | (0x10U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 8U))) 
                                                                                | (8U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 8U))) 
                                                                                | (4U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 7U))) 
                                                                                | (2U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 7U))))) 
                                                                                << 6U) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                >> 4U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 4U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 2U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 2U)) 
                                                                                | ((0x20U 
                                                                                & vlSelf->top__DOT___7160_) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 4U) 
                                                                                | (0xfffffff0U 
                                                                                & ((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 2U)))))))))))))))) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | (((1U 
                                                                                & ((vlSelf->top__DOT___7160_ 
                                                                                >> 1U) 
                                                                                | ((((((((((((((((0x7fff0000U 
                                                                                & ((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 0x10U)) 
                                                                                | (0x7fff8000U 
                                                                                & ((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 0xfU))) 
                                                                                | (0x7fffc000U 
                                                                                & ((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0xeU))) 
                                                                                | (0x7fffe000U 
                                                                                & ((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0xdU))) 
                                                                                | (0x7ffff000U 
                                                                                & ((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0xcU))) 
                                                                                | (0x7ffff800U 
                                                                                & ((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0xbU))) 
                                                                                | (0x7ffffc00U 
                                                                                & ((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0xaU))) 
                                                                                | (0x7ffffe00U 
                                                                                & ((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 9U))) 
                                                                                | (0x100U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                >> 7U))) 
                                                                                | (0x80U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 7U))) 
                                                                                | (0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 6U))) 
                                                                                | (0x20U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 6U))) 
                                                                                | (0x10U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 5U))) 
                                                                                | (8U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 5U))) 
                                                                                | (4U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 3U))) 
                                                                                | (0x7ffffffeU 
                                                                                & ((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 1U))))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                >> 6U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 5U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & vlSelf->top__DOT___7160_) 
                                                                                | (IData)(vlSelf->top__DOT___0170_))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->top__DOT___1487_ = ((IData)(vlSelf->top__DOT___2154_) 
                                | (IData)(vlSelf->top__DOT___2187_));
    vlSelf->top__DOT____VdfgTmp_hefb6521d__0 = ((2U 
                                                 & (vlSelf->top__DOT___3863_[0U] 
                                                    >> 7U)) 
                                                | (IData)(vlSelf->top__DOT___1647_));
    vlSelf->top__DOT___1362_ = (1U & (~ (((IData)(vlSelf->top__DOT___1232_) 
                                          & (IData)(vlSelf->top__DOT___0160_)) 
                                         | (IData)(vlSelf->top__DOT___0485_))));
    vlSelf->top__DOT___0984_ = ((IData)(vlSelf->top__DOT___1232_) 
                                & (IData)(vlSelf->top__DOT___1672_));
    vlSelf->top__DOT____VdfgTmp_h09edccc9__0 = ((2U 
                                                 & vlSelf->top__DOT___7160_) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT___4200_ 
                                                              >> 1U))));
    vlSelf->top__DOT___2337_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    vlSelf->in_data[5U])) 
                                                    << 0x27U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->in_data[4U])) 
                                                       << 7U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->in_data[3U])) 
                                                         >> 0x19U))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU))))) 
                                                    << 0x27U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___2449_)) 
                                                       << 0x26U) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___0979_)) 
                                                          << 0x25U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U))))) 
                                                             << 0x24U) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___1288_)) 
                                                                << 0x23U) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___1979_)) 
                                                                   << 0x22U) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___0534_)) 
                                                                      << 0x21U) 
                                                                     | (((QData)((IData)(
                                                                                ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6971_ 
                                                                                >> 0x25U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1672_))))) 
                                                                         << 0x1dU) 
                                                                        | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 4U)) 
                                                                                | ((0x70000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0170_)))))))))))))))))))))))))))))))))))) 
                                                 >> 0x27U))));
    vlSelf->top__DOT___2683_ = (1U & (IData)((0x1ffffULL 
                                              & (((((QData)((IData)(
                                                                    vlSelf->in_data[5U])) 
                                                    << 0x27U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->in_data[4U])) 
                                                       << 7U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->in_data[3U])) 
                                                         >> 0x19U))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU))))) 
                                                    << 0x27U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___2449_)) 
                                                       << 0x26U) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___0979_)) 
                                                          << 0x25U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U))))) 
                                                             << 0x24U) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___1288_)) 
                                                                << 0x23U) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___1979_)) 
                                                                   << 0x22U) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___0534_)) 
                                                                      << 0x21U) 
                                                                     | (((QData)((IData)(
                                                                                ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6971_ 
                                                                                >> 0x25U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1672_))))) 
                                                                         << 0x1dU) 
                                                                        | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 4U)) 
                                                                                | ((0x70000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0170_)))))))))))))))))))))))))))))))))))) 
                                                 >> 0x17U))));
    vlSelf->top__DOT___3547_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    vlSelf->in_data[5U])) 
                                                    << 0x27U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->in_data[4U])) 
                                                       << 7U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->in_data[3U])) 
                                                         >> 0x19U))) 
                                                  + 
                                                  (0x1000000000000ULL 
                                                   | (((QData)((IData)(vlSelf->top__DOT___0226_)) 
                                                       << 0x2fU) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___0067_)) 
                                                          << 0x2eU) 
                                                         | (((QData)((IData)(vlSelf->top__DOT___1188_)) 
                                                             << 0x2dU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U))))) 
                                                                << 0x2cU) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___3571_)) 
                                                                   << 0x2bU) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___2920_)) 
                                                                      << 0x2aU) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU))))) 
                                                                         << 0x29U) 
                                                                        | (((QData)((IData)(vlSelf->top__DOT___3325_)) 
                                                                            << 0x28U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU))))) 
                                                                               << 0x27U) 
                                                                              | (((QData)((IData)(vlSelf->top__DOT___2449_)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0979_)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1288_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1979_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0534_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6971_ 
                                                                                >> 0x25U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1672_))))) 
                                                                                << 0x1dU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 4U)) 
                                                                                | ((0x70000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0170_))))))))))))))))))))))))))))))))))))))))))))) 
                                                 >> 0x31U))));
    vlSelf->top__DOT___0555_ = (1U & (IData)((3ULL 
                                              & (((((QData)((IData)(
                                                                    vlSelf->in_data[5U])) 
                                                    << 0x27U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->in_data[4U])) 
                                                       << 7U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->in_data[3U])) 
                                                         >> 0x19U))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU))))) 
                                                    << 0x27U) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___2449_)) 
                                                       << 0x26U) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___0979_)) 
                                                          << 0x25U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U))))) 
                                                             << 0x24U) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___1288_)) 
                                                                << 0x23U) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___1979_)) 
                                                                   << 0x22U) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___0534_)) 
                                                                      << 0x21U) 
                                                                     | (((QData)((IData)(
                                                                                ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6971_ 
                                                                                >> 0x25U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1672_))))) 
                                                                         << 0x1dU) 
                                                                        | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 4U)) 
                                                                                | ((0x70000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0170_)))))))))))))))))))))))))))))))))))) 
                                                 >> 0x26U))));
    vlSelf->top__DOT___2166_ = (1U & ((((vlSelf->in_data[4U] 
                                         << 7U) | (
                                                   vlSelf->in_data[3U] 
                                                   >> 0x19U)) 
                                       + (((IData)(vlSelf->top__DOT___0749_) 
                                           << 0x1bU) 
                                          | (((IData)(vlSelf->top__DOT___0372_) 
                                              << 0x1aU) 
                                             | (((IData)(vlSelf->top__DOT___0923_) 
                                                 << 0x19U) 
                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                    << 0x18U) 
                                                   | (((IData)(vlSelf->top__DOT___2154_) 
                                                       << 0x17U) 
                                                      | (((IData)(vlSelf->top__DOT___0070_) 
                                                          << 0x16U) 
                                                         | (((IData)(vlSelf->top__DOT___0844_) 
                                                             << 0x15U) 
                                                            | (((IData)(vlSelf->top__DOT___0410_) 
                                                                << 0x14U) 
                                                               | ((0x80000U 
                                                                   & (vlSelf->top__DOT___7184_ 
                                                                      << 4U)) 
                                                                  | ((0x70000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0x10U)) 
                                                                         << 0x10U)) 
                                                                     | ((0x8000U 
                                                                         & (vlSelf->top__DOT___7160_ 
                                                                            << 1U)) 
                                                                        | ((0x4000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xeU)) 
                                                                               << 0xeU)) 
                                                                           | ((0x2000U 
                                                                               & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                              | ((0x1000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0170_)))))))))))))))))))))))))) 
                                      >> 7U));
    vlSelf->top__DOT___0530_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    vlSelf->in_data[5U])) 
                                                    << 0x27U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->in_data[4U])) 
                                                       << 7U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->in_data[3U])) 
                                                         >> 0x19U))) 
                                                  + 
                                                  (0x4d9000000000000ULL 
                                                   | (((QData)((IData)(vlSelf->top__DOT___0226_)) 
                                                       << 0x2fU) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___0067_)) 
                                                          << 0x2eU) 
                                                         | (((QData)((IData)(vlSelf->top__DOT___1188_)) 
                                                             << 0x2dU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U))))) 
                                                                << 0x2cU) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___3571_)) 
                                                                   << 0x2bU) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___2920_)) 
                                                                      << 0x2aU) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU))))) 
                                                                         << 0x29U) 
                                                                        | (((QData)((IData)(vlSelf->top__DOT___3325_)) 
                                                                            << 0x28U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU))))) 
                                                                               << 0x27U) 
                                                                              | (((QData)((IData)(vlSelf->top__DOT___2449_)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0979_)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1288_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1979_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0534_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6971_ 
                                                                                >> 0x25U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1672_))))) 
                                                                                << 0x1dU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 4U)) 
                                                                                | ((0x70000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0170_))))))))))))))))))))))))))))))))))))))))))))) 
                                                 >> 0x3aU))));
    vlSelf->top__DOT___0587_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    vlSelf->in_data[5U])) 
                                                    << 0x27U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->in_data[4U])) 
                                                       << 7U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->in_data[3U])) 
                                                         >> 0x19U))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U))))) 
                                                    << 0x2cU) 
                                                   | (((QData)((IData)(vlSelf->top__DOT___3571_)) 
                                                       << 0x2bU) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___2920_)) 
                                                          << 0x2aU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU))))) 
                                                             << 0x29U) 
                                                            | (((QData)((IData)(vlSelf->top__DOT___3325_)) 
                                                                << 0x28U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU))))) 
                                                                   << 0x27U) 
                                                                  | (((QData)((IData)(vlSelf->top__DOT___2449_)) 
                                                                      << 0x26U) 
                                                                     | (((QData)((IData)(vlSelf->top__DOT___0979_)) 
                                                                         << 0x25U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U))))) 
                                                                            << 0x24U) 
                                                                           | (((QData)((IData)(vlSelf->top__DOT___1288_)) 
                                                                               << 0x23U) 
                                                                              | (((QData)((IData)(vlSelf->top__DOT___1979_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0534_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6971_ 
                                                                                >> 0x25U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1672_))))) 
                                                                                << 0x1dU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 4U)) 
                                                                                | ((0x70000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0170_))))))))))))))))))))))))))))))))))))))))) 
                                                 >> 0x2cU))));
    vlSelf->top__DOT___1773_ = (1U & (~ (((IData)(vlSelf->top__DOT___2187_) 
                                          & (IData)(vlSelf->top__DOT___1487_)) 
                                         | (IData)(vlSelf->top__DOT___0170_))));
    vlSelf->top__DOT___0094_ = ((IData)(vlSelf->top__DOT___0842_) 
                                ^ (IData)(vlSelf->top__DOT___1487_));
    top__DOT____VdfgTmp_h367ae685__0 = (((IData)(vlSelf->top__DOT___1931_) 
                                         << 2U) | (IData)(vlSelf->top__DOT____VdfgTmp_hefb6521d__0));
    vlSelf->top__DOT___0983_ = ((IData)(vlSelf->top__DOT___0985_) 
                                & (~ (IData)(vlSelf->top__DOT___0984_)));
    vlSelf->top__DOT____VdfgTmp_h47f80356__0 = ((4U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___4200_ 
                                                             >> 3U)) 
                                                    << 2U)) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h09edccc9__0));
    vlSelf->top__DOT___0553_ = ((IData)(vlSelf->top__DOT___0555_) 
                                & (~ (IData)(vlSelf->top__DOT___0428_)));
    vlSelf->top__DOT___3839_ = (((IData)(vlSelf->top__DOT___0530_) 
                                 << 7U) | (0x7fU & (IData)(
                                                           (0x7fULL 
                                                            & (((((QData)((IData)(
                                                                                vlSelf->in_data[5U])) 
                                                                  << 0x27U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->in_data[4U])) 
                                                                     << 7U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->in_data[3U])) 
                                                                       >> 0x19U))) 
                                                                + 
                                                                (0xd9000000000000ULL 
                                                                 | (((QData)((IData)(vlSelf->top__DOT___0226_)) 
                                                                     << 0x2fU) 
                                                                    | (((QData)((IData)(vlSelf->top__DOT___0067_)) 
                                                                        << 0x2eU) 
                                                                       | (((QData)((IData)(vlSelf->top__DOT___1188_)) 
                                                                           << 0x2dU) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U))))) 
                                                                              << 0x2cU) 
                                                                             | (((QData)((IData)(vlSelf->top__DOT___3571_)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2920_)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3325_)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2449_)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0979_)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1288_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1979_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0534_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6971_ 
                                                                                >> 0x25U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1672_))))) 
                                                                                << 0x1dU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 4U)) 
                                                                                | ((0x70000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0170_))))))))))))))))))))))))))))))))))))))))))))) 
                                                               >> 0x33U)))));
    vlSelf->top__DOT___0585_ = ((IData)(vlSelf->top__DOT___0587_) 
                                & (~ (IData)(vlSelf->top__DOT___0586_)));
    vlSelf->top__DOT____VdfgTmp_h792f7b28__0 = (((IData)(vlSelf->top__DOT___0750_) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->top__DOT___1011_) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->top__DOT___0170_) 
                                                       << 8U) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSelf->top__DOT___7055_) 
                                                             << 7U)) 
                                                         | (((IData)(vlSelf->top__DOT___0933_) 
                                                             << 6U) 
                                                            | (((IData)(vlSelf->top__DOT___1452_) 
                                                                << 5U) 
                                                               | (((IData)(vlSelf->top__DOT___0218_) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelf->top__DOT___0799_) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->top__DOT___0708_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___1773_))))))))));
    vlSelf->top__DOT___1772_ = ((IData)(vlSelf->top__DOT___1773_) 
                                & (IData)(vlSelf->top__DOT___0183_));
    vlSelf->top__DOT___3637_ = (1U & (((IData)(top__DOT____VdfgTmp_h367ae685__0) 
                                       + (IData)(vlSelf->top__DOT___6992_)) 
                                      >> 2U));
    vlSelf->top__DOT____VdfgTmp_ha29b76d3__0 = ((0x80U 
                                                 & ((IData)(vlSelf->top__DOT___7188_) 
                                                    << 1U)) 
                                                | ((0x40U 
                                                    & (vlSelf->top__DOT___3863_[0U] 
                                                       >> 7U)) 
                                                   | ((0x30U 
                                                       & ((IData)(vlSelf->top__DOT___7188_) 
                                                          << 1U)) 
                                                      | ((8U 
                                                          & (vlSelf->top__DOT___3863_[0U] 
                                                             >> 7U)) 
                                                         | (IData)(top__DOT____VdfgTmp_h367ae685__0)))));
    vlSelf->top__DOT____VdfgTmp_hbaa7473e__0 = (((IData)(vlSelf->top__DOT___0479_) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->top__DOT___0393_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___1601_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0983_))));
    vlSelf->top__DOT____VdfgTmp_h4c480f28__0 = (((IData)(vlSelf->top__DOT___0293_) 
                                                 << 0x12U) 
                                                | ((0x38000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___4200_ 
                                                                >> 0x10U)) 
                                                       << 0xfU)) 
                                                   | ((0x4000U 
                                                       & vlSelf->top__DOT___7160_) 
                                                      | ((0x2000U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___4200_ 
                                                                      >> 0xeU)) 
                                                             << 0xdU)) 
                                                         | ((0x1800U 
                                                             & vlSelf->top__DOT___7160_) 
                                                            | ((0x400U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___4200_ 
                                                                            >> 0xbU)) 
                                                                   << 0xaU)) 
                                                               | ((0x300U 
                                                                   & vlSelf->top__DOT___7160_) 
                                                                  | ((0xc0U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 7U)) 
                                                                         << 6U)) 
                                                                     | ((0x20U 
                                                                         & vlSelf->top__DOT___7160_) 
                                                                        | ((0x10U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 5U)) 
                                                                               << 4U)) 
                                                                           | (((IData)(vlSelf->top__DOT___0880_) 
                                                                               << 3U) 
                                                                              | (IData)(vlSelf->top__DOT____VdfgTmp_h47f80356__0))))))))))));
    vlSelf->top__DOT___3954_ = ((1ULL & vlSelf->top__DOT___3954_) 
                                | (((QData)((IData)(
                                                    (0x7fU 
                                                     & (IData)(vlSelf->top__DOT___3839_)))) 
                                    << 0x2fU) | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (1ULL 
                                                                              & (((((QData)((IData)(
                                                                                vlSelf->in_data[5U])) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->in_data[4U])) 
                                                                                << 7U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->in_data[3U])) 
                                                                                >> 0x19U))) 
                                                                                + 
                                                                                (0x1000000000000ULL 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0226_)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0067_)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1188_)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3571_)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2920_)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3325_)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2449_)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0979_)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1288_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1979_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0534_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6971_ 
                                                                                >> 0x25U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1672_))))) 
                                                                                << 0x1dU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 4U)) 
                                                                                | ((0x70000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0170_))))))))))))))))))))))))))))))))))))))))))))) 
                                                                                >> 0x32U)))))) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___3547_)) 
                                                     << 0x2dU) 
                                                    | (((QData)((IData)(
                                                                        (0xfU 
                                                                         & (IData)(
                                                                                (0xfULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSelf->in_data[5U])) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->in_data[4U])) 
                                                                                << 7U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->in_data[3U])) 
                                                                                >> 0x19U))) 
                                                                                + 
                                                                                (0x1000000000000ULL 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0226_)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0067_)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1188_)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3571_)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2920_)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3325_)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2449_)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0979_)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1288_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1979_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0534_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6971_ 
                                                                                >> 0x25U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1672_))))) 
                                                                                << 0x1dU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 4U)) 
                                                                                | ((0x70000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0170_))))))))))))))))))))))))))))))))))))))))))))) 
                                                                                >> 0x2dU)))))) 
                                                        << 0x29U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___0587_)) 
                                                           << 0x28U) 
                                                          | (((QData)((IData)(
                                                                              (0xfU 
                                                                               & (IData)(
                                                                                (0xfULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSelf->in_data[5U])) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->in_data[4U])) 
                                                                                << 7U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->in_data[3U])) 
                                                                                >> 0x19U))) 
                                                                                + 
                                                                                (((QData)((IData)(vlSelf->top__DOT___3571_)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2920_)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___3325_)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2449_)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0979_)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1288_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1979_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0534_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6971_ 
                                                                                >> 0x25U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1672_))))) 
                                                                                << 0x1dU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 4U)) 
                                                                                | ((0x70000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0170_)))))))))))))))))))))))))))))))))))))))) 
                                                                                >> 0x28U)))))) 
                                                              << 0x24U) 
                                                             | (((QData)((IData)(vlSelf->top__DOT___2337_)) 
                                                                 << 0x23U) 
                                                                | (((QData)((IData)(vlSelf->top__DOT___0555_)) 
                                                                    << 0x22U) 
                                                                   | (((QData)((IData)(
                                                                                (0x3fffU 
                                                                                & (IData)(
                                                                                (0xffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSelf->in_data[5U])) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->in_data[4U])) 
                                                                                << 7U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->in_data[3U])) 
                                                                                >> 0x19U))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2449_)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0979_)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1288_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1979_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0534_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6971_ 
                                                                                >> 0x25U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1672_))))) 
                                                                                << 0x1dU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 4U)) 
                                                                                | ((0x70000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0170_)))))))))))))))))))))))))))))))))))) 
                                                                                >> 0x18U)))))) 
                                                                       << 0x14U) 
                                                                      | ((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2683_) 
                                                                                << 0x12U) 
                                                                                | ((0x3fff8U 
                                                                                & ((IData)(
                                                                                (0xffffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                vlSelf->in_data[5U])) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->in_data[4U])) 
                                                                                << 7U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->in_data[3U])) 
                                                                                >> 0x19U))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2449_)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0979_)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1288_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1979_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0534_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6971_ 
                                                                                >> 0x25U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1672_))))) 
                                                                                << 0x1dU) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 4U)) 
                                                                                | ((0x70000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0170_)))))))))))))))))))))))))))))))))))) 
                                                                                >> 8U))) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2166_) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & ((((vlSelf->in_data[3U] 
                                                                                << 7U) 
                                                                                | (vlSelf->in_data[3U] 
                                                                                >> 0x19U)) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 4U)) 
                                                                                | ((0x70000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0170_)))))))))))))))))))))))))) 
                                                                                >> 5U))))))) 
                                                                         << 1U)))))))))));
    vlSelf->top__DOT___0871_ = (1U & (~ (((IData)(vlSelf->top__DOT___2406_) 
                                          & (IData)(vlSelf->top__DOT___1647_)) 
                                         | (IData)(vlSelf->top__DOT___0585_))));
    vlSelf->top__DOT____VdfgTmp_haec0fdc9__0 = ((0x300U 
                                                 & (vlSelf->top__DOT___3863_[0U] 
                                                    >> 7U)) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_ha29b76d3__0));
    vlSelf->top__DOT____VdfgTmp_hd82acd32__0 = (((IData)(vlSelf->top__DOT___0985_) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->top__DOT___1003_) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->top__DOT___3082_) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->top__DOT___0032_) 
                                                          << 4U) 
                                                         | (IData)(vlSelf->top__DOT____VdfgTmp_hbaa7473e__0)))));
    vlSelf->top__DOT___4199_ = (((QData)((IData)((3U 
                                                  & (IData)(
                                                            (3ULL 
                                                             & (((((QData)((IData)(
                                                                                vlSelf->in_data[5U])) 
                                                                   << 0x27U) 
                                                                  | (((QData)((IData)(
                                                                                vlSelf->in_data[4U])) 
                                                                      << 7U) 
                                                                     | ((QData)((IData)(
                                                                                vlSelf->in_data[3U])) 
                                                                        >> 0x19U))) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                (0xe6c80000U 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->top__DOT___0067_) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->top__DOT___1188_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3571_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___2920_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xdU)) 
                                                                                << 0xcU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3325_) 
                                                                                << 0xbU) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 0xbU)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___2449_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0979_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3920_ 
                                                                                >> 8U)) 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1288_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1979_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0534_) 
                                                                                << 4U) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6971_ 
                                                                                >> 0x25U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1168_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1672_))))))))))))))))))))) 
                                                                   << 0x1dU) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 4U)) 
                                                                                | ((0x70000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0170_))))))))))))))))))))))))))))) 
                                                                >> 0x3bU)))))) 
                                 << 0x3bU) | (((QData)((IData)(vlSelf->top__DOT___0530_)) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & (IData)(vlSelf->top__DOT___3839_)))) 
                                                  << 0x33U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT___3954_ 
                                                                                >> 0x2eU))))) 
                                                     << 0x32U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___3547_)) 
                                                        << 0x31U) 
                                                       | (((QData)((IData)(
                                                                           (0xfU 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3954_ 
                                                                                >> 0x29U))))) 
                                                           << 0x2dU) 
                                                          | (((QData)((IData)(vlSelf->top__DOT___0587_)) 
                                                              << 0x2cU) 
                                                             | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3954_ 
                                                                                >> 0x24U))))) 
                                                                 << 0x28U) 
                                                                | (((QData)((IData)(vlSelf->top__DOT___2337_)) 
                                                                    << 0x27U) 
                                                                   | (((QData)((IData)(vlSelf->top__DOT___0555_)) 
                                                                       << 0x26U) 
                                                                      | (((QData)((IData)(
                                                                                (0x3fffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3954_ 
                                                                                >> 0x14U))))) 
                                                                          << 0x18U) 
                                                                         | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___2683_) 
                                                                                << 0x17U) 
                                                                                | ((0x7fff00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3954_ 
                                                                                >> 4U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2166_) 
                                                                                << 7U) 
                                                                                | ((0x60U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3954_ 
                                                                                >> 1U)) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (((vlSelf->in_data[3U] 
                                                                                << 7U) 
                                                                                | (vlSelf->in_data[3U] 
                                                                                >> 0x19U)) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0749_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0372_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0236_) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->top__DOT___2154_) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->top__DOT___0070_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0844_) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->top__DOT___0410_) 
                                                                                << 0x14U) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7184_ 
                                                                                << 4U)) 
                                                                                | ((0x70000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x180U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0880_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7160_ 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (IData)(vlSelf->top__DOT___0170_))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->top__DOT___0021_ = ((IData)(vlSelf->top__DOT___0871_) 
                                & (IData)(vlSelf->top__DOT___0970_));
    vlSelf->top__DOT___0870_ = ((IData)(vlSelf->top__DOT___0699_) 
                                & (~ (IData)(vlSelf->top__DOT___0871_)));
    vlSelf->top__DOT___1348_ = (1U & (~ (((IData)(vlSelf->top__DOT___0871_) 
                                          & (IData)(
                                                    (vlSelf->top__DOT___7096_ 
                                                     >> 5U))) 
                                         | (IData)(vlSelf->top__DOT___0132_))));
    vlSelf->top__DOT____VdfgTmp_hd7803ba7__0 = ((0x1c00U 
                                                 & ((IData)(vlSelf->top__DOT___7188_) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_haec0fdc9__0));
    vlSelf->top__DOT____VdfgTmp_he0801575__0 = (((IData)(vlSelf->top__DOT___2683_) 
                                                 << 0x17U) 
                                                | ((0x7fff00U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3954_ 
                                                                >> 4U)) 
                                                       << 8U)) 
                                                   | (((IData)(vlSelf->top__DOT___2166_) 
                                                       << 7U) 
                                                      | ((0x60U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___3954_ 
                                                                      >> 1U)) 
                                                             << 5U)) 
                                                         | (0x1fU 
                                                            & (IData)(vlSelf->top__DOT___4199_))))));
    vlSelf->top__DOT____VdfgTmp_hd1d6e9b6__0 = ((0x6000U 
                                                 & (vlSelf->top__DOT___3863_[0U] 
                                                    >> 7U)) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_hd7803ba7__0));
    vlSelf->top__DOT____VdfgTmp_hed80e2f9__0 = (((QData)((IData)(vlSelf->top__DOT___1205_)) 
                                                 << 0x3eU) 
                                                | (((QData)((IData)(vlSelf->top__DOT___0534_)) 
                                                    << 0x3dU) 
                                                   | (((QData)((IData)(
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___4199_ 
                                                                                >> 0x3bU))))) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(vlSelf->top__DOT___0530_)) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(
                                                                             (0x7fU 
                                                                              & (IData)(vlSelf->top__DOT___3839_)))) 
                                                             << 0x33U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3954_ 
                                                                                >> 0x2eU))))) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(vlSelf->top__DOT___3547_)) 
                                                                   << 0x31U) 
                                                                  | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3954_ 
                                                                                >> 0x29U))))) 
                                                                      << 0x2dU) 
                                                                     | (((QData)((IData)(vlSelf->top__DOT___0587_)) 
                                                                         << 0x2cU) 
                                                                        | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3954_ 
                                                                                >> 0x24U))))) 
                                                                            << 0x28U) 
                                                                           | (((QData)((IData)(vlSelf->top__DOT___2337_)) 
                                                                               << 0x27U) 
                                                                              | (((QData)((IData)(vlSelf->top__DOT___0555_)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0x3fffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3954_ 
                                                                                >> 0x14U))))) 
                                                                                << 0x18U) 
                                                                                | (QData)((IData)(vlSelf->top__DOT____VdfgTmp_he0801575__0)))))))))))))));
    vlSelf->top__DOT____VdfgTmp_h9a5f53f1__0 = ((0x8000U 
                                                 & ((IData)(vlSelf->top__DOT___7188_) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_hd1d6e9b6__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__878(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__878\n"); );
    // Body
    vlSelf->top__DOT___1253_ = ((IData)(vlSelf->top__DOT____VdfgTmp_h60070cb3__0) 
                                & (IData)(vlSelf->top__DOT___1254_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__879(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__879\n"); );
    // Body
    vlSelf->top__DOT___4294_ = ((0xeU & ((((0xff8U 
                                            & ((0xfffe0000U 
                                                & vlSelf->top__DOT___4555_[0U]) 
                                               | ((0x10000U 
                                                   & (vlSelf->top__DOT___4739_[0U] 
                                                      >> 1U)) 
                                                  | ((0xe000U 
                                                      & vlSelf->top__DOT___4555_[0U]) 
                                                     | ((0x1800U 
                                                         & (vlSelf->top__DOT___4223_ 
                                                            >> 0xaU)) 
                                                        | (((IData)(vlSelf->top__DOT___0226_) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->top__DOT___0442_) 
                                                               << 9U) 
                                                              | ((0x1c0U 
                                                                  & (vlSelf->top__DOT___3883_[1U] 
                                                                     >> 0x11U)) 
                                                                 | (((IData)(vlSelf->top__DOT___1144_) 
                                                                     << 5U) 
                                                                    | ((0x10U 
                                                                        & (vlSelf->top__DOT___3883_[1U] 
                                                                           >> 0x11U)) 
                                                                       | ((IData)(vlSelf->top__DOT___3381_) 
                                                                          << 3U))))))))))) 
                                           | (((IData)(vlSelf->top__DOT___0389_) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT___1183_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___0723_)))) 
                                          + ((0xc00U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT___3923_ 
                                                          >> 0xbU)) 
                                                 << 0xaU)) 
                                             | (((IData)(vlSelf->top__DOT___1801_) 
                                                 << 9U) 
                                                | ((0x1e0U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT___3923_ 
                                                                >> 6U)) 
                                                       << 5U)) 
                                                   | (((IData)(vlSelf->top__DOT___1258_) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT___2094_) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT___2610_) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->top__DOT___0226_) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT___0170_))))))))) 
                                         >> 8U)) | (IData)(vlSelf->top__DOT___1070_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__882(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__882\n"); );
    // Body
    vlSelf->top__DOT___2061_ = ((IData)(vlSelf->top__DOT___1069_) 
                                ^ (IData)(vlSelf->top__DOT___1135_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__883(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__883\n"); );
    // Body
    vlSelf->top__DOT___4085_ = ((0x1fe0000U & vlSelf->top__DOT___4085_) 
                                | (((IData)(vlSelf->top__DOT___2793_) 
                                    << 0x10U) | ((0x8000U 
                                                  & ((((0x7800U 
                                                        & (vlSelf->top__DOT___4284_ 
                                                           >> 6U)) 
                                                       | (((IData)(vlSelf->top__DOT___1555_) 
                                                           << 0xaU) 
                                                          | ((0x3fcU 
                                                              & (vlSelf->top__DOT___4284_ 
                                                                 >> 6U)) 
                                                             | (((IData)(vlSelf->top__DOT___0201_) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->top__DOT___1205_))))) 
                                                      + 
                                                      ((0x2000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT___4011_ 
                                                                    >> 0x1aU)) 
                                                           << 0xdU)) 
                                                       | ((0x1000U 
                                                           & ((IData)(vlSelf->top__DOT___7111_) 
                                                              << 2U)) 
                                                          | ((0xe00U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___4011_ 
                                                                          >> 0x16U)) 
                                                                 << 9U)) 
                                                             | ((0x100U 
                                                                 & ((IData)(vlSelf->top__DOT___7111_) 
                                                                    << 2U)) 
                                                                | ((0x80U 
                                                                    & ((IData)(vlSelf->top__DOT___7111_) 
                                                                       << 2U)) 
                                                                   | ((0x60U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT___4011_ 
                                                                                >> 0x12U)) 
                                                                          << 5U)) 
                                                                      | ((0x10U 
                                                                          & ((IData)(vlSelf->top__DOT___7111_) 
                                                                             << 2U)) 
                                                                         | ((0xcU 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT___4011_ 
                                                                                >> 0xfU)) 
                                                                                << 2U)) 
                                                                            | (((IData)(vlSelf->top__DOT___0995_) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->top__DOT___0038_))))))))))) 
                                                     << 1U)) 
                                                 | (((IData)(vlSelf->top__DOT___2434_) 
                                                     << 0xeU) 
                                                    | ((0x3ffeU 
                                                        & ((((0x1800U 
                                                              & (vlSelf->top__DOT___4284_ 
                                                                 >> 6U)) 
                                                             | (((IData)(vlSelf->top__DOT___1555_) 
                                                                 << 0xaU) 
                                                                | ((0x3fcU 
                                                                    & (vlSelf->top__DOT___4284_ 
                                                                       >> 6U)) 
                                                                   | (((IData)(vlSelf->top__DOT___0201_) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelf->top__DOT___1205_))))) 
                                                            + 
                                                            ((0x1000U 
                                                              & ((IData)(vlSelf->top__DOT___7111_) 
                                                                 << 2U)) 
                                                             | ((0xe00U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___4011_ 
                                                                             >> 0x16U)) 
                                                                    << 9U)) 
                                                                | ((0x100U 
                                                                    & ((IData)(vlSelf->top__DOT___7111_) 
                                                                       << 2U)) 
                                                                   | ((0x80U 
                                                                       & ((IData)(vlSelf->top__DOT___7111_) 
                                                                          << 2U)) 
                                                                      | ((0x60U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___4011_ 
                                                                                >> 0x12U)) 
                                                                             << 5U)) 
                                                                         | ((0x10U 
                                                                             & ((IData)(vlSelf->top__DOT___7111_) 
                                                                                << 2U)) 
                                                                            | ((0xcU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___4011_ 
                                                                                >> 0xfU)) 
                                                                                << 2U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0995_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0038_)))))))))) 
                                                           << 1U)) 
                                                       | (IData)(vlSelf->top__DOT___0221_))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__884(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__884\n"); );
    // Body
    vlSelf->top__DOT___3975_ = ((0x7ffe0U & (vlSelf->top__DOT___7137_[1U] 
                                             >> 6U)) 
                                | (((IData)(vlSelf->top__DOT___1032_) 
                                    << 4U) | ((8U & 
                                               ((~ (IData)(vlSelf->top__DOT___0169_)) 
                                                << 3U)) 
                                              | (((IData)(vlSelf->top__DOT___0995_) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT___1662_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__885(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__885\n"); );
    // Body
    vlSelf->top__DOT___2969_ = (1U & ((IData)(vlSelf->top__DOT___0285_) 
                                      + (IData)(vlSelf->top__DOT___0944_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__886(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__886\n"); );
    // Body
    vlSelf->top__DOT___1337_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_hc563f2b7__0) 
                                       + ((6U & ((IData)(
                                                         (vlSelf->top__DOT____VdfgTmp_h943d6f10__0 
                                                          >> 0x19U)) 
                                                 << 1U)) 
                                          | (IData)(vlSelf->top__DOT___0944_))) 
                                      >> 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__887(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__887\n"); );
    // Body
    vlSelf->top__DOT___4032_ = (((QData)((IData)((0x3fffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT___7153_ 
                                                             >> 0x13U))))) 
                                 << 0x1bU) | (QData)((IData)(
                                                             ((0x4000000U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT___7153_ 
                                                                           >> 0x12U)) 
                                                                  << 0x1aU)) 
                                                              | ((0x3fff000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___7153_ 
                                                                              >> 4U)) 
                                                                     << 0xcU)) 
                                                                 | ((0xc00U 
                                                                     & (vlSelf->top__DOT___3823_ 
                                                                        >> 5U)) 
                                                                    | ((0x200U 
                                                                        & ((IData)(vlSelf->top__DOT___7150_) 
                                                                           << 2U)) 
                                                                       | ((0x100U 
                                                                           & ((IData)(vlSelf->top__DOT___7150_) 
                                                                              << 2U)) 
                                                                          | ((0x80U 
                                                                              & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                << 2U)) 
                                                                             | ((0x40U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                >> 5U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1865_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0577_))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__888(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__888\n"); );
    // Body
    vlSelf->top__DOT___2970_ = (1U & (((((IData)(vlSelf->top__DOT___0227_) 
                                         << 0x16U) 
                                        | ((0x380000U 
                                            & (vlSelf->top__DOT___3859_ 
                                               << 1U)) 
                                           | (((IData)(vlSelf->top__DOT___2369_) 
                                               << 0x12U) 
                                              | ((0x30000U 
                                                  & (vlSelf->top__DOT___3859_ 
                                                     << 1U)) 
                                                 | (((IData)(vlSelf->top__DOT___1084_) 
                                                     << 0xfU) 
                                                    | (((IData)(vlSelf->top__DOT___2980_) 
                                                        << 0xeU) 
                                                       | ((0x3000U 
                                                           & (vlSelf->top__DOT___3859_ 
                                                              << 1U)) 
                                                          | (((IData)(vlSelf->top__DOT___3738_) 
                                                              << 0xbU) 
                                                             | ((0x700U 
                                                                 & (vlSelf->top__DOT___3859_ 
                                                                    << 1U)) 
                                                                | (((IData)(vlSelf->top__DOT___0760_) 
                                                                    << 7U) 
                                                                   | (((IData)(vlSelf->top__DOT___1394_) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT___3124_) 
                                                                          << 5U) 
                                                                         | (((IData)(vlSelf->top__DOT___0381_) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSelf->top__DOT___1357_) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 5U)))))))))))))))))) 
                                       + ((0x400000U 
                                           & (vlSelf->top__DOT___3823_ 
                                              << 7U)) 
                                          | ((0x200000U 
                                              & ((IData)(vlSelf->top__DOT___7150_) 
                                                 << 0xeU)) 
                                             | ((0x100000U 
                                                 & ((IData)(vlSelf->top__DOT___7150_) 
                                                    << 0xeU)) 
                                                | ((0x80000U 
                                                    & ((IData)(vlSelf->top__DOT___7150_) 
                                                       << 0xeU)) 
                                                   | ((0x40000U 
                                                       & (vlSelf->top__DOT___3823_ 
                                                          << 7U)) 
                                                      | ((0x20000U 
                                                          & ((IData)(vlSelf->top__DOT___7150_) 
                                                             << 0xeU)) 
                                                         | ((0x10000U 
                                                             & ((IData)(vlSelf->top__DOT___7150_) 
                                                                << 0xeU)) 
                                                            | ((0x8000U 
                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                   << 0xeU)) 
                                                               | ((0x4000U 
                                                                   & ((IData)(vlSelf->top__DOT___7150_) 
                                                                      << 0xeU)) 
                                                                  | (((IData)(vlSelf->top__DOT___0016_) 
                                                                      << 0xdU) 
                                                                     | (((IData)(vlSelf->top__DOT___0056_) 
                                                                         << 0xcU) 
                                                                        | (((IData)(vlSelf->top__DOT___0226_) 
                                                                            << 0xbU) 
                                                                           | (((IData)(vlSelf->top__DOT___1252_) 
                                                                               << 0xaU) 
                                                                              | (((IData)(vlSelf->top__DOT___2484_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0066_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1561_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0147_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0208_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0087_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0310_)))))))))))))))))))))))) 
                                      >> 0x16U));
    vlSelf->top__DOT___1673_ = (1U & ((((0x380000U 
                                         & (vlSelf->top__DOT___3859_ 
                                            << 1U)) 
                                        | (((IData)(vlSelf->top__DOT___2369_) 
                                            << 0x12U) 
                                           | ((0x30000U 
                                               & (vlSelf->top__DOT___3859_ 
                                                  << 1U)) 
                                              | (((IData)(vlSelf->top__DOT___1084_) 
                                                  << 0xfU) 
                                                 | (((IData)(vlSelf->top__DOT___2980_) 
                                                     << 0xeU) 
                                                    | ((0x3000U 
                                                        & (vlSelf->top__DOT___3859_ 
                                                           << 1U)) 
                                                       | (((IData)(vlSelf->top__DOT___3738_) 
                                                           << 0xbU) 
                                                          | ((0x700U 
                                                              & (vlSelf->top__DOT___3859_ 
                                                                 << 1U)) 
                                                             | (((IData)(vlSelf->top__DOT___0760_) 
                                                                 << 7U) 
                                                                | (((IData)(vlSelf->top__DOT___1394_) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->top__DOT___3124_) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSelf->top__DOT___0381_) 
                                                                          << 3U) 
                                                                         | (((IData)(vlSelf->top__DOT___1357_) 
                                                                             << 2U) 
                                                                            | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 1U) 
                                                                               | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 5U))))))))))))))))) 
                                       + ((0x200000U 
                                           & ((IData)(vlSelf->top__DOT___7150_) 
                                              << 0xeU)) 
                                          | ((0x100000U 
                                              & ((IData)(vlSelf->top__DOT___7150_) 
                                                 << 0xeU)) 
                                             | ((0x80000U 
                                                 & ((IData)(vlSelf->top__DOT___7150_) 
                                                    << 0xeU)) 
                                                | ((0x40000U 
                                                    & (vlSelf->top__DOT___3823_ 
                                                       << 7U)) 
                                                   | ((0x20000U 
                                                       & ((IData)(vlSelf->top__DOT___7150_) 
                                                          << 0xeU)) 
                                                      | ((0x10000U 
                                                          & ((IData)(vlSelf->top__DOT___7150_) 
                                                             << 0xeU)) 
                                                         | ((0x8000U 
                                                             & ((IData)(vlSelf->top__DOT___7150_) 
                                                                << 0xeU)) 
                                                            | ((0x4000U 
                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                   << 0xeU)) 
                                                               | (((IData)(vlSelf->top__DOT___0016_) 
                                                                   << 0xdU) 
                                                                  | (((IData)(vlSelf->top__DOT___0056_) 
                                                                      << 0xcU) 
                                                                     | (((IData)(vlSelf->top__DOT___0226_) 
                                                                         << 0xbU) 
                                                                        | (((IData)(vlSelf->top__DOT___1252_) 
                                                                            << 0xaU) 
                                                                           | (((IData)(vlSelf->top__DOT___2484_) 
                                                                               << 9U) 
                                                                              | ((0x100U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0066_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1561_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0147_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0208_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0087_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0310_))))))))))))))))))))))) 
                                      >> 0x15U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__890(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__890\n"); );
    // Body
    vlSelf->top__DOT___2433_ = (1U & (~ ((IData)(vlSelf->top__DOT___2706_) 
                                         & (IData)(vlSelf->top__DOT___2705_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__892(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__892\n"); );
    // Body
    vlSelf->top__DOT___0684_ = (1U & (((((IData)(vlSelf->top__DOT___2508_) 
                                         << 0x12U) 
                                        | ((0x20000U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT___3921_ 
                                                        >> 5U)) 
                                               << 0x11U)) 
                                           | (((IData)(vlSelf->top__DOT___0995_) 
                                               << 0x10U) 
                                              | (((IData)(vlSelf->top__DOT___0400_) 
                                                  << 0xfU) 
                                                 | (((IData)(vlSelf->top__DOT___0224_) 
                                                     << 0xeU) 
                                                    | (((IData)(vlSelf->top__DOT___1887_) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->top__DOT___0170_) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->top__DOT___0528_) 
                                                              << 9U) 
                                                             | (((IData)(vlSelf->top__DOT___1183_) 
                                                                 << 8U) 
                                                                | ((0x80U 
                                                                    & ((~ (IData)(vlSelf->top__DOT___0876_)) 
                                                                       << 7U)) 
                                                                   | (((IData)(vlSelf->top__DOT___0942_) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT___0344_) 
                                                                          << 5U) 
                                                                         | (((IData)(vlSelf->top__DOT___0489_) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSelf->top__DOT___2054_) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->top__DOT___1194_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0195_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1912_))))))))))))))))) 
                                       + ((2U & ((~ (IData)(vlSelf->top__DOT___0038_)) 
                                                 << 1U)) 
                                          | (IData)(vlSelf->top__DOT___0223_))) 
                                      >> 0x12U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__894(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__894\n"); );
    // Body
    vlSelf->top__DOT___3000_ = (1U & ((((0xeU & (vlSelf->in_data[4U] 
                                                 >> 0x16U)) 
                                        | (IData)(vlSelf->top__DOT___1526_)) 
                                       + (((IData)(vlSelf->top__DOT___0903_) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top__DOT___0479_) 
                                            << 2U) 
                                           | (IData)(vlSelf->top__DOT___2154_)))) 
                                      >> 3U));
    vlSelf->top__DOT___0345_ = ((IData)(vlSelf->top__DOT___3461_) 
                                | (IData)(vlSelf->top__DOT___3000_));
    vlSelf->top__DOT___2879_ = (1U & (((IData)(vlSelf->top__DOT___7172_) 
                                       >> 4U) ^ (IData)(vlSelf->top__DOT___0345_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__895(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__895\n"); );
    // Body
    vlSelf->top__DOT___4382_[1U] = ((0xffffc7ffU & 
                                     vlSelf->top__DOT___4382_[1U]) 
                                    | (0xfffff800U 
                                       & (((IData)(vlSelf->top__DOT___1710_) 
                                           << 0xdU) 
                                          | (((IData)(vlSelf->top__DOT___1647_) 
                                              << 0xcU) 
                                             | ((IData)(vlSelf->top__DOT___1167_) 
                                                << 0xbU)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__896(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__896\n"); );
    // Body
    vlSelf->top__DOT___1050_ = (1U & (~ (((IData)(vlSelf->top__DOT___2951_) 
                                          & (IData)(vlSelf->top__DOT___0102_)) 
                                         | ((IData)(vlSelf->top__DOT___0963_) 
                                            & (IData)(vlSelf->top__DOT___0445_)))));
    vlSelf->top__DOT___3533_ = ((IData)(vlSelf->top__DOT___0582_) 
                                | (IData)(vlSelf->top__DOT___1050_));
    vlSelf->top__DOT___1049_ = ((IData)(vlSelf->top__DOT___1050_) 
                                & (~ (IData)(vlSelf->top__DOT___0560_)));
    vlSelf->top__DOT___1509_ = (1U & (~ (((IData)(vlSelf->top__DOT___0493_) 
                                          & (IData)(vlSelf->top__DOT___0699_)) 
                                         | ((IData)(vlSelf->top__DOT___1050_) 
                                            & (IData)(vlSelf->top__DOT___0227_)))));
    vlSelf->top__DOT___1231_ = (1U & ((IData)(vlSelf->top__DOT___0195_) 
                                      + (IData)(vlSelf->top__DOT___1509_)));
    vlSelf->top__DOT___1230_ = ((IData)(vlSelf->top__DOT___1231_) 
                                & (IData)(vlSelf->top__DOT___1232_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__897(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__897\n"); );
    // Body
    vlSelf->top__DOT___1374_ = (1U & ((((0x4000U & vlSelf->top__DOT___7160_) 
                                        | ((0x2000U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT___4200_ 
                                                        >> 0xeU)) 
                                               << 0xdU)) 
                                           | ((0x1000U 
                                               & vlSelf->top__DOT___7160_) 
                                              | ((0x800U 
                                                  & vlSelf->top__DOT___7160_) 
                                                 | ((0x400U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___4200_ 
                                                                 >> 0xbU)) 
                                                        << 0xaU)) 
                                                    | ((0x200U 
                                                        & vlSelf->top__DOT___7160_) 
                                                       | ((0x100U 
                                                           & vlSelf->top__DOT___7160_) 
                                                          | ((0xc0U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT___4200_ 
                                                                          >> 7U)) 
                                                                 << 6U)) 
                                                             | ((0x20U 
                                                                 & vlSelf->top__DOT___7160_) 
                                                                | ((0x10U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___4200_ 
                                                                                >> 5U)) 
                                                                       << 4U)) 
                                                                   | (((IData)(vlSelf->top__DOT___0880_) 
                                                                       << 3U) 
                                                                      | ((4U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 3U)) 
                                                                             << 2U)) 
                                                                         | ((2U 
                                                                             & vlSelf->top__DOT___7160_) 
                                                                            | (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT___4200_ 
                                                                                >> 1U)))))))))))))))) 
                                       + ((0x7f00U 
                                           & vlSelf->top__DOT___4528_) 
                                          | ((0x80U 
                                              & (vlSelf->top__DOT___4750_ 
                                                 >> 7U)) 
                                             | ((0x60U 
                                                 & vlSelf->top__DOT___4528_) 
                                                | ((0xeU 
                                                    & vlSelf->top__DOT___4528_) 
                                                   | (IData)(vlSelf->top__DOT___2288_)))))) 
                                      >> 0xeU));
    vlSelf->top__DOT___1078_ = (1U & ((((0x200U & vlSelf->top__DOT___7160_) 
                                        | ((0x100U 
                                            & vlSelf->top__DOT___7160_) 
                                           | ((0xc0U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___4200_ 
                                                           >> 7U)) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & vlSelf->top__DOT___7160_) 
                                                 | ((0x10U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___4200_ 
                                                                 >> 5U)) 
                                                        << 4U)) 
                                                    | (((IData)(vlSelf->top__DOT___0880_) 
                                                        << 3U) 
                                                       | ((4U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___4200_ 
                                                                       >> 3U)) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & vlSelf->top__DOT___7160_) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___4200_ 
                                                                           >> 1U))))))))))) 
                                       + ((0x300U & vlSelf->top__DOT___4528_) 
                                          | ((0x80U 
                                              & (vlSelf->top__DOT___4750_ 
                                                 >> 7U)) 
                                             | ((0x60U 
                                                 & vlSelf->top__DOT___4528_) 
                                                | ((0xeU 
                                                    & vlSelf->top__DOT___4528_) 
                                                   | (IData)(vlSelf->top__DOT___2288_)))))) 
                                      >> 9U));
    vlSelf->top__DOT___1076_ = ((~ (IData)(vlSelf->top__DOT___1077_)) 
                                & (IData)(vlSelf->top__DOT___1078_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__898(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__898\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    vlSelf->top__DOT___4498_ = ((0x4000U & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[1U] 
                                            << 9U)) 
                                | ((0x3ff0U & ((vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[1U] 
                                                << 9U) 
                                               | (0x1f0U 
                                                  & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[0U] 
                                                     >> 0x17U)))) 
                                   | (((IData)(vlSelf->top__DOT___0597_) 
                                       << 3U) | (((IData)(vlSelf->top__DOT___0558_) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT___1487_) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT___0056_))))));
    __Vtemp_8[2U] = ((0xfffff000U & ((vlSelf->top__DOT___3872_[2U] 
                                      << 0x13U) | (0x7f000U 
                                                   & (vlSelf->top__DOT___3872_[1U] 
                                                      >> 0xdU)))) 
                     | ((0x800U & (vlSelf->top__DOT___4295_[1U] 
                                   << 4U)) | ((0x400U 
                                               & vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U]) 
                                              | ((0x200U 
                                                  & (vlSelf->top__DOT___4295_[1U] 
                                                     << 4U)) 
                                                 | ((0x100U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___3922_ 
                                                                 >> 0x20U)) 
                                                        << 8U)) 
                                                    | ((0x80U 
                                                        & vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U]) 
                                                       | ((0x60U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT___3922_ 
                                                                       >> 0x1dU)) 
                                                              << 5U)) 
                                                          | (0x1fU 
                                                             & ((0x7ffff0U 
                                                                 & (vlSelf->top__DOT___4295_[1U] 
                                                                    << 4U)) 
                                                                | (vlSelf->top__DOT___4295_[0U] 
                                                                   >> 0x1cU))))))))));
    vlSelf->top__DOT___4510_[0U] = (IData)((((QData)((IData)(
                                                             (0x7fU 
                                                              & (vlSelf->top__DOT___4347_ 
                                                                 >> 1U)))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0x3ffU 
                                                                 & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[1U] 
                                                                    >> 6U)))) 
                                                << 0x26U) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[1U] 
                                                                       >> 5U)))) 
                                                   << 0x25U) 
                                                  | (((QData)((IData)(
                                                                      (0x3ffU 
                                                                       & ((IData)(vlSelf->top__DOT___4498_) 
                                                                          >> 4U)))) 
                                                      << 0x1bU) 
                                                     | (QData)((IData)(
                                                                       (0x7ffffffU 
                                                                        & vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[0U]))))))));
    vlSelf->top__DOT___4510_[1U] = ((0xff800000U & 
                                     (vlSelf->top__DOT___4295_[0U] 
                                      << 4U)) | (IData)(
                                                        ((((QData)((IData)(
                                                                           (0x7fU 
                                                                            & (vlSelf->top__DOT___4347_ 
                                                                               >> 1U)))) 
                                                           << 0x30U) 
                                                          | (((QData)((IData)(
                                                                              (0x3ffU 
                                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[1U] 
                                                                                >> 6U)))) 
                                                              << 0x26U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[1U] 
                                                                                >> 5U)))) 
                                                                 << 0x25U) 
                                                                | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & ((IData)(vlSelf->top__DOT___4498_) 
                                                                                >> 4U)))) 
                                                                    << 0x1bU) 
                                                                   | (QData)((IData)(
                                                                                (0x7ffffffU 
                                                                                & vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[0U]))))))) 
                                                         >> 0x20U)));
    vlSelf->top__DOT___4510_[2U] = __Vtemp_8[2U];
    vlSelf->top__DOT___4510_[3U] = (((IData)(vlSelf->top__DOT____Vconcswap_1_hf386247a__0) 
                                     << 0x11U) | ((0x10000U 
                                                   & vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U]) 
                                                  | ((0xff00U 
                                                      & vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U]) 
                                                     | ((0xc0U 
                                                         & (vlSelf->top__DOT___4295_[2U] 
                                                            << 4U)) 
                                                        | ((0x20U 
                                                            & vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U]) 
                                                           | ((0x10U 
                                                               & (vlSelf->top__DOT___4295_[2U] 
                                                                  << 4U)) 
                                                              | ((0xeU 
                                                                  & (vlSelf->top__DOT___3872_[2U] 
                                                                     >> 0xdU)) 
                                                                 | (1U 
                                                                    & vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U]))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__899(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__899\n"); );
    // Body
    vlSelf->top__DOT___0363_ = (1U & (~ (((IData)(vlSelf->top__DOT___0189_) 
                                          & (IData)(vlSelf->top__DOT___1362_)) 
                                         | (IData)(vlSelf->top__DOT___1762_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__900(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__900\n"); );
    // Body
    vlSelf->top__DOT___4016_ = ((0x1ffffU & vlSelf->top__DOT___4016_) 
                                | (((IData)(vlSelf->top__DOT___1462_) 
                                    << 0x15U) | (((IData)(vlSelf->top__DOT___0984_) 
                                                  << 0x14U) 
                                                 | (((IData)(vlSelf->top__DOT___0176_) 
                                                     << 0x13U) 
                                                    | ((IData)(vlSelf->top__DOT___0070_) 
                                                       << 0x12U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__901(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__901\n"); );
    // Body
    vlSelf->top__DOT___2478_ = (1U & (~ (((IData)(vlSelf->top__DOT___0984_) 
                                          & (vlSelf->top__DOT___7166_ 
                                             >> 0xbU)) 
                                         | (IData)(vlSelf->top__DOT___0527_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__902(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__902\n"); );
    // Body
    vlSelf->top__DOT___0900_ = ((IData)(vlSelf->top__DOT___3548_) 
                                | (IData)(vlSelf->top__DOT___3547_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__903(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__903\n"); );
    // Body
    vlSelf->top__DOT___4411_ = ((0x7fffffcU & ((IData)(
                                                       (vlSelf->top__DOT___7175_ 
                                                        >> 3U)) 
                                               << 2U)) 
                                | (((IData)(vlSelf->top__DOT___0094_) 
                                    << 1U) | (IData)(vlSelf->top__DOT___2332_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__904(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__904\n"); );
    // Body
    vlSelf->top__DOT___0737_ = ((IData)(vlSelf->top__DOT___0877_) 
                                & (~ (IData)(vlSelf->top__DOT___0983_)));
    vlSelf->top__DOT___0465_ = ((IData)(vlSelf->top__DOT___0737_) 
                                | (IData)(vlSelf->top__DOT___0764_));
    vlSelf->top__DOT____VdfgTmp_h53331007__0 = ((((IData)(vlSelf->top__DOT___0985_) 
                                                  ^ (IData)(vlSelf->top__DOT___1051_)) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0465_));
    vlSelf->top__DOT___2070_ = ((IData)(vlSelf->top__DOT___0465_) 
                                ^ (IData)(vlSelf->top__DOT___1480_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__906(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__906\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_hd561689f__0 = (((IData)(vlSelf->top__DOT___0424_) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->top__DOT___0870_) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->top__DOT___2301_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___1906_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__907(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__907\n"); );
    // Body
    vlSelf->top__DOT___4136_ = ((0x7fffffffULL & vlSelf->top__DOT___4136_) 
                                | ((QData)((IData)(
                                                   ((0xf800U 
                                                     & ((IData)(vlSelf->top__DOT___7109_) 
                                                        << 6U)) 
                                                    | ((0x400U 
                                                        & ((IData)(vlSelf->top__DOT___7109_) 
                                                           << 6U)) 
                                                       | ((0x200U 
                                                           & ((IData)(vlSelf->top__DOT___7109_) 
                                                              << 6U)) 
                                                          | ((0x100U 
                                                              & ((IData)(vlSelf->top__DOT___7109_) 
                                                                 << 6U)) 
                                                             | ((0x80U 
                                                                 & ((IData)(vlSelf->top__DOT___7109_) 
                                                                    << 6U)) 
                                                                | ((0x40U 
                                                                    & ((IData)(vlSelf->top__DOT___7109_) 
                                                                       << 6U)) 
                                                                   | (((IData)(vlSelf->top__DOT___1827_) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSelf->top__DOT___0870_) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSelf->top__DOT___0615_) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSelf->top__DOT___1128_) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSelf->top__DOT___2301_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0443_)))))))))))))) 
                                   << 0x1fU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__908(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__908\n"); );
    // Body
    vlSelf->top__DOT___1481_ = (1U & (~ (((IData)(vlSelf->top__DOT___0534_) 
                                          & (IData)(vlSelf->top__DOT___2098_)) 
                                         | ((IData)(vlSelf->top__DOT___1428_) 
                                            & (IData)(vlSelf->top__DOT___0870_)))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__909(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__909\n"); );
    // Body
    vlSelf->top__DOT___4224_ = ((0x7ffffff8fffffULL 
                                 & vlSelf->top__DOT___4224_) 
                                | ((QData)((IData)(
                                                   (((IData)(vlSelf->top__DOT___3047_) 
                                                     << 2U) 
                                                    | ((((IData)(vlSelf->top__DOT___0699_) 
                                                         | (IData)(vlSelf->top__DOT___1348_)) 
                                                        << 1U) 
                                                       | (1U 
                                                          & (~ (IData)(vlSelf->top__DOT___2369_))))))) 
                                   << 0x14U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__911(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__911\n"); );
    // Body
    vlSelf->top__DOT___3979_ = ((0x1ffff00U & ((IData)(
                                                       (vlSelf->top__DOT___7191_ 
                                                        >> 0x23U)) 
                                               << 8U)) 
                                | (((IData)(vlSelf->top__DOT___0645_) 
                                    << 7U) | (((IData)(vlSelf->top__DOT___0191_) 
                                               << 6U) 
                                              | (((IData)(vlSelf->top__DOT___0428_) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->top__DOT___0997_) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->top__DOT___1570_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___1635_) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->top__DOT___2061_) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT___0750_)))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__912(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__912\n"); );
    // Body
    vlSelf->top__DOT___4524_ = ((0x18U & (((0x10U & 
                                            ((IData)(
                                                     (vlSelf->top__DOT___3848_ 
                                                      >> 4U)) 
                                             << 4U)) 
                                           | (((IData)(vlSelf->top__DOT___0164_) 
                                               << 3U) 
                                              | (IData)(vlSelf->top__DOT____VdfgTmp_hc563f2b7__0))) 
                                          + ((0x1eU 
                                              & ((IData)(
                                                         (vlSelf->top__DOT____VdfgTmp_h943d6f10__0 
                                                          >> 0x19U)) 
                                                 << 1U)) 
                                             | (IData)(vlSelf->top__DOT___0944_)))) 
                                | (((IData)(vlSelf->top__DOT___1337_) 
                                    << 2U) | ((2U & 
                                               ((IData)(vlSelf->top__DOT____VdfgTmp_h8ec61fb5__0) 
                                                + (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT____VdfgTmp_h943d6f10__0 
                                                                >> 0x19U)) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->top__DOT___0944_)))) 
                                              | (IData)(vlSelf->top__DOT___2969_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__915(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__915\n"); );
    // Body
    vlSelf->top__DOT___4017_ = ((0x3f800000U & (((0x20000000U 
                                                  & ((IData)(vlSelf->top__DOT___7150_) 
                                                     << 0x1bU)) 
                                                 | ((0x10000000U 
                                                     & ((IData)(vlSelf->top__DOT___7150_) 
                                                        << 0x1bU)) 
                                                    | (((IData)(vlSelf->top__DOT___0023_) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelf->top__DOT___0224_) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelf->top__DOT___0275_) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSelf->top__DOT___0300_) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->top__DOT___1561_) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelf->top__DOT___0227_) 
                                                                       << 0x16U) 
                                                                      | ((0x380000U 
                                                                          & (vlSelf->top__DOT___3859_ 
                                                                             << 1U)) 
                                                                         | (((IData)(vlSelf->top__DOT___2369_) 
                                                                             << 0x12U) 
                                                                            | ((0x30000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                               | (((IData)(vlSelf->top__DOT___1084_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___2980_) 
                                                                                << 0xeU) 
                                                                                | ((0x3000U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3738_) 
                                                                                << 0xbU) 
                                                                                | ((0x700U 
                                                                                & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0760_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1394_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3124_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0381_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1357_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 5U))))))))))))))))))))))))) 
                                                + (
                                                   ((IData)(vlSelf->top__DOT___2715_) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelf->top__DOT___0705_) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelf->top__DOT___0873_) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelf->top__DOT___0614_) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelf->top__DOT___2054_) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelf->top__DOT___0485_) 
                                                                   << 0x18U) 
                                                                  | ((0xc00000U 
                                                                      & (vlSelf->top__DOT___3823_ 
                                                                         << 7U)) 
                                                                     | ((0x200000U 
                                                                         & ((IData)(vlSelf->top__DOT___7150_) 
                                                                            << 0xeU)) 
                                                                        | ((0x100000U 
                                                                            & ((IData)(vlSelf->top__DOT___7150_) 
                                                                               << 0xeU)) 
                                                                           | ((0x80000U 
                                                                               & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                << 0xeU)) 
                                                                              | ((0x40000U 
                                                                                & (vlSelf->top__DOT___3823_ 
                                                                                << 7U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                << 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                << 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0016_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___1252_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___2484_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0066_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1561_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0147_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0208_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0087_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0310_))))))))))))))))))))))))))))))) 
                                | (((IData)(vlSelf->top__DOT___2970_) 
                                    << 0x16U) | (((IData)(vlSelf->top__DOT___1673_) 
                                                  << 0x15U) 
                                                 | ((0x1c0000U 
                                                     & (((0x180000U 
                                                          & (vlSelf->top__DOT___3859_ 
                                                             << 1U)) 
                                                         | (((IData)(vlSelf->top__DOT___2369_) 
                                                             << 0x12U) 
                                                            | ((0x30000U 
                                                                & (vlSelf->top__DOT___3859_ 
                                                                   << 1U)) 
                                                               | (((IData)(vlSelf->top__DOT___1084_) 
                                                                   << 0xfU) 
                                                                  | (((IData)(vlSelf->top__DOT___2980_) 
                                                                      << 0xeU) 
                                                                     | ((0x3000U 
                                                                         & (vlSelf->top__DOT___3859_ 
                                                                            << 1U)) 
                                                                        | (((IData)(vlSelf->top__DOT___3738_) 
                                                                            << 0xbU) 
                                                                           | ((0x700U 
                                                                               & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0760_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1394_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3124_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0381_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1357_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 5U))))))))))))))))) 
                                                        + 
                                                        ((0x100000U 
                                                          & ((IData)(vlSelf->top__DOT___7150_) 
                                                             << 0xeU)) 
                                                         | ((0x80000U 
                                                             & ((IData)(vlSelf->top__DOT___7150_) 
                                                                << 0xeU)) 
                                                            | ((0x40000U 
                                                                & (vlSelf->top__DOT___3823_ 
                                                                   << 7U)) 
                                                               | ((0x20000U 
                                                                   & ((IData)(vlSelf->top__DOT___7150_) 
                                                                      << 0xeU)) 
                                                                  | ((0x10000U 
                                                                      & ((IData)(vlSelf->top__DOT___7150_) 
                                                                         << 0xeU)) 
                                                                     | ((0x8000U 
                                                                         & ((IData)(vlSelf->top__DOT___7150_) 
                                                                            << 0xeU)) 
                                                                        | ((0x4000U 
                                                                            & ((IData)(vlSelf->top__DOT___7150_) 
                                                                               << 0xeU)) 
                                                                           | (((IData)(vlSelf->top__DOT___0016_) 
                                                                               << 0xdU) 
                                                                              | (((IData)(vlSelf->top__DOT___0056_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___1252_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___2484_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0066_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1561_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0147_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0208_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0087_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0310_))))))))))))))))))))))) 
                                                    | (((IData)(vlSelf->top__DOT___3619_) 
                                                        << 0x11U) 
                                                       | ((0x10000U 
                                                           & (((0x10000U 
                                                                & (vlSelf->top__DOT___3859_ 
                                                                   << 1U)) 
                                                               | (((IData)(vlSelf->top__DOT___1084_) 
                                                                   << 0xfU) 
                                                                  | (((IData)(vlSelf->top__DOT___2980_) 
                                                                      << 0xeU) 
                                                                     | ((0x3000U 
                                                                         & (vlSelf->top__DOT___3859_ 
                                                                            << 1U)) 
                                                                        | (((IData)(vlSelf->top__DOT___3738_) 
                                                                            << 0xbU) 
                                                                           | ((0x700U 
                                                                               & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                              | (((IData)(vlSelf->top__DOT___0760_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1394_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3124_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0381_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1357_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 5U))))))))))))))) 
                                                              + 
                                                              ((0x10000U 
                                                                & ((IData)(vlSelf->top__DOT___7150_) 
                                                                   << 0xeU)) 
                                                               | ((0x8000U 
                                                                   & ((IData)(vlSelf->top__DOT___7150_) 
                                                                      << 0xeU)) 
                                                                  | ((0x4000U 
                                                                      & ((IData)(vlSelf->top__DOT___7150_) 
                                                                         << 0xeU)) 
                                                                     | (((IData)(vlSelf->top__DOT___0016_) 
                                                                         << 0xdU) 
                                                                        | (((IData)(vlSelf->top__DOT___0056_) 
                                                                            << 0xcU) 
                                                                           | (((IData)(vlSelf->top__DOT___0226_) 
                                                                               << 0xbU) 
                                                                              | (((IData)(vlSelf->top__DOT___1252_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___2484_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0066_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1561_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0147_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0208_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0087_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0310_))))))))))))))))))) 
                                                          | (((IData)(vlSelf->top__DOT___2704_) 
                                                              << 0xfU) 
                                                             | (((IData)(vlSelf->top__DOT___1264_) 
                                                                 << 0xeU) 
                                                                | (0x3fffU 
                                                                   & (((0x3000U 
                                                                        & (vlSelf->top__DOT___3859_ 
                                                                           << 1U)) 
                                                                       | (((IData)(vlSelf->top__DOT___3738_) 
                                                                           << 0xbU) 
                                                                          | ((0x700U 
                                                                              & (vlSelf->top__DOT___3859_ 
                                                                                << 1U)) 
                                                                             | (((IData)(vlSelf->top__DOT___0760_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___1394_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___3124_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0381_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___1357_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0923_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___7096_ 
                                                                                >> 5U)))))))))))) 
                                                                      + 
                                                                      (((IData)(vlSelf->top__DOT___0016_) 
                                                                        << 0xdU) 
                                                                       | (((IData)(vlSelf->top__DOT___0056_) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->top__DOT___0226_) 
                                                                              << 0xbU) 
                                                                             | (((IData)(vlSelf->top__DOT___1252_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___2484_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & ((~ (IData)(vlSelf->top__DOT___0629_)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0834_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0066_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1561_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0147_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0208_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0087_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0310_))))))))))))))))))))))));
}
