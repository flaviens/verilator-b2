// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__482(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__482\n"); );
    // Body
    vlSelf->top__DOT___3020_ = (1U & ((IData)(vlSelf->top__DOT___0299_) 
                                      + (IData)(vlSelf->top__DOT___0073_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__484(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__484\n"); );
    // Body
    vlSelf->top__DOT___0439_ = (1U & (~ ((((IData)(vlSelf->top__DOT___7174_) 
                                           >> 6U) & (IData)(vlSelf->top__DOT___0299_)) 
                                         | ((IData)(vlSelf->top__DOT___7102_) 
                                            & (IData)(vlSelf->top__DOT___0084_)))));
    vlSelf->top__DOT___0613_ = ((IData)(vlSelf->top__DOT___0439_) 
                                & (~ (IData)(vlSelf->top__DOT___0614_)));
    vlSelf->top__DOT___0169_ = ((IData)(vlSelf->top__DOT___0439_) 
                                | (IData)(vlSelf->top__DOT___0290_));
    vlSelf->top__DOT___1766_ = ((IData)(vlSelf->top__DOT___0613_) 
                                & (IData)(vlSelf->top__DOT___0218_));
    vlSelf->top__DOT___0081_ = ((IData)(vlSelf->top__DOT___0169_) 
                                & (~ (IData)(vlSelf->top__DOT___0088_)));
    vlSelf->top__DOT___1011_ = ((IData)(vlSelf->top__DOT___0169_) 
                                | (IData)(vlSelf->top__DOT___0170_));
    vlSelf->top__DOT___1009_ = (1U & (((IData)((((QData)((IData)(
                                                                 (0x1fffffU 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT___3992_ 
                                                                             >> 0xcU))))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  ((0x800U 
                                                                    & (vlSelf->top__DOT___4749_[0U] 
                                                                       >> 3U)) 
                                                                   | (0x7ffU 
                                                                      & (IData)(vlSelf->top__DOT___3992_))))))) 
                                       + (0xf3652U 
                                          | (((IData)(vlSelf->top__DOT___0169_) 
                                              << 0x18U) 
                                             | ((0x800000U 
                                                 & ((IData)(vlSelf->top__DOT___3982_) 
                                                    << 0x16U)) 
                                                | (((IData)(vlSelf->top__DOT___1290_) 
                                                    << 0x16U) 
                                                   | (((IData)(vlSelf->top__DOT___0116_) 
                                                       << 0x15U) 
                                                      | ((IData)(vlSelf->top__DOT___0170_) 
                                                         << 0x14U))))))) 
                                      >> 0x18U));
    vlSelf->top__DOT___0080_ = ((IData)(vlSelf->top__DOT___0082_) 
                                & (~ (IData)(vlSelf->top__DOT___0081_)));
    vlSelf->top__DOT___4458_[3U] = ((0xfbffffffU & 
                                     vlSelf->top__DOT___4458_[3U]) 
                                    | ((IData)(vlSelf->top__DOT___1011_) 
                                       << 0x1aU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__485(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__485\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((3U & (IData)(
                                                            (vlSelf->top__DOT___6989_ 
                                                             >> 0x12U))))) 
                              << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT___3758_)) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___6989_ 
                                                                           >> 0x10U))))) 
                                               << 0x3cU) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___6989_ 
                                                                              >> 8U))))) 
                                                  << 0x34U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___0558_)) 
                                                     << 0x33U) 
                                                    | (((QData)((IData)(vlSelf->top__DOT___0156_)) 
                                                        << 0x32U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->top__DOT___7110_ 
                                                                               >> 0x16U)))) 
                                                           << 0x31U) 
                                                          | (((QData)((IData)(
                                                                              (7U 
                                                                               & (vlSelf->top__DOT___3976_ 
                                                                                >> 0x10U)))) 
                                                              << 0x2eU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7110_ 
                                                                                >> 0x12U)))) 
                                                                 << 0x2dU) 
                                                                | (((QData)((IData)(
                                                                                (0x3fffU 
                                                                                & (vlSelf->top__DOT___3976_ 
                                                                                >> 1U)))) 
                                                                    << 0x1fU) 
                                                                   | (QData)((IData)(
                                                                                ((0x78000000U 
                                                                                & (vlSelf->top__DOT___7110_ 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0299_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0143_) 
                                                                                << 0x19U) 
                                                                                | ((0x1000000U 
                                                                                & vlSelf->top__DOT___7220_) 
                                                                                | ((0x800000U 
                                                                                & vlSelf->top__DOT___7220_) 
                                                                                | ((0x780000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3848_ 
                                                                                >> 0x28U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & vlSelf->top__DOT___7220_) 
                                                                                | ((0x3ff80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3848_ 
                                                                                >> 0x1cU)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & vlSelf->top__DOT___7220_) 
                                                                                | ((0x3cU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3848_ 
                                                                                >> 0x17U)) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & vlSelf->top__DOT___7220_))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((3U 
                                                & (IData)(
                                                          (vlSelf->top__DOT___6989_ 
                                                           >> 0x12U))))) 
                               << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT___3758_)) 
                                             << 0x3dU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___6989_ 
                                                                            >> 0x10U))))) 
                                                << 0x3cU) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT___6989_ 
                                                                               >> 8U))))) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(vlSelf->top__DOT___0558_)) 
                                                      << 0x33U) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___0156_)) 
                                                         << 0x32U) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->top__DOT___7110_ 
                                                                                >> 0x16U)))) 
                                                            << 0x31U) 
                                                           | (((QData)((IData)(
                                                                               (7U 
                                                                                & (vlSelf->top__DOT___3976_ 
                                                                                >> 0x10U)))) 
                                                               << 0x2eU) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT___7110_ 
                                                                                >> 0x12U)))) 
                                                                  << 0x2dU) 
                                                                 | (((QData)((IData)(
                                                                                (0x3fffU 
                                                                                & (vlSelf->top__DOT___3976_ 
                                                                                >> 1U)))) 
                                                                     << 0x1fU) 
                                                                    | (QData)((IData)(
                                                                                ((0x78000000U 
                                                                                & (vlSelf->top__DOT___7110_ 
                                                                                << 0x1bU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0299_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___0143_) 
                                                                                << 0x19U) 
                                                                                | ((0x1000000U 
                                                                                & vlSelf->top__DOT___7220_) 
                                                                                | ((0x800000U 
                                                                                & vlSelf->top__DOT___7220_) 
                                                                                | ((0x780000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3848_ 
                                                                                >> 0x28U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & vlSelf->top__DOT___7220_) 
                                                                                | ((0x3ff80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3848_ 
                                                                                >> 0x1cU)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & vlSelf->top__DOT___7220_) 
                                                                                | ((0x3cU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3848_ 
                                                                                >> 0x17U)) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & vlSelf->top__DOT___7220_))))))))))))))))))))))) 
                             >> 0x20U));
    vlSelf->top__DOT___4042_[0U] = __Vtemp_1[0U];
    vlSelf->top__DOT___4042_[1U] = __Vtemp_1[1U];
    vlSelf->top__DOT___4042_[2U] = ((8U & (vlSelf->top__DOT___3880_[1U] 
                                           >> 0x18U)) 
                                    | ((4U & ((IData)(
                                                      (vlSelf->top__DOT___6989_ 
                                                       >> 0x16U)) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         (vlSelf->top__DOT___6989_ 
                                                          >> 0x15U)) 
                                                 << 1U)) 
                                          | (1U & (
                                                   vlSelf->top__DOT___3880_[1U] 
                                                   >> 0x18U)))));
    vlSelf->top__DOT___3163_ = (1U & ((((0xf8U & (vlSelf->top__DOT___4042_[1U] 
                                                  >> 0x11U)) 
                                        | (7U & (IData)(
                                                        (vlSelf->top__DOT___6989_ 
                                                         >> 5U)))) 
                                       + ((0x80U & 
                                           (vlSelf->top__DOT___3883_[2U] 
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
                                                            | (IData)(vlSelf->top__DOT___0023_))))))))) 
                                      >> 7U));
    vlSelf->top__DOT___0811_ = (1U & ((((8U & (vlSelf->top__DOT___4042_[1U] 
                                               >> 0x11U)) 
                                        | (7U & (IData)(
                                                        (vlSelf->top__DOT___6989_ 
                                                         >> 5U)))) 
                                       + ((8U & ((IData)(vlSelf->top__DOT___7092_) 
                                                 << 1U)) 
                                          | ((4U & 
                                              (vlSelf->top__DOT___3883_[1U] 
                                               >> 0x1bU)) 
                                             | ((2U 
                                                 & ((IData)(vlSelf->top__DOT___7092_) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->top__DOT___0023_))))) 
                                      >> 3U));
    __Vtemp_5[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___2111_)) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (7U 
                                                             & (vlSelf->top__DOT___3880_[1U] 
                                                                >> 0x1bU)))) 
                                            << 0x3cU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT___6989_ 
                                                                           >> 0x16U))))) 
                                               << 0x3bU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT___6989_ 
                                                                              >> 0x15U))))) 
                                                  << 0x3aU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT___3880_[1U] 
                                                                         >> 0x18U)))) 
                                                     << 0x39U) 
                                                    | (((QData)((IData)(
                                                                        (vlSelf->top__DOT___4042_[1U] 
                                                                         >> 0x1eU))) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___3758_)) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U))))) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0x14U)))) 
                                                                 << 0x2dU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U))))) 
                                                                    << 0x2cU) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U))))) 
                                                                       << 0x2bU) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U))))) 
                                                                          << 0x2aU) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U))))) 
                                                                             << 0x29U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U))))) 
                                                                                << 0x28U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 2U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0830_)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0023_)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0830_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0195_))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0102_)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1887_) 
                                                                                << 0x1fU) 
                                                                                | (((0x38000000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x4000000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x19U) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 9U)) 
                                                                                | ((0x800000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x400000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x200000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x100000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x80000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x40000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x4000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x3c00U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | (8U 
                                                                                & vlSelf->top__DOT___7158_)))))))))))))))))))))) 
                                                                                | ((4U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((2U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x1dU)))))))))))))))))))))))))))))));
    __Vtemp_5[1U] = (IData)(((((QData)((IData)(vlSelf->top__DOT___2111_)) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (7U 
                                                              & (vlSelf->top__DOT___3880_[1U] 
                                                                 >> 0x1bU)))) 
                                             << 0x3cU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT___6989_ 
                                                                            >> 0x16U))))) 
                                                << 0x3bU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT___6989_ 
                                                                               >> 0x15U))))) 
                                                   << 0x3aU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->top__DOT___3880_[1U] 
                                                                          >> 0x18U)))) 
                                                      << 0x39U) 
                                                     | (((QData)((IData)(
                                                                         (vlSelf->top__DOT___4042_[1U] 
                                                                          >> 0x1eU))) 
                                                         << 0x37U) 
                                                        | (((QData)((IData)(vlSelf->top__DOT___3758_)) 
                                                            << 0x36U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U))))) 
                                                               << 0x35U) 
                                                              | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0x14U)))) 
                                                                  << 0x2dU) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U))))) 
                                                                     << 0x2cU) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U))))) 
                                                                        << 0x2bU) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U))))) 
                                                                           << 0x2aU) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U))))) 
                                                                              << 0x29U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 2U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0830_)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0023_)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0183_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0830_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->top__DOT___0195_))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0102_)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1887_) 
                                                                                << 0x1fU) 
                                                                                | (((0x38000000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x4000000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x19U) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 9U)) 
                                                                                | ((0x800000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x400000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x200000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x100000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x80000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x40000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x4000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x3c00U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | (8U 
                                                                                & vlSelf->top__DOT___7158_)))))))))))))))))))))) 
                                                                                | ((4U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((2U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x1dU)))))))))))))))))))))))))))))) 
                             >> 0x20U));
    vlSelf->top__DOT___4297_[0U] = __Vtemp_5[0U];
    vlSelf->top__DOT___4297_[1U] = __Vtemp_5[1U];
    vlSelf->top__DOT___4297_[2U] = ((0xcU & (vlSelf->top__DOT___3880_[2U] 
                                             << 1U)) 
                                    | ((2U & ((IData)(
                                                      (vlSelf->top__DOT___6989_ 
                                                       >> 0x1cU)) 
                                              << 1U)) 
                                       | (vlSelf->top__DOT___3880_[1U] 
                                          >> 0x1fU)));
    vlSelf->top__DOT____VdfgTmp_hc190a26d__0 = ((0xc00000U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___6989_ 
                                                             >> 0x15U)) 
                                                    << 0x16U)) 
                                                | ((0x200000U 
                                                    & (vlSelf->top__DOT___3880_[1U] 
                                                       >> 3U)) 
                                                   | ((0x180000U 
                                                       & (vlSelf->top__DOT___4042_[1U] 
                                                          >> 0xbU)) 
                                                      | ((0x60000U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT___6989_ 
                                                                      >> 0x10U)) 
                                                             << 0x11U)) 
                                                         | ((0x1fe00U 
                                                             & (vlSelf->top__DOT___4042_[1U] 
                                                                >> 0xbU)) 
                                                            | ((0x1f0U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT___6989_ 
                                                                            >> 3U)) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & (vlSelf->top__DOT___4297_[1U] 
                                                                      >> 4U)) 
                                                                  | ((6U 
                                                                      & ((IData)(vlSelf->top__DOT___6989_) 
                                                                         << 1U)) 
                                                                     | (IData)(vlSelf->top__DOT___0078_)))))))));
    __Vtemp_9[0U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                  & (vlSelf->top__DOT___3880_[2U] 
                                                     << 0x1dU)) 
                                                 | ((0x20000000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___6989_ 
                                                                 >> 0x1cU)) 
                                                        << 0x1dU)) 
                                                    | ((0x10000000U 
                                                        & (vlSelf->top__DOT___3880_[1U] 
                                                           >> 3U)) 
                                                       | (((IData)(vlSelf->top__DOT___2111_) 
                                                           << 0x1bU) 
                                                          | ((0x7000000U 
                                                              & (vlSelf->top__DOT___3880_[1U] 
                                                                 >> 3U)) 
                                                             | ((0x800000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___6989_ 
                                                                             >> 0x16U)) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & (vlSelf->top__DOT___3880_[1U] 
                                                                          >> 3U)) 
                                                                      | ((0x180000U 
                                                                          & (vlSelf->top__DOT___4042_[1U] 
                                                                             >> 0xbU)) 
                                                                         | (((IData)(vlSelf->top__DOT___3758_) 
                                                                             << 0x12U) 
                                                                            | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                               | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___0183_) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___0830_) 
                                                                 << 0x1eU) 
                                                                | ((0x20000000U 
                                                                    & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                       << 0x1dU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0102_) 
                                                                       << 0x1cU) 
                                                                      | (((IData)(vlSelf->top__DOT___1887_) 
                                                                          << 0x1bU) 
                                                                         | ((0x3800000U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                            | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U))))))))))))))))))))))))))))))) 
                      << 4U) | ((8U & vlSelf->top__DOT___7158_) 
                                | ((4U & vlSelf->top__DOT___7158_) 
                                   | ((2U & vlSelf->top__DOT___7158_) 
                                      | (1U & (vlSelf->top__DOT___3863_[0U] 
                                               >> 0x1dU))))));
    __Vtemp_9[1U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                  & (vlSelf->top__DOT___3880_[2U] 
                                                     << 0x1dU)) 
                                                 | ((0x20000000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___6989_ 
                                                                 >> 0x1cU)) 
                                                        << 0x1dU)) 
                                                    | ((0x10000000U 
                                                        & (vlSelf->top__DOT___3880_[1U] 
                                                           >> 3U)) 
                                                       | (((IData)(vlSelf->top__DOT___2111_) 
                                                           << 0x1bU) 
                                                          | ((0x7000000U 
                                                              & (vlSelf->top__DOT___3880_[1U] 
                                                                 >> 3U)) 
                                                             | ((0x800000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___6989_ 
                                                                             >> 0x16U)) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & (vlSelf->top__DOT___3880_[1U] 
                                                                          >> 3U)) 
                                                                      | ((0x180000U 
                                                                          & (vlSelf->top__DOT___4042_[1U] 
                                                                             >> 0xbU)) 
                                                                         | (((IData)(vlSelf->top__DOT___3758_) 
                                                                             << 0x12U) 
                                                                            | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                               | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___0183_) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___0830_) 
                                                                 << 0x1eU) 
                                                                | ((0x20000000U 
                                                                    & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                       << 0x1dU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0102_) 
                                                                       << 0x1cU) 
                                                                      | (((IData)(vlSelf->top__DOT___1887_) 
                                                                          << 0x1bU) 
                                                                         | ((0x3800000U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                            | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U))))))))))))))))))))))))))))))) 
                      >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                              ((0xc0000000U 
                                                                & (vlSelf->top__DOT___3880_[2U] 
                                                                   << 0x1dU)) 
                                                               | ((0x20000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___6989_ 
                                                                               >> 0x1cU)) 
                                                                      << 0x1dU)) 
                                                                  | ((0x10000000U 
                                                                      & (vlSelf->top__DOT___3880_[1U] 
                                                                         >> 3U)) 
                                                                     | (((IData)(vlSelf->top__DOT___2111_) 
                                                                         << 0x1bU) 
                                                                        | ((0x7000000U 
                                                                            & (vlSelf->top__DOT___3880_[1U] 
                                                                               >> 3U)) 
                                                                           | ((0x800000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x16U)) 
                                                                                << 0x17U)) 
                                                                              | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___3880_[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x180000U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3758_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0183_) 
                                                                 << 0x1fU) 
                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                    << 0x1eU) 
                                                                   | ((0x20000000U 
                                                                       & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                          << 0x1dU)) 
                                                                      | (((IData)(vlSelf->top__DOT___0102_) 
                                                                          << 0x1cU) 
                                                                         | (((IData)(vlSelf->top__DOT___1887_) 
                                                                             << 0x1bU) 
                                                                            | ((0x3800000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                               | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)))))))))))))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 4U));
    __Vtemp_9[2U] = ((IData)(((((QData)((IData)(((0xc0000000U 
                                                  & (vlSelf->top__DOT___3880_[2U] 
                                                     << 0x1dU)) 
                                                 | ((0x20000000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___6989_ 
                                                                 >> 0x1cU)) 
                                                        << 0x1dU)) 
                                                    | ((0x10000000U 
                                                        & (vlSelf->top__DOT___3880_[1U] 
                                                           >> 3U)) 
                                                       | (((IData)(vlSelf->top__DOT___2111_) 
                                                           << 0x1bU) 
                                                          | ((0x7000000U 
                                                              & (vlSelf->top__DOT___3880_[1U] 
                                                                 >> 3U)) 
                                                             | ((0x800000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___6989_ 
                                                                             >> 0x16U)) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & (vlSelf->top__DOT___3880_[1U] 
                                                                          >> 3U)) 
                                                                      | ((0x180000U 
                                                                          & (vlSelf->top__DOT___4042_[1U] 
                                                                             >> 0xbU)) 
                                                                         | (((IData)(vlSelf->top__DOT___3758_) 
                                                                             << 0x12U) 
                                                                            | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                               | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___0183_) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___0830_) 
                                                                 << 0x1eU) 
                                                                | ((0x20000000U 
                                                                    & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                       << 0x1dU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0102_) 
                                                                       << 0x1cU) 
                                                                      | (((IData)(vlSelf->top__DOT___1887_) 
                                                                          << 0x1bU) 
                                                                         | ((0x3800000U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                            | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)))))))))))))))))))))))))))))) 
                              >> 0x20U)) >> 0x1cU);
    __Vtemp_10[0U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                   & (vlSelf->top__DOT___4295_[2U] 
                                                      << 0x1cU)) 
                                                  | ((0x20000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x18U)) 
                                                     | ((0x10000000U 
                                                         & (vlSelf->top__DOT___4295_[2U] 
                                                            << 0x1cU)) 
                                                        | ((0xe000000U 
                                                            & (vlSelf->top__DOT___3872_[2U] 
                                                               << 0xbU)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                  << 0x18U)) 
                                                              | ((0xfffff0U 
                                                                  & ((vlSelf->top__DOT___3872_[2U] 
                                                                      << 0xbU) 
                                                                     | (0x7f0U 
                                                                        & (vlSelf->top__DOT___3872_[1U] 
                                                                           >> 0x15U)))) 
                                                                 | ((8U 
                                                                     & (vlSelf->top__DOT___4295_[1U] 
                                                                        >> 4U)) 
                                                                    | ((4U 
                                                                        & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                           >> 8U)) 
                                                                       | ((2U 
                                                                           & (vlSelf->top__DOT___4295_[1U] 
                                                                              >> 4U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                  << 0x18U)) 
                                                              | ((0x60000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3922_ 
                                                                              >> 0x1dU)) 
                                                                     << 0x1dU)) 
                                                                 | ((0x1fff8000U 
                                                                     & ((vlSelf->top__DOT___4295_[1U] 
                                                                         << 0x1cU) 
                                                                        | (0xfff8000U 
                                                                           & (vlSelf->top__DOT___4295_[0U] 
                                                                              >> 4U)))) 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0xeU) 
                                                                       | (((IData)(vlSelf->top__DOT___0830_) 
                                                                           << 0xdU) 
                                                                          | (((IData)(vlSelf->top__DOT___0148_) 
                                                                              << 0xcU) 
                                                                             | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)))))))))))))))))))) 
                       << 4U) | ((8U & (vlSelf->top__DOT___3863_[0U] 
                                        >> 7U)) | (
                                                   ((IData)(vlSelf->top__DOT___1931_) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelf->top__DOT___3863_[0U] 
                                                          >> 7U)) 
                                                      | (IData)(vlSelf->top__DOT___1357_)))));
    __Vtemp_10[1U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                   & (vlSelf->top__DOT___4295_[2U] 
                                                      << 0x1cU)) 
                                                  | ((0x20000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x18U)) 
                                                     | ((0x10000000U 
                                                         & (vlSelf->top__DOT___4295_[2U] 
                                                            << 0x1cU)) 
                                                        | ((0xe000000U 
                                                            & (vlSelf->top__DOT___3872_[2U] 
                                                               << 0xbU)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                  << 0x18U)) 
                                                              | ((0xfffff0U 
                                                                  & ((vlSelf->top__DOT___3872_[2U] 
                                                                      << 0xbU) 
                                                                     | (0x7f0U 
                                                                        & (vlSelf->top__DOT___3872_[1U] 
                                                                           >> 0x15U)))) 
                                                                 | ((8U 
                                                                     & (vlSelf->top__DOT___4295_[1U] 
                                                                        >> 4U)) 
                                                                    | ((4U 
                                                                        & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                           >> 8U)) 
                                                                       | ((2U 
                                                                           & (vlSelf->top__DOT___4295_[1U] 
                                                                              >> 4U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                  << 0x18U)) 
                                                              | ((0x60000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3922_ 
                                                                              >> 0x1dU)) 
                                                                     << 0x1dU)) 
                                                                 | ((0x1fff8000U 
                                                                     & ((vlSelf->top__DOT___4295_[1U] 
                                                                         << 0x1cU) 
                                                                        | (0xfff8000U 
                                                                           & (vlSelf->top__DOT___4295_[0U] 
                                                                              >> 4U)))) 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0xeU) 
                                                                       | (((IData)(vlSelf->top__DOT___0830_) 
                                                                           << 0xdU) 
                                                                          | (((IData)(vlSelf->top__DOT___0148_) 
                                                                              << 0xcU) 
                                                                             | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)))))))))))))))))))) 
                       >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                               ((0xc0000000U 
                                                                 & (vlSelf->top__DOT___4295_[2U] 
                                                                    << 0x1cU)) 
                                                                | ((0x20000000U 
                                                                    & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                       << 0x18U)) 
                                                                   | ((0x10000000U 
                                                                       & (vlSelf->top__DOT___4295_[2U] 
                                                                          << 0x1cU)) 
                                                                      | ((0xe000000U 
                                                                          & (vlSelf->top__DOT___3872_[2U] 
                                                                             << 0xbU)) 
                                                                         | ((0x1000000U 
                                                                             & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                                << 0x18U)) 
                                                                            | ((0xfffff0U 
                                                                                & ((vlSelf->top__DOT___3872_[2U] 
                                                                                << 0xbU) 
                                                                                | (0x7f0U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x15U)))) 
                                                                               | ((8U 
                                                                                & (vlSelf->top__DOT___4295_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4295_[1U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0x80000000U 
                                                                  & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                     << 0x18U)) 
                                                                 | ((0x60000000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                        << 0x1dU)) 
                                                                    | ((0x1fff8000U 
                                                                        & ((vlSelf->top__DOT___4295_[1U] 
                                                                            << 0x1cU) 
                                                                           | (0xfff8000U 
                                                                              & (vlSelf->top__DOT___4295_[0U] 
                                                                                >> 4U)))) 
                                                                       | (((IData)(vlSelf->top__DOT___0830_) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->top__DOT___0830_) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->top__DOT___0148_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U))))))))))))))))))) 
                                             >> 0x20U)) 
                                    << 4U));
    __Vtemp_10[2U] = ((IData)(((((QData)((IData)(((0xc0000000U 
                                                   & (vlSelf->top__DOT___4295_[2U] 
                                                      << 0x1cU)) 
                                                  | ((0x20000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x18U)) 
                                                     | ((0x10000000U 
                                                         & (vlSelf->top__DOT___4295_[2U] 
                                                            << 0x1cU)) 
                                                        | ((0xe000000U 
                                                            & (vlSelf->top__DOT___3872_[2U] 
                                                               << 0xbU)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                  << 0x18U)) 
                                                              | ((0xfffff0U 
                                                                  & ((vlSelf->top__DOT___3872_[2U] 
                                                                      << 0xbU) 
                                                                     | (0x7f0U 
                                                                        & (vlSelf->top__DOT___3872_[1U] 
                                                                           >> 0x15U)))) 
                                                                 | ((8U 
                                                                     & (vlSelf->top__DOT___4295_[1U] 
                                                                        >> 4U)) 
                                                                    | ((4U 
                                                                        & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                           >> 8U)) 
                                                                       | ((2U 
                                                                           & (vlSelf->top__DOT___4295_[1U] 
                                                                              >> 4U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                  << 0x18U)) 
                                                              | ((0x60000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3922_ 
                                                                              >> 0x1dU)) 
                                                                     << 0x1dU)) 
                                                                 | ((0x1fff8000U 
                                                                     & ((vlSelf->top__DOT___4295_[1U] 
                                                                         << 0x1cU) 
                                                                        | (0xfff8000U 
                                                                           & (vlSelf->top__DOT___4295_[0U] 
                                                                              >> 4U)))) 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0xeU) 
                                                                       | (((IData)(vlSelf->top__DOT___0830_) 
                                                                           << 0xdU) 
                                                                          | (((IData)(vlSelf->top__DOT___0148_) 
                                                                              << 0xcU) 
                                                                             | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U))))))))))))))))))) 
                               >> 0x20U)) >> 0x1cU);
    VL_ADD_W(3, __Vtemp_11, __Vtemp_9, __Vtemp_10);
    vlSelf->top__DOT___3309_ = (1U & (__Vtemp_11[2U] 
                                      >> 2U));
    __Vtemp_14[0U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                   & (vlSelf->top__DOT___3880_[2U] 
                                                      << 0x1dU)) 
                                                  | ((0x20000000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___6989_ 
                                                                  >> 0x1cU)) 
                                                         << 0x1dU)) 
                                                     | ((0x10000000U 
                                                         & (vlSelf->top__DOT___3880_[1U] 
                                                            >> 3U)) 
                                                        | (((IData)(vlSelf->top__DOT___2111_) 
                                                            << 0x1bU) 
                                                           | ((0x7000000U 
                                                               & (vlSelf->top__DOT___3880_[1U] 
                                                                  >> 3U)) 
                                                              | ((0x800000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___6989_ 
                                                                              >> 0x16U)) 
                                                                     << 0x17U)) 
                                                                 | ((0x400000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                        << 0x16U)) 
                                                                    | ((0x200000U 
                                                                        & (vlSelf->top__DOT___3880_[1U] 
                                                                           >> 3U)) 
                                                                       | ((0x180000U 
                                                                           & (vlSelf->top__DOT___4042_[1U] 
                                                                              >> 0xbU)) 
                                                                          | (((IData)(vlSelf->top__DOT___3758_) 
                                                                              << 0x12U) 
                                                                             | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0183_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                  << 0x1eU) 
                                                                 | ((0x20000000U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                        << 0x1dU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___1887_) 
                                                                           << 0x1bU) 
                                                                          | ((0x3800000U 
                                                                              & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                             | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U))))))))))))))))))))))))))))))) 
                       << 4U) | ((8U & vlSelf->top__DOT___7158_) 
                                 | ((4U & vlSelf->top__DOT___7158_) 
                                    | ((2U & vlSelf->top__DOT___7158_) 
                                       | (1U & (vlSelf->top__DOT___3863_[0U] 
                                                >> 0x1dU))))));
    __Vtemp_14[1U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                   & (vlSelf->top__DOT___3880_[2U] 
                                                      << 0x1dU)) 
                                                  | ((0x20000000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___6989_ 
                                                                  >> 0x1cU)) 
                                                         << 0x1dU)) 
                                                     | ((0x10000000U 
                                                         & (vlSelf->top__DOT___3880_[1U] 
                                                            >> 3U)) 
                                                        | (((IData)(vlSelf->top__DOT___2111_) 
                                                            << 0x1bU) 
                                                           | ((0x7000000U 
                                                               & (vlSelf->top__DOT___3880_[1U] 
                                                                  >> 3U)) 
                                                              | ((0x800000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___6989_ 
                                                                              >> 0x16U)) 
                                                                     << 0x17U)) 
                                                                 | ((0x400000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                        << 0x16U)) 
                                                                    | ((0x200000U 
                                                                        & (vlSelf->top__DOT___3880_[1U] 
                                                                           >> 3U)) 
                                                                       | ((0x180000U 
                                                                           & (vlSelf->top__DOT___4042_[1U] 
                                                                              >> 0xbU)) 
                                                                          | (((IData)(vlSelf->top__DOT___3758_) 
                                                                              << 0x12U) 
                                                                             | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0183_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                  << 0x1eU) 
                                                                 | ((0x20000000U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                        << 0x1dU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___1887_) 
                                                                           << 0x1bU) 
                                                                          | ((0x3800000U 
                                                                              & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                             | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U))))))))))))))))))))))))))))))) 
                       >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                               ((0xc0000000U 
                                                                 & (vlSelf->top__DOT___3880_[2U] 
                                                                    << 0x1dU)) 
                                                                | ((0x20000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___6989_ 
                                                                                >> 0x1cU)) 
                                                                       << 0x1dU)) 
                                                                   | ((0x10000000U 
                                                                       & (vlSelf->top__DOT___3880_[1U] 
                                                                          >> 3U)) 
                                                                      | (((IData)(vlSelf->top__DOT___2111_) 
                                                                          << 0x1bU) 
                                                                         | ((0x7000000U 
                                                                             & (vlSelf->top__DOT___3880_[1U] 
                                                                                >> 3U)) 
                                                                            | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x16U)) 
                                                                                << 0x17U)) 
                                                                               | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___3880_[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x180000U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3758_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT___0183_) 
                                                                  << 0x1fU) 
                                                                 | (((IData)(vlSelf->top__DOT___0830_) 
                                                                     << 0x1eU) 
                                                                    | ((0x20000000U 
                                                                        & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                           << 0x1dU)) 
                                                                       | (((IData)(vlSelf->top__DOT___0102_) 
                                                                           << 0x1cU) 
                                                                          | (((IData)(vlSelf->top__DOT___1887_) 
                                                                              << 0x1bU) 
                                                                             | ((0x3800000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)))))))))))))))))))))))))))))) 
                                             >> 0x20U)) 
                                    << 4U));
    __Vtemp_14[2U] = ((IData)(((((QData)((IData)(((0xc0000000U 
                                                   & (vlSelf->top__DOT___3880_[2U] 
                                                      << 0x1dU)) 
                                                  | ((0x20000000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___6989_ 
                                                                  >> 0x1cU)) 
                                                         << 0x1dU)) 
                                                     | ((0x10000000U 
                                                         & (vlSelf->top__DOT___3880_[1U] 
                                                            >> 3U)) 
                                                        | (((IData)(vlSelf->top__DOT___2111_) 
                                                            << 0x1bU) 
                                                           | ((0x7000000U 
                                                               & (vlSelf->top__DOT___3880_[1U] 
                                                                  >> 3U)) 
                                                              | ((0x800000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___6989_ 
                                                                              >> 0x16U)) 
                                                                     << 0x17U)) 
                                                                 | ((0x400000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                        << 0x16U)) 
                                                                    | ((0x200000U 
                                                                        & (vlSelf->top__DOT___3880_[1U] 
                                                                           >> 3U)) 
                                                                       | ((0x180000U 
                                                                           & (vlSelf->top__DOT___4042_[1U] 
                                                                              >> 0xbU)) 
                                                                          | (((IData)(vlSelf->top__DOT___3758_) 
                                                                              << 0x12U) 
                                                                             | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0183_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                  << 0x1eU) 
                                                                 | ((0x20000000U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                        << 0x1dU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___1887_) 
                                                                           << 0x1bU) 
                                                                          | ((0x3800000U 
                                                                              & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                             | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)))))))))))))))))))))))))))))) 
                               >> 0x20U)) >> 0x1cU);
    __Vtemp_15[0U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                   & (vlSelf->top__DOT___4295_[2U] 
                                                      << 0x1cU)) 
                                                  | ((0x20000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x18U)) 
                                                     | ((0x10000000U 
                                                         & (vlSelf->top__DOT___4295_[2U] 
                                                            << 0x1cU)) 
                                                        | ((0xe000000U 
                                                            & (vlSelf->top__DOT___3872_[2U] 
                                                               << 0xbU)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                  << 0x18U)) 
                                                              | ((0xfffff0U 
                                                                  & ((vlSelf->top__DOT___3872_[2U] 
                                                                      << 0xbU) 
                                                                     | (0x7f0U 
                                                                        & (vlSelf->top__DOT___3872_[1U] 
                                                                           >> 0x15U)))) 
                                                                 | ((8U 
                                                                     & (vlSelf->top__DOT___4295_[1U] 
                                                                        >> 4U)) 
                                                                    | ((4U 
                                                                        & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                           >> 8U)) 
                                                                       | ((2U 
                                                                           & (vlSelf->top__DOT___4295_[1U] 
                                                                              >> 4U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                  << 0x18U)) 
                                                              | ((0x60000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3922_ 
                                                                              >> 0x1dU)) 
                                                                     << 0x1dU)) 
                                                                 | ((0x1fff8000U 
                                                                     & ((vlSelf->top__DOT___4295_[1U] 
                                                                         << 0x1cU) 
                                                                        | (0xfff8000U 
                                                                           & (vlSelf->top__DOT___4295_[0U] 
                                                                              >> 4U)))) 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0xeU) 
                                                                       | (((IData)(vlSelf->top__DOT___0830_) 
                                                                           << 0xdU) 
                                                                          | (((IData)(vlSelf->top__DOT___0148_) 
                                                                              << 0xcU) 
                                                                             | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)))))))))))))))))))) 
                       << 4U) | ((8U & (vlSelf->top__DOT___3863_[0U] 
                                        >> 7U)) | (
                                                   ((IData)(vlSelf->top__DOT___1931_) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelf->top__DOT___3863_[0U] 
                                                          >> 7U)) 
                                                      | (IData)(vlSelf->top__DOT___1357_)))));
    __Vtemp_15[1U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                   & (vlSelf->top__DOT___4295_[2U] 
                                                      << 0x1cU)) 
                                                  | ((0x20000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x18U)) 
                                                     | ((0x10000000U 
                                                         & (vlSelf->top__DOT___4295_[2U] 
                                                            << 0x1cU)) 
                                                        | ((0xe000000U 
                                                            & (vlSelf->top__DOT___3872_[2U] 
                                                               << 0xbU)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                  << 0x18U)) 
                                                              | ((0xfffff0U 
                                                                  & ((vlSelf->top__DOT___3872_[2U] 
                                                                      << 0xbU) 
                                                                     | (0x7f0U 
                                                                        & (vlSelf->top__DOT___3872_[1U] 
                                                                           >> 0x15U)))) 
                                                                 | ((8U 
                                                                     & (vlSelf->top__DOT___4295_[1U] 
                                                                        >> 4U)) 
                                                                    | ((4U 
                                                                        & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                           >> 8U)) 
                                                                       | ((2U 
                                                                           & (vlSelf->top__DOT___4295_[1U] 
                                                                              >> 4U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                  << 0x18U)) 
                                                              | ((0x60000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3922_ 
                                                                              >> 0x1dU)) 
                                                                     << 0x1dU)) 
                                                                 | ((0x1fff8000U 
                                                                     & ((vlSelf->top__DOT___4295_[1U] 
                                                                         << 0x1cU) 
                                                                        | (0xfff8000U 
                                                                           & (vlSelf->top__DOT___4295_[0U] 
                                                                              >> 4U)))) 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0xeU) 
                                                                       | (((IData)(vlSelf->top__DOT___0830_) 
                                                                           << 0xdU) 
                                                                          | (((IData)(vlSelf->top__DOT___0148_) 
                                                                              << 0xcU) 
                                                                             | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)))))))))))))))))))) 
                       >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                               ((0xc0000000U 
                                                                 & (vlSelf->top__DOT___4295_[2U] 
                                                                    << 0x1cU)) 
                                                                | ((0x20000000U 
                                                                    & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                       << 0x18U)) 
                                                                   | ((0x10000000U 
                                                                       & (vlSelf->top__DOT___4295_[2U] 
                                                                          << 0x1cU)) 
                                                                      | ((0xe000000U 
                                                                          & (vlSelf->top__DOT___3872_[2U] 
                                                                             << 0xbU)) 
                                                                         | ((0x1000000U 
                                                                             & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                                << 0x18U)) 
                                                                            | ((0xfffff0U 
                                                                                & ((vlSelf->top__DOT___3872_[2U] 
                                                                                << 0xbU) 
                                                                                | (0x7f0U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x15U)))) 
                                                                               | ((8U 
                                                                                & (vlSelf->top__DOT___4295_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4295_[1U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0x80000000U 
                                                                  & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                     << 0x18U)) 
                                                                 | ((0x60000000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                        << 0x1dU)) 
                                                                    | ((0x1fff8000U 
                                                                        & ((vlSelf->top__DOT___4295_[1U] 
                                                                            << 0x1cU) 
                                                                           | (0xfff8000U 
                                                                              & (vlSelf->top__DOT___4295_[0U] 
                                                                                >> 4U)))) 
                                                                       | (((IData)(vlSelf->top__DOT___0830_) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->top__DOT___0830_) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->top__DOT___0148_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U))))))))))))))))))) 
                                             >> 0x20U)) 
                                    << 4U));
    __Vtemp_15[2U] = ((IData)(((((QData)((IData)(((0xc0000000U 
                                                   & (vlSelf->top__DOT___4295_[2U] 
                                                      << 0x1cU)) 
                                                  | ((0x20000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x18U)) 
                                                     | ((0x10000000U 
                                                         & (vlSelf->top__DOT___4295_[2U] 
                                                            << 0x1cU)) 
                                                        | ((0xe000000U 
                                                            & (vlSelf->top__DOT___3872_[2U] 
                                                               << 0xbU)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                  << 0x18U)) 
                                                              | ((0xfffff0U 
                                                                  & ((vlSelf->top__DOT___3872_[2U] 
                                                                      << 0xbU) 
                                                                     | (0x7f0U 
                                                                        & (vlSelf->top__DOT___3872_[1U] 
                                                                           >> 0x15U)))) 
                                                                 | ((8U 
                                                                     & (vlSelf->top__DOT___4295_[1U] 
                                                                        >> 4U)) 
                                                                    | ((4U 
                                                                        & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                           >> 8U)) 
                                                                       | ((2U 
                                                                           & (vlSelf->top__DOT___4295_[1U] 
                                                                              >> 4U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                  << 0x18U)) 
                                                              | ((0x60000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3922_ 
                                                                              >> 0x1dU)) 
                                                                     << 0x1dU)) 
                                                                 | ((0x1fff8000U 
                                                                     & ((vlSelf->top__DOT___4295_[1U] 
                                                                         << 0x1cU) 
                                                                        | (0xfff8000U 
                                                                           & (vlSelf->top__DOT___4295_[0U] 
                                                                              >> 4U)))) 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0xeU) 
                                                                       | (((IData)(vlSelf->top__DOT___0830_) 
                                                                           << 0xdU) 
                                                                          | (((IData)(vlSelf->top__DOT___0148_) 
                                                                              << 0xcU) 
                                                                             | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U))))))))))))))))))) 
                               >> 0x20U)) >> 0x1cU);
    VL_ADD_W(3, __Vtemp_16, __Vtemp_14, __Vtemp_15);
    vlSelf->top__DOT___3512_ = (1U & (__Vtemp_16[1U] 
                                      >> 6U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__486(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__486\n"); );
    // Body
    vlSelf->top__DOT___0034_ = (1U & (((IData)(vlSelf->top__DOT____VdfgTmp_h63bdbb66__0) 
                                       + ((2U & (vlSelf->top__DOT___7156_[0U] 
                                                 >> 0xeU)) 
                                          | (IData)(vlSelf->top__DOT___0073_))) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__488(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__488\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h1af5929d__0 = ((4U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT___7177_ 
                                                             >> 7U)) 
                                                    << 2U)) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h1becd27f__0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__489(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__489\n"); );
    // Body
    vlSelf->top__DOT___0532_ = (1U & ((IData)(vlSelf->top__DOT___1281_) 
                                      ^ ((IData)(vlSelf->top__DOT___7172_) 
                                         >> 2U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__491(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__491\n"); );
    // Body
    vlSelf->top__DOT___0251_ = (1U & (~ (((IData)(vlSelf->top__DOT___0074_) 
                                          & (IData)(vlSelf->top__DOT___0812_)) 
                                         | (IData)(vlSelf->top__DOT___1281_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__493(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__493\n"); );
    // Body
    vlSelf->top__DOT___3232_ = (((vlSelf->top__DOT___7184_ 
                                  >> 0xfU) & (IData)(vlSelf->top__DOT___0483_)) 
                                | (IData)(vlSelf->top__DOT___0195_));
    vlSelf->top__DOT___4317_[2U] = ((0xfffffffdU & 
                                     vlSelf->top__DOT___4317_[2U]) 
                                    | ((IData)(vlSelf->top__DOT___3232_) 
                                       << 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__494(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__494\n"); );
    // Body
    vlSelf->top__DOT___0851_ = (1U & (~ (((IData)(vlSelf->top__DOT___2094_) 
                                          & (IData)(vlSelf->top__DOT___0439_)) 
                                         | ((IData)(vlSelf->top__DOT___0830_) 
                                            & (IData)(vlSelf->top__DOT___3082_)))));
    vlSelf->top__DOT___0568_ = ((IData)(vlSelf->top__DOT___0318_) 
                                & (~ (IData)(vlSelf->top__DOT___0169_)));
    vlSelf->top__DOT___2069_ = ((IData)(vlSelf->top__DOT___0568_) 
                                | (IData)(vlSelf->top__DOT___0198_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__496(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__496\n"); );
    // Body
    vlSelf->top__DOT___1803_ = (1U & (IData)((0x3fffULL 
                                              & (((((QData)((IData)(
                                                                    ((0x200000U 
                                                                      & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                         << 0x10U)) 
                                                                     | ((0x100000U 
                                                                         & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                            << 0x10U)) 
                                                                        | ((0xc0000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                               << 0x12U)) 
                                                                           | ((0x20000U 
                                                                               & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                              | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0439_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x1eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x18U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2fU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                >> 0xbU))))))))))))))))))))))) 
                                                    << 0x13U) 
                                                   | (QData)((IData)(
                                                                     ((0x40000U 
                                                                       & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                          << 8U)) 
                                                                      | ((0x20000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2cU)) 
                                                                             << 0x11U)) 
                                                                         | ((0x10000U 
                                                                             & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                            | ((0xc000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x29U)) 
                                                                                << 0xeU)) 
                                                                               | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xaU))))))))))))))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0xffffcU 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x17U)) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1166_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___1249_))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     (0x5ba00U 
                                                                      | (((IData)(vlSelf->top__DOT___0088_) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT___1605_) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0997_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0614_))))))))))) 
                                                 >> 0x1bU))));
    vlSelf->top__DOT___3557_ = (1U & (IData)((7ULL 
                                              & (((((QData)((IData)(
                                                                    ((0x200000U 
                                                                      & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                         << 0x10U)) 
                                                                     | ((0x100000U 
                                                                         & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                            << 0x10U)) 
                                                                        | ((0xc0000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                               << 0x12U)) 
                                                                           | ((0x20000U 
                                                                               & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                              | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0439_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x1eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x18U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2fU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                >> 0xbU))))))))))))))))))))))) 
                                                    << 0x13U) 
                                                   | (QData)((IData)(
                                                                     ((0x40000U 
                                                                       & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                          << 8U)) 
                                                                      | ((0x20000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2cU)) 
                                                                             << 0x11U)) 
                                                                         | ((0x10000U 
                                                                             & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                            | ((0xc000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x29U)) 
                                                                                << 0xeU)) 
                                                                               | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xaU))))))))))))))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0xffffcU 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x17U)) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1166_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___1249_))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     (0x5ba00U 
                                                                      | (((IData)(vlSelf->top__DOT___0088_) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT___1605_) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0997_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0614_))))))))))) 
                                                 >> 0x26U))));
    vlSelf->top__DOT___3146_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    ((0x4000000U 
                                                                      & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                         << 0x10U)) 
                                                                     | ((0x2000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2cU)) 
                                                                            << 0x19U)) 
                                                                        | ((0x1000000U 
                                                                            & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                               << 0x10U)) 
                                                                           | ((0xc00000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x29U)) 
                                                                                << 0x16U)) 
                                                                              | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0xc0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0439_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x1eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x18U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2fU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                >> 0xbU))))))))))))))))))))))))))) 
                                                    << 0x13U) 
                                                   | (QData)((IData)(
                                                                     ((0x40000U 
                                                                       & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                          << 8U)) 
                                                                      | ((0x20000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2cU)) 
                                                                             << 0x11U)) 
                                                                         | ((0x10000U 
                                                                             & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                            | ((0xc000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x29U)) 
                                                                                << 0xeU)) 
                                                                               | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xaU))))))))))))))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0x1e00000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x2aU)) 
                                                                         << 0x15U)) 
                                                                     | ((0x100000U 
                                                                         & (vlSelf->top__DOT____VdfgTmp_h5214cb79__0[1U] 
                                                                            << 7U)) 
                                                                        | ((0xffffcU 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x17U)) 
                                                                               << 2U)) 
                                                                           | (((IData)(vlSelf->top__DOT___1166_) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelf->top__DOT___1249_))))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     (0x5ba00U 
                                                                      | (((IData)(vlSelf->top__DOT___0088_) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT___1605_) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0997_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0614_))))))))))) 
                                                 >> 0x2dU))));
    vlSelf->top__DOT___3534_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    ((0x200000U 
                                                                      & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                         << 0x10U)) 
                                                                     | ((0x100000U 
                                                                         & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                            << 0x10U)) 
                                                                        | ((0xc0000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                               << 0x12U)) 
                                                                           | ((0x20000U 
                                                                               & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                              | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0439_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x1eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x18U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2fU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                >> 0xbU))))))))))))))))))))))) 
                                                    << 0x13U) 
                                                   | (QData)((IData)(
                                                                     ((0x40000U 
                                                                       & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                          << 8U)) 
                                                                      | ((0x20000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2cU)) 
                                                                             << 0x11U)) 
                                                                         | ((0x10000U 
                                                                             & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                            | ((0xc000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x29U)) 
                                                                                << 0xeU)) 
                                                                               | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xaU))))))))))))))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0xffffcU 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x17U)) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1166_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___1249_))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     (0x5ba00U 
                                                                      | (((IData)(vlSelf->top__DOT___0088_) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT___1605_) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0997_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0614_))))))))))) 
                                                 >> 0x28U))));
    vlSelf->top__DOT___3389_ = (1U & (IData)((0xffffffffULL 
                                              & (((((QData)((IData)(
                                                                    ((0x200000U 
                                                                      & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                         << 0x10U)) 
                                                                     | ((0x100000U 
                                                                         & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                            << 0x10U)) 
                                                                        | ((0xc0000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                               << 0x12U)) 
                                                                           | ((0x20000U 
                                                                               & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                              | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0439_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x1eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x18U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2fU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                >> 0xbU))))))))))))))))))))))) 
                                                    << 0x13U) 
                                                   | (QData)((IData)(
                                                                     ((0x40000U 
                                                                       & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                          << 8U)) 
                                                                      | ((0x20000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2cU)) 
                                                                             << 0x11U)) 
                                                                         | ((0x10000U 
                                                                             & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                            | ((0xc000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x29U)) 
                                                                                << 0xeU)) 
                                                                               | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xaU))))))))))))))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0xffffcU 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x17U)) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1166_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___1249_))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     (0x5ba00U 
                                                                      | (((IData)(vlSelf->top__DOT___0088_) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT___1605_) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0997_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0614_))))))))))) 
                                                 >> 9U))));
    vlSelf->top__DOT___2264_ = (1U & (IData)((0x3ffULL 
                                              & (((((QData)((IData)(
                                                                    ((0x200000U 
                                                                      & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                         << 0x10U)) 
                                                                     | ((0x100000U 
                                                                         & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                            << 0x10U)) 
                                                                        | ((0xc0000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                               << 0x12U)) 
                                                                           | ((0x20000U 
                                                                               & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                              | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0439_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x1eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x18U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2fU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                >> 0xbU))))))))))))))))))))))) 
                                                    << 0x13U) 
                                                   | (QData)((IData)(
                                                                     ((0x40000U 
                                                                       & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                          << 8U)) 
                                                                      | ((0x20000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2cU)) 
                                                                             << 0x11U)) 
                                                                         | ((0x10000U 
                                                                             & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                            | ((0xc000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x29U)) 
                                                                                << 0xeU)) 
                                                                               | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xaU))))))))))))))))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0xffffcU 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x17U)) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSelf->top__DOT___1166_) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->top__DOT___1249_))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     (0x5ba00U 
                                                                      | (((IData)(vlSelf->top__DOT___0088_) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT___1605_) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0997_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0614_))))))))))) 
                                                 >> 0x1fU))));
    vlSelf->top__DOT___3333_ = ((IData)(vlSelf->top__DOT___0834_) 
                                | (IData)(vlSelf->top__DOT___3557_));
    vlSelf->top__DOT___1748_ = (1U & (~ ((IData)(vlSelf->top__DOT___3146_) 
                                         & (IData)(vlSelf->top__DOT___0183_))));
    vlSelf->top__DOT___3834_ = (((QData)((IData)((0x7fU 
                                                  & (IData)(
                                                            (0x7fULL 
                                                             & (((((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x33U))))) 
                                                                   << 0x33U) 
                                                                  | (((QData)((IData)(
                                                                                (((IData)(vlSelf->top__DOT___1205_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___1594_) 
                                                                                << 0x1eU) 
                                                                                | ((0x30000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2fU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2cU)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0xc00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x29U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0xc0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0439_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x1eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x18U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2fU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                >> 0xbU))))))))))))))))))))))))))))))) 
                                                                      << 0x13U) 
                                                                     | (QData)((IData)(
                                                                                ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2cU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0xc000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x29U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xaU)))))))))))))))))))))) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                (((IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x34U)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->top__DOT____VdfgTmp_h5214cb79__0[1U] 
                                                                                << 7U)) 
                                                                                | ((0x3fe00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x2aU)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT____VdfgTmp_h5214cb79__0[1U] 
                                                                                << 7U)) 
                                                                                | ((0xffffcU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x17U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1166_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1249_))))))))) 
                                                                   << 0x15U) 
                                                                  | (QData)((IData)(
                                                                                (0x5ba00U 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1605_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0997_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0614_))))))))))) 
                                                                >> 0x2eU)))))) 
                                 << 0x2eU) | (((QData)((IData)(vlSelf->top__DOT___3146_)) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0xfU 
                                                                   & (IData)(
                                                                             (0xfULL 
                                                                              & (((((QData)((IData)(
                                                                                ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2cU)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0xc00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x29U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0xc0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0439_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x1eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x18U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2fU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                >> 0xbU)))))))))))))))))))))))))) 
                                                                                << 0x13U) 
                                                                                | (QData)((IData)(
                                                                                ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2cU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0xc000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x29U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xaU))))))))))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xe00000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x2aU)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT____VdfgTmp_h5214cb79__0[1U] 
                                                                                << 7U)) 
                                                                                | ((0xffffcU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x17U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1166_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1249_))))))) 
                                                                                << 0x15U) 
                                                                                | (QData)((IData)(
                                                                                (0x5ba00U 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1605_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0997_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0614_))))))))))) 
                                                                                >> 0x29U)))))) 
                                                  << 0x29U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT___3534_)) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (3ULL 
                                                                                & (((((QData)((IData)(
                                                                                ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0xc0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0439_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x1eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x18U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2fU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                >> 0xbU))))))))))))))))))))))) 
                                                                                << 0x13U) 
                                                                                | (QData)((IData)(
                                                                                ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2cU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0xc000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x29U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xaU))))))))))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xffffcU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x17U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1166_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1249_))))) 
                                                                                << 0x15U) 
                                                                                | (QData)((IData)(
                                                                                (0x5ba00U 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1605_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0997_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0614_))))))))))) 
                                                                                >> 0x27U)))))) 
                                                        << 0x27U) 
                                                       | (((QData)((IData)(vlSelf->top__DOT___3557_)) 
                                                           << 0x26U) 
                                                          | (((QData)((IData)(
                                                                              (0x3fU 
                                                                               & (IData)(
                                                                                (0x1ffULL 
                                                                                & (((((QData)((IData)(
                                                                                ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0xc0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0439_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x1eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x18U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2fU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                >> 0xbU))))))))))))))))))))))) 
                                                                                << 0x13U) 
                                                                                | (QData)((IData)(
                                                                                ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2cU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0xc000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x29U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xaU))))))))))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xffffcU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x17U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1166_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1249_))))) 
                                                                                << 0x15U) 
                                                                                | (QData)((IData)(
                                                                                (0x5ba00U 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1605_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0997_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0614_))))))))))) 
                                                                                >> 0x20U)))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->top__DOT___2264_) 
                                                                                << 0x1fU) 
                                                                                | ((0x70000000U 
                                                                                & ((IData)(
                                                                                (0x1fffULL 
                                                                                & (((((QData)((IData)(
                                                                                ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0xc0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0439_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x1eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x18U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2fU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                >> 0xbU))))))))))))))))))))))) 
                                                                                << 0x13U) 
                                                                                | (QData)((IData)(
                                                                                ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2cU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0xc000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x29U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xaU))))))))))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xffffcU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x17U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1166_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1249_))))) 
                                                                                << 0x15U) 
                                                                                | (QData)((IData)(
                                                                                (0x5ba00U 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1605_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0997_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0614_))))))))))) 
                                                                                >> 0x1cU))) 
                                                                                << 0x1cU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1803_) 
                                                                                << 0x1bU) 
                                                                                | ((0x7fffc00U 
                                                                                & ((IData)(
                                                                                (0x7fffffffULL 
                                                                                & (((((QData)((IData)(
                                                                                ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0xc0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0290_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0439_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x1eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x18U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7174_) 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0187_) 
                                                                                << 3U) 
                                                                                | ((6U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2fU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                >> 0xbU))))))))))))))))))))))) 
                                                                                << 0x13U) 
                                                                                | (QData)((IData)(
                                                                                ((0x40000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x2cU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0xc000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x29U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x25U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->top__DOT____Vconcswap_1_h6aa3c6a9__0) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xaU))))))))))))))))))))) 
                                                                                + 
                                                                                (((QData)((IData)(
                                                                                ((0xffffcU 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3835_ 
                                                                                >> 0x17U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1166_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___1249_))))) 
                                                                                << 0x15U) 
                                                                                | (QData)((IData)(
                                                                                (0x5ba00U 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1605_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0997_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0614_))))))))))) 
                                                                                >> 0xaU))) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3389_) 
                                                                                << 9U) 
                                                                                | ((0x1e0U 
                                                                                & (((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3836_ 
                                                                                >> 0x23U)) 
                                                                                << 8U)) 
                                                                                | (((IData)(vlSelf->top__DOT___2596_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0183_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0218_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xaU)))))))))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1605_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0997_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0614_)))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___0167_) 
                                                                                << 4U) 
                                                                                | ((0xcU 
                                                                                & ((((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 0xaU))))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___0088_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1605_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT___0154_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0997_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0614_)))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___0477_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___3264_)))))))))))))))))));
    vlSelf->top__DOT___1946_ = ((IData)(vlSelf->top__DOT___2264_) 
                                ^ (IData)(vlSelf->top__DOT___1526_));
    vlSelf->top__DOT___0196_ = ((IData)(vlSelf->top__DOT___2264_) 
                                ^ (IData)(vlSelf->top__DOT___0571_));
    vlSelf->top__DOT___4402_ = ((0x1fffffffffff7fULL 
                                 & vlSelf->top__DOT___4402_) 
                                | ((QData)((IData)(vlSelf->top__DOT___1748_)) 
                                   << 7U));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__497(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__497\n"); );
    // Body
    vlSelf->top__DOT___0741_ = (1U & (~ (((IData)(vlSelf->top__DOT___0289_) 
                                          & (IData)(vlSelf->top__DOT___0439_)) 
                                         | (IData)(vlSelf->top__DOT___1947_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__498(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__498\n"); );
    // Body
    vlSelf->top__DOT___1586_ = (1U & (~ (((IData)(vlSelf->top__DOT___0613_) 
                                          & (IData)(vlSelf->top__DOT___2420_)) 
                                         | (IData)(vlSelf->top__DOT___0318_))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__499(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__499\n"); );
    // Body
    vlSelf->top__DOT___1376_ = (1U ^ ((IData)(vlSelf->top__DOT___0040_) 
                                      ^ (IData)(vlSelf->top__DOT___0169_)));
    vlSelf->top__DOT___1010_ = ((IData)(vlSelf->top__DOT___0476_) 
                                & (~ (IData)(vlSelf->top__DOT___1011_)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__500(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__500\n"); );
    // Body
    vlSelf->top__DOT___1038_ = ((IData)(vlSelf->top__DOT___0483_) 
                                & (IData)(vlSelf->top__DOT___0169_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__501(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__501\n"); );
    // Init
    CData/*0:0*/ top__DOT___3061_;
    top__DOT___3061_ = 0;
    // Body
    top__DOT___3061_ = (1U & (IData)((1ULL & (((((QData)((IData)(
                                                                 (0x7fffU 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT___3992_ 
                                                                             >> 0x22U))))) 
                                                 << 0x22U) 
                                                | (((QData)((IData)(
                                                                    (0x1fffffU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___3992_ 
                                                                                >> 0xcU))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0x800U 
                                                                       & (vlSelf->top__DOT___4749_[0U] 
                                                                          >> 3U)) 
                                                                      | (0x7ffU 
                                                                         & (IData)(vlSelf->top__DOT___3992_))))))) 
                                               + (0x1b28000000000ULL 
                                                  | (((QData)((IData)(vlSelf->top__DOT___1343_)) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(vlSelf->top__DOT___2257_)) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(vlSelf->top__DOT___1601_)) 
                                                            << 0x22U) 
                                                           | (((QData)((IData)(vlSelf->top__DOT___0102_)) 
                                                               << 0x21U) 
                                                              | (((QData)((IData)(vlSelf->top__DOT___0102_)) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                (0xf3652U 
                                                                                | (((IData)(vlSelf->top__DOT___0995_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0100_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___2420_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0445_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___1526_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0169_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___3982_) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1290_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x15U) 
                                                                                | ((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 0x14U)))))))))))))))))))))) 
                                              >> 0x30U))));
    vlSelf->top__DOT___3039_ = (1U & (IData)((1ULL 
                                              & (((((QData)((IData)(
                                                                    (0x7ffffU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT___3992_ 
                                                                                >> 0x22U))))) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       (0x1fffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT___3992_ 
                                                                                >> 0xcU))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0x800U 
                                                                          & (vlSelf->top__DOT___4749_[0U] 
                                                                             >> 3U)) 
                                                                         | (0x7ffU 
                                                                            & (IData)(vlSelf->top__DOT___3992_))))))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (0xcd940000U 
                                                                     | (((IData)(vlSelf->top__DOT___1343_) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->top__DOT___2257_) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->top__DOT___1601_) 
                                                                               << 0xdU) 
                                                                              | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0995_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___0100_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___2420_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___0445_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___1526_) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->top__DOT___0169_) 
                                                                                << 3U) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___3982_) 
                                                                                << 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1290_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0116_))))))))))))))))))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     (0xf3652U 
                                                                      | ((IData)(vlSelf->top__DOT___0170_) 
                                                                         << 0x14U)))))) 
                                                 >> 0x34U))));
    vlSelf->top__DOT___0228_ = (1U & (~ ((IData)(top__DOT___3061_) 
                                         & (IData)(vlSelf->top__DOT___0079_))));
    vlSelf->top__DOT___3991_ = (((QData)((IData)(vlSelf->top__DOT___3039_)) 
                                 << 0x34U) | (((QData)((IData)(
                                                               (7U 
                                                                & (IData)(
                                                                          (7ULL 
                                                                           & (((((QData)((IData)(
                                                                                (0x3ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3992_ 
                                                                                >> 0x22U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3992_ 
                                                                                >> 0xcU))))) 
                                                                                << 0xcU) 
                                                                                | (QData)((IData)(
                                                                                ((0x800U 
                                                                                & (vlSelf->top__DOT___4749_[0U] 
                                                                                >> 3U)) 
                                                                                | (0x7ffU 
                                                                                & (IData)(vlSelf->top__DOT___3992_))))))) 
                                                                               + 
                                                                               (0xf3652ULL 
                                                                                | ((QData)((IData)(
                                                                                (0x9b280000U 
                                                                                | (((IData)(vlSelf->top__DOT___1343_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___2257_) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->top__DOT___1601_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___0102_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___0995_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___0100_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___2420_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->top__DOT___0445_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1526_) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->top__DOT___0169_) 
                                                                                << 4U) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___3982_) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1290_) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0170_)))))))))))))))))))) 
                                                                                << 0x14U))) 
                                                                              >> 0x31U)))))) 
                                               << 0x31U) 
                                              | (((QData)((IData)(top__DOT___3061_)) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & (IData)(
                                                                                (0x7fffffULL 
                                                                                & (((((QData)((IData)(
                                                                                (0x3fffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3992_ 
                                                                                >> 0x22U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3992_ 
                                                                                >> 0xcU))))) 
                                                                                << 0xcU) 
                                                                                | (QData)((IData)(
                                                                                ((0x800U 
                                                                                & (vlSelf->top__DOT___4749_[0U] 
                                                                                >> 3U)) 
                                                                                | (0x7ffU 
                                                                                & (IData)(vlSelf->top__DOT___3992_))))))) 
                                                                                + 
                                                                                (0xb28000000000ULL 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1343_)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___2257_)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___1601_)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0102_)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->top__DOT___0102_)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (0xf3652U 
                                                                                | (((IData)(vlSelf->top__DOT___0995_) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top__DOT___0100_) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top__DOT___2420_) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top__DOT___0226_) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top__DOT___0876_) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top__DOT___0445_) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top__DOT___1526_) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top__DOT___0169_) 
                                                                                << 0x18U) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___3982_) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1290_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x15U) 
                                                                                | ((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 0x14U)))))))))))))))))))))) 
                                                                                >> 0x19U)))))) 
                                                     << 0x19U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->top__DOT___1009_) 
                                                                        << 0x18U) 
                                                                       | ((0xffffc0U 
                                                                           & ((IData)(
                                                                                (((QData)((IData)(
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3992_ 
                                                                                >> 0xcU))))) 
                                                                                << 0xcU) 
                                                                                | (QData)((IData)(
                                                                                ((0x800U 
                                                                                & (vlSelf->top__DOT___4749_[0U] 
                                                                                >> 3U)) 
                                                                                | (0x7ffU 
                                                                                & (IData)(vlSelf->top__DOT___3992_))))))) 
                                                                              + 
                                                                              (0xf3652U 
                                                                               | ((0x800000U 
                                                                                & ((IData)(vlSelf->top__DOT___3982_) 
                                                                                << 0x16U)) 
                                                                                | (((IData)(vlSelf->top__DOT___1290_) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->top__DOT___0116_) 
                                                                                << 0x15U) 
                                                                                | ((IData)(vlSelf->top__DOT___0170_) 
                                                                                << 0x14U))))))) 
                                                                          | ((0x20U 
                                                                              & ((IData)(0x12U) 
                                                                                + 
                                                                                ((vlSelf->top__DOT___4749_[0U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->top__DOT___4749_[0U] 
                                                                                >> 3U)))) 
                                                                             | ((0x18U 
                                                                                & ((IData)(0x12U) 
                                                                                + (IData)(
                                                                                (((QData)((IData)(
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3992_ 
                                                                                >> 0xcU))))) 
                                                                                << 0xcU) 
                                                                                | (QData)((IData)(
                                                                                ((0x800U 
                                                                                & (vlSelf->top__DOT___4749_[0U] 
                                                                                >> 3U)) 
                                                                                | (0x7ffU 
                                                                                & (IData)(vlSelf->top__DOT___3992_))))))))) 
                                                                                | ((4U 
                                                                                & ((IData)(2U) 
                                                                                + 
                                                                                ((vlSelf->top__DOT___4749_[0U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->top__DOT___4749_[0U] 
                                                                                >> 3U)))) 
                                                                                | (3U 
                                                                                & ((IData)(2U) 
                                                                                + (IData)(
                                                                                (((QData)((IData)(
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3992_ 
                                                                                >> 0xcU))))) 
                                                                                << 0xcU) 
                                                                                | (QData)((IData)(
                                                                                ((0x800U 
                                                                                & (vlSelf->top__DOT___4749_[0U] 
                                                                                >> 3U)) 
                                                                                | (0x7ffU 
                                                                                & (IData)(vlSelf->top__DOT___3992_))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__502(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__502\n"); );
    // Body
    vlSelf->top__DOT___0222_ = ((IData)(vlSelf->top__DOT___0081_) 
                                ^ (IData)(vlSelf->top__DOT___2708_));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__503(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__503\n"); );
    // Body
    vlSelf->top__DOT___0809_ = ((IData)(vlSelf->top__DOT___0811_) 
                                & (~ ((IData)(vlSelf->top__DOT___6992_) 
                                      >> 1U)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__504(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__504\n"); );
    // Body
    vlSelf->top__DOT___1864_ = (1U & ((((0x700U & ((IData)(
                                                           (vlSelf->top__DOT___3922_ 
                                                            >> 0x12U)) 
                                                   << 8U)) 
                                        | (((IData)(vlSelf->top__DOT___3163_) 
                                            << 7U) 
                                           | ((0x70U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT___3922_ 
                                                           >> 0xeU)) 
                                                  << 4U)) 
                                              | (((IData)(vlSelf->top__DOT___0811_) 
                                                  << 3U) 
                                                 | ((4U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___3922_ 
                                                                 >> 0xcU)) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelf->top__DOT___1060_) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->top__DOT___3354_))))))) 
                                       + (0x600U | 
                                          (((IData)(vlSelf->top__DOT___1149_) 
                                            << 7U) 
                                           | (((IData)(vlSelf->top__DOT___0844_) 
                                               << 6U) 
                                              | (((IData)(vlSelf->top__DOT___1605_) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->top__DOT___0195_) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->top__DOT___0212_) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT___0834_) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->top__DOT___0183_) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT___0212_)))))))))) 
                                      >> 0xaU));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__505(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__505\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_16;
    // Body
    __Vtemp_2[0U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                  & (vlSelf->top__DOT___3880_[2U] 
                                                     << 0x1dU)) 
                                                 | ((0x20000000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___6989_ 
                                                                 >> 0x1cU)) 
                                                        << 0x1dU)) 
                                                    | ((0x10000000U 
                                                        & (vlSelf->top__DOT___3880_[1U] 
                                                           >> 3U)) 
                                                       | (((IData)(vlSelf->top__DOT___2111_) 
                                                           << 0x1bU) 
                                                          | ((0x7000000U 
                                                              & (vlSelf->top__DOT___3880_[1U] 
                                                                 >> 3U)) 
                                                             | ((0x800000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___6989_ 
                                                                             >> 0x16U)) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & (vlSelf->top__DOT___3880_[1U] 
                                                                          >> 3U)) 
                                                                      | ((0x180000U 
                                                                          & (vlSelf->top__DOT___4042_[1U] 
                                                                             >> 0xbU)) 
                                                                         | (((IData)(vlSelf->top__DOT___3758_) 
                                                                             << 0x12U) 
                                                                            | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                               | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___0183_) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___0830_) 
                                                                 << 0x1eU) 
                                                                | ((0x20000000U 
                                                                    & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                       << 0x1dU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0102_) 
                                                                       << 0x1cU) 
                                                                      | (((IData)(vlSelf->top__DOT___1887_) 
                                                                          << 0x1bU) 
                                                                         | ((0x3800000U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                            | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U))))))))))))))))))))))))))))))) 
                      << 4U) | ((8U & vlSelf->top__DOT___7158_) 
                                | ((4U & vlSelf->top__DOT___7158_) 
                                   | ((2U & vlSelf->top__DOT___7158_) 
                                      | (1U & (vlSelf->top__DOT___3863_[0U] 
                                               >> 0x1dU))))));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                  & (vlSelf->top__DOT___3880_[2U] 
                                                     << 0x1dU)) 
                                                 | ((0x20000000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___6989_ 
                                                                 >> 0x1cU)) 
                                                        << 0x1dU)) 
                                                    | ((0x10000000U 
                                                        & (vlSelf->top__DOT___3880_[1U] 
                                                           >> 3U)) 
                                                       | (((IData)(vlSelf->top__DOT___2111_) 
                                                           << 0x1bU) 
                                                          | ((0x7000000U 
                                                              & (vlSelf->top__DOT___3880_[1U] 
                                                                 >> 3U)) 
                                                             | ((0x800000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___6989_ 
                                                                             >> 0x16U)) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & (vlSelf->top__DOT___3880_[1U] 
                                                                          >> 3U)) 
                                                                      | ((0x180000U 
                                                                          & (vlSelf->top__DOT___4042_[1U] 
                                                                             >> 0xbU)) 
                                                                         | (((IData)(vlSelf->top__DOT___3758_) 
                                                                             << 0x12U) 
                                                                            | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                               | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___0183_) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___0830_) 
                                                                 << 0x1eU) 
                                                                | ((0x20000000U 
                                                                    & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                       << 0x1dU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0102_) 
                                                                       << 0x1cU) 
                                                                      | (((IData)(vlSelf->top__DOT___1887_) 
                                                                          << 0x1bU) 
                                                                         | ((0x3800000U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                            | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U))))))))))))))))))))))))))))))) 
                      >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                              ((0xc0000000U 
                                                                & (vlSelf->top__DOT___3880_[2U] 
                                                                   << 0x1dU)) 
                                                               | ((0x20000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___6989_ 
                                                                               >> 0x1cU)) 
                                                                      << 0x1dU)) 
                                                                  | ((0x10000000U 
                                                                      & (vlSelf->top__DOT___3880_[1U] 
                                                                         >> 3U)) 
                                                                     | (((IData)(vlSelf->top__DOT___2111_) 
                                                                         << 0x1bU) 
                                                                        | ((0x7000000U 
                                                                            & (vlSelf->top__DOT___3880_[1U] 
                                                                               >> 3U)) 
                                                                           | ((0x800000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x16U)) 
                                                                                << 0x17U)) 
                                                                              | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___3880_[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x180000U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3758_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0183_) 
                                                                 << 0x1fU) 
                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                    << 0x1eU) 
                                                                   | ((0x20000000U 
                                                                       & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                          << 0x1dU)) 
                                                                      | (((IData)(vlSelf->top__DOT___0102_) 
                                                                          << 0x1cU) 
                                                                         | (((IData)(vlSelf->top__DOT___1887_) 
                                                                             << 0x1bU) 
                                                                            | ((0x3800000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                               | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)))))))))))))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 4U));
    __Vtemp_2[2U] = ((IData)(((((QData)((IData)(((0xc0000000U 
                                                  & (vlSelf->top__DOT___3880_[2U] 
                                                     << 0x1dU)) 
                                                 | ((0x20000000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___6989_ 
                                                                 >> 0x1cU)) 
                                                        << 0x1dU)) 
                                                    | ((0x10000000U 
                                                        & (vlSelf->top__DOT___3880_[1U] 
                                                           >> 3U)) 
                                                       | (((IData)(vlSelf->top__DOT___2111_) 
                                                           << 0x1bU) 
                                                          | ((0x7000000U 
                                                              & (vlSelf->top__DOT___3880_[1U] 
                                                                 >> 3U)) 
                                                             | ((0x800000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___6989_ 
                                                                             >> 0x16U)) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & (vlSelf->top__DOT___3880_[1U] 
                                                                          >> 3U)) 
                                                                      | ((0x180000U 
                                                                          & (vlSelf->top__DOT___4042_[1U] 
                                                                             >> 0xbU)) 
                                                                         | (((IData)(vlSelf->top__DOT___3758_) 
                                                                             << 0x12U) 
                                                                            | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                               | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___0183_) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___0830_) 
                                                                 << 0x1eU) 
                                                                | ((0x20000000U 
                                                                    & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                       << 0x1dU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0102_) 
                                                                       << 0x1cU) 
                                                                      | (((IData)(vlSelf->top__DOT___1887_) 
                                                                          << 0x1bU) 
                                                                         | ((0x3800000U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                            | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)))))))))))))))))))))))))))))) 
                              >> 0x20U)) >> 0x1cU);
    __Vtemp_3[0U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                  & (vlSelf->top__DOT___4295_[2U] 
                                                     << 0x1cU)) 
                                                 | ((0x20000000U 
                                                     & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                        << 0x18U)) 
                                                    | ((0x10000000U 
                                                        & (vlSelf->top__DOT___4295_[2U] 
                                                           << 0x1cU)) 
                                                       | ((0xe000000U 
                                                           & (vlSelf->top__DOT___3872_[2U] 
                                                              << 0xbU)) 
                                                          | ((0x1000000U 
                                                              & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                 << 0x18U)) 
                                                             | ((0xfffff0U 
                                                                 & ((vlSelf->top__DOT___3872_[2U] 
                                                                     << 0xbU) 
                                                                    | (0x7f0U 
                                                                       & (vlSelf->top__DOT___3872_[1U] 
                                                                          >> 0x15U)))) 
                                                                | ((8U 
                                                                    & (vlSelf->top__DOT___4295_[1U] 
                                                                       >> 4U)) 
                                                                   | ((4U 
                                                                       & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                          >> 8U)) 
                                                                      | ((2U 
                                                                          & (vlSelf->top__DOT___4295_[1U] 
                                                                             >> 4U)) 
                                                                         | (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                 << 0x18U)) 
                                                             | ((0x60000000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3922_ 
                                                                             >> 0x1dU)) 
                                                                    << 0x1dU)) 
                                                                | ((0x1fff8000U 
                                                                    & ((vlSelf->top__DOT___4295_[1U] 
                                                                        << 0x1cU) 
                                                                       | (0xfff8000U 
                                                                          & (vlSelf->top__DOT___4295_[0U] 
                                                                             >> 4U)))) 
                                                                   | (((IData)(vlSelf->top__DOT___0830_) 
                                                                       << 0xeU) 
                                                                      | (((IData)(vlSelf->top__DOT___0830_) 
                                                                          << 0xdU) 
                                                                         | (((IData)(vlSelf->top__DOT___0148_) 
                                                                             << 0xcU) 
                                                                            | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                               | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)))))))))))))))))))) 
                      << 4U) | ((8U & (vlSelf->top__DOT___3863_[0U] 
                                       >> 7U)) | (((IData)(vlSelf->top__DOT___1931_) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelf->top__DOT___3863_[0U] 
                                                         >> 7U)) 
                                                     | (IData)(vlSelf->top__DOT___1357_)))));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                  & (vlSelf->top__DOT___4295_[2U] 
                                                     << 0x1cU)) 
                                                 | ((0x20000000U 
                                                     & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                        << 0x18U)) 
                                                    | ((0x10000000U 
                                                        & (vlSelf->top__DOT___4295_[2U] 
                                                           << 0x1cU)) 
                                                       | ((0xe000000U 
                                                           & (vlSelf->top__DOT___3872_[2U] 
                                                              << 0xbU)) 
                                                          | ((0x1000000U 
                                                              & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                 << 0x18U)) 
                                                             | ((0xfffff0U 
                                                                 & ((vlSelf->top__DOT___3872_[2U] 
                                                                     << 0xbU) 
                                                                    | (0x7f0U 
                                                                       & (vlSelf->top__DOT___3872_[1U] 
                                                                          >> 0x15U)))) 
                                                                | ((8U 
                                                                    & (vlSelf->top__DOT___4295_[1U] 
                                                                       >> 4U)) 
                                                                   | ((4U 
                                                                       & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                          >> 8U)) 
                                                                      | ((2U 
                                                                          & (vlSelf->top__DOT___4295_[1U] 
                                                                             >> 4U)) 
                                                                         | (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                 << 0x18U)) 
                                                             | ((0x60000000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3922_ 
                                                                             >> 0x1dU)) 
                                                                    << 0x1dU)) 
                                                                | ((0x1fff8000U 
                                                                    & ((vlSelf->top__DOT___4295_[1U] 
                                                                        << 0x1cU) 
                                                                       | (0xfff8000U 
                                                                          & (vlSelf->top__DOT___4295_[0U] 
                                                                             >> 4U)))) 
                                                                   | (((IData)(vlSelf->top__DOT___0830_) 
                                                                       << 0xeU) 
                                                                      | (((IData)(vlSelf->top__DOT___0830_) 
                                                                          << 0xdU) 
                                                                         | (((IData)(vlSelf->top__DOT___0148_) 
                                                                             << 0xcU) 
                                                                            | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                               | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)))))))))))))))))))) 
                      >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                              ((0xc0000000U 
                                                                & (vlSelf->top__DOT___4295_[2U] 
                                                                   << 0x1cU)) 
                                                               | ((0x20000000U 
                                                                   & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                      << 0x18U)) 
                                                                  | ((0x10000000U 
                                                                      & (vlSelf->top__DOT___4295_[2U] 
                                                                         << 0x1cU)) 
                                                                     | ((0xe000000U 
                                                                         & (vlSelf->top__DOT___3872_[2U] 
                                                                            << 0xbU)) 
                                                                        | ((0x1000000U 
                                                                            & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                               << 0x18U)) 
                                                                           | ((0xfffff0U 
                                                                               & ((vlSelf->top__DOT___3872_[2U] 
                                                                                << 0xbU) 
                                                                                | (0x7f0U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x15U)))) 
                                                                              | ((8U 
                                                                                & (vlSelf->top__DOT___4295_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4295_[1U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((0x80000000U 
                                                                 & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                    << 0x18U)) 
                                                                | ((0x60000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                       << 0x1dU)) 
                                                                   | ((0x1fff8000U 
                                                                       & ((vlSelf->top__DOT___4295_[1U] 
                                                                           << 0x1cU) 
                                                                          | (0xfff8000U 
                                                                             & (vlSelf->top__DOT___4295_[0U] 
                                                                                >> 4U)))) 
                                                                      | (((IData)(vlSelf->top__DOT___0830_) 
                                                                          << 0xeU) 
                                                                         | (((IData)(vlSelf->top__DOT___0830_) 
                                                                             << 0xdU) 
                                                                            | (((IData)(vlSelf->top__DOT___0148_) 
                                                                                << 0xcU) 
                                                                               | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 4U));
    __Vtemp_3[2U] = ((IData)(((((QData)((IData)(((0xc0000000U 
                                                  & (vlSelf->top__DOT___4295_[2U] 
                                                     << 0x1cU)) 
                                                 | ((0x20000000U 
                                                     & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                        << 0x18U)) 
                                                    | ((0x10000000U 
                                                        & (vlSelf->top__DOT___4295_[2U] 
                                                           << 0x1cU)) 
                                                       | ((0xe000000U 
                                                           & (vlSelf->top__DOT___3872_[2U] 
                                                              << 0xbU)) 
                                                          | ((0x1000000U 
                                                              & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                 << 0x18U)) 
                                                             | ((0xfffff0U 
                                                                 & ((vlSelf->top__DOT___3872_[2U] 
                                                                     << 0xbU) 
                                                                    | (0x7f0U 
                                                                       & (vlSelf->top__DOT___3872_[1U] 
                                                                          >> 0x15U)))) 
                                                                | ((8U 
                                                                    & (vlSelf->top__DOT___4295_[1U] 
                                                                       >> 4U)) 
                                                                   | ((4U 
                                                                       & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                          >> 8U)) 
                                                                      | ((2U 
                                                                          & (vlSelf->top__DOT___4295_[1U] 
                                                                             >> 4U)) 
                                                                         | (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                 << 0x18U)) 
                                                             | ((0x60000000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3922_ 
                                                                             >> 0x1dU)) 
                                                                    << 0x1dU)) 
                                                                | ((0x1fff8000U 
                                                                    & ((vlSelf->top__DOT___4295_[1U] 
                                                                        << 0x1cU) 
                                                                       | (0xfff8000U 
                                                                          & (vlSelf->top__DOT___4295_[0U] 
                                                                             >> 4U)))) 
                                                                   | (((IData)(vlSelf->top__DOT___0830_) 
                                                                       << 0xeU) 
                                                                      | (((IData)(vlSelf->top__DOT___0830_) 
                                                                          << 0xdU) 
                                                                         | (((IData)(vlSelf->top__DOT___0148_) 
                                                                             << 0xcU) 
                                                                            | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                               | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U))))))))))))))))))) 
                              >> 0x20U)) >> 0x1cU);
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    __Vtemp_7[0U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                  & (vlSelf->top__DOT___3880_[2U] 
                                                     << 0x1dU)) 
                                                 | ((0x20000000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___6989_ 
                                                                 >> 0x1cU)) 
                                                        << 0x1dU)) 
                                                    | ((0x10000000U 
                                                        & (vlSelf->top__DOT___3880_[1U] 
                                                           >> 3U)) 
                                                       | (((IData)(vlSelf->top__DOT___2111_) 
                                                           << 0x1bU) 
                                                          | ((0x7000000U 
                                                              & (vlSelf->top__DOT___3880_[1U] 
                                                                 >> 3U)) 
                                                             | ((0x800000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___6989_ 
                                                                             >> 0x16U)) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & (vlSelf->top__DOT___3880_[1U] 
                                                                          >> 3U)) 
                                                                      | ((0x180000U 
                                                                          & (vlSelf->top__DOT___4042_[1U] 
                                                                             >> 0xbU)) 
                                                                         | (((IData)(vlSelf->top__DOT___3758_) 
                                                                             << 0x12U) 
                                                                            | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                               | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___0183_) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___0830_) 
                                                                 << 0x1eU) 
                                                                | ((0x20000000U 
                                                                    & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                       << 0x1dU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0102_) 
                                                                       << 0x1cU) 
                                                                      | (((IData)(vlSelf->top__DOT___1887_) 
                                                                          << 0x1bU) 
                                                                         | ((0x3800000U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                            | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U))))))))))))))))))))))))))))))) 
                      << 4U) | ((8U & vlSelf->top__DOT___7158_) 
                                | ((4U & vlSelf->top__DOT___7158_) 
                                   | ((2U & vlSelf->top__DOT___7158_) 
                                      | (1U & (vlSelf->top__DOT___3863_[0U] 
                                               >> 0x1dU))))));
    __Vtemp_7[1U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                  & (vlSelf->top__DOT___3880_[2U] 
                                                     << 0x1dU)) 
                                                 | ((0x20000000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___6989_ 
                                                                 >> 0x1cU)) 
                                                        << 0x1dU)) 
                                                    | ((0x10000000U 
                                                        & (vlSelf->top__DOT___3880_[1U] 
                                                           >> 3U)) 
                                                       | (((IData)(vlSelf->top__DOT___2111_) 
                                                           << 0x1bU) 
                                                          | ((0x7000000U 
                                                              & (vlSelf->top__DOT___3880_[1U] 
                                                                 >> 3U)) 
                                                             | ((0x800000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___6989_ 
                                                                             >> 0x16U)) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & (vlSelf->top__DOT___3880_[1U] 
                                                                          >> 3U)) 
                                                                      | ((0x180000U 
                                                                          & (vlSelf->top__DOT___4042_[1U] 
                                                                             >> 0xbU)) 
                                                                         | (((IData)(vlSelf->top__DOT___3758_) 
                                                                             << 0x12U) 
                                                                            | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                               | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___0183_) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___0830_) 
                                                                 << 0x1eU) 
                                                                | ((0x20000000U 
                                                                    & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                       << 0x1dU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0102_) 
                                                                       << 0x1cU) 
                                                                      | (((IData)(vlSelf->top__DOT___1887_) 
                                                                          << 0x1bU) 
                                                                         | ((0x3800000U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                            | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U))))))))))))))))))))))))))))))) 
                      >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                              ((0xc0000000U 
                                                                & (vlSelf->top__DOT___3880_[2U] 
                                                                   << 0x1dU)) 
                                                               | ((0x20000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT___6989_ 
                                                                               >> 0x1cU)) 
                                                                      << 0x1dU)) 
                                                                  | ((0x10000000U 
                                                                      & (vlSelf->top__DOT___3880_[1U] 
                                                                         >> 3U)) 
                                                                     | (((IData)(vlSelf->top__DOT___2111_) 
                                                                         << 0x1bU) 
                                                                        | ((0x7000000U 
                                                                            & (vlSelf->top__DOT___3880_[1U] 
                                                                               >> 3U)) 
                                                                           | ((0x800000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x16U)) 
                                                                                << 0x17U)) 
                                                                              | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___3880_[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x180000U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3758_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT___0183_) 
                                                                 << 0x1fU) 
                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                    << 0x1eU) 
                                                                   | ((0x20000000U 
                                                                       & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                          << 0x1dU)) 
                                                                      | (((IData)(vlSelf->top__DOT___0102_) 
                                                                          << 0x1cU) 
                                                                         | (((IData)(vlSelf->top__DOT___1887_) 
                                                                             << 0x1bU) 
                                                                            | ((0x3800000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                               | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)))))))))))))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 4U));
    __Vtemp_7[2U] = ((IData)(((((QData)((IData)(((0xc0000000U 
                                                  & (vlSelf->top__DOT___3880_[2U] 
                                                     << 0x1dU)) 
                                                 | ((0x20000000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT___6989_ 
                                                                 >> 0x1cU)) 
                                                        << 0x1dU)) 
                                                    | ((0x10000000U 
                                                        & (vlSelf->top__DOT___3880_[1U] 
                                                           >> 3U)) 
                                                       | (((IData)(vlSelf->top__DOT___2111_) 
                                                           << 0x1bU) 
                                                          | ((0x7000000U 
                                                              & (vlSelf->top__DOT___3880_[1U] 
                                                                 >> 3U)) 
                                                             | ((0x800000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___6989_ 
                                                                             >> 0x16U)) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & (vlSelf->top__DOT___3880_[1U] 
                                                                          >> 3U)) 
                                                                      | ((0x180000U 
                                                                          & (vlSelf->top__DOT___4042_[1U] 
                                                                             >> 0xbU)) 
                                                                         | (((IData)(vlSelf->top__DOT___3758_) 
                                                                             << 0x12U) 
                                                                            | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                               | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT___0183_) 
                                                              << 0x1fU) 
                                                             | (((IData)(vlSelf->top__DOT___0830_) 
                                                                 << 0x1eU) 
                                                                | ((0x20000000U 
                                                                    & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                       << 0x1dU)) 
                                                                   | (((IData)(vlSelf->top__DOT___0102_) 
                                                                       << 0x1cU) 
                                                                      | (((IData)(vlSelf->top__DOT___1887_) 
                                                                          << 0x1bU) 
                                                                         | ((0x3800000U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                            | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                               | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)))))))))))))))))))))))))))))) 
                              >> 0x20U)) >> 0x1cU);
    __Vtemp_8[0U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                  & (vlSelf->top__DOT___4295_[2U] 
                                                     << 0x1cU)) 
                                                 | ((0x20000000U 
                                                     & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                        << 0x18U)) 
                                                    | ((0x10000000U 
                                                        & (vlSelf->top__DOT___4295_[2U] 
                                                           << 0x1cU)) 
                                                       | ((0xe000000U 
                                                           & (vlSelf->top__DOT___3872_[2U] 
                                                              << 0xbU)) 
                                                          | ((0x1000000U 
                                                              & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                 << 0x18U)) 
                                                             | ((0xfffff0U 
                                                                 & ((vlSelf->top__DOT___3872_[2U] 
                                                                     << 0xbU) 
                                                                    | (0x7f0U 
                                                                       & (vlSelf->top__DOT___3872_[1U] 
                                                                          >> 0x15U)))) 
                                                                | ((8U 
                                                                    & (vlSelf->top__DOT___4295_[1U] 
                                                                       >> 4U)) 
                                                                   | ((4U 
                                                                       & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                          >> 8U)) 
                                                                      | ((2U 
                                                                          & (vlSelf->top__DOT___4295_[1U] 
                                                                             >> 4U)) 
                                                                         | (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                 << 0x18U)) 
                                                             | ((0x60000000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3922_ 
                                                                             >> 0x1dU)) 
                                                                    << 0x1dU)) 
                                                                | ((0x1fff8000U 
                                                                    & ((vlSelf->top__DOT___4295_[1U] 
                                                                        << 0x1cU) 
                                                                       | (0xfff8000U 
                                                                          & (vlSelf->top__DOT___4295_[0U] 
                                                                             >> 4U)))) 
                                                                   | (((IData)(vlSelf->top__DOT___0830_) 
                                                                       << 0xeU) 
                                                                      | (((IData)(vlSelf->top__DOT___0830_) 
                                                                          << 0xdU) 
                                                                         | (((IData)(vlSelf->top__DOT___0148_) 
                                                                             << 0xcU) 
                                                                            | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                               | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)))))))))))))))))))) 
                      << 4U) | ((8U & (vlSelf->top__DOT___3863_[0U] 
                                       >> 7U)) | (((IData)(vlSelf->top__DOT___1931_) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & (vlSelf->top__DOT___3863_[0U] 
                                                         >> 7U)) 
                                                     | (IData)(vlSelf->top__DOT___1357_)))));
    __Vtemp_8[1U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                  & (vlSelf->top__DOT___4295_[2U] 
                                                     << 0x1cU)) 
                                                 | ((0x20000000U 
                                                     & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                        << 0x18U)) 
                                                    | ((0x10000000U 
                                                        & (vlSelf->top__DOT___4295_[2U] 
                                                           << 0x1cU)) 
                                                       | ((0xe000000U 
                                                           & (vlSelf->top__DOT___3872_[2U] 
                                                              << 0xbU)) 
                                                          | ((0x1000000U 
                                                              & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                 << 0x18U)) 
                                                             | ((0xfffff0U 
                                                                 & ((vlSelf->top__DOT___3872_[2U] 
                                                                     << 0xbU) 
                                                                    | (0x7f0U 
                                                                       & (vlSelf->top__DOT___3872_[1U] 
                                                                          >> 0x15U)))) 
                                                                | ((8U 
                                                                    & (vlSelf->top__DOT___4295_[1U] 
                                                                       >> 4U)) 
                                                                   | ((4U 
                                                                       & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                          >> 8U)) 
                                                                      | ((2U 
                                                                          & (vlSelf->top__DOT___4295_[1U] 
                                                                             >> 4U)) 
                                                                         | (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                 << 0x18U)) 
                                                             | ((0x60000000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3922_ 
                                                                             >> 0x1dU)) 
                                                                    << 0x1dU)) 
                                                                | ((0x1fff8000U 
                                                                    & ((vlSelf->top__DOT___4295_[1U] 
                                                                        << 0x1cU) 
                                                                       | (0xfff8000U 
                                                                          & (vlSelf->top__DOT___4295_[0U] 
                                                                             >> 4U)))) 
                                                                   | (((IData)(vlSelf->top__DOT___0830_) 
                                                                       << 0xeU) 
                                                                      | (((IData)(vlSelf->top__DOT___0830_) 
                                                                          << 0xdU) 
                                                                         | (((IData)(vlSelf->top__DOT___0148_) 
                                                                             << 0xcU) 
                                                                            | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                               | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)))))))))))))))))))) 
                      >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                              ((0xc0000000U 
                                                                & (vlSelf->top__DOT___4295_[2U] 
                                                                   << 0x1cU)) 
                                                               | ((0x20000000U 
                                                                   & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                      << 0x18U)) 
                                                                  | ((0x10000000U 
                                                                      & (vlSelf->top__DOT___4295_[2U] 
                                                                         << 0x1cU)) 
                                                                     | ((0xe000000U 
                                                                         & (vlSelf->top__DOT___3872_[2U] 
                                                                            << 0xbU)) 
                                                                        | ((0x1000000U 
                                                                            & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                               << 0x18U)) 
                                                                           | ((0xfffff0U 
                                                                               & ((vlSelf->top__DOT___3872_[2U] 
                                                                                << 0xbU) 
                                                                                | (0x7f0U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x15U)))) 
                                                                              | ((8U 
                                                                                & (vlSelf->top__DOT___4295_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4295_[1U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((0x80000000U 
                                                                 & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                    << 0x18U)) 
                                                                | ((0x60000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                       << 0x1dU)) 
                                                                   | ((0x1fff8000U 
                                                                       & ((vlSelf->top__DOT___4295_[1U] 
                                                                           << 0x1cU) 
                                                                          | (0xfff8000U 
                                                                             & (vlSelf->top__DOT___4295_[0U] 
                                                                                >> 4U)))) 
                                                                      | (((IData)(vlSelf->top__DOT___0830_) 
                                                                          << 0xeU) 
                                                                         | (((IData)(vlSelf->top__DOT___0830_) 
                                                                             << 0xdU) 
                                                                            | (((IData)(vlSelf->top__DOT___0148_) 
                                                                                << 0xcU) 
                                                                               | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U))))))))))))))))))) 
                                            >> 0x20U)) 
                                   << 4U));
    __Vtemp_8[2U] = ((IData)(((((QData)((IData)(((0xc0000000U 
                                                  & (vlSelf->top__DOT___4295_[2U] 
                                                     << 0x1cU)) 
                                                 | ((0x20000000U 
                                                     & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                        << 0x18U)) 
                                                    | ((0x10000000U 
                                                        & (vlSelf->top__DOT___4295_[2U] 
                                                           << 0x1cU)) 
                                                       | ((0xe000000U 
                                                           & (vlSelf->top__DOT___3872_[2U] 
                                                              << 0xbU)) 
                                                          | ((0x1000000U 
                                                              & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                 << 0x18U)) 
                                                             | ((0xfffff0U 
                                                                 & ((vlSelf->top__DOT___3872_[2U] 
                                                                     << 0xbU) 
                                                                    | (0x7f0U 
                                                                       & (vlSelf->top__DOT___3872_[1U] 
                                                                          >> 0x15U)))) 
                                                                | ((8U 
                                                                    & (vlSelf->top__DOT___4295_[1U] 
                                                                       >> 4U)) 
                                                                   | ((4U 
                                                                       & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                          >> 8U)) 
                                                                      | ((2U 
                                                                          & (vlSelf->top__DOT___4295_[1U] 
                                                                             >> 4U)) 
                                                                         | (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x80000000U 
                                                              & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                 << 0x18U)) 
                                                             | ((0x60000000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT___3922_ 
                                                                             >> 0x1dU)) 
                                                                    << 0x1dU)) 
                                                                | ((0x1fff8000U 
                                                                    & ((vlSelf->top__DOT___4295_[1U] 
                                                                        << 0x1cU) 
                                                                       | (0xfff8000U 
                                                                          & (vlSelf->top__DOT___4295_[0U] 
                                                                             >> 4U)))) 
                                                                   | (((IData)(vlSelf->top__DOT___0830_) 
                                                                       << 0xeU) 
                                                                      | (((IData)(vlSelf->top__DOT___0830_) 
                                                                          << 0xdU) 
                                                                         | (((IData)(vlSelf->top__DOT___0148_) 
                                                                             << 0xcU) 
                                                                            | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                               | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U))))))))))))))))))) 
                              >> 0x20U)) >> 0x1cU);
    VL_ADD_W(3, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    __Vtemp_12[0U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                   & (vlSelf->top__DOT___3880_[2U] 
                                                      << 0x1dU)) 
                                                  | ((0x20000000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___6989_ 
                                                                  >> 0x1cU)) 
                                                         << 0x1dU)) 
                                                     | ((0x10000000U 
                                                         & (vlSelf->top__DOT___3880_[1U] 
                                                            >> 3U)) 
                                                        | (((IData)(vlSelf->top__DOT___2111_) 
                                                            << 0x1bU) 
                                                           | ((0x7000000U 
                                                               & (vlSelf->top__DOT___3880_[1U] 
                                                                  >> 3U)) 
                                                              | ((0x800000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___6989_ 
                                                                              >> 0x16U)) 
                                                                     << 0x17U)) 
                                                                 | ((0x400000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                        << 0x16U)) 
                                                                    | ((0x200000U 
                                                                        & (vlSelf->top__DOT___3880_[1U] 
                                                                           >> 3U)) 
                                                                       | ((0x180000U 
                                                                           & (vlSelf->top__DOT___4042_[1U] 
                                                                              >> 0xbU)) 
                                                                          | (((IData)(vlSelf->top__DOT___3758_) 
                                                                              << 0x12U) 
                                                                             | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0183_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                  << 0x1eU) 
                                                                 | ((0x20000000U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                        << 0x1dU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___1887_) 
                                                                           << 0x1bU) 
                                                                          | ((0x3800000U 
                                                                              & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                             | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U))))))))))))))))))))))))))))))) 
                       << 4U) | ((8U & vlSelf->top__DOT___7158_) 
                                 | ((4U & vlSelf->top__DOT___7158_) 
                                    | ((2U & vlSelf->top__DOT___7158_) 
                                       | (1U & (vlSelf->top__DOT___3863_[0U] 
                                                >> 0x1dU))))));
    __Vtemp_12[1U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                   & (vlSelf->top__DOT___3880_[2U] 
                                                      << 0x1dU)) 
                                                  | ((0x20000000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___6989_ 
                                                                  >> 0x1cU)) 
                                                         << 0x1dU)) 
                                                     | ((0x10000000U 
                                                         & (vlSelf->top__DOT___3880_[1U] 
                                                            >> 3U)) 
                                                        | (((IData)(vlSelf->top__DOT___2111_) 
                                                            << 0x1bU) 
                                                           | ((0x7000000U 
                                                               & (vlSelf->top__DOT___3880_[1U] 
                                                                  >> 3U)) 
                                                              | ((0x800000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___6989_ 
                                                                              >> 0x16U)) 
                                                                     << 0x17U)) 
                                                                 | ((0x400000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                        << 0x16U)) 
                                                                    | ((0x200000U 
                                                                        & (vlSelf->top__DOT___3880_[1U] 
                                                                           >> 3U)) 
                                                                       | ((0x180000U 
                                                                           & (vlSelf->top__DOT___4042_[1U] 
                                                                              >> 0xbU)) 
                                                                          | (((IData)(vlSelf->top__DOT___3758_) 
                                                                              << 0x12U) 
                                                                             | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0183_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                  << 0x1eU) 
                                                                 | ((0x20000000U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                        << 0x1dU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___1887_) 
                                                                           << 0x1bU) 
                                                                          | ((0x3800000U 
                                                                              & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                             | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U))))))))))))))))))))))))))))))) 
                       >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                               ((0xc0000000U 
                                                                 & (vlSelf->top__DOT___3880_[2U] 
                                                                    << 0x1dU)) 
                                                                | ((0x20000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT___6989_ 
                                                                                >> 0x1cU)) 
                                                                       << 0x1dU)) 
                                                                   | ((0x10000000U 
                                                                       & (vlSelf->top__DOT___3880_[1U] 
                                                                          >> 3U)) 
                                                                      | (((IData)(vlSelf->top__DOT___2111_) 
                                                                          << 0x1bU) 
                                                                         | ((0x7000000U 
                                                                             & (vlSelf->top__DOT___3880_[1U] 
                                                                                >> 3U)) 
                                                                            | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x16U)) 
                                                                                << 0x17U)) 
                                                                               | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___3880_[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x180000U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___3758_) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT___0183_) 
                                                                  << 0x1fU) 
                                                                 | (((IData)(vlSelf->top__DOT___0830_) 
                                                                     << 0x1eU) 
                                                                    | ((0x20000000U 
                                                                        & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                           << 0x1dU)) 
                                                                       | (((IData)(vlSelf->top__DOT___0102_) 
                                                                           << 0x1cU) 
                                                                          | (((IData)(vlSelf->top__DOT___1887_) 
                                                                              << 0x1bU) 
                                                                             | ((0x3800000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)))))))))))))))))))))))))))))) 
                                             >> 0x20U)) 
                                    << 4U));
    __Vtemp_12[2U] = ((IData)(((((QData)((IData)(((0xc0000000U 
                                                   & (vlSelf->top__DOT___3880_[2U] 
                                                      << 0x1dU)) 
                                                  | ((0x20000000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT___6989_ 
                                                                  >> 0x1cU)) 
                                                         << 0x1dU)) 
                                                     | ((0x10000000U 
                                                         & (vlSelf->top__DOT___3880_[1U] 
                                                            >> 3U)) 
                                                        | (((IData)(vlSelf->top__DOT___2111_) 
                                                            << 0x1bU) 
                                                           | ((0x7000000U 
                                                               & (vlSelf->top__DOT___3880_[1U] 
                                                                  >> 3U)) 
                                                              | ((0x800000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___6989_ 
                                                                              >> 0x16U)) 
                                                                     << 0x17U)) 
                                                                 | ((0x400000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x15U)) 
                                                                        << 0x16U)) 
                                                                    | ((0x200000U 
                                                                        & (vlSelf->top__DOT___3880_[1U] 
                                                                           >> 3U)) 
                                                                       | ((0x180000U 
                                                                           & (vlSelf->top__DOT___4042_[1U] 
                                                                              >> 0xbU)) 
                                                                          | (((IData)(vlSelf->top__DOT___3758_) 
                                                                              << 0x12U) 
                                                                             | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 0x10U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x1fe00U 
                                                                                & (vlSelf->top__DOT___4042_[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 7U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 6U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 5U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 4U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 3U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___4297_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___6989_ 
                                                                                >> 1U)) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT___0023_))))))))))))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlSelf->top__DOT___0183_) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->top__DOT___0830_) 
                                                                  << 0x1eU) 
                                                                 | ((0x20000000U 
                                                                     & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                        << 0x1dU)) 
                                                                    | (((IData)(vlSelf->top__DOT___0102_) 
                                                                        << 0x1cU) 
                                                                       | (((IData)(vlSelf->top__DOT___1887_) 
                                                                           << 0x1bU) 
                                                                          | ((0x3800000U 
                                                                              & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                             | ((0x400000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x15U) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 5U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                >> 1U)))))))))))))))))))))))))))))) 
                               >> 0x20U)) >> 0x1cU);
    __Vtemp_13[0U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                   & (vlSelf->top__DOT___4295_[2U] 
                                                      << 0x1cU)) 
                                                  | ((0x20000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x18U)) 
                                                     | ((0x10000000U 
                                                         & (vlSelf->top__DOT___4295_[2U] 
                                                            << 0x1cU)) 
                                                        | ((0xe000000U 
                                                            & (vlSelf->top__DOT___3872_[2U] 
                                                               << 0xbU)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                  << 0x18U)) 
                                                              | ((0xfffff0U 
                                                                  & ((vlSelf->top__DOT___3872_[2U] 
                                                                      << 0xbU) 
                                                                     | (0x7f0U 
                                                                        & (vlSelf->top__DOT___3872_[1U] 
                                                                           >> 0x15U)))) 
                                                                 | ((8U 
                                                                     & (vlSelf->top__DOT___4295_[1U] 
                                                                        >> 4U)) 
                                                                    | ((4U 
                                                                        & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                           >> 8U)) 
                                                                       | ((2U 
                                                                           & (vlSelf->top__DOT___4295_[1U] 
                                                                              >> 4U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                  << 0x18U)) 
                                                              | ((0x60000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3922_ 
                                                                              >> 0x1dU)) 
                                                                     << 0x1dU)) 
                                                                 | ((0x1fff8000U 
                                                                     & ((vlSelf->top__DOT___4295_[1U] 
                                                                         << 0x1cU) 
                                                                        | (0xfff8000U 
                                                                           & (vlSelf->top__DOT___4295_[0U] 
                                                                              >> 4U)))) 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0xeU) 
                                                                       | (((IData)(vlSelf->top__DOT___0830_) 
                                                                           << 0xdU) 
                                                                          | (((IData)(vlSelf->top__DOT___0148_) 
                                                                              << 0xcU) 
                                                                             | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)))))))))))))))))))) 
                       << 4U) | ((8U & (vlSelf->top__DOT___3863_[0U] 
                                        >> 7U)) | (
                                                   ((IData)(vlSelf->top__DOT___1931_) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & (vlSelf->top__DOT___3863_[0U] 
                                                          >> 7U)) 
                                                      | (IData)(vlSelf->top__DOT___1357_)))));
    __Vtemp_13[1U] = (((IData)((((QData)((IData)(((0xc0000000U 
                                                   & (vlSelf->top__DOT___4295_[2U] 
                                                      << 0x1cU)) 
                                                  | ((0x20000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x18U)) 
                                                     | ((0x10000000U 
                                                         & (vlSelf->top__DOT___4295_[2U] 
                                                            << 0x1cU)) 
                                                        | ((0xe000000U 
                                                            & (vlSelf->top__DOT___3872_[2U] 
                                                               << 0xbU)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                  << 0x18U)) 
                                                              | ((0xfffff0U 
                                                                  & ((vlSelf->top__DOT___3872_[2U] 
                                                                      << 0xbU) 
                                                                     | (0x7f0U 
                                                                        & (vlSelf->top__DOT___3872_[1U] 
                                                                           >> 0x15U)))) 
                                                                 | ((8U 
                                                                     & (vlSelf->top__DOT___4295_[1U] 
                                                                        >> 4U)) 
                                                                    | ((4U 
                                                                        & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                           >> 8U)) 
                                                                       | ((2U 
                                                                           & (vlSelf->top__DOT___4295_[1U] 
                                                                              >> 4U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                  << 0x18U)) 
                                                              | ((0x60000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3922_ 
                                                                              >> 0x1dU)) 
                                                                     << 0x1dU)) 
                                                                 | ((0x1fff8000U 
                                                                     & ((vlSelf->top__DOT___4295_[1U] 
                                                                         << 0x1cU) 
                                                                        | (0xfff8000U 
                                                                           & (vlSelf->top__DOT___4295_[0U] 
                                                                              >> 4U)))) 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0xeU) 
                                                                       | (((IData)(vlSelf->top__DOT___0830_) 
                                                                           << 0xdU) 
                                                                          | (((IData)(vlSelf->top__DOT___0148_) 
                                                                              << 0xcU) 
                                                                             | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)))))))))))))))))))) 
                       >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                               ((0xc0000000U 
                                                                 & (vlSelf->top__DOT___4295_[2U] 
                                                                    << 0x1cU)) 
                                                                | ((0x20000000U 
                                                                    & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                       << 0x18U)) 
                                                                   | ((0x10000000U 
                                                                       & (vlSelf->top__DOT___4295_[2U] 
                                                                          << 0x1cU)) 
                                                                      | ((0xe000000U 
                                                                          & (vlSelf->top__DOT___3872_[2U] 
                                                                             << 0xbU)) 
                                                                         | ((0x1000000U 
                                                                             & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                                << 0x18U)) 
                                                                            | ((0xfffff0U 
                                                                                & ((vlSelf->top__DOT___3872_[2U] 
                                                                                << 0xbU) 
                                                                                | (0x7f0U 
                                                                                & (vlSelf->top__DOT___3872_[1U] 
                                                                                >> 0x15U)))) 
                                                                               | ((8U 
                                                                                & (vlSelf->top__DOT___4295_[1U] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->top__DOT___4295_[1U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0x80000000U 
                                                                  & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                     << 0x18U)) 
                                                                 | ((0x60000000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                        << 0x1dU)) 
                                                                    | ((0x1fff8000U 
                                                                        & ((vlSelf->top__DOT___4295_[1U] 
                                                                            << 0x1cU) 
                                                                           | (0xfff8000U 
                                                                              & (vlSelf->top__DOT___4295_[0U] 
                                                                                >> 4U)))) 
                                                                       | (((IData)(vlSelf->top__DOT___0830_) 
                                                                           << 0xeU) 
                                                                          | (((IData)(vlSelf->top__DOT___0830_) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->top__DOT___0148_) 
                                                                                << 0xcU) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U))))))))))))))))))) 
                                             >> 0x20U)) 
                                    << 4U));
    __Vtemp_13[2U] = ((IData)(((((QData)((IData)(((0xc0000000U 
                                                   & (vlSelf->top__DOT___4295_[2U] 
                                                      << 0x1cU)) 
                                                  | ((0x20000000U 
                                                      & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                         << 0x18U)) 
                                                     | ((0x10000000U 
                                                         & (vlSelf->top__DOT___4295_[2U] 
                                                            << 0x1cU)) 
                                                        | ((0xe000000U 
                                                            & (vlSelf->top__DOT___3872_[2U] 
                                                               << 0xbU)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[3U] 
                                                                  << 0x18U)) 
                                                              | ((0xfffff0U 
                                                                  & ((vlSelf->top__DOT___3872_[2U] 
                                                                      << 0xbU) 
                                                                     | (0x7f0U 
                                                                        & (vlSelf->top__DOT___3872_[1U] 
                                                                           >> 0x15U)))) 
                                                                 | ((8U 
                                                                     & (vlSelf->top__DOT___4295_[1U] 
                                                                        >> 4U)) 
                                                                    | ((4U 
                                                                        & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                           >> 8U)) 
                                                                       | ((2U 
                                                                           & (vlSelf->top__DOT___4295_[1U] 
                                                                              >> 4U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x20U)))))))))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelf->top__DOT____Vconcswap_1_h3e0029ea__0[2U] 
                                                                  << 0x18U)) 
                                                              | ((0x60000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT___3922_ 
                                                                              >> 0x1dU)) 
                                                                     << 0x1dU)) 
                                                                 | ((0x1fff8000U 
                                                                     & ((vlSelf->top__DOT___4295_[1U] 
                                                                         << 0x1cU) 
                                                                        | (0xfff8000U 
                                                                           & (vlSelf->top__DOT___4295_[0U] 
                                                                              >> 4U)))) 
                                                                    | (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0xeU) 
                                                                       | (((IData)(vlSelf->top__DOT___0830_) 
                                                                           << 0xdU) 
                                                                          | (((IData)(vlSelf->top__DOT___0148_) 
                                                                              << 0xcU) 
                                                                             | ((0x800U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x600U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 8U) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xbU)) 
                                                                                | (3U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 3U))))))))))))))))))) 
                               >> 0x20U)) >> 0x1cU);
    VL_ADD_W(3, __Vtemp_14, __Vtemp_12, __Vtemp_13);
    __Vtemp_16[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT___2888_)) 
                               << 0x2fU) | (((QData)((IData)(
                                                             (0x3fffU 
                                                              & (((((0x7ff0U 
                                                                     & ((0x38000000U 
                                                                         & (vlSelf->top__DOT___3863_[1U] 
                                                                            << 3U)) 
                                                                        | ((0x4000000U 
                                                                            & vlSelf->top__DOT___7158_) 
                                                                           | (((IData)(vlSelf->top__DOT___0023_) 
                                                                               << 0x19U) 
                                                                              | ((0x1000000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 9U)) 
                                                                                | ((0x800000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x400000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x200000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x100000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x80000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x40000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x4000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x3c00U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | (0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U))))))))))))))))))))))) 
                                                                    | (8U 
                                                                       & vlSelf->top__DOT___7158_)) 
                                                                   | ((4U 
                                                                       & vlSelf->top__DOT___7158_) 
                                                                      | ((2U 
                                                                          & vlSelf->top__DOT___7158_) 
                                                                         | (1U 
                                                                            & (vlSelf->top__DOT___3863_[0U] 
                                                                               >> 0x1dU))))) 
                                                                  + 
                                                                  (((0x6000U 
                                                                     & (vlSelf->top__DOT___3863_[0U] 
                                                                        >> 7U)) 
                                                                    | (((IData)(vlSelf->top__DOT___0932_) 
                                                                        << 0xcU) 
                                                                       | ((0x800U 
                                                                           & ((IData)(vlSelf->top__DOT___7188_) 
                                                                              << 1U)) 
                                                                          | ((0x400U 
                                                                              & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                             | ((0x300U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | (8U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 7U))))))))))) 
                                                                   | (((IData)(vlSelf->top__DOT___1931_) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (vlSelf->top__DOT___3863_[0U] 
                                                                             >> 7U)) 
                                                                         | (IData)(vlSelf->top__DOT___1357_))))) 
                                                                 >> 1U)))) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                (7U 
                                                                 & ((IData)(vlSelf->top__DOT___7077_) 
                                                                    >> 0xaU)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 ((0x20000000U 
                                                                   & ((IData)(vlSelf->top__DOT___7077_) 
                                                                      << 0x14U)) 
                                                                  | ((0x18000000U 
                                                                      & ((IData)(vlSelf->top__DOT___7077_) 
                                                                         << 0x14U)) 
                                                                     | ((0x4000000U 
                                                                         & ((IData)(vlSelf->top__DOT___7077_) 
                                                                            << 0x14U)) 
                                                                        | ((0x2000000U 
                                                                            & ((IData)(vlSelf->top__DOT___7077_) 
                                                                               << 0x14U)) 
                                                                           | ((0x1c00000U 
                                                                               & ((IData)(vlSelf->top__DOT___7077_) 
                                                                                << 0x14U)) 
                                                                              | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7077_) 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT___7077_) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & (((0xfff80U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3473_) 
                                                                                << 6U) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3515_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)))))) 
                                                                                + 
                                                                                (0xa0000U 
                                                                                | (((IData)(vlSelf->top__DOT___0122_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___2751_) 
                                                                                << 0xfU) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3898_ 
                                                                                >> 6U)) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1871_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___3165_) 
                                                                                << 0xcU) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3898_ 
                                                                                >> 2U)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1820_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___2403_) 
                                                                                << 8U) 
                                                                                | ((0x40U 
                                                                                & (IData)(vlSelf->top__DOT___6992_)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3886_ 
                                                                                >> 5U)) 
                                                                                | (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT___6992_))))))))))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___3190_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (((0x7f80U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3473_) 
                                                                                << 6U) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3515_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)))))) 
                                                                                + 
                                                                                ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3898_ 
                                                                                >> 6U)) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1871_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___3165_) 
                                                                                << 0xcU) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3898_ 
                                                                                >> 2U)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1820_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___2403_) 
                                                                                << 8U) 
                                                                                | ((0x40U 
                                                                                & (IData)(vlSelf->top__DOT___6992_)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3886_ 
                                                                                >> 5U)) 
                                                                                | (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT___6992_)))))))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___2952_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___2437_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___3506_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3632_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (((0x180U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3473_) 
                                                                                << 6U) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3515_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)))))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___2403_) 
                                                                                << 8U) 
                                                                                | ((0x40U 
                                                                                & (IData)(vlSelf->top__DOT___6992_)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3886_ 
                                                                                >> 5U)) 
                                                                                | (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT___6992_))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___2763_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1899_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (((0x10U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3515_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)))) 
                                                                                + (IData)(vlSelf->top__DOT___6992_))))))))))))))))))))))))));
    __Vtemp_16[1U] = (((IData)((0x7ffffULL & (((((QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT___0830_) 
                                                                   << 0x1fU) 
                                                                  | ((0x40000000U 
                                                                      & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                         << 0x1eU)) 
                                                                     | (((IData)(vlSelf->top__DOT___0102_) 
                                                                         << 0x1dU) 
                                                                        | (((IData)(vlSelf->top__DOT___1887_) 
                                                                            << 0x1cU) 
                                                                           | (((0x7000000U 
                                                                                & vlSelf->top__DOT___3863_[1U]) 
                                                                               | ((0x800000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x16U) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 6U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | ((0x4000U 
                                                                                & vlSelf->top__DOT___3863_[1U]) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & vlSelf->top__DOT___3863_[1U]) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | ((0x780U 
                                                                                & vlSelf->top__DOT___3863_[1U]) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | ((0x20U 
                                                                                & vlSelf->top__DOT___3863_[1U]) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | ((8U 
                                                                                & vlSelf->top__DOT___3863_[1U]) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | (2U 
                                                                                & vlSelf->top__DOT___3863_[1U]))))))))))))))))))))) 
                                                                              | (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U))))))))) 
                                                 << 3U) 
                                                | (QData)((IData)(
                                                                  ((4U 
                                                                    & vlSelf->top__DOT___7158_) 
                                                                   | ((2U 
                                                                       & vlSelf->top__DOT___7158_) 
                                                                      | (1U 
                                                                         & (vlSelf->top__DOT___3863_[0U] 
                                                                            >> 0x1dU))))))) 
                                               + (((QData)((IData)(
                                                                   (((IData)(
                                                                             (vlSelf->top__DOT___3922_ 
                                                                              >> 0x1dU)) 
                                                                     << 0x1eU) 
                                                                    | ((0x3fff0000U 
                                                                        & ((vlSelf->top__DOT___4295_[1U] 
                                                                            << 0x1dU) 
                                                                           | (0x1fff0000U 
                                                                              & (vlSelf->top__DOT___4295_[0U] 
                                                                                >> 3U)))) 
                                                                       | (((IData)(vlSelf->top__DOT___0830_) 
                                                                           << 0xfU) 
                                                                          | (((IData)(vlSelf->top__DOT___0830_) 
                                                                              << 0xeU) 
                                                                             | (((IData)(vlSelf->top__DOT___0148_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 2U)) 
                                                                                | ((0xc00U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 2U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 2U)) 
                                                                                | ((0x60U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xaU)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xaU))))))))))))))))))) 
                                                   << 3U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT___1931_) 
                                                                      << 2U) 
                                                                     | ((2U 
                                                                         & (vlSelf->top__DOT___3863_[0U] 
                                                                            >> 7U)) 
                                                                        | (IData)(vlSelf->top__DOT___1357_))))))) 
                                              >> 0x10U))) 
                       << 0x10U) | (IData)(((((QData)((IData)(vlSelf->top__DOT___2888_)) 
                                              << 0x2fU) 
                                             | (((QData)((IData)(
                                                                 (0x3fffU 
                                                                  & (((((0x7ff0U 
                                                                         & ((0x38000000U 
                                                                             & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                            | ((0x4000000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                               | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x19U) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 9U)) 
                                                                                | ((0x800000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x400000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x200000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x100000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x80000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x40000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x4000U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x3c00U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & vlSelf->top__DOT___7158_) 
                                                                                | (0x10U 
                                                                                & (vlSelf->top__DOT___3863_[1U] 
                                                                                << 3U))))))))))))))))))))))) 
                                                                        | (8U 
                                                                           & vlSelf->top__DOT___7158_)) 
                                                                       | ((4U 
                                                                           & vlSelf->top__DOT___7158_) 
                                                                          | ((2U 
                                                                              & vlSelf->top__DOT___7158_) 
                                                                             | (1U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x1dU))))) 
                                                                      + 
                                                                      (((0x6000U 
                                                                         & (vlSelf->top__DOT___3863_[0U] 
                                                                            >> 7U)) 
                                                                        | (((IData)(vlSelf->top__DOT___0932_) 
                                                                            << 0xcU) 
                                                                           | ((0x800U 
                                                                               & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                              | ((0x400U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | ((0x300U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                << 1U)) 
                                                                                | (8U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 7U))))))))))) 
                                                                       | (((IData)(vlSelf->top__DOT___1931_) 
                                                                           << 2U) 
                                                                          | ((2U 
                                                                              & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 7U)) 
                                                                             | (IData)(vlSelf->top__DOT___1357_))))) 
                                                                     >> 1U)))) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    (7U 
                                                                     & ((IData)(vlSelf->top__DOT___7077_) 
                                                                        >> 0xaU)))) 
                                                    << 0x1eU) 
                                                   | (QData)((IData)(
                                                                     ((0x20000000U 
                                                                       & ((IData)(vlSelf->top__DOT___7077_) 
                                                                          << 0x14U)) 
                                                                      | ((0x18000000U 
                                                                          & ((IData)(vlSelf->top__DOT___7077_) 
                                                                             << 0x14U)) 
                                                                         | ((0x4000000U 
                                                                             & ((IData)(vlSelf->top__DOT___7077_) 
                                                                                << 0x14U)) 
                                                                            | ((0x2000000U 
                                                                                & ((IData)(vlSelf->top__DOT___7077_) 
                                                                                << 0x14U)) 
                                                                               | ((0x1c00000U 
                                                                                & ((IData)(vlSelf->top__DOT___7077_) 
                                                                                << 0x14U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->top__DOT___7077_) 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->top__DOT___7077_) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & (((0xfff80U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3473_) 
                                                                                << 6U) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3515_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)))))) 
                                                                                + 
                                                                                (0xa0000U 
                                                                                | (((IData)(vlSelf->top__DOT___0122_) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->top__DOT___2751_) 
                                                                                << 0xfU) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3898_ 
                                                                                >> 6U)) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1871_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___3165_) 
                                                                                << 0xcU) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3898_ 
                                                                                >> 2U)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1820_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___2403_) 
                                                                                << 8U) 
                                                                                | ((0x40U 
                                                                                & (IData)(vlSelf->top__DOT___6992_)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3886_ 
                                                                                >> 5U)) 
                                                                                | (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT___6992_))))))))))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___3190_) 
                                                                                << 0xfU) 
                                                                                | ((0x6000U 
                                                                                & (((0x7f80U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3473_) 
                                                                                << 6U) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3515_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)))))) 
                                                                                + 
                                                                                ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3898_ 
                                                                                >> 6U)) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1871_) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT___3165_) 
                                                                                << 0xcU) 
                                                                                | ((0xc00U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT___3898_ 
                                                                                >> 2U)) 
                                                                                << 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___1820_) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT___2403_) 
                                                                                << 8U) 
                                                                                | ((0x40U 
                                                                                & (IData)(vlSelf->top__DOT___6992_)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3886_ 
                                                                                >> 5U)) 
                                                                                | (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT___6992_)))))))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___2952_) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT___2437_) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT___3506_) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT___3632_) 
                                                                                << 9U) 
                                                                                | ((0x180U 
                                                                                & (((0x180U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3473_) 
                                                                                << 6U) 
                                                                                | ((0x30U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3515_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)))))) 
                                                                                + 
                                                                                (((IData)(vlSelf->top__DOT___2403_) 
                                                                                << 8U) 
                                                                                | ((0x40U 
                                                                                & (IData)(vlSelf->top__DOT___6992_)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->top__DOT___3886_ 
                                                                                >> 5U)) 
                                                                                | (0x1fU 
                                                                                & (IData)(vlSelf->top__DOT___6992_))))))) 
                                                                                | (((IData)(vlSelf->top__DOT___2763_) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->top__DOT___1899_) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (((0x10U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)) 
                                                                                | (((IData)(vlSelf->top__DOT___3515_) 
                                                                                << 3U) 
                                                                                | (7U 
                                                                                & (vlSelf->top__DOT___3857_ 
                                                                                >> 2U)))) 
                                                                                + (IData)(vlSelf->top__DOT___6992_))))))))))))))))))))))))) 
                                            >> 0x20U)));
    __Vtemp_16[2U] = (7U & ((IData)((0x7ffffULL & (
                                                   ((((QData)((IData)(
                                                                      (((IData)(vlSelf->top__DOT___0830_) 
                                                                        << 0x1fU) 
                                                                       | ((0x40000000U 
                                                                           & ((~ (IData)(vlSelf->top__DOT___0195_)) 
                                                                              << 0x1eU)) 
                                                                          | (((IData)(vlSelf->top__DOT___0102_) 
                                                                              << 0x1dU) 
                                                                             | (((IData)(vlSelf->top__DOT___1887_) 
                                                                                << 0x1cU) 
                                                                                | (((0x7000000U 
                                                                                & vlSelf->top__DOT___3863_[1U]) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | (((IData)(vlSelf->top__DOT___0023_) 
                                                                                << 0x16U) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->top__DOT___3863_[2U] 
                                                                                << 6U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | ((0x4000U 
                                                                                & vlSelf->top__DOT___3863_[1U]) 
                                                                                | (((IData)(vlSelf->top__DOT___3617_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & vlSelf->top__DOT___3863_[1U]) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | ((0x780U 
                                                                                & vlSelf->top__DOT___3863_[1U]) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | ((0x20U 
                                                                                & vlSelf->top__DOT___3863_[1U]) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | ((8U 
                                                                                & vlSelf->top__DOT___3863_[1U]) 
                                                                                | ((4U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U)) 
                                                                                | (2U 
                                                                                & vlSelf->top__DOT___3863_[1U]))))))))))))))))))))) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___7158_ 
                                                                                >> 3U))))))))) 
                                                      << 3U) 
                                                     | (QData)((IData)(
                                                                       ((4U 
                                                                         & vlSelf->top__DOT___7158_) 
                                                                        | ((2U 
                                                                            & vlSelf->top__DOT___7158_) 
                                                                           | (1U 
                                                                              & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0x1dU))))))) 
                                                    + 
                                                    (((QData)((IData)(
                                                                      (((IData)(
                                                                                (vlSelf->top__DOT___3922_ 
                                                                                >> 0x1dU)) 
                                                                        << 0x1eU) 
                                                                       | ((0x3fff0000U 
                                                                           & ((vlSelf->top__DOT___4295_[1U] 
                                                                               << 0x1dU) 
                                                                              | (0x1fff0000U 
                                                                                & (vlSelf->top__DOT___4295_[0U] 
                                                                                >> 3U)))) 
                                                                          | (((IData)(vlSelf->top__DOT___0830_) 
                                                                              << 0xfU) 
                                                                             | (((IData)(vlSelf->top__DOT___0830_) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT___0148_) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 2U)) 
                                                                                | ((0xc00U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xaU)) 
                                                                                | (((IData)(vlSelf->top__DOT___0932_) 
                                                                                << 9U) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 2U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 2U)) 
                                                                                | ((0x60U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xaU)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->top__DOT___7188_) 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (vlSelf->top__DOT___3863_[0U] 
                                                                                >> 0xaU))))))))))))))))))) 
                                                      << 3U) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->top__DOT___1931_) 
                                                                         << 2U) 
                                                                        | ((2U 
                                                                            & (vlSelf->top__DOT___3863_[0U] 
                                                                               >> 7U)) 
                                                                           | (IData)(vlSelf->top__DOT___1357_))))))) 
                                                   >> 0x10U))) 
                            >> 0x10U));
    vlSelf->top__DOT___3816_[0U] = __Vtemp_16[0U];
    vlSelf->top__DOT___3816_[1U] = __Vtemp_16[1U];
    vlSelf->top__DOT___3816_[2U] = ((0xffffff80U & 
                                     __Vtemp_9[1U]) 
                                    | (((IData)(vlSelf->top__DOT___3512_) 
                                        << 6U) | ((0x30U 
                                                   & __Vtemp_14[1U]) 
                                                  | (((IData)(vlSelf->top__DOT___2470_) 
                                                      << 3U) 
                                                     | __Vtemp_16[2U]))));
    vlSelf->top__DOT___3816_[3U] = ((8U & __Vtemp_4[2U]) 
                                    | (((IData)(vlSelf->top__DOT___3309_) 
                                        << 2U) | (3U 
                                                  & __Vtemp_9[2U])));
    vlSelf->top__DOT____VdfgTmp_hf74dc960__0 = ((0x80000000U 
                                                 & (vlSelf->top__DOT___3816_[3U] 
                                                    << 0x1cU)) 
                                                | (((IData)(vlSelf->top__DOT___3309_) 
                                                    << 0x1eU) 
                                                   | ((0x3ffffff8U 
                                                       & ((vlSelf->top__DOT___3816_[3U] 
                                                           << 0x1cU) 
                                                          | (0xffffff8U 
                                                             & (vlSelf->top__DOT___3816_[2U] 
                                                                >> 4U)))) 
                                                      | (((IData)(vlSelf->top__DOT___3512_) 
                                                          << 2U) 
                                                         | (3U 
                                                            & (vlSelf->top__DOT___3816_[2U] 
                                                               >> 4U))))));
    vlSelf->top__DOT____VdfgTmp_h0b56d5ac__0 = ((6U 
                                                 & (vlSelf->top__DOT___3816_[2U] 
                                                    >> 3U)) 
                                                | (IData)(vlSelf->top__DOT___2470_));
    vlSelf->top__DOT___3825_[3U] = (3U & vlSelf->top__DOT___3825_[3U]);
    vlSelf->top__DOT___0982_ = (1U & ((((0x38U & (vlSelf->top__DOT___3816_[1U] 
                                                  >> 3U)) 
                                        | (((IData)(vlSelf->top__DOT___0147_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0804_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0218_)))) 
                                       + (0x14U | (
                                                   ((IData)(vlSelf->top__DOT___0424_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0880_)))) 
                                      >> 5U));
    vlSelf->top__DOT___0861_ = (1U & ((((0x18U & (vlSelf->top__DOT___3816_[1U] 
                                                  >> 3U)) 
                                        | (((IData)(vlSelf->top__DOT___0147_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0804_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0218_)))) 
                                       + (0x14U | (
                                                   ((IData)(vlSelf->top__DOT___0424_) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT___0880_)))) 
                                      >> 4U));
    vlSelf->top__DOT___3023_ = (1U & ((((8U & (vlSelf->top__DOT___3816_[1U] 
                                               >> 3U)) 
                                        | (((IData)(vlSelf->top__DOT___0147_) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT___0804_) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT___0218_)))) 
                                       + (4U | (((IData)(vlSelf->top__DOT___0424_) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT___0880_)))) 
                                      >> 3U));
    vlSelf->top__DOT____VdfgTmp_h490d18cd__0 = (((IData)(vlSelf->top__DOT___3512_) 
                                                 << 3U) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h0b56d5ac__0));
    vlSelf->top__DOT____VdfgTmp_h5cb62234__0 = ((0x20U 
                                                 & (vlSelf->top__DOT___7066_ 
                                                    << 2U)) 
                                                | ((0x18U 
                                                    & (vlSelf->top__DOT___3885_ 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->top__DOT___0861_) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT___0548_))));
    vlSelf->top__DOT___1252_ = ((IData)(vlSelf->top__DOT___3023_) 
                                | (IData)(vlSelf->top__DOT___0485_));
    vlSelf->top__DOT____VdfgTmp_h56a9a8dd__0 = ((0x7ffffff0U 
                                                 & ((vlSelf->top__DOT___3816_[3U] 
                                                     << 0x1dU) 
                                                    | (0x1ffffff0U 
                                                       & (vlSelf->top__DOT___3816_[2U] 
                                                          >> 3U)))) 
                                                | (IData)(vlSelf->top__DOT____VdfgTmp_h490d18cd__0));
    vlSelf->top__DOT____VdfgTmp_h560fc4cd__0 = ((0x100U 
                                                 & (vlSelf->top__DOT___7066_ 
                                                    << 2U)) 
                                                | ((0xc0U 
                                                    & (vlSelf->top__DOT___3885_ 
                                                       << 2U)) 
                                                   | (IData)(vlSelf->top__DOT____VdfgTmp_h5cb62234__0)));
    vlSelf->top__DOT___1311_ = ((IData)(vlSelf->top__DOT___0195_) 
                                | (IData)(vlSelf->top__DOT___1252_));
    vlSelf->top__DOT___1837_ = ((IData)(vlSelf->top__DOT___1082_) 
                                | (IData)(vlSelf->top__DOT___1252_));
    vlSelf->top__DOT___2648_ = (1U & (~ (((IData)(vlSelf->top__DOT___0069_) 
                                          & (IData)(vlSelf->top__DOT___1252_)) 
                                         | (IData)(vlSelf->top__DOT___0070_))));
    vlSelf->top__DOT___0745_ = ((IData)(vlSelf->top__DOT___1252_) 
                                & (~ (IData)(vlSelf->top__DOT___0084_)));
    vlSelf->top__DOT____VdfgTmp_h182c76cf__0 = (((IData)(vlSelf->top__DOT___3309_) 
                                                 << 0x1fU) 
                                                | vlSelf->top__DOT____VdfgTmp_h56a9a8dd__0);
}
